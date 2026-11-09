// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/simulation_status.h"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_H_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TIME_MODE_ASYNC'.
enum
{
  swarm_world_interfaces__msg__SimulationStatus__TIME_MODE_ASYNC = 0
};

/// Constant 'TIME_MODE_SYNC'.
enum
{
  swarm_world_interfaces__msg__SimulationStatus__TIME_MODE_SYNC = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SimulationStatus in the package swarm_world_interfaces.
/**
  * Live simulation status and clock mode telemetry
 */
typedef struct swarm_world_interfaces__msg__SimulationStatus
{
  std_msgs__msg__Header header;
  uint8_t time_mode;
  uint64_t step_count;
  double elapsed_sim_time;
  double fixed_delta_seconds;
  uint32_t num_active_ugvs;
  uint32_t num_active_uavs;
  uint32_t num_active_sensors;
  bool sync_waiting;
} swarm_world_interfaces__msg__SimulationStatus;

// Struct for a sequence of swarm_world_interfaces__msg__SimulationStatus.
typedef struct swarm_world_interfaces__msg__SimulationStatus__Sequence
{
  swarm_world_interfaces__msg__SimulationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_world_interfaces__msg__SimulationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__STRUCT_H_
