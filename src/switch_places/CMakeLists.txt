cmake_minimum_required(VERSION 3.8)
project(switch_places)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(nav2_common REQUIRED)  # Nav2 common components
find_package(nav2_util REQUIRED)    # Utilities for Nav2
find_package(nav2_msgs REQUIRED)    # Nav2 messages for actions
find_package(action_msgs REQUIRED)  # Action messages
find_package(tf2 REQUIRED)          # For transformations
find_package(tf2_ros REQUIRED)      # ROS integration for tf2
find_package(geometry_msgs REQUIRED)
find_package(gazebo_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
#find_package(switch_places REQUIRED)  # This will be auto-generated once you create your action
# Add action files
find_package(SQLite3 REQUIRED)
find_package(switch_places_msgs REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(move_to_map_server src/move_to_map_server.cpp)

target_link_libraries(move_to_map_server SQLite::SQLite3)

ament_target_dependencies(move_to_map_server 
rclcpp 
nav2_common 
nav2_util 
nav2_msgs 
action_msgs 
tf2 
tf2_ros 
rclcpp_action  
geometry_msgs
gazebo_msgs
switch_places_msgs
)

# Add the client executable
add_executable(move_to_map_client src/move_to_map_client.cpp)
ament_target_dependencies(move_to_map_client rclcpp rclcpp_action geometry_msgs gazebo_msgs switch_places_msgs)

# Install both executables
install(TARGETS
  move_to_map_server
  move_to_map_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
