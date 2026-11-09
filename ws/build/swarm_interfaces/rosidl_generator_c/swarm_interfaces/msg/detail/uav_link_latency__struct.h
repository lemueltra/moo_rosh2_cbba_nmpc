// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency.h"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_H_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UavLinkLatency in the package swarm_interfaces.
/**
  * Communication latency between one active UAV and its nearest UGV
 */
typedef struct swarm_interfaces__msg__UavLinkLatency
{
  uint32_t drone_id;
  /// nearest UGV (from /comm/nearest_ugv)
  uint32_t ugv_id;
  double latency_ms;
  double distance_m;
  /// true = line of sight (no building in between)
  bool los;
} swarm_interfaces__msg__UavLinkLatency;

// Struct for a sequence of swarm_interfaces__msg__UavLinkLatency.
typedef struct swarm_interfaces__msg__UavLinkLatency__Sequence
{
  swarm_interfaces__msg__UavLinkLatency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} swarm_interfaces__msg__UavLinkLatency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_H_
