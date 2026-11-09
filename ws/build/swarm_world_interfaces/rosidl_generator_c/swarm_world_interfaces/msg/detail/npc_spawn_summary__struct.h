// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/npc_spawn_summary.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_H_

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
// Member 'vehicle_actor_ids'
// Member 'pedestrian_actor_ids'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'vehicle_types'
// Member 'pedestrian_types'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/NpcSpawnSummary in the package swarm_world_interfaces.
/**
  * Result of one NPC spawning run (swarm_npc_spawner, milestone M3)
 */
typedef struct swarm_world_interfaces__msg__NpcSpawnSummary
{
  std_msgs__msg__Header header;
  /// seed used for the sampling (reproducibility)
  uint32_t seed;
  uint32_t requested_vehicles;
  uint32_t requested_pedestrians;
  uint32_t spawned_vehicles;
  uint32_t spawned_pedestrians;
  rosidl_runtime_c__uint32__Sequence vehicle_actor_ids;
  rosidl_runtime_c__uint32__Sequence pedestrian_actor_ids;
  /// cyclic blueprint list actually used
  rosidl_runtime_c__String__Sequence vehicle_types;
  rosidl_runtime_c__String__Sequence pedestrian_types;
  /// wall time spent spawning
  double elapsed_s;
} swarm_world_interfaces__msg__NpcSpawnSummary;

// Struct for a sequence of swarm_world_interfaces__msg__NpcSpawnSummary.
typedef struct swarm_world_interfaces__msg__NpcSpawnSummary__Sequence
{
  swarm_world_interfaces__msg__NpcSpawnSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__NpcSpawnSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_H_
