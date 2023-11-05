#!/bin/bash

# 确保脚本在发生错误时终止
set -e

# 设定工作空间变量
WORKSPACE_DIR=/home/jetson/Desktop/controller/virtualHub

# 清理工作空间
echo "Cleaning up the workspace..."
rm -rf $WORKSPACE_DIR/build/virtual_hub
rm -rf $WORKSPACE_DIR/install/virtual_hub
rm -rf $WORKSPACE_DIR/log/virtual_hub

# Source ROS 2 base environment
echo "Sourcing ROS 2 base environment..."
source /opt/ros/foxy/setup.bash

# 如果有自定义的工作空间，也需要加载
# echo "Sourcing custom workspace..."
# source $WORKSPACE_DIR/install/setup.bash

# 构建特定的ROS 2包
echo "Building the virtual_hub package..."
colcon build --packages-select virtual_hub

# 如果需要，也可以加载构建后的环境
# echo "Sourcing the built package..."
source $WORKSPACE_DIR/install/setup.bash

echo "Build complete."
