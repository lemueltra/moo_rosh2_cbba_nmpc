// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_reference.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/DroneReference in the package swarm_interfaces.
/**
  * Reference pose and maximum speed for a single active drone
 */
typedef struct swarm_interfaces__msg__DroneReference
{
  uint32_t drone_id;
  double x;
  double y;
  double yaw;
  /// 0 = use default speed limit
  double max_speed;
  /// absolute altitude, valid range [2.5, 35.0]
  double z;
  /// reference UGV for the relative pose
  uint32_t ugv_id;
  /// true = (x, y, yaw) are relative to the UGV body frame
  bool frame_relative;
} swarm_interfaces__msg__DroneReference;

// Struct for a sequence of swarm_interfaces__msg__DroneReference.
typedef struct swarm_interfaces__msg__DroneReference__Sequence
{
  swarm_interfaces__msg__DroneReference * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneReference__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_H_
