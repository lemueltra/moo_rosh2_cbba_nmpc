// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/MetricEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'unit'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MetricEntry in the package swarm_interfaces.
/**
  * Single generic metric entry
 */
typedef struct swarm_interfaces__msg__MetricEntry
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String unit;
  double value;
  bool valid;
} swarm_interfaces__msg__MetricEntry;

// Struct for a sequence of swarm_interfaces__msg__MetricEntry.
typedef struct swarm_interfaces__msg__MetricEntry__Sequence
{
  swarm_interfaces__msg__MetricEntry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__MetricEntry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__STRUCT_H_
