// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/swarm_metrics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_interfaces/msg/detail/swarm_metrics__struct.h"
#include "swarm_interfaces/msg/detail/swarm_metrics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // active_ids
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // active_ids
#include "std_msgs/msg/detail/header__functions.h"  // header
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"  // uavs

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_swarm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

bool cdr_serialize_swarm_interfaces__msg__UavMetric(
  const swarm_interfaces__msg__UavMetric * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_swarm_interfaces__msg__UavMetric(
  eprosima::fastcdr::Cdr & cdr,
  swarm_interfaces__msg__UavMetric * ros_message);

size_t get_serialized_size_swarm_interfaces__msg__UavMetric(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_swarm_interfaces__msg__UavMetric(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_swarm_interfaces__msg__UavMetric(
  const swarm_interfaces__msg__UavMetric * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_swarm_interfaces__msg__UavMetric(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_swarm_interfaces__msg__UavMetric(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_interfaces, msg, UavMetric)();


using _SwarmMetrics__ros_msg_type = swarm_interfaces__msg__SwarmMetrics;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_swarm_interfaces__msg__SwarmMetrics(
  const swarm_interfaces__msg__SwarmMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: active_count
  {
    cdr << ros_message->active_count;
  }

  // Field name: active_ids
  {
    size_t size = ros_message->active_ids.size;
    auto array_ptr = ros_message->active_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: detections_mean_60s
  {
    cdr << ros_message->detections_mean_60s;
  }

  // Field name: latency_mean_60s
  {
    cdr << ros_message->latency_mean_60s;
  }

  // Field name: latency_max_60s
  {
    cdr << ros_message->latency_max_60s;
  }

  // Field name: samples_in_window
  {
    cdr << ros_message->samples_in_window;
  }

  // Field name: window_capacity
  {
    cdr << ros_message->window_capacity;
  }

  // Field name: coverage_ratio
  {
    cdr << ros_message->coverage_ratio;
  }

  // Field name: ugv_weighted_coverage
  {
    cdr << ros_message->ugv_weighted_coverage;
  }

  // Field name: redundancy_score
  {
    cdr << ros_message->redundancy_score;
  }

  // Field name: planner_cycle_us
  {
    cdr << ros_message->planner_cycle_us;
  }

  // Field name: planner_deadline_misses
  {
    cdr << ros_message->planner_deadline_misses;
  }

  // Field name: clamped_references
  {
    cdr << ros_message->clamped_references;
  }

  // Field name: clock_hz
  {
    cdr << ros_message->clock_hz;
  }

  // Field name: sim_time_s
  {
    cdr << ros_message->sim_time_s;
  }

  // Field name: uavs
  {
    size_t size = ros_message->uavs.size;
    auto array_ptr = ros_message->uavs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_swarm_interfaces__msg__UavMetric(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_deserialize_swarm_interfaces__msg__SwarmMetrics(
  eprosima::fastcdr::Cdr & cdr,
  swarm_interfaces__msg__SwarmMetrics * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: active_count
  {
    cdr >> ros_message->active_count;
  }

  // Field name: active_ids
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->active_ids.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->active_ids);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->active_ids, size)) {
      fprintf(stderr, "failed to create array for field 'active_ids'");
      return false;
    }
    auto array_ptr = ros_message->active_ids.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: detections_mean_60s
  {
    cdr >> ros_message->detections_mean_60s;
  }

  // Field name: latency_mean_60s
  {
    cdr >> ros_message->latency_mean_60s;
  }

  // Field name: latency_max_60s
  {
    cdr >> ros_message->latency_max_60s;
  }

  // Field name: samples_in_window
  {
    cdr >> ros_message->samples_in_window;
  }

  // Field name: window_capacity
  {
    cdr >> ros_message->window_capacity;
  }

  // Field name: coverage_ratio
  {
    cdr >> ros_message->coverage_ratio;
  }

  // Field name: ugv_weighted_coverage
  {
    cdr >> ros_message->ugv_weighted_coverage;
  }

  // Field name: redundancy_score
  {
    cdr >> ros_message->redundancy_score;
  }

  // Field name: planner_cycle_us
  {
    cdr >> ros_message->planner_cycle_us;
  }

  // Field name: planner_deadline_misses
  {
    cdr >> ros_message->planner_deadline_misses;
  }

  // Field name: clamped_references
  {
    cdr >> ros_message->clamped_references;
  }

  // Field name: clock_hz
  {
    cdr >> ros_message->clock_hz;
  }

  // Field name: sim_time_s
  {
    cdr >> ros_message->sim_time_s;
  }

  // Field name: uavs
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->uavs.data) {
      swarm_interfaces__msg__UavMetric__Sequence__fini(&ros_message->uavs);
    }
    if (!swarm_interfaces__msg__UavMetric__Sequence__init(&ros_message->uavs, size)) {
      fprintf(stderr, "failed to create array for field 'uavs'");
      return false;
    }
    auto array_ptr = ros_message->uavs.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_swarm_interfaces__msg__UavMetric(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_swarm_interfaces__msg__SwarmMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SwarmMetrics__ros_msg_type * ros_message = static_cast<const _SwarmMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: active_count
  {
    size_t item_size = sizeof(ros_message->active_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_ids
  {
    size_t array_size = ros_message->active_ids.size;
    auto array_ptr = ros_message->active_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detections_mean_60s
  {
    size_t item_size = sizeof(ros_message->detections_mean_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_mean_60s
  {
    size_t item_size = sizeof(ros_message->latency_mean_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_max_60s
  {
    size_t item_size = sizeof(ros_message->latency_max_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: samples_in_window
  {
    size_t item_size = sizeof(ros_message->samples_in_window);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: window_capacity
  {
    size_t item_size = sizeof(ros_message->window_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: coverage_ratio
  {
    size_t item_size = sizeof(ros_message->coverage_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ugv_weighted_coverage
  {
    size_t item_size = sizeof(ros_message->ugv_weighted_coverage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: redundancy_score
  {
    size_t item_size = sizeof(ros_message->redundancy_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_cycle_us
  {
    size_t item_size = sizeof(ros_message->planner_cycle_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_deadline_misses
  {
    size_t item_size = sizeof(ros_message->planner_deadline_misses);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: clamped_references
  {
    size_t item_size = sizeof(ros_message->clamped_references);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: clock_hz
  {
    size_t item_size = sizeof(ros_message->clock_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sim_time_s
  {
    size_t item_size = sizeof(ros_message->sim_time_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uavs
  {
    size_t array_size = ros_message->uavs.size;
    auto array_ptr = ros_message->uavs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_swarm_interfaces__msg__UavMetric(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_swarm_interfaces__msg__SwarmMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: active_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detections_mean_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: latency_mean_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: latency_max_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: samples_in_window
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: window_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: coverage_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ugv_weighted_coverage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: redundancy_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: planner_cycle_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: planner_deadline_misses
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: clamped_references
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: clock_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sim_time_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uavs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_swarm_interfaces__msg__UavMetric(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__SwarmMetrics;
    is_plain =
      (
      offsetof(DataType, uavs) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_key_swarm_interfaces__msg__SwarmMetrics(
  const swarm_interfaces__msg__SwarmMetrics * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: active_count
  {
    cdr << ros_message->active_count;
  }

  // Field name: active_ids
  {
    size_t size = ros_message->active_ids.size;
    auto array_ptr = ros_message->active_ids.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: detections_mean_60s
  {
    cdr << ros_message->detections_mean_60s;
  }

  // Field name: latency_mean_60s
  {
    cdr << ros_message->latency_mean_60s;
  }

  // Field name: latency_max_60s
  {
    cdr << ros_message->latency_max_60s;
  }

  // Field name: samples_in_window
  {
    cdr << ros_message->samples_in_window;
  }

  // Field name: window_capacity
  {
    cdr << ros_message->window_capacity;
  }

  // Field name: coverage_ratio
  {
    cdr << ros_message->coverage_ratio;
  }

  // Field name: ugv_weighted_coverage
  {
    cdr << ros_message->ugv_weighted_coverage;
  }

  // Field name: redundancy_score
  {
    cdr << ros_message->redundancy_score;
  }

  // Field name: planner_cycle_us
  {
    cdr << ros_message->planner_cycle_us;
  }

  // Field name: planner_deadline_misses
  {
    cdr << ros_message->planner_deadline_misses;
  }

  // Field name: clamped_references
  {
    cdr << ros_message->clamped_references;
  }

  // Field name: clock_hz
  {
    cdr << ros_message->clock_hz;
  }

  // Field name: sim_time_s
  {
    cdr << ros_message->sim_time_s;
  }

  // Field name: uavs
  {
    size_t size = ros_message->uavs.size;
    auto array_ptr = ros_message->uavs.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_swarm_interfaces__msg__UavMetric(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_key_swarm_interfaces__msg__SwarmMetrics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SwarmMetrics__ros_msg_type * ros_message = static_cast<const _SwarmMetrics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: active_count
  {
    size_t item_size = sizeof(ros_message->active_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: active_ids
  {
    size_t array_size = ros_message->active_ids.size;
    auto array_ptr = ros_message->active_ids.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: detections_mean_60s
  {
    size_t item_size = sizeof(ros_message->detections_mean_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_mean_60s
  {
    size_t item_size = sizeof(ros_message->latency_mean_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: latency_max_60s
  {
    size_t item_size = sizeof(ros_message->latency_max_60s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: samples_in_window
  {
    size_t item_size = sizeof(ros_message->samples_in_window);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: window_capacity
  {
    size_t item_size = sizeof(ros_message->window_capacity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: coverage_ratio
  {
    size_t item_size = sizeof(ros_message->coverage_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ugv_weighted_coverage
  {
    size_t item_size = sizeof(ros_message->ugv_weighted_coverage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: redundancy_score
  {
    size_t item_size = sizeof(ros_message->redundancy_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_cycle_us
  {
    size_t item_size = sizeof(ros_message->planner_cycle_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planner_deadline_misses
  {
    size_t item_size = sizeof(ros_message->planner_deadline_misses);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: clamped_references
  {
    size_t item_size = sizeof(ros_message->clamped_references);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: clock_hz
  {
    size_t item_size = sizeof(ros_message->clock_hz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sim_time_s
  {
    size_t item_size = sizeof(ros_message->sim_time_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: uavs
  {
    size_t array_size = ros_message->uavs.size;
    auto array_ptr = ros_message->uavs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_swarm_interfaces__msg__UavMetric(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_key_swarm_interfaces__msg__SwarmMetrics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: active_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: active_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: detections_mean_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: latency_mean_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: latency_max_60s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: samples_in_window
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: window_capacity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: coverage_ratio
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ugv_weighted_coverage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: redundancy_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: planner_cycle_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: planner_deadline_misses
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: clamped_references
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: clock_hz
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sim_time_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: uavs
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_swarm_interfaces__msg__UavMetric(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__SwarmMetrics;
    is_plain =
      (
      offsetof(DataType, uavs) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SwarmMetrics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_interfaces__msg__SwarmMetrics * ros_message = static_cast<const swarm_interfaces__msg__SwarmMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_interfaces__msg__SwarmMetrics(ros_message, cdr);
}

static bool _SwarmMetrics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_interfaces__msg__SwarmMetrics * ros_message = static_cast<swarm_interfaces__msg__SwarmMetrics *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_interfaces__msg__SwarmMetrics(cdr, ros_message);
}

static uint32_t _SwarmMetrics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_interfaces__msg__SwarmMetrics(
      untyped_ros_message, 0));
}

static size_t _SwarmMetrics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_interfaces__msg__SwarmMetrics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SwarmMetrics = {
  "swarm_interfaces::msg",
  "SwarmMetrics",
  _SwarmMetrics__cdr_serialize,
  _SwarmMetrics__cdr_deserialize,
  _SwarmMetrics__get_serialized_size,
  _SwarmMetrics__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SwarmMetrics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SwarmMetrics,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__SwarmMetrics__get_type_hash,
  &swarm_interfaces__msg__SwarmMetrics__get_type_description,
  &swarm_interfaces__msg__SwarmMetrics__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_interfaces, msg, SwarmMetrics)() {
  return &_SwarmMetrics__type_support;
}

#if defined(__cplusplus)
}
#endif
