#include <memory>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "switch_places_msgs/action/move_to_map.hpp"

class MoveToMapActionClient : public rclcpp::Node {
public:
    using MoveToMap = switch_places_msgs::action::MoveToMap;
    using GoalHandleMoveToMap = rclcpp_action::ClientGoalHandle<MoveToMap>;

    MoveToMapActionClient() : Node("move_to_map_action_client") {
        this->client_ = rclcpp_action::create_client<MoveToMap>(this, "move_to_map");

        // Wait for the action server to be available
        while (!this->client_->wait_for_action_server(std::chrono::seconds(5))) {
            RCLCPP_INFO(this->get_logger(), "Waiting for the action server to be available...");
        }
    }

    void send_goal(const std::string &map_name, double x, double y) {
        // Create the goal message
        auto goal_msg = MoveToMap::Goal();
        goal_msg.map_name = map_name;
        goal_msg.x = x;
        goal_msg.y = y;

        RCLCPP_INFO(this->get_logger(), "Sending goal to move to map: %s at (%.2f, %.2f)", 
                    map_name.c_str(), x, y);

        // Send goal asynchronously
        auto send_goal_options = rclcpp_action::Client<MoveToMap>::SendGoalOptions();
        send_goal_options.goal_response_callback = 
            std::bind(&MoveToMapActionClient::goal_response_callback, this, std::placeholders::_1);
        //send_goal_options.feedback_callback = std::bind(&MoveToMapActionClient::feedback_callback, this, std::placeholders::_1, std::placeholders::_2);
        send_goal_options.result_callback =
            std::bind(&MoveToMapActionClient::result_callback, this, std::placeholders::_1);

        auto future_goal_handle = client_->async_send_goal(goal_msg, send_goal_options);
    }

private:
    rclcpp_action::Client<MoveToMap>::SharedPtr client_;

    void goal_response_callback(std::shared_ptr<rclcpp_action::ClientGoalHandle<switch_places_msgs::action::MoveToMap>> goal_handle) {
        if (!goal_handle) {
            RCLCPP_ERROR(this->get_logger(), "Goal was rejected by server.");
        } else {
            RCLCPP_INFO(this->get_logger(), "Goal accepted, moving...");
        }
    }

    void feedback_callback(GoalHandleMoveToMap::SharedPtr, const std::shared_ptr<const MoveToMap::Feedback> feedback) {
        (void)feedback;
        RCLCPP_INFO(this->get_logger(), "Received feedback.");
    }

    void result_callback(const GoalHandleMoveToMap::WrappedResult &result) {
        switch (result.code) {
            case rclcpp_action::ResultCode::SUCCEEDED:
                RCLCPP_INFO(this->get_logger(), "Goal reached successfully!");
                break;
            case rclcpp_action::ResultCode::ABORTED:
                RCLCPP_ERROR(this->get_logger(), "Goal was aborted.");
                break;
            case rclcpp_action::ResultCode::CANCELED:
                RCLCPP_WARN(this->get_logger(), "Goal was canceled.");
                break;
            default:
                RCLCPP_ERROR(this->get_logger(), "Unknown result code.");
                break;
        }
    }
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MoveToMapActionClient>();

    std::string map_name;
    double x, y;

    // Take user input
    std::cout << "Enter target map name: ";
    std::cin >> map_name;
    std::cout << "Enter target x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter target y-coordinate: ";
    std::cin >> y;

    // Send goal with user input
    node->send_goal(map_name, x, y);

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
