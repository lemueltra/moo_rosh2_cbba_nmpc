// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DroneCommand in the package swarm_interfaces.
/**
  * Actuation velocity command for a single drone in world frame 'map' (SI units)
 */
typedef struct swarm_interfaces__msg__DroneCommand
{
  uint32_t drone_id;
  bool active;
  double vx;
  double vy;
  double yaw_rate;
  double vz;
} swarm_interfaces__msg__DroneCommand;

// Struct for a sequence of swarm_interfaces__msg__DroneCommand.
typedef struct swarm_interfaces__msg__DroneCommand__Sequence
{
  swarm_interfaces__msg__DroneCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_H_
