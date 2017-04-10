#!/bin/bash

ros_version=`rosversion -d`

workspace_ext="$HOME/ros_"$ros_version"_external"
workspace_int="$HOME/ros_"$ros_version"_internal"

echo "This script set up the multi-robot environment for this device."
echo "Workspace internal  : $workspace_int"
echo "Workspace external  : $workspace_ext"
echo "ROS Version         : $ros_version"
while true; do
	read -e -p "Continue [y|n]? " -i "y" yn
	case $yn in
		[Yy]* ) break;;
		*) echo "Aborting."; exit;;
	esac
done
echo

echo "Checking internet connectivity..."
wget -q --tries=10 --timeout=20 --spider http://google.com
if [[ $? -eq 0 ]]; then
	echo "ok."
else
        echo "The computer does not seem to be connected to the internet."
	echo "Please check connectivity and try again."
	echo "Aborting."
	exit
fi

echo
echo "Verifying that sudo password has recently been entered..."
sudo ls &> /dev/null
echo "... done."

echo
echo "Setting up external workspace $workspace_ext:"
echo "-> creating dir $workspace_ext/src ..."
mkdir -p $workspace_ext/src
cd $workspace_ext/src

echo "-> initializing workspace for rosversion $ros_version ..."
catkin_init_workspace &> /dev/null
cd ..

echo "-> not modyfing .bashrc because workspaces will be chained ..."
catkin_make &> /dev/null
source $workspace_ext/devel/setup.bash

echo "-> getting packages ..."
cd $workspace_ext/src
git clone https://github.com/aau-ros/aau_multi_robot.git

# platform specific steps
if [ ! -z "$ROBOT_PLATFORM" ]; then
    echo "-> getting platform specific packages for $ROBOT_PLATFORM ..."

    if [[ "$ROBOT_PLATFORM" == "turtlebot" ]]; then
	echo &> /dev/null
	# add stuff here

    elif [[ "$ROBOT_PLATFORM" == "pioneer3dx" ]]; then
	git clone https://github.com/amor-ros-pkg/rosaria.git  &> /dev/null
	rosdep update  &> /dev/null
	rosdep install rosaria  &> /dev/null
	# add sick laserscanner

    elif [[ "$ROBOT_PLATFORM" == "pioneer3at" ]]; then
	git clone https://github.com/amor-ros-pkg/rosaria.git  &> /dev/null
	rosdep update  &> /dev/null
	rosdep install rosaria  &> /dev/null
	sudo apt-get update  &> /dev/null
	sudo apt-get install ros-$ros_version-hokuyo-node  &> /dev/null

    else
	echo "-> unkown platform!"
    fi
fi

cd $workspace_ext



echo
echo "Setting up internal workspace $workspace_int:"
echo "-> creating dir $workspace_int/src ..."
mkdir -p $workspace_int/src
cd $workspace_int/src

echo "-> initializing workspace for rosversion $ros_version ..."
catkin_init_workspace &> /dev/null
cd ..

echo "-> calling catkin_make and sourcing to complete workspace setup ..."
catkin_make &> /dev/null
source $workspace_int/devel/setup.bash

echo "-> modifying .bashrc upon necessity ..."
source_text="source $workspace_int/devel/setup.bash" &> /dev/null
grep "$source_text" $HOME/.bashrc &> /dev/null
if [ "$?" -ne 0 ]; then
    echo "   -> add setup.bash to .bashrc ..."
    echo "$source_text" >> $HOME/.bashrc
else
    echo "   -> skipping modification to .bashrc (entry already exists)"
fi

echo "-> getting packages ..."
cd $workspace_int/src
git clone git@git.nes.aau.at:multi_robot_exploration
cd $workspace_int

echo
echo "Setting rosconsole format"
echo "-> modifying .bashrc upon necessity ..."
source_text="export ROSCONSOLE_FORMAT='[${node}] [${function}:${line}]: ${message}'" &> /dev/null
grep "$source_text" $HOME/.bashrc &> /dev/null
if [ "$?" -ne 0 ]; then
    echo "   -> add ROSCONSOLE_FORMAT to .bashrc ..."
    echo "$source_text" >> $HOME/.bashrc
else
    echo "   -> skipping modification to .bashrc (entry already exists)"
fi

echo
echo "Getting required packages ..."
sudo apt-get -qq -y install ros-$ros_version-costmap-2d
sudo apt-get -qq -y install ros-$ros_version-navfn
sudo apt-get -qq -y install ros-$ros_version-base-local-planner
sudo apt-get -qq -y install ros-$ros_version-move-base
sudo apt-get -qq -y install ros-$ros_version-gmapping
sudo apt-get -qq -y install ros-$ros_version-fake-localization


echo
echo
echo "Successfully created workspaces and fetched repositories."
echo "Please press any key to continue build process of both workspaces."
read
echo
echo "Building $workspace_int"
cd $workspace_int
catkin_make

echo
echo "Building $workspace_ext"
cd $workspace_ext
catkin_make

echo
echo
echo "======================================"
echo "Successfully set up workspaces. Enjoy."
echo "======================================"
echo
