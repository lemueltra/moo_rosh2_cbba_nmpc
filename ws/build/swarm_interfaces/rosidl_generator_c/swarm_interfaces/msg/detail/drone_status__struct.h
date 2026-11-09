// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_status.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MODE_INACTIVE'.
/**
  * Operational Modes
 */
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_INACTIVE = 0
};

/// Constant 'MODE_HOLD'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_HOLD = 1
};

/// Constant 'MODE_PLANNING'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_PLANNING = 2
};

/// Constant 'MODE_TRACKING'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_TRACKING = 3
};

/// Constant 'MODE_REACHED'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_REACHED = 4
};

/// Constant 'MODE_REFERENCE_STALE'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_REFERENCE_STALE = 5
};

/// Constant 'MODE_REFERENCE_INVALID'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_REFERENCE_INVALID = 6
};

/// Constant 'MODE_PLAN_FAILED'.
enum
{
  swarm_interfaces__msg__DroneStatus__MODE_PLAN_FAILED = 7
};

/// Struct defined in msg/DroneStatus in the package swarm_interfaces.
/**
  * Status and diagnostics of a single drone in the planner
 */
typedef struct swarm_interfaces__msg__DroneStatus
{
  uint32_t drone_id;
  uint8_t mode;
  double position_error;
  double yaw_error;
  double eta;
  uint32_t replan_count;
  double compute_time_us;
} swarm_interfaces__msg__DroneStatus;

// Struct for a sequence of swarm_interfaces__msg__DroneStatus.
typedef struct swarm_interfaces__msg__DroneStatus__Sequence
{
  swarm_interfaces__msg__DroneStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_H_
