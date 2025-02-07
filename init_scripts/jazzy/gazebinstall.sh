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

# Update system package list
print_header "Updating System Packages"
sudo apt-get update

# Install necessary dependencies
print_header "Installing Dependencies"
sudo apt-get install -y \
    curl gnupg lsb-release \
    wget software-properties-common \
    build-essential python3-colcon-common-extensions \
    python3-rosdep ros-dev-tools flatpak

# Initialize and update rosdep
print_header "Initializing and Updating rosdep"
if [ ! -f "/etc/ros/rosdep/sources.list.d/20-default.list" ]; then
    sudo rosdep init
fi
rosdep update

# Install Gazebo Harmonic
print_header "Installing Gazebo Harmonic"
sudo curl -fsSL https://packages.osrfoundation.org/gazebo.gpg -o /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] \
http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null

# Update package list and install Gazebo
sudo apt-get update
sudo apt-get install -y gz-harmonic

# Verify installation
print_header "Verifying Gazebo Installation"
gz --version | head -n 1

# Install TurtleBot 4 Simulator packages
print_header "Installing TurtleBot 4 Simulator"
sudo apt-get install -y ros-jazzy-turtlebot4-simulator ros-jazzy-irobot-create-nodes

# Optional: Set up the workspace for source installation
read -p "Do you want to install TurtleBot 4 Simulator from source (yes/no)? " INSTALL_SOURCE
if [[ "$INSTALL_SOURCE" == "yes" ]]; then
    print_header "Setting Up Workspace for Source Installation"
    mkdir -p ~/turtlebot4_ws/src
    cd ~/turtlebot4_ws/src
    git clone https://github.com/turtlebot/turtlebot4_simulator.git -b jazzy
    cd ~/turtlebot4_ws
    rosdep install --from-path src -yi
    source /opt/ros/jazzy/setup.bash
    colcon build --symlink-install
    echo "source ~/turtlebot4_ws/install/setup.bash" >> ~/.bashrc
    source ~/.bashrc
fi

# Provide guidance for networking setup
print_header "Networking Setup Guidance"
echo "Configure your computer for simple discovery before running simulations."
echo "If your computer is on the same network as unrelated ROS nodes, set LOCAL_HOST_ONLY=true."

# Provide instructions to launch the simulator
print_header "TurtleBot 4 Simulator Launch Instructions"
echo "Run the following commands to launch the TurtleBot 4 Simulator:"
echo "1. Default Simulation:"
echo "   ros2 launch turtlebot4_gz_bringup turtlebot4_gz.launch.py"
echo "2. SLAM with Navigation:"
echo "   ros2 launch turtlebot4_gz_bringup turtlebot4_gz.launch.py slam:=true nav2:=true rviz:=true"

# Optional: Clean up temporary files
read -p "Do you want to clean up temporary files (yes/no)? " CLEANUP
if [[ "$CLEANUP" == "yes" ]]; then
    print_header "Cleaning Up Temporary Files"
    sudo apt-get autoremove -y
    sudo apt-get clean
fi

print_header "Setup Complete"
echo "TurtleBot 4 Simulator has been installed. Follow the instructions above to start the simulation."
