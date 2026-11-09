// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_state.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DroneState in the package swarm_interfaces.
/**
  * Kinematic state of a single drone in world frame 'map' (SI units)
 */
typedef struct swarm_interfaces__msg__DroneState
{
  uint32_t drone_id;
  bool active;
  double x;
  double y;
  double yaw;
  double vx;
  double vy;
  double yaw_rate;
  double z;
  double vz;
} swarm_interfaces__msg__DroneState;

// Struct for a sequence of swarm_interfaces__msg__DroneState.
typedef struct swarm_interfaces__msg__DroneState__Sequence
{
  swarm_interfaces__msg__DroneState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE__STRUCT_H_
