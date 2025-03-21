# CMake generated Testfile for 
# Source directory: /home/ranas/turtlebot4_ws/src/navigation2/nav2_behavior_tree/test
# Build directory: /home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_bt_utils "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test_results/nav2_behavior_tree/test_bt_utils.gtest.xml" "--package-name" "nav2_behavior_tree" "--output-file" "/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/ament_cmake_gtest/test_bt_utils.txt" "--command" "/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test/test_bt_utils" "--gtest_output=xml:/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test_results/nav2_behavior_tree/test_bt_utils.gtest.xml")
set_tests_properties(test_bt_utils PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test/test_bt_utils" TIMEOUT "60" WORKING_DIRECTORY "/home/ranas/turtlebot4_ws/src/build/nav2_behavior_tree/test" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ranas/turtlebot4_ws/src/navigation2/nav2_behavior_tree/test/CMakeLists.txt;1;ament_add_gtest;/home/ranas/turtlebot4_ws/src/navigation2/nav2_behavior_tree/test/CMakeLists.txt;0;")
subdirs("../gtest")
subdirs("plugins/condition")
subdirs("plugins/decorator")
subdirs("plugins/control")
subdirs("plugins/action")
