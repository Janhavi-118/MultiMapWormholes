#include "rclcpp/rclcpp.hpp"
#include "switch_places_msgs/action/move_to_map.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav2_msgs/srv/load_map.hpp"
#include "gazebo_msgs/srv/delete_entity.hpp"
#include "gazebo_msgs/srv/spawn_entity.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"

#include <sqlite3.h>
#include <iostream>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

class MoveToMapActionServer : public rclcpp::Node
{
public:
    MoveToMapActionServer() : Node("move_to_map_action_server")
    {
        using namespace std::placeholders;

        action_server_ = rclcpp_action::create_server<switch_places_msgs::action::MoveToMap>(
            this, 
            "move_to_map", 
            std::bind(&MoveToMapActionServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&MoveToMapActionServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&MoveToMapActionServer::handle_accepted, this, std::placeholders::_1)
        );
        initial_pose_publisher_ = this->create_publisher<geometry_msgs::msg::PoseWithCovarianceStamped>("initialpose", 10);
        goal_publisher_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("goal_pose", 10);
        pose_subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>("/odom",10,
                            std::bind(&MoveToMapActionServer::pose_callback, this, std::placeholders::_1));

        int rc = sqlite3_open("wormholes_locations.db", &db_);
        if (rc) {
            RCLCPP_ERROR(this->get_logger(), "Can't open database: %s", sqlite3_errmsg(db_));
            exit(1);
        }
        publish_initial_pose(-2.0,-0.5);
    }

    ~MoveToMapActionServer() {
        sqlite3_close(db_);
    }

private:
    rclcpp::Publisher<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr initial_pose_publisher_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr goal_publisher_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr pose_subscriber_;
    float curr_x;
    float curr_y;
    std::string current_room = "entrance";
    std::string file = "/opt/ros/humble/share/turtlebot3_description/urdf/turtlebot3_waffle_pi.urdf";
    std::promise<bool> map_load_promise;
    std::promise<bool> delete_entity_promise;
    std::promise<bool> spawn_entity_promise;
    
    rclcpp_action::Server<switch_places_msgs::action::MoveToMap>::SharedPtr action_server_;
    sqlite3 *db_; // SQLite database pointer

    rclcpp_action::GoalResponse handle_goal(const std::array<unsigned char, 16>& uuid, std::shared_ptr<const switch_places_msgs::action::MoveToMap::Goal> goal)
    {
        (void)uuid;
        RCLCPP_INFO(this->get_logger(), "Received goal request to move to map: %s", goal->map_name.c_str());
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    // Handle cancellation of the goal
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<switch_places_msgs::action::MoveToMap>> goal_handle)
    {
        (void)goal_handle;
        current_room = "entrance";
        RCLCPP_INFO(this->get_logger(), "Canceling goal...");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    // Handle the execution of the goal
    void handle_accepted(const std::shared_ptr<rclcpp_action::ServerGoalHandle<switch_places_msgs::action::MoveToMap>> goal_handle)
    {
        (void)goal_handle;
        std::thread{std::bind(&MoveToMapActionServer::execute, this, std::placeholders::_1), goal_handle}.detach();
    }

    // Execute the goal: navigate to the wormhole or directly to the target map
    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<switch_places_msgs::action::MoveToMap>> goal_handle)
    {
        auto goal = goal_handle->get_goal();
        auto feedback = std::make_shared<switch_places_msgs::action::MoveToMap::Feedback>();
        auto result = std::make_shared<switch_places_msgs::action::MoveToMap::Result>();

        // Logic to check if the robot is in the correct map or needs to switch maps.
        
        if (is_robot_in_same_map(goal->map_name)) {
            RCLCPP_INFO(this->get_logger(), "Robot is already in the correct map. Moving to the target location.");
            move_robot(goal->x, goal->y);
        } else {
            RCLCPP_INFO(this->get_logger(), "Robot needs to switch maps. Navigating to the wormhole...");
            navigate_to_wormhole(current_room);
            switch_map(goal->map_name);
            move_robot(goal->x, goal->y);
        }

        // Provide feedback to the client while the robot moves
        for (int i = 0; i < 10; ++i) {
            feedback->current_x = 0;
            feedback->current_y = 0;
            goal_handle->publish_feedback(feedback);
            rclcpp::sleep_for(std::chrono::seconds(1));
        }

        // Complete the goal
        result->success = true;
        result->message = "Successfully reached the target location.";
        current_room = goal->map_name; 
        goal_handle->succeed(result);
    }

