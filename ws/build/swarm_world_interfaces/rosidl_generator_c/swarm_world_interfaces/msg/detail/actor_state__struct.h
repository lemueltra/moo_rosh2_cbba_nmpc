// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/ActorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CONTROL_DISABLED'.
enum
{
  swarm_world_interfaces__msg__ActorState__CONTROL_DISABLED = 0
};

/// Constant 'CONTROL_AUTOPILOT'.
enum
{
  swarm_world_interfaces__msg__ActorState__CONTROL_AUTOPILOT = 1
};

/// Constant 'CONTROL_NATIVE_TOPIC'.
enum
{
  swarm_world_interfaces__msg__ActorState__CONTROL_NATIVE_TOPIC = 2
};

/// Constant 'CONTROL_CARLA_AIR_CMD'.
enum
{
  swarm_world_interfaces__msg__ActorState__CONTROL_CARLA_AIR_CMD = 3
};

/// Constant 'CONTROL_DIRECT_API'.
enum
{
  swarm_world_interfaces__msg__ActorState__CONTROL_DIRECT_API = 4
};

// Include directives for member types
// Member 'type_id'
// Member 'role_name'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'acceleration'
// Member 'bounding_box_extent'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/ActorState in the package swarm_world_interfaces.
/**
  * Live state of an actor
 */
typedef struct swarm_world_interfaces__msg__ActorState
{
  uint32_t actor_id;
  rosidl_runtime_c__String type_id;
  rosidl_runtime_c__String role_name;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  geometry_msgs__msg__Vector3 acceleration;
  geometry_msgs__msg__Vector3 bounding_box_extent;
  bool active;
  uint8_t control_source;
} swarm_world_interfaces__msg__ActorState;

// Struct for a sequence of swarm_world_interfaces__msg__ActorState.
typedef struct swarm_world_interfaces__msg__ActorState__Sequence
{
  swarm_world_interfaces__msg__ActorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__ActorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_H_
