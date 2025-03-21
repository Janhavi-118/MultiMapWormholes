# Multi-Map Navigation with Wormholes in ROS 2

This guide provides a step-by-step sequence of commands to launch a TurtleBot3 simulation in a house environment, initialize navigation, and run the wormhole navigation system.

## Prerequisites
This code was built to run on Ubuntu 22.04 (Jammy Jellyfish).
- ROS 2 Humble
- Gazebo11
- TurtleBot3 packages
- Nav2 (Navigation Stack 2)
- SQLite3 (for the database)

## Installation

### 1. Install ROS 2 Humble
Follow the official ROS 2 Humble installation guide: [ROS 2 Humble Installation Guide](https://docs.ros.org/en/humble/Installation.html).

### 2. Install TurtleBot3 Packages

```bash
sudo apt install -y ros-humble-turtlebot3*
```

[TurtleBot3 ROS 2 Documentation](https://emanual.robotis.com/docs/en/platform/turtlebot3/ros2/)

### 3. Install Gazebo 11
Refer to the [Gazebo 11 Installation Tutorial](https://classic.gazebosim.org/tutorials?tut=install_ubuntu).
After installing gazebo11, install the gazebo_ros package
```bash
sudo apt install -y ros-humble-gazebo-ros-pkgs
```

### 4. Install Nav2 (Navigation Stack 2)

```bash
sudo apt install -y ros-humble-navigation2 ros-humble-nav2-bringup
```

More details: [Nav2 Getting Started Guide](https://navigation.ros.org/getting_started/index.html)

### 5. Install SQLite3

```bash
sudo apt install -y sqlite3 libsqlite3-dev
```

Or look into the steps on [this site](https://ultahost.com/knowledge-base/install-sqlite-on-ubuntu/)

### 6. Clone and Build the `switch_places` Package

```bash
git clone https://github.com/Janhavi-118/MultiMapWormholes.git
rosdep install --from-paths src --ignore-src -r -y
cd MultiMapWormholes
colcon build
source install/setup.bash
```

## Launch Instructions

Run the following commands in separate terminals:

```bash
ros2 launch turtlebot3_gazebo turtlebot3_house.launch.py
```
```bash
ros2 run nav2_map_server map_server --ros-args -p yaml_filename:=/home/janhavi/MultiMapWormholes/src/maps/entrance.yaml
```
```bash
ros2 lifecycle set /map_server configure
ros2 lifecycle set /map_server activate
```
```bash
ros2 run rviz2 rviz2
```
```bash
ros2 service call /map_server/load_map nav2_msgs/srv/LoadMap "{map_url: /home/janhavi/MultiMapWormholes/src/maps/entrance.yaml}"
```
```bash
ros2 launch nav2_bringup navigation_launch.py map:=/home/janhavi/MultiMapWormholes/src/maps/entrance.yaml use_sim_time:=true
```
```bash
ros2 launch nav2_bringup localization_launch.py map:=/home/janhavi/MultiMapWormholes/src/maps/entrance.yaml
```
```bash
ros2 lifecycle set /amcl configure
ros2 lifecycle set /amcl activate
```
```bash
ros2 run switch_places move_to_map_server
```
```bash
ros2 run switch_places move_to_map_client
```

This setup enables navigation between multiple maps using wormhole-based navigation in ROS 2.

## Running the Simulation

After running the action client, enter the room, out of the following options
- entrance
- room1
- room2
- room3
- room4
- room5
- room6

Enter the x and y coordinates of the target position after entering the room name.

This should trigger the bot to reach the position implied by reaching the respective wormhole and then the target coordinates given.

## Algorithm

- Initialize Action Server:
 - Create an action server for MoveToMap with methods for handling goals, cancellations, and feedback.
 - Subscribe to robot odometry to track the current position of the robot.

- Handle Action Goal:
 - When a goal is received (a target map and position), check if the robot is already on the correct map:
  - If yes, proceed to move directly to the target location.
  - If no, navigate to the wormhole and switch to the target map.
   
- Handle Goal Execution:
 - For the same map:
  - Directly move to the target coordinates.
 - For a different map:
  - Move to the wormhole location in the current map (fetch coordinates from the database).
  - Switch maps by deleting the current robot model, loading the new map, and spawning the robot at the new wormhole coordinates.

- Move to Target:
 - Use a publisher to send goal positions to the robot.
 - Continuously check if the robot has reached the target position by comparing its current position (from odometry) with the goal position.
 - Once the robot reaches the goal, mark the task as completed.

- Switch Maps (if necessary):
 - Query the database for wormhole coordinates for the current and target maps.
 - Delete the current robot model and spawn it in the new map.
 - Publish the initial pose on the map after spawning the robot.

- Feedback and Completion:
 - Periodically send feedback updates during the movement.
 - After the task completes, send the result indicating success.

## Flow of the code
[Flowchart](assests/flowchart.jpeg)
