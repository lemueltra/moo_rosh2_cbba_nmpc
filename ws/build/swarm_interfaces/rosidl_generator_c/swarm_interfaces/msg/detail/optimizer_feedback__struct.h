// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/OptimizerFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/optimizer_feedback.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_H_

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

/// Struct defined in msg/OptimizerFeedback in the package swarm_interfaces.
/**
  * Sliding-window metrics for the multi-objective optimizer (5 Hz publication)
 */
typedef struct swarm_interfaces__msg__OptimizerFeedback
{
  std_msgs__msg__Header header;
  /// exact active UAV list (never averaged)
  rosidl_runtime_c__uint32__Sequence active_ids;
  /// mean distinct detected targets in the 60 s window
  double detections_mean_60s;
  /// mean latency over the window
  double latency_mean_60s;
  /// worst latency in the window
  double latency_max_60s;
  /// samples currently in the window
  uint32_t samples_in_window;
} swarm_interfaces__msg__OptimizerFeedback;

// Struct for a sequence of swarm_interfaces__msg__OptimizerFeedback.
typedef struct swarm_interfaces__msg__OptimizerFeedback__Sequence
{
  swarm_interfaces__msg__OptimizerFeedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__OptimizerFeedback__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__STRUCT_H_
