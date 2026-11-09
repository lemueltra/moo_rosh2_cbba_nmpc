// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DroneCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_H_

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
#include "swarm_interfaces/msg/detail/drone_command__struct.h"

/// Struct defined in msg/DroneCommandArray in the package swarm_interfaces.
/**
  * Array of actuation commands for all N_max drones, ordered by drone_id
 */
typedef struct swarm_interfaces__msg__DroneCommandArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__DroneCommand__Sequence commands;
} swarm_interfaces__msg__DroneCommandArray;

// Struct for a sequence of swarm_interfaces__msg__DroneCommandArray.
typedef struct swarm_interfaces__msg__DroneCommandArray__Sequence
{
  swarm_interfaces__msg__DroneCommandArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DroneCommandArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_H_
