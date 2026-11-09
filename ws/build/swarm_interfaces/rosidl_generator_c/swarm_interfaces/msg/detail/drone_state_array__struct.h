// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_state_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__STRUCT_H_

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
// Member 'states'
#include "swarm_interfaces/msg/detail/drone_state__struct.h"

/// Struct defined in msg/DroneStateArray in the package swarm_interfaces.
/**
  * Full kinematic state of all N_max drones
 */
typedef struct swarm_interfaces__msg__DroneStateArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__DroneState__Sequence states;
} swarm_interfaces__msg__DroneStateArray;

// Struct for a sequence of swarm_interfaces__msg__DroneStateArray.
typedef struct swarm_interfaces__msg__DroneStateArray__Sequence
{
  swarm_interfaces__msg__DroneStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__STRUCT_H_
