// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UgvCommand in the package swarm_interfaces.
/**
  * Carla-style vehicle control for one UGV
 */
typedef struct swarm_interfaces__msg__UgvCommand
{
  uint32_t ugv_id;
  /// [0.0, 1.0]
  double throttle;
  /// [-1.0, 1.0]
  double steer;
  /// [0.0, 1.0]
  double brake;
  bool hand_brake;
  bool reverse;
  bool active_cmd;
} swarm_interfaces__msg__UgvCommand;

// Struct for a sequence of swarm_interfaces__msg__UgvCommand.
typedef struct swarm_interfaces__msg__UgvCommand__Sequence
{
  swarm_interfaces__msg__UgvCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UgvCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_H_
