// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UgvCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__STRUCT_H_

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
// Member 'commands'
#include "swarm_interfaces/msg/detail/ugv_command__struct.h"

/// Struct defined in msg/UgvCommandArray in the package swarm_interfaces.
/**
  * Control for every UGV of the fleet
 */
typedef struct swarm_interfaces__msg__UgvCommandArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__UgvCommand__Sequence commands;
} swarm_interfaces__msg__UgvCommandArray;

// Struct for a sequence of swarm_interfaces__msg__UgvCommandArray.
typedef struct swarm_interfaces__msg__UgvCommandArray__Sequence
{
  swarm_interfaces__msg__UgvCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UgvCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__STRUCT_H_
