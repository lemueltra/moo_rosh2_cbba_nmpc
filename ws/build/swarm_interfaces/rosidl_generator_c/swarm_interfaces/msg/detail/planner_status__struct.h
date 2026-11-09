// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/planner_status.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'drones'
#include "swarm_interfaces/msg/detail/drone_status__struct.h"

/// Struct defined in msg/PlannerStatus in the package swarm_interfaces.
/**
  * Global diagnostics of the drone planner and controller node
 */
typedef struct swarm_interfaces__msg__PlannerStatus
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__DroneStatus__Sequence drones;
  double cycle_time_us;
  double cycle_time_max_us;
  uint32_t deadline_misses;
  /// total references clamped to the altitude/speed limits
  uint32_t clamped_references;
} swarm_interfaces__msg__PlannerStatus;

// Struct for a sequence of swarm_interfaces__msg__PlannerStatus.
typedef struct swarm_interfaces__msg__PlannerStatus__Sequence
{
  swarm_interfaces__msg__PlannerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__PlannerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_H_
