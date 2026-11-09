// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UgvStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_state_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__STRUCT_H_

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
#include "swarm_interfaces/msg/detail/ugv_state__struct.h"

/// Struct defined in msg/UgvStateArray in the package swarm_interfaces.
/**
  * State of every UGV in the fleet
 */
typedef struct swarm_interfaces__msg__UgvStateArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__UgvState__Sequence states;
} swarm_interfaces__msg__UgvStateArray;

// Struct for a sequence of swarm_interfaces__msg__UgvStateArray.
typedef struct swarm_interfaces__msg__UgvStateArray__Sequence
{
  swarm_interfaces__msg__UgvStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UgvStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__STRUCT_H_
