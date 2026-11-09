// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/ActorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_definition.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type_id'
// Member 'role_name'
// Member 'attribute_keys'
// Member 'attribute_values'
#include "rosidl_runtime_c/string.h"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ActorDefinition in the package swarm_world_interfaces.
/**
  * Definition for spawning an actor (UGV, UAV, Walker)
 */
typedef struct swarm_world_interfaces__msg__ActorDefinition
{
  uint32_t actor_id;
  rosidl_runtime_c__String type_id;
  rosidl_runtime_c__String role_name;
  geometry_msgs__msg__Pose initial_pose;
  uint32_t parent_id;
  rosidl_runtime_c__String__Sequence attribute_keys;
  rosidl_runtime_c__String__Sequence attribute_values;
} swarm_world_interfaces__msg__ActorDefinition;

// Struct for a sequence of swarm_world_interfaces__msg__ActorDefinition.
typedef struct swarm_world_interfaces__msg__ActorDefinition__Sequence
{
  swarm_world_interfaces__msg__ActorDefinition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__ActorDefinition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_H_
