// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneActiveSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_active_set.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_H_

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
// Member 'active_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DroneActiveSet in the package swarm_interfaces.
/**
  * Level-triggered active set of drone IDs
 */
typedef struct swarm_interfaces__msg__DroneActiveSet
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint32__Sequence active_ids;
} swarm_interfaces__msg__DroneActiveSet;

// Struct for a sequence of swarm_interfaces__msg__DroneActiveSet.
typedef struct swarm_interfaces__msg__DroneActiveSet__Sequence
{
  swarm_interfaces__msg__DroneActiveSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneActiveSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_H_
