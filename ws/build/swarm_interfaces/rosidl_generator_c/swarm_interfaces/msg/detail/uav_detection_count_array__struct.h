// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UavDetectionCountArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__STRUCT_H_

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
// Member 'uavs'
#include "swarm_interfaces/msg/detail/uav_detection_count__struct.h"

/// Struct defined in msg/UavDetectionCountArray in the package swarm_interfaces.
/**
  * One entry per UAV that has sensor streams (see UavDetectionCount). Published at 5 Hz.
 */
typedef struct swarm_interfaces__msg__UavDetectionCountArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__UavDetectionCount__Sequence uavs;
} swarm_interfaces__msg__UavDetectionCountArray;

// Struct for a sequence of swarm_interfaces__msg__UavDetectionCountArray.
typedef struct swarm_interfaces__msg__UavDetectionCountArray__Sequence
{
  swarm_interfaces__msg__UavDetectionCountArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UavDetectionCountArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__STRUCT_H_
