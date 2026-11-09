// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_H_

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
// Member 'params_hash'
#include "rosidl_runtime_c/string.h"
// Member 'entries'
#include "swarm_interfaces/msg/detail/metric_entry__struct.h"

/// Struct defined in msg/MetricEntryArray in the package swarm_interfaces.
/**
  * Array of generic metric entries with metadata
 */
typedef struct swarm_interfaces__msg__MetricEntryArray
{
  std_msgs__msg__Header header;
  bool model_based;
  rosidl_runtime_c__String params_hash;
  double window_sec;
  bool warming_up;
  uint32_t n_frames_in_window;
  swarm_interfaces__msg__MetricEntry__Sequence entries;
} swarm_interfaces__msg__MetricEntryArray;

// Struct for a sequence of swarm_interfaces__msg__MetricEntryArray.
typedef struct swarm_interfaces__msg__MetricEntryArray__Sequence
{
  swarm_interfaces__msg__MetricEntryArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__MetricEntryArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__STRUCT_H_
