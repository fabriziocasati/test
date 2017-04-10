FROM ros:indigo

COPY ./test.txt /
COPY ros_indigo_external /home/fabrizio/ros_indigo_external/
COPY opt /opt

RUN sudo apt-get install build-essential

#RUN sudo apt-get -qq -y install ros-indigo-costmap-2d
#RUN sudo apt-get -qq -y install ros-indigo-navfn
#RUN sudo apt-get -qq -y install ros-indigo-base-local-planner
#RUN sudo apt-get -qq -y install ros-indigo-move-base
#RUN sudo apt-get -qq -y install ros-indigo-gmapping
#RUN sudo apt-get -qq -y install ros-indigo-fake-localization

#RUN git clone https://github.com/fabriziocasati/test
#RUN sudo git clone -b energy https://github.com/aau-ros/aau_multi_robot/

# place here your application's setup specifics
#CMD [ "roslaunch", "my-ros-app my-ros-app.launch" ]
#CMD roscore
#CMD ["rospack", "find roscpp"]
#CMD rospack find roslaunch