    void pose_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
        curr_x = msg->pose.pose.position.x;
        curr_y = msg->pose.pose.position.y;
    }
    bool is_robot_in_same_map(const std::string &target_map)
    {
        if (current_room == target_map) {
            return true;
        }
        return false;
    }

    void move_robot(float x, float y) {
        RCLCPP_INFO(this->get_logger(), "currently moving towards: (%.2f, %.2f)", x, y);
        geometry_msgs::msg::PoseStamped goal_msg;
        goal_msg.header.frame_id = "map";
        goal_msg.header.stamp = this->get_clock()->now();

        goal_msg.pose.position.x = x;
        goal_msg.pose.position.y = y;
        goal_msg.pose.position.z = 0.0;

        goal_msg.pose.orientation.x = 0.0;
        goal_msg.pose.orientation.y = 0.0;
        goal_msg.pose.orientation.z = 0.0;
        goal_msg.pose.orientation.w = 1.0;
        
        goal_publisher_->publish(goal_msg);
        while (std::abs(curr_x - x) > 0.1 && std::abs(curr_y - y) > 0.1) {

        }

    }
    
    void navigate_to_wormhole(const std::string &current_map) {
        // Fetch wormhole coordinates for the given map from the database
        float wormhole_x = 0.0;
        float wormhole_y = 0.0;

        // Query to get the wormhole coordinates from the database
        const char *sql = "SELECT x, y FROM wormholes WHERE room_name = ?;";
        sqlite3_stmt *stmt;
        
        // Prepare the SQL statement
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK) {
            RCLCPP_ERROR(this->get_logger(), "Failed to prepare statement: %s", sqlite3_errmsg(db_));
            return;
        }

        // Bind the map name to the query
        sqlite3_bind_text(stmt, 1, current_map.c_str(), -1, SQLITE_STATIC);

        // Execute the query and fetch the result
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            wormhole_x = sqlite3_column_double(stmt, 0); // Fetch x-coordinate
            wormhole_y = sqlite3_column_double(stmt, 1); // Fetch y-coordinate
            RCLCPP_INFO(this->get_logger(), "Wormhole coordinates for map '%s' are: (%.2f, %.2f)", current_map.c_str(), wormhole_x, wormhole_y);
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to fetch wormhole coordinates for map '%s'", current_map.c_str());
        }

        // Clean up
        sqlite3_finalize(stmt);

        // Move the robot to the fetched wormhole coordinates
        move_robot(wormhole_x, wormhole_y);
    }
    
    std::string load_file(const std::string& file_path) {
        std::ifstream file(file_path);
        if (!file) {
            RCLCPP_ERROR(rclcpp::get_logger("spawn_robot"), "Error opening file: %s", file_path.c_str());
            return "";
        }
        return std::string((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    }

    void switch_map(const std::string &map_name)
    {
        // Step 1: Delete the current robot model from the simulation
        bool res = delete_robot_model();
        while(!res) {
            // Wait for the robot model to be deleted
        }
        // Step 2: Fetch the wormhole coordinates for the new map from the database
        float wormhole_x = 0.0;
        float wormhole_y = 0.0;
        // Query to get the wormhole coordinates from the database
        const char *sql = "SELECT x, y FROM wormholes WHERE room_name = ?;";
        sqlite3_stmt *stmt;

        // Prepare the SQL statement
        if (sqlite3_prepare_v2(db_, sql, -1, &stmt, nullptr) != SQLITE_OK)
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to prepare statement: %s", sqlite3_errmsg(db_));
        }

        // Bind the map name to the query
        sqlite3_bind_text(stmt, 1, map_name.c_str(), -1, SQLITE_STATIC);

        // Execute the query and fetch the result
        if (sqlite3_step(stmt) == SQLITE_ROW)
        {
            wormhole_x = sqlite3_column_double(stmt, 0); // Fetch x-coordinate
            wormhole_y = sqlite3_column_double(stmt, 1); // Fetch y-coordinate
            RCLCPP_INFO(this->get_logger(), "Wormhole coordinates for map '%s' are: (%.2f, %.2f)", map_name.c_str(), wormhole_x, wormhole_y);
            sqlite3_finalize(stmt);
        }
        else
        {
            RCLCPP_ERROR(this->get_logger(), "Failed to fetch wormhole coordinates for map '%s'", map_name.c_str());
            sqlite3_finalize(stmt);
        }
    
        // Step 3: Load the new map using the map_server service
        bool res2 = load_new_map(map_name);
        while (!res2) {
            // Wait
        }

        // Step 4: Spawn the robot at the new wormhole location
        bool res3 = spawn_robot_at_position(wormhole_x, wormhole_y);
        while (!res3) {
            RCLCPP_INFO(this->get_logger(), "im stuck in after bot spawn while loop");
            
        }

        publish_initial_pose(wormhole_x, wormhole_y);
    }

        // Function to publish the initial pose to the initialpose topic
    void publish_initial_pose(float x, float y) {
        geometry_msgs::msg::PoseWithCovarianceStamped pose_msg;
        pose_msg.header.frame_id = "map";  // Ensure it's the map frame
        pose_msg.header.stamp = this->get_clock()->now();
        pose_msg.pose.pose.position.x = x;
        pose_msg.pose.pose.position.y = y;
        pose_msg.pose.pose.orientation.w = 1.0;  // Default orientation (no rotation)
        for (int i = 0; i<36; i++) {
            pose_msg.pose.covariance[i] = 0.0;
        }
        pose_msg.pose.covariance[0] = 0.1;
        pose_msg.pose.covariance[7] = 0.1;
        pose_msg.pose.covariance[14] = 0.1;
        pose_msg.pose.covariance[21] = 0.1;
        pose_msg.pose.covariance[28] = 0.1;
        pose_msg.pose.covariance[35] = 0.1;
        
        // Publish the pose to the initialpose topic
        initial_pose_publisher_->publish(pose_msg);

        RCLCPP_INFO(this->get_logger(), "Published initial pose: (%.2f, %.2f)", x, y);
    }
    

    bool load_map_callback(
        rclcpp::Client<nav2_msgs::srv::LoadMap>::SharedFuture future_response)
    {
        bool success;
        auto response = future_response.get();
        RCLCPP_INFO(this->get_logger(), "Map load response code: %d", response->result);
    
        if (response->result == 255 || response->result == 0) {
            RCLCPP_INFO(this->get_logger(), "Map loaded successfully!");
            success = true;
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to load map, error code: %d", response->result);
            success = false;
        }
        map_load_promise.set_value(success);
        return success;
    }
    
    
    bool load_new_map(const std::string &map_name)
    {
        // Load the new map using the map_server service
        rclcpp::Client<nav2_msgs::srv::LoadMap>::SharedPtr load_map_client =
            this->create_client<nav2_msgs::srv::LoadMap>("/map_server/load_map");

        while (!load_map_client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_INFO(this->get_logger(), "Waiting for load_map service to become available...");
        }

        auto request = std::make_shared<nav2_msgs::srv::LoadMap::Request>();
        request->map_url = "/home/janhavi/MultiMapWormholes/src/maps/" + map_name + ".yaml";

        map_load_promise = std::promise<bool>();
        std::future<bool> future_result = map_load_promise.get_future();

        //auto future = load_map_client->async_send_request(request);
        load_map_client->async_send_request(request,
            [this](rclcpp::Client<nav2_msgs::srv::LoadMap>::SharedFuture future_response) {
                this->load_map_callback(future_response);
            });  
        
        return future_result.get();
    }


    bool delete_entity_callback(rclcpp::Client<gazebo_msgs::srv::DeleteEntity>::SharedFuture defuture)
    {
        bool success;
        try
        {

            auto response = defuture.get();
            if (response->success)
            {
                RCLCPP_INFO(this->get_logger(), "Entity successfully deleted.");
                success = true;
            }
            else
            {
                RCLCPP_WARN(this->get_logger(), "Failed to delete entity.");
                success = false;
            }
        }
        catch (const std::exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "Exception while deleting entity: %s", e.what());
            success = false;
        }
        delete_entity_promise.set_value(success);
        return success;
    }

    bool delete_robot_model()
    {
        // Delete the robot model using the delete_entity service
        rclcpp::Client<gazebo_msgs::srv::DeleteEntity>::SharedPtr delete_client =
            this->create_client<gazebo_msgs::srv::DeleteEntity>("/delete_entity");
        
        while (!delete_client->wait_for_service(std::chrono::seconds(1)))
        {
            RCLCPP_INFO(this->get_logger(), "Waiting for delete_entity service to become available...");
        }
        
        // Prepare the request to delete the robot entity
        auto delete_request = std::make_shared<gazebo_msgs::srv::DeleteEntity::Request>();
        delete_request->name = "waffle_pi"; // Name of the robot to delete

        delete_entity_promise = std::promise<bool>();
        std::future<bool> future_result = delete_entity_promise.get_future();

        //auto future = delete_client->async_send_request(delete_request);
        RCLCPP_INFO(this->get_logger(), "Robot model deletion starting.");
        delete_client->async_send_request(delete_request,
            std::bind(&MoveToMapActionServer::delete_entity_callback, this, std::placeholders::_1));

        return future_result.get();

    }

    bool spawn_entity_callback(
        rclcpp::Client<gazebo_msgs::srv::SpawnEntity>::SharedFuture future_response)
    {
        auto response = future_response.get();
        bool success;
        
        // Create the PoseWithCovarianceStamped message
        
        // Check the response for success
        if (response->success) {  // If there's no 'success', check for appropriate status field
            RCLCPP_INFO(this->get_logger(), "Entity spawned successfully!");
            success = true;
        } else {
            RCLCPP_ERROR(this->get_logger(), "Failed to spawn entity: %s", response->status_message.c_str());
            success = false;
        }
        spawn_entity_promise.set_value(success);
        return success;
    }

    bool spawn_robot_at_position(float x, float y)
    {
        // Spawn the robot at the new wormhole coordinates
        rclcpp::Client<gazebo_msgs::srv::SpawnEntity>::SharedPtr spawn_client =
            this->create_client<gazebo_msgs::srv::SpawnEntity>("/spawn_entity");

        std::string model_path = "/opt/ros/humble/share/turtlebot3_gazebo/models/turtlebot3_waffle_pi/model.sdf";
        std::string model_xml = load_file(model_path);
        RCLCPP_INFO(this->get_logger(), "Successfully loaded entity XML from file");
        
        // Prepare the request to spawn the robot at the wormhole coordinates
        auto request = std::make_shared<gazebo_msgs::srv::SpawnEntity::Request>();
        request->name = "waffle_pi"; // Name of the robot
        request->xml = model_xml;  // Leave XML empty as we're passing coordinates directly
        //request->robot_namespace = "";  // Optionally specify a robot namespace
        request->reference_frame = "map";  // Reference frame for the spawn

        // Directly use x, y, and z for position
        request->initial_pose.position.x = x;
        request->initial_pose.position.y = y;
        request->initial_pose.position.z = 0.0;  // Assuming ground level

        // Orientation (assuming no rotation)
        request->initial_pose.orientation.x = 0.0;
        request->initial_pose.orientation.y = 0.0;
        request->initial_pose.orientation.z = 0.0;
        request->initial_pose.orientation.w = 1.0;

        // Send the request to spawn the robot
        spawn_entity_promise = std::promise<bool>();
        std::future<bool> future_result = spawn_entity_promise.get_future();

        spawn_client->async_send_request(request,
            std::bind(&MoveToMapActionServer::spawn_entity_callback, this, std::placeholders::_1));

        return future_result.get();

    }

    float get_current_x() { return 0.0; } // Dummy placeholder for actual method to get x
    float get_current_y() { return 0.0; } // Dummy placeholder for actual method to get y
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MoveToMapActionServer>());
    rclcpp::shutdown();
    return 0;
}
