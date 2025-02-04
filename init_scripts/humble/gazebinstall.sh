#!/bin/bash

# Exit on any error
set -e

# Function to print headers
print_header() {
    echo
    echo "========================================"
    echo "$1"
    echo "========================================"
    echo
}

# Update and install necessary packages
print_header "Installing necessary dependencies"
sudo apt-get update
sudo apt-get install -y \
    wget curl \
    ros-dev-tools \
    software-properties-common \
    build-essential \
    python3-colcon-common-extensions \
    python3-rosdep

# Initialize and update rosdep
print_header "Initializing and updating rosdep"
if [ ! -f "/etc/ros/rosdep/sources.list.d/20-default.list" ]; then
    sudo rosdep init
fi
rosdep update

# Add the Gazebo repository and install Ignition Fortress
print_header "Installing Ignition Fortress"
sudo sh -c 'echo "deb http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" > /etc/apt/sources.list.d/gazebo-stable.list'
wget http://packages.osrfoundation.org/gazebo.key -O - | sudo apt-key add -
sudo apt-get update
sudo apt-get install -y ignition-fortress

# Install TurtleBot 4 Simulator debian packages
print_header "Installing TurtleBot 4 Simulator"
sudo apt-get install -y ros-humble-turtlebot4-simulator ros-humble-irobot-create-nodes

# Optional: Set up the workspace for source installation
read -p "Do you want to install TurtleBot 4 Simulator from source (yes/no)? " INSTALL_SOURCE
if [[ "$INSTALL_SOURCE" == "yes" ]]; then
    print_header "Setting up workspace for source installation"
    mkdir -p ~/turtlebot4_ws/src
    cd ~/turtlebot4_ws/src

    # Clone the repository
    git clone https://github.com/turtlebot/turtlebot4_simulator.git -b humble

    # Install dependencies
    cd ~/turtlebot4_ws
    rosdep install --from-path src -yi

    # Build the workspace
    source /opt/ros/humble/setup.bash
    colcon build --symlink-install

    # Source the workspace
    echo "source ~/turtlebot4_ws/install/setup.bash" >> ~/.bashrc
    source ~/.bashrc
fi

# Provide guidance for networking setup
print_header "Networking Setup Guidance"
echo "For ROS 2 networking settings, configure your computer for simple discovery."
echo "If your computer is on the same network as unrelated ROS nodes, set LOCAL_HOST_ONLY=true."

# Provide instructions to launch the simulator
print_header "TurtleBot 4 Simulator Launch Instructions"
echo "Run the following commands to launch the TurtleBot 4 Simulator:"
echo "1. Default Simulation:"
echo "   ros2 launch turtlebot4_ignition_bringup turtlebot4_ignition.launch.py"
echo "2. SLAM with Navigation:"
echo "   ros2 launch turtlebot4_ignition_bringup turtlebot4_ignition.launch.py slam:=true nav2:=true rviz:=true"

# Optional: Clean up temporary files
read -p "Do you want to clean up temporary files (yes/no)? " CLEANUP
if [[ "$CLEANUP" == "yes" ]]; then
    print_header "Cleaning up"
    sudo apt-get autoremove -y
    sudo apt-get clean
fi

print_header "Setup Complete"
echo "TurtleBot 4 Simulator has been installed. Follow the instructions above to start the simulation."

