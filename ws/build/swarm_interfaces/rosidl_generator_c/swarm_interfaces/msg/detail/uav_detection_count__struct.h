// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_H_

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

/// Struct defined in msg/UavDetectionCount in the package swarm_interfaces.
/**
  * How many distinct targets ONE UAV is detecting right now (release 3.2.0).
  *
  * Computed in C++ by swarm_visualizer's marker publisher from the per-sensor streams
  * (`/sensors/<id>/detections`, grouped by `parent_actor_id`). It exists so the Python
  * metrics panel does not have to subscribe to ten 50 Hz streams itself: doing that
  * cost 68 % of a core in deserialisation alone (measured; see MEDICOES M7e).
 */
typedef struct swarm_interfaces__msg__UavDetectionCount
{
  std_msgs__msg__Header header;
  uint32_t drone_id;
  /// distinct non-occluded actors over the UAV's own sensors
  uint32_t detections_now;
  /// how many sensor streams reported within the timeout
  uint32_t sensor_streams;
} swarm_interfaces__msg__UavDetectionCount;

// Struct for a sequence of swarm_interfaces__msg__UavDetectionCount.
typedef struct swarm_interfaces__msg__UavDetectionCount__Sequence
{
  swarm_interfaces__msg__UavDetectionCount * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UavDetectionCount__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__STRUCT_H_
