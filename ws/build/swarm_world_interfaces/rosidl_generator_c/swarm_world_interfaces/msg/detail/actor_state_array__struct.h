// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/ActorStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state_array.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__STRUCT_H_

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
// Member 'actors'
#include "swarm_world_interfaces/msg/detail/actor_state__struct.h"

/// Struct defined in msg/ActorStateArray in the package swarm_world_interfaces.
/**
  * Array of actor live states
 */
typedef struct swarm_world_interfaces__msg__ActorStateArray
{
  std_msgs__msg__Header header;
  swarm_world_interfaces__msg__ActorState__Sequence actors;
} swarm_world_interfaces__msg__ActorStateArray;

// Struct for a sequence of swarm_world_interfaces__msg__ActorStateArray.
typedef struct swarm_world_interfaces__msg__ActorStateArray__Sequence
{
  swarm_world_interfaces__msg__ActorStateArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__ActorStateArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE_ARRAY__STRUCT_H_
