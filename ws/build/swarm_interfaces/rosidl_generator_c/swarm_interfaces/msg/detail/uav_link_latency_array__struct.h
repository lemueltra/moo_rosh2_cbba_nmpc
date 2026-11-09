// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UavLinkLatencyArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency_array.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_H_

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
// Member 'links'
#include "swarm_interfaces/msg/detail/uav_link_latency__struct.h"

/// Struct defined in msg/UavLinkLatencyArray in the package swarm_interfaces.
/**
  * Per-UAV latency to the nearest UGV (one entry per ACTIVE UAV, published at 5 Hz)
 */
typedef struct swarm_interfaces__msg__UavLinkLatencyArray
{
  std_msgs__msg__Header header;
  swarm_interfaces__msg__UavLinkLatency__Sequence links;
} swarm_interfaces__msg__UavLinkLatencyArray;

// Struct for a sequence of swarm_interfaces__msg__UavLinkLatencyArray.
typedef struct swarm_interfaces__msg__UavLinkLatencyArray__Sequence
{
  swarm_interfaces__msg__UavLinkLatencyArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UavLinkLatencyArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_H_
