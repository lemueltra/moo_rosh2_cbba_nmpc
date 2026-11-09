// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/DetectionSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/detection_summary.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_H_

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

/// Struct defined in msg/DetectionSummary in the package swarm_interfaces.
/**
  * How many distinct objects the active UAVs are detecting right now (release 3.2.0).
  *
  * Published by swarm_visualizer's marker publisher, which is where the per-sensor
  * streams are already reduced. It exists so the metrics panel can print the same
  * summary that the 3D overlay shows ("SEEN NOW: 7 (buildings 2, vehicles 3, ...)")
  * and the operator can compare it with `/metrics/optimizer_feedback`, which reports a
  * 60 s mean and not an instantaneous count.
 */
typedef struct swarm_interfaces__msg__DetectionSummary
{
  std_msgs__msg__Header header;
  uint32_t total;
  uint32_t buildings;
  uint32_t vehicles;
  uint32_t pedestrians;
  uint32_t fleet;
  /// Objects that are inside some sensor's field of view but blocked by an occluder: the
  /// overlay draws them in red, so "inside the FoV and not seen" is visible instead of
  /// silently missing. `partially_blocked` counts the ones detected with a partial
  /// silhouette.
  uint32_t blocked;
  uint32_t partially_blocked;
} swarm_interfaces__msg__DetectionSummary;

// Struct for a sequence of swarm_interfaces__msg__DetectionSummary.
typedef struct swarm_interfaces__msg__DetectionSummary__Sequence
{
  swarm_interfaces__msg__DetectionSummary * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__DetectionSummary__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_H_
