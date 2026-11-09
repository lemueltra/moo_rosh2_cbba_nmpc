// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UgvState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_state.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UgvState in the package swarm_interfaces.
/**
  * State of one UGV of the pooled fleet (frame 'map', SI units)
 */
typedef struct swarm_interfaces__msg__UgvState
{
  uint32_t ugv_id;
  bool active;
  double x;
  double y;
  double yaw;
  /// longitudinal speed
  double v;
  double route_length_m;
} swarm_interfaces__msg__UgvState;

// Struct for a sequence of swarm_interfaces__msg__UgvState.
typedef struct swarm_interfaces__msg__UgvState__Sequence
{
  swarm_interfaces__msg__UgvState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UgvState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_H_
