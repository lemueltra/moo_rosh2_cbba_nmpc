# CMake generated Testfile for 
# Source directory: /workspace/ws/src/swarm_interfaces
# Build directory: /workspace/ws/build/swarm_interfaces
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_interfaces_roundtrip "/usr/bin/python3" "-u" "/opt/ros/jazzy/share/ament_cmake_test/cmake/run_test.py" "/workspace/ws/build/swarm_interfaces/test_results/swarm_interfaces/test_interfaces_roundtrip.gtest.xml" "--package-name" "swarm_interfaces" "--output-file" "/workspace/ws/build/swarm_interfaces/ament_cmake_gtest/test_interfaces_roundtrip.txt" "--command" "/workspace/ws/build/swarm_interfaces/test_interfaces_roundtrip" "--gtest_output=xml:/workspace/ws/build/swarm_interfaces/test_results/swarm_interfaces/test_interfaces_roundtrip.gtest.xml")
set_tests_properties(test_interfaces_roundtrip PROPERTIES  LABELS "gtest" REQUIRED_FILES "/workspace/ws/build/swarm_interfaces/test_interfaces_roundtrip" TIMEOUT "60" WORKING_DIRECTORY "/workspace/ws/build/swarm_interfaces" _BACKTRACE_TRIPLES "/opt/ros/jazzy/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;95;ament_add_test;/opt/ros/jazzy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/workspace/ws/src/swarm_interfaces/CMakeLists.txt;51;ament_add_gtest;/workspace/ws/src/swarm_interfaces/CMakeLists.txt;0;")
subdirs("swarm_interfaces__py")
subdirs("swarm_interfaces__rs")
subdirs("gtest")
