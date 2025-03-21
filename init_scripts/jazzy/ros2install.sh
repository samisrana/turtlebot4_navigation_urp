#!/bin/bash

# Exit on error
set -e

# Prompt for username to add to sudoers
read -p "Enter the username to add to sudoers: " USERNAME

# Check if user exists
if id "$USERNAME" &>/dev/null; then
    echo "Adding $USERNAME to the sudoers group..."
    sudo usermod -aG sudo "$USERNAME"
    echo "$USERNAME added to sudoers."
else
    echo "User $USERNAME does not exist. Please create the user first."
    exit 1
fi

# Update package list
echo "Updating package list..."
sudo apt update

# Set UTF-8 locale
echo "Setting UTF-8 locale..."
sudo apt install -y locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

# Enable Ubuntu Universe repository
echo "Enabling Universe repository..."
sudo apt install -y software-properties-common
sudo add-apt-repository universe

# Install curl and required dependencies
echo "Installing required dependencies..."
sudo apt update && sudo apt install -y curl gnupg2 lsb-release

# Add ROS 2 GPG key
echo "Adding ROS 2 GPG key..."
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg

# Add ROS 2 Jazzy repository
echo "Adding ROS 2 Jazzy APT repository..."
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# Update system packages
echo "Updating system packages..."
sudo apt update
sudo apt upgrade -y

# Install ROS 2 Jazzy (Full Desktop version)
echo "Installing ROS 2 Jazzy (Desktop version)..."
sudo apt install -y ros-jazzy-desktop

# Install development tools
echo "Installing development tools..."
sudo apt install -y ros-dev-tools

# Set up ROS 2 environment
echo "Setting up ROS 2 environment..."
echo "source /opt/ros/jazzy/setup.bash" >> ~/.bashrc
source ~/.bashrc
sudo apt update -y && sudo apt install -y ros-jazzy-turtlebot4-desktop

# Test installation (Talker-Listener example)
echo "Testing ROS 2 installation..."
gnome-terminal -- bash -c "source /opt/ros/jazzy/setup.bash; ros2 run demo_nodes_cpp talker"
gnome-terminal -- bash -c "source /opt/ros/jazzy/setup.bash; ros2 run demo_nodes_py listener"

echo "ROS 2 Jazzy installation complete! Reboot recommended."

