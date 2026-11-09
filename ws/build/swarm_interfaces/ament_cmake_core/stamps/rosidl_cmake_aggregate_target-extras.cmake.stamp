# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target swarm_interfaces::swarm_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${swarm_interfaces_TARGETS}.
if(swarm_interfaces_TARGETS AND NOT TARGET swarm_interfaces::swarm_interfaces)
  add_library(swarm_interfaces::swarm_interfaces INTERFACE IMPORTED)
  set_target_properties(swarm_interfaces::swarm_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${swarm_interfaces_TARGETS}")
endif()
