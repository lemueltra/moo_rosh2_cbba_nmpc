// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_interfaces/msg/detail/swarm_metrics__rosidl_typesupport_introspection_c.h"
#include "swarm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_interfaces/msg/detail/swarm_metrics__functions.h"
#include "swarm_interfaces/msg/detail/swarm_metrics__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `active_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `uavs`
#include "swarm_interfaces/msg/uav_metric.h"
// Member `uavs`
#include "swarm_interfaces/msg/detail/uav_metric__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_interfaces__msg__SwarmMetrics__init(message_memory);
}

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_fini_function(void * message_memory)
{
  swarm_interfaces__msg__SwarmMetrics__fini(message_memory);
}

size_t swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__size_function__SwarmMetrics__active_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__active_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__active_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__fetch_function__SwarmMetrics__active_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__active_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__assign_function__SwarmMetrics__active_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__active_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__resize_function__SwarmMetrics__active_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__size_function__SwarmMetrics__uavs(
  const void * untyped_member)
{
  const swarm_interfaces__msg__UavMetric__Sequence * member =
    (const swarm_interfaces__msg__UavMetric__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__uavs(
  const void * untyped_member, size_t index)
{
  const swarm_interfaces__msg__UavMetric__Sequence * member =
    (const swarm_interfaces__msg__UavMetric__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__uavs(
  void * untyped_member, size_t index)
{
  swarm_interfaces__msg__UavMetric__Sequence * member =
    (swarm_interfaces__msg__UavMetric__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__fetch_function__SwarmMetrics__uavs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const swarm_interfaces__msg__UavMetric * item =
    ((const swarm_interfaces__msg__UavMetric *)
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__uavs(untyped_member, index));
  swarm_interfaces__msg__UavMetric * value =
    (swarm_interfaces__msg__UavMetric *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__assign_function__SwarmMetrics__uavs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  swarm_interfaces__msg__UavMetric * item =
    ((swarm_interfaces__msg__UavMetric *)
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__uavs(untyped_member, index));
  const swarm_interfaces__msg__UavMetric * value =
    (const swarm_interfaces__msg__UavMetric *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__resize_function__SwarmMetrics__uavs(
  void * untyped_member, size_t size)
{
  swarm_interfaces__msg__UavMetric__Sequence * member =
    (swarm_interfaces__msg__UavMetric__Sequence *)(untyped_member);
  swarm_interfaces__msg__UavMetric__Sequence__fini(member);
  return swarm_interfaces__msg__UavMetric__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, active_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, active_ids),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__size_function__SwarmMetrics__active_ids,  // size() function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__active_ids,  // get_const(index) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__active_ids,  // get(index) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__fetch_function__SwarmMetrics__active_ids,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__assign_function__SwarmMetrics__active_ids,  // assign(index, value) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__resize_function__SwarmMetrics__active_ids  // resize(index) function pointer
  },
  {
    "detections_mean_60s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, detections_mean_60s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency_mean_60s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, latency_mean_60s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency_max_60s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, latency_max_60s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "samples_in_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, samples_in_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "window_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, window_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, coverage_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ugv_weighted_coverage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, ugv_weighted_coverage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "redundancy_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, redundancy_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_cycle_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, planner_cycle_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_deadline_misses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, planner_deadline_misses),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clamped_references",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, clamped_references),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clock_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, clock_hz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sim_time_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, sim_time_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uavs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__SwarmMetrics, uavs),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__size_function__SwarmMetrics__uavs,  // size() function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_const_function__SwarmMetrics__uavs,  // get_const(index) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__get_function__SwarmMetrics__uavs,  // get(index) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__fetch_function__SwarmMetrics__uavs,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__assign_function__SwarmMetrics__uavs,  // assign(index, value) function pointer
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__resize_function__SwarmMetrics__uavs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_members = {
  "swarm_interfaces__msg",  // message namespace
  "SwarmMetrics",  // message name
  17,  // number of fields
  sizeof(swarm_interfaces__msg__SwarmMetrics),
  false,  // has_any_key_member_
  swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_member_array,  // message members
  swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_type_support_handle = {
  0,
  &swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__SwarmMetrics__get_type_hash,
  &swarm_interfaces__msg__SwarmMetrics__get_type_description,
  &swarm_interfaces__msg__SwarmMetrics__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, SwarmMetrics)() {
  swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, UavMetric)();
  if (!swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_type_support_handle.typesupport_identifier) {
    swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_interfaces__msg__SwarmMetrics__rosidl_typesupport_introspection_c__SwarmMetrics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
