// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__struct.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // average_objects_count, heading_inversion_rate_per_class, interval_average_objects_count, lateral_deviation_max, lateral_deviation_mean, lateral_deviation_min, max_distance_per_class, object_count_per_class, position_jitter_per_class, predicted_path_deviation_mean, sensor_health, size_cv_per_class, total_objects_count, track_fragments_per_class, track_length_per_class, track_purity_per_class, yaw_deviation_mean, yaw_rate_mean
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // average_objects_count, heading_inversion_rate_per_class, interval_average_objects_count, lateral_deviation_max, lateral_deviation_mean, lateral_deviation_min, max_distance_per_class, object_count_per_class, position_jitter_per_class, predicted_path_deviation_mean, sensor_health, size_cv_per_class, total_objects_count, track_fragments_per_class, track_length_per_class, track_purity_per_class, yaw_deviation_mean, yaw_rate_mean
#include "rosidl_runtime_c/string.h"  // classes, params_hash
#include "rosidl_runtime_c/string_functions.h"  // classes, params_hash
#include "std_msgs/msg/detail/header__functions.h"  // header

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


using _ExpectedMetricsNoGt__ros_msg_type = swarm_interfaces__msg__ExpectedMetricsNoGt;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_swarm_interfaces__msg__ExpectedMetricsNoGt(
  const swarm_interfaces__msg__ExpectedMetricsNoGt * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: model_based
  {
    cdr << (ros_message->model_based ? true : false);
  }

  // Field name: params_hash
  {
    const rosidl_runtime_c__String * str = &ros_message->params_hash;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: window_sec
  {
    cdr << ros_message->window_sec;
  }

  // Field name: warming_up
  {
    cdr << (ros_message->warming_up ? true : false);
  }

  // Field name: n_frames_in_window
  {
    cdr << ros_message->n_frames_in_window;
  }

  // Field name: classes
  {
    size_t size = ros_message->classes.size;
    auto array_ptr = ros_message->classes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t size = ros_message->lateral_deviation_mean.size;
    auto array_ptr = ros_message->lateral_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_min
  {
    size_t size = ros_message->lateral_deviation_min.size;
    auto array_ptr = ros_message->lateral_deviation_min.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_max
  {
    size_t size = ros_message->lateral_deviation_max.size;
    auto array_ptr = ros_message->lateral_deviation_max.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_deviation_mean
  {
    size_t size = ros_message->yaw_deviation_mean.size;
    auto array_ptr = ros_message->yaw_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_rate_mean
  {
    size_t size = ros_message->yaw_rate_mean.size;
    auto array_ptr = ros_message->yaw_rate_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t size = ros_message->predicted_path_deviation_mean.size;
    auto array_ptr = ros_message->predicted_path_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: total_objects_count
  {
    size_t size = ros_message->total_objects_count.size;
    auto array_ptr = ros_message->total_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: average_objects_count
  {
    size_t size = ros_message->average_objects_count.size;
    auto array_ptr = ros_message->average_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: interval_average_objects_count
  {
    size_t size = ros_message->interval_average_objects_count.size;
    auto array_ptr = ros_message->interval_average_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: all_object_count
  {
    cdr << ros_message->all_object_count;
  }

  // Field name: object_count_per_class
  {
    size_t size = ros_message->object_count_per_class.size;
    auto array_ptr = ros_message->object_count_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_distance_per_class
  {
    size_t size = ros_message->max_distance_per_class.size;
    auto array_ptr = ros_message->max_distance_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: meas_to_tracked_latency_ms
  {
    cdr << ros_message->meas_to_tracked_latency_ms;
  }

  // Field name: prediction_latency_ms
  {
    cdr << ros_message->prediction_latency_ms;
  }

  // Field name: total_latency_ms
  {
    cdr << ros_message->total_latency_ms;
  }

  // Field name: cross_confirm_rate
  {
    cdr << ros_message->cross_confirm_rate;
  }

  // Field name: unconfirmed_rate
  {
    cdr << ros_message->unconfirmed_rate;
  }

  // Field name: missed_by_other_rate
  {
    cdr << ros_message->missed_by_other_rate;
  }

  // Field name: class_disagree_rate
  {
    cdr << ros_message->class_disagree_rate;
  }

  // Field name: range_discrepancy_mean
  {
    cdr << ros_message->range_discrepancy_mean;
  }

  // Field name: range_discrepancy_p95
  {
    cdr << ros_message->range_discrepancy_p95;
  }

  // Field name: size_cv_per_class
  {
    size_t size = ros_message->size_cv_per_class.size;
    auto array_ptr = ros_message->size_cv_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: position_jitter_per_class
  {
    size_t size = ros_message->position_jitter_per_class.size;
    auto array_ptr = ros_message->position_jitter_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t size = ros_message->heading_inversion_rate_per_class.size;
    auto array_ptr = ros_message->heading_inversion_rate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_fragments_per_class
  {
    size_t size = ros_message->track_fragments_per_class.size;
    auto array_ptr = ros_message->track_fragments_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_purity_per_class
  {
    size_t size = ros_message->track_purity_per_class.size;
    auto array_ptr = ros_message->track_purity_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_length_per_class
  {
    size_t size = ros_message->track_length_per_class.size;
    auto array_ptr = ros_message->track_length_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ece_proxy
  {
    cdr << ros_message->ece_proxy;
  }

  // Field name: unconfirmed_high_conf_rate
  {
    cdr << ros_message->unconfirmed_high_conf_rate;
  }

  // Field name: critical_inconsistency_per_s
  {
    cdr << ros_message->critical_inconsistency_per_s;
  }

  // Field name: sync_offset_ms
  {
    cdr << ros_message->sync_offset_ms;
  }

  // Field name: sensor_health
  {
    size_t size = ros_message->sensor_health.size;
    auto array_ptr = ros_message->sensor_health.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: flight_regime_altitude_m
  {
    cdr << ros_message->flight_regime_altitude_m;
  }

  // Field name: flight_regime_speed_mps
  {
    cdr << ros_message->flight_regime_speed_mps;
  }

  // Field name: flight_regime_climb_rate_mps
  {
    cdr << ros_message->flight_regime_climb_rate_mps;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_deserialize_swarm_interfaces__msg__ExpectedMetricsNoGt(
  eprosima::fastcdr::Cdr & cdr,
  swarm_interfaces__msg__ExpectedMetricsNoGt * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: model_based
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->model_based = tmp ? true : false;
  }

  // Field name: params_hash
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->params_hash.data) {
      rosidl_runtime_c__String__init(&ros_message->params_hash);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->params_hash,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'params_hash'\n");
      return false;
    }
  }

  // Field name: window_sec
  {
    cdr >> ros_message->window_sec;
  }

  // Field name: warming_up
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->warming_up = tmp ? true : false;
  }

  // Field name: n_frames_in_window
  {
    cdr >> ros_message->n_frames_in_window;
  }

  // Field name: classes
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

    if (ros_message->classes.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->classes);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->classes, size)) {
      fprintf(stderr, "failed to create array for field 'classes'");
      return false;
    }
    auto array_ptr = ros_message->classes.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'classes'\n");
        return false;
      }
    }
  }

  // Field name: lateral_deviation_mean
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

    if (ros_message->lateral_deviation_mean.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lateral_deviation_mean);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lateral_deviation_mean, size)) {
      fprintf(stderr, "failed to create array for field 'lateral_deviation_mean'");
      return false;
    }
    auto array_ptr = ros_message->lateral_deviation_mean.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_min
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

    if (ros_message->lateral_deviation_min.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lateral_deviation_min);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lateral_deviation_min, size)) {
      fprintf(stderr, "failed to create array for field 'lateral_deviation_min'");
      return false;
    }
    auto array_ptr = ros_message->lateral_deviation_min.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_max
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

    if (ros_message->lateral_deviation_max.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lateral_deviation_max);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lateral_deviation_max, size)) {
      fprintf(stderr, "failed to create array for field 'lateral_deviation_max'");
      return false;
    }
    auto array_ptr = ros_message->lateral_deviation_max.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: yaw_deviation_mean
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

    if (ros_message->yaw_deviation_mean.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->yaw_deviation_mean);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->yaw_deviation_mean, size)) {
      fprintf(stderr, "failed to create array for field 'yaw_deviation_mean'");
      return false;
    }
    auto array_ptr = ros_message->yaw_deviation_mean.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: yaw_rate_mean
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

    if (ros_message->yaw_rate_mean.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->yaw_rate_mean);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->yaw_rate_mean, size)) {
      fprintf(stderr, "failed to create array for field 'yaw_rate_mean'");
      return false;
    }
    auto array_ptr = ros_message->yaw_rate_mean.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: predicted_path_deviation_mean
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

    if (ros_message->predicted_path_deviation_mean.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->predicted_path_deviation_mean);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->predicted_path_deviation_mean, size)) {
      fprintf(stderr, "failed to create array for field 'predicted_path_deviation_mean'");
      return false;
    }
    auto array_ptr = ros_message->predicted_path_deviation_mean.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: total_objects_count
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

    if (ros_message->total_objects_count.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->total_objects_count);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->total_objects_count, size)) {
      fprintf(stderr, "failed to create array for field 'total_objects_count'");
      return false;
    }
    auto array_ptr = ros_message->total_objects_count.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: average_objects_count
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

    if (ros_message->average_objects_count.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->average_objects_count);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->average_objects_count, size)) {
      fprintf(stderr, "failed to create array for field 'average_objects_count'");
      return false;
    }
    auto array_ptr = ros_message->average_objects_count.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: interval_average_objects_count
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

    if (ros_message->interval_average_objects_count.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->interval_average_objects_count);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->interval_average_objects_count, size)) {
      fprintf(stderr, "failed to create array for field 'interval_average_objects_count'");
      return false;
    }
    auto array_ptr = ros_message->interval_average_objects_count.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: all_object_count
  {
    cdr >> ros_message->all_object_count;
  }

  // Field name: object_count_per_class
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

    if (ros_message->object_count_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->object_count_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->object_count_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'object_count_per_class'");
      return false;
    }
    auto array_ptr = ros_message->object_count_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: max_distance_per_class
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

    if (ros_message->max_distance_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->max_distance_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->max_distance_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'max_distance_per_class'");
      return false;
    }
    auto array_ptr = ros_message->max_distance_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: meas_to_tracked_latency_ms
  {
    cdr >> ros_message->meas_to_tracked_latency_ms;
  }

  // Field name: prediction_latency_ms
  {
    cdr >> ros_message->prediction_latency_ms;
  }

  // Field name: total_latency_ms
  {
    cdr >> ros_message->total_latency_ms;
  }

  // Field name: cross_confirm_rate
  {
    cdr >> ros_message->cross_confirm_rate;
  }

  // Field name: unconfirmed_rate
  {
    cdr >> ros_message->unconfirmed_rate;
  }

  // Field name: missed_by_other_rate
  {
    cdr >> ros_message->missed_by_other_rate;
  }

  // Field name: class_disagree_rate
  {
    cdr >> ros_message->class_disagree_rate;
  }

  // Field name: range_discrepancy_mean
  {
    cdr >> ros_message->range_discrepancy_mean;
  }

  // Field name: range_discrepancy_p95
  {
    cdr >> ros_message->range_discrepancy_p95;
  }

  // Field name: size_cv_per_class
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

    if (ros_message->size_cv_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->size_cv_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->size_cv_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'size_cv_per_class'");
      return false;
    }
    auto array_ptr = ros_message->size_cv_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: position_jitter_per_class
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

    if (ros_message->position_jitter_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->position_jitter_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->position_jitter_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'position_jitter_per_class'");
      return false;
    }
    auto array_ptr = ros_message->position_jitter_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: heading_inversion_rate_per_class
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

    if (ros_message->heading_inversion_rate_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->heading_inversion_rate_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->heading_inversion_rate_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'heading_inversion_rate_per_class'");
      return false;
    }
    auto array_ptr = ros_message->heading_inversion_rate_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: track_fragments_per_class
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

    if (ros_message->track_fragments_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->track_fragments_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->track_fragments_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'track_fragments_per_class'");
      return false;
    }
    auto array_ptr = ros_message->track_fragments_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: track_purity_per_class
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

    if (ros_message->track_purity_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->track_purity_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->track_purity_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'track_purity_per_class'");
      return false;
    }
    auto array_ptr = ros_message->track_purity_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: track_length_per_class
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

    if (ros_message->track_length_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->track_length_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->track_length_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'track_length_per_class'");
      return false;
    }
    auto array_ptr = ros_message->track_length_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: ece_proxy
  {
    cdr >> ros_message->ece_proxy;
  }

  // Field name: unconfirmed_high_conf_rate
  {
    cdr >> ros_message->unconfirmed_high_conf_rate;
  }

  // Field name: critical_inconsistency_per_s
  {
    cdr >> ros_message->critical_inconsistency_per_s;
  }

  // Field name: sync_offset_ms
  {
    cdr >> ros_message->sync_offset_ms;
  }

  // Field name: sensor_health
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

    if (ros_message->sensor_health.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->sensor_health);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->sensor_health, size)) {
      fprintf(stderr, "failed to create array for field 'sensor_health'");
      return false;
    }
    auto array_ptr = ros_message->sensor_health.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: flight_regime_altitude_m
  {
    cdr >> ros_message->flight_regime_altitude_m;
  }

  // Field name: flight_regime_speed_mps
  {
    cdr >> ros_message->flight_regime_speed_mps;
  }

  // Field name: flight_regime_climb_rate_mps
  {
    cdr >> ros_message->flight_regime_climb_rate_mps;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_swarm_interfaces__msg__ExpectedMetricsNoGt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExpectedMetricsNoGt__ros_msg_type * ros_message = static_cast<const _ExpectedMetricsNoGt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: model_based
  {
    size_t item_size = sizeof(ros_message->model_based);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: params_hash
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->params_hash.size + 1);

  // Field name: window_sec
  {
    size_t item_size = sizeof(ros_message->window_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: warming_up
  {
    size_t item_size = sizeof(ros_message->warming_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_frames_in_window
  {
    size_t item_size = sizeof(ros_message->n_frames_in_window);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: classes
  {
    size_t array_size = ros_message->classes.size;
    auto array_ptr = ros_message->classes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t array_size = ros_message->lateral_deviation_mean.size;
    auto array_ptr = ros_message->lateral_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_deviation_min
  {
    size_t array_size = ros_message->lateral_deviation_min.size;
    auto array_ptr = ros_message->lateral_deviation_min.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_deviation_max
  {
    size_t array_size = ros_message->lateral_deviation_max.size;
    auto array_ptr = ros_message->lateral_deviation_max.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_deviation_mean
  {
    size_t array_size = ros_message->yaw_deviation_mean.size;
    auto array_ptr = ros_message->yaw_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_rate_mean
  {
    size_t array_size = ros_message->yaw_rate_mean.size;
    auto array_ptr = ros_message->yaw_rate_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t array_size = ros_message->predicted_path_deviation_mean.size;
    auto array_ptr = ros_message->predicted_path_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_objects_count
  {
    size_t array_size = ros_message->total_objects_count.size;
    auto array_ptr = ros_message->total_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: average_objects_count
  {
    size_t array_size = ros_message->average_objects_count.size;
    auto array_ptr = ros_message->average_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: interval_average_objects_count
  {
    size_t array_size = ros_message->interval_average_objects_count.size;
    auto array_ptr = ros_message->interval_average_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: all_object_count
  {
    size_t item_size = sizeof(ros_message->all_object_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_count_per_class
  {
    size_t array_size = ros_message->object_count_per_class.size;
    auto array_ptr = ros_message->object_count_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_distance_per_class
  {
    size_t array_size = ros_message->max_distance_per_class.size;
    auto array_ptr = ros_message->max_distance_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: meas_to_tracked_latency_ms
  {
    size_t item_size = sizeof(ros_message->meas_to_tracked_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_latency_ms
  {
    size_t item_size = sizeof(ros_message->prediction_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_latency_ms
  {
    size_t item_size = sizeof(ros_message->total_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cross_confirm_rate
  {
    size_t item_size = sizeof(ros_message->cross_confirm_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unconfirmed_rate
  {
    size_t item_size = sizeof(ros_message->unconfirmed_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: missed_by_other_rate
  {
    size_t item_size = sizeof(ros_message->missed_by_other_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: class_disagree_rate
  {
    size_t item_size = sizeof(ros_message->class_disagree_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_discrepancy_mean
  {
    size_t item_size = sizeof(ros_message->range_discrepancy_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_discrepancy_p95
  {
    size_t item_size = sizeof(ros_message->range_discrepancy_p95);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: size_cv_per_class
  {
    size_t array_size = ros_message->size_cv_per_class.size;
    auto array_ptr = ros_message->size_cv_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_jitter_per_class
  {
    size_t array_size = ros_message->position_jitter_per_class.size;
    auto array_ptr = ros_message->position_jitter_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t array_size = ros_message->heading_inversion_rate_per_class.size;
    auto array_ptr = ros_message->heading_inversion_rate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_fragments_per_class
  {
    size_t array_size = ros_message->track_fragments_per_class.size;
    auto array_ptr = ros_message->track_fragments_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_purity_per_class
  {
    size_t array_size = ros_message->track_purity_per_class.size;
    auto array_ptr = ros_message->track_purity_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_length_per_class
  {
    size_t array_size = ros_message->track_length_per_class.size;
    auto array_ptr = ros_message->track_length_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece_proxy
  {
    size_t item_size = sizeof(ros_message->ece_proxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unconfirmed_high_conf_rate
  {
    size_t item_size = sizeof(ros_message->unconfirmed_high_conf_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_inconsistency_per_s
  {
    size_t item_size = sizeof(ros_message->critical_inconsistency_per_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sync_offset_ms
  {
    size_t item_size = sizeof(ros_message->sync_offset_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_health
  {
    size_t array_size = ros_message->sensor_health.size;
    auto array_ptr = ros_message->sensor_health.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_altitude_m
  {
    size_t item_size = sizeof(ros_message->flight_regime_altitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_speed_mps
  {
    size_t item_size = sizeof(ros_message->flight_regime_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_climb_rate_mps
  {
    size_t item_size = sizeof(ros_message->flight_regime_climb_rate_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_swarm_interfaces__msg__ExpectedMetricsNoGt(
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

  // Field name: model_based
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: params_hash
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: window_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: warming_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: n_frames_in_window
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: classes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lateral_deviation_min
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lateral_deviation_max
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_rate_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: average_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: interval_average_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: all_object_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: object_count_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_distance_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: meas_to_tracked_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: prediction_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cross_confirm_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: unconfirmed_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: missed_by_other_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: class_disagree_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_discrepancy_mean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_discrepancy_p95
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: size_cv_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position_jitter_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_fragments_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_purity_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_length_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ece_proxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: unconfirmed_high_conf_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: critical_inconsistency_per_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sync_offset_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sensor_health
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: flight_regime_altitude_m
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: flight_regime_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: flight_regime_climb_rate_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__ExpectedMetricsNoGt;
    is_plain =
      (
      offsetof(DataType, flight_regime_climb_rate_mps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_key_swarm_interfaces__msg__ExpectedMetricsNoGt(
  const swarm_interfaces__msg__ExpectedMetricsNoGt * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: model_based
  {
    cdr << (ros_message->model_based ? true : false);
  }

  // Field name: params_hash
  {
    const rosidl_runtime_c__String * str = &ros_message->params_hash;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: window_sec
  {
    cdr << ros_message->window_sec;
  }

  // Field name: warming_up
  {
    cdr << (ros_message->warming_up ? true : false);
  }

  // Field name: n_frames_in_window
  {
    cdr << ros_message->n_frames_in_window;
  }

  // Field name: classes
  {
    size_t size = ros_message->classes.size;
    auto array_ptr = ros_message->classes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t size = ros_message->lateral_deviation_mean.size;
    auto array_ptr = ros_message->lateral_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_min
  {
    size_t size = ros_message->lateral_deviation_min.size;
    auto array_ptr = ros_message->lateral_deviation_min.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: lateral_deviation_max
  {
    size_t size = ros_message->lateral_deviation_max.size;
    auto array_ptr = ros_message->lateral_deviation_max.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_deviation_mean
  {
    size_t size = ros_message->yaw_deviation_mean.size;
    auto array_ptr = ros_message->yaw_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: yaw_rate_mean
  {
    size_t size = ros_message->yaw_rate_mean.size;
    auto array_ptr = ros_message->yaw_rate_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t size = ros_message->predicted_path_deviation_mean.size;
    auto array_ptr = ros_message->predicted_path_deviation_mean.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: total_objects_count
  {
    size_t size = ros_message->total_objects_count.size;
    auto array_ptr = ros_message->total_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: average_objects_count
  {
    size_t size = ros_message->average_objects_count.size;
    auto array_ptr = ros_message->average_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: interval_average_objects_count
  {
    size_t size = ros_message->interval_average_objects_count.size;
    auto array_ptr = ros_message->interval_average_objects_count.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: all_object_count
  {
    cdr << ros_message->all_object_count;
  }

  // Field name: object_count_per_class
  {
    size_t size = ros_message->object_count_per_class.size;
    auto array_ptr = ros_message->object_count_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: max_distance_per_class
  {
    size_t size = ros_message->max_distance_per_class.size;
    auto array_ptr = ros_message->max_distance_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: meas_to_tracked_latency_ms
  {
    cdr << ros_message->meas_to_tracked_latency_ms;
  }

  // Field name: prediction_latency_ms
  {
    cdr << ros_message->prediction_latency_ms;
  }

  // Field name: total_latency_ms
  {
    cdr << ros_message->total_latency_ms;
  }

  // Field name: cross_confirm_rate
  {
    cdr << ros_message->cross_confirm_rate;
  }

  // Field name: unconfirmed_rate
  {
    cdr << ros_message->unconfirmed_rate;
  }

  // Field name: missed_by_other_rate
  {
    cdr << ros_message->missed_by_other_rate;
  }

  // Field name: class_disagree_rate
  {
    cdr << ros_message->class_disagree_rate;
  }

  // Field name: range_discrepancy_mean
  {
    cdr << ros_message->range_discrepancy_mean;
  }

  // Field name: range_discrepancy_p95
  {
    cdr << ros_message->range_discrepancy_p95;
  }

  // Field name: size_cv_per_class
  {
    size_t size = ros_message->size_cv_per_class.size;
    auto array_ptr = ros_message->size_cv_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: position_jitter_per_class
  {
    size_t size = ros_message->position_jitter_per_class.size;
    auto array_ptr = ros_message->position_jitter_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t size = ros_message->heading_inversion_rate_per_class.size;
    auto array_ptr = ros_message->heading_inversion_rate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_fragments_per_class
  {
    size_t size = ros_message->track_fragments_per_class.size;
    auto array_ptr = ros_message->track_fragments_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_purity_per_class
  {
    size_t size = ros_message->track_purity_per_class.size;
    auto array_ptr = ros_message->track_purity_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: track_length_per_class
  {
    size_t size = ros_message->track_length_per_class.size;
    auto array_ptr = ros_message->track_length_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ece_proxy
  {
    cdr << ros_message->ece_proxy;
  }

  // Field name: unconfirmed_high_conf_rate
  {
    cdr << ros_message->unconfirmed_high_conf_rate;
  }

  // Field name: critical_inconsistency_per_s
  {
    cdr << ros_message->critical_inconsistency_per_s;
  }

  // Field name: sync_offset_ms
  {
    cdr << ros_message->sync_offset_ms;
  }

  // Field name: sensor_health
  {
    size_t size = ros_message->sensor_health.size;
    auto array_ptr = ros_message->sensor_health.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: flight_regime_altitude_m
  {
    cdr << ros_message->flight_regime_altitude_m;
  }

  // Field name: flight_regime_speed_mps
  {
    cdr << ros_message->flight_regime_speed_mps;
  }

  // Field name: flight_regime_climb_rate_mps
  {
    cdr << ros_message->flight_regime_climb_rate_mps;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_key_swarm_interfaces__msg__ExpectedMetricsNoGt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExpectedMetricsNoGt__ros_msg_type * ros_message = static_cast<const _ExpectedMetricsNoGt__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: model_based
  {
    size_t item_size = sizeof(ros_message->model_based);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: params_hash
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->params_hash.size + 1);

  // Field name: window_sec
  {
    size_t item_size = sizeof(ros_message->window_sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: warming_up
  {
    size_t item_size = sizeof(ros_message->warming_up);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_frames_in_window
  {
    size_t item_size = sizeof(ros_message->n_frames_in_window);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: classes
  {
    size_t array_size = ros_message->classes.size;
    auto array_ptr = ros_message->classes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t array_size = ros_message->lateral_deviation_mean.size;
    auto array_ptr = ros_message->lateral_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_deviation_min
  {
    size_t array_size = ros_message->lateral_deviation_min.size;
    auto array_ptr = ros_message->lateral_deviation_min.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: lateral_deviation_max
  {
    size_t array_size = ros_message->lateral_deviation_max.size;
    auto array_ptr = ros_message->lateral_deviation_max.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_deviation_mean
  {
    size_t array_size = ros_message->yaw_deviation_mean.size;
    auto array_ptr = ros_message->yaw_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: yaw_rate_mean
  {
    size_t array_size = ros_message->yaw_rate_mean.size;
    auto array_ptr = ros_message->yaw_rate_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t array_size = ros_message->predicted_path_deviation_mean.size;
    auto array_ptr = ros_message->predicted_path_deviation_mean.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_objects_count
  {
    size_t array_size = ros_message->total_objects_count.size;
    auto array_ptr = ros_message->total_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: average_objects_count
  {
    size_t array_size = ros_message->average_objects_count.size;
    auto array_ptr = ros_message->average_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: interval_average_objects_count
  {
    size_t array_size = ros_message->interval_average_objects_count.size;
    auto array_ptr = ros_message->interval_average_objects_count.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: all_object_count
  {
    size_t item_size = sizeof(ros_message->all_object_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_count_per_class
  {
    size_t array_size = ros_message->object_count_per_class.size;
    auto array_ptr = ros_message->object_count_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_distance_per_class
  {
    size_t array_size = ros_message->max_distance_per_class.size;
    auto array_ptr = ros_message->max_distance_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: meas_to_tracked_latency_ms
  {
    size_t item_size = sizeof(ros_message->meas_to_tracked_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: prediction_latency_ms
  {
    size_t item_size = sizeof(ros_message->prediction_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: total_latency_ms
  {
    size_t item_size = sizeof(ros_message->total_latency_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cross_confirm_rate
  {
    size_t item_size = sizeof(ros_message->cross_confirm_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unconfirmed_rate
  {
    size_t item_size = sizeof(ros_message->unconfirmed_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: missed_by_other_rate
  {
    size_t item_size = sizeof(ros_message->missed_by_other_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: class_disagree_rate
  {
    size_t item_size = sizeof(ros_message->class_disagree_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_discrepancy_mean
  {
    size_t item_size = sizeof(ros_message->range_discrepancy_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: range_discrepancy_p95
  {
    size_t item_size = sizeof(ros_message->range_discrepancy_p95);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: size_cv_per_class
  {
    size_t array_size = ros_message->size_cv_per_class.size;
    auto array_ptr = ros_message->size_cv_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_jitter_per_class
  {
    size_t array_size = ros_message->position_jitter_per_class.size;
    auto array_ptr = ros_message->position_jitter_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t array_size = ros_message->heading_inversion_rate_per_class.size;
    auto array_ptr = ros_message->heading_inversion_rate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_fragments_per_class
  {
    size_t array_size = ros_message->track_fragments_per_class.size;
    auto array_ptr = ros_message->track_fragments_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_purity_per_class
  {
    size_t array_size = ros_message->track_purity_per_class.size;
    auto array_ptr = ros_message->track_purity_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: track_length_per_class
  {
    size_t array_size = ros_message->track_length_per_class.size;
    auto array_ptr = ros_message->track_length_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece_proxy
  {
    size_t item_size = sizeof(ros_message->ece_proxy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: unconfirmed_high_conf_rate
  {
    size_t item_size = sizeof(ros_message->unconfirmed_high_conf_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_inconsistency_per_s
  {
    size_t item_size = sizeof(ros_message->critical_inconsistency_per_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sync_offset_ms
  {
    size_t item_size = sizeof(ros_message->sync_offset_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_health
  {
    size_t array_size = ros_message->sensor_health.size;
    auto array_ptr = ros_message->sensor_health.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_altitude_m
  {
    size_t item_size = sizeof(ros_message->flight_regime_altitude_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_speed_mps
  {
    size_t item_size = sizeof(ros_message->flight_regime_speed_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flight_regime_climb_rate_mps
  {
    size_t item_size = sizeof(ros_message->flight_regime_climb_rate_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_key_swarm_interfaces__msg__ExpectedMetricsNoGt(
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

  // Field name: model_based
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: params_hash
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: window_sec
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: warming_up
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: n_frames_in_window
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: classes
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: lateral_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lateral_deviation_min
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: lateral_deviation_max
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: yaw_rate_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: predicted_path_deviation_mean
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: average_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: interval_average_objects_count
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: all_object_count
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: object_count_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: max_distance_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: meas_to_tracked_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: prediction_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: total_latency_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cross_confirm_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: unconfirmed_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: missed_by_other_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: class_disagree_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_discrepancy_mean
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: range_discrepancy_p95
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: size_cv_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position_jitter_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: heading_inversion_rate_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_fragments_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_purity_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: track_length_per_class
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ece_proxy
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: unconfirmed_high_conf_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: critical_inconsistency_per_s
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sync_offset_ms
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: sensor_health
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: flight_regime_altitude_m
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: flight_regime_speed_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: flight_regime_climb_rate_mps
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__ExpectedMetricsNoGt;
    is_plain =
      (
      offsetof(DataType, flight_regime_climb_rate_mps) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ExpectedMetricsNoGt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_interfaces__msg__ExpectedMetricsNoGt * ros_message = static_cast<const swarm_interfaces__msg__ExpectedMetricsNoGt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_interfaces__msg__ExpectedMetricsNoGt(ros_message, cdr);
}

static bool _ExpectedMetricsNoGt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_interfaces__msg__ExpectedMetricsNoGt * ros_message = static_cast<swarm_interfaces__msg__ExpectedMetricsNoGt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_interfaces__msg__ExpectedMetricsNoGt(cdr, ros_message);
}

static uint32_t _ExpectedMetricsNoGt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_interfaces__msg__ExpectedMetricsNoGt(
      untyped_ros_message, 0));
}

static size_t _ExpectedMetricsNoGt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_interfaces__msg__ExpectedMetricsNoGt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExpectedMetricsNoGt = {
  "swarm_interfaces::msg",
  "ExpectedMetricsNoGt",
  _ExpectedMetricsNoGt__cdr_serialize,
  _ExpectedMetricsNoGt__cdr_deserialize,
  _ExpectedMetricsNoGt__get_serialized_size,
  _ExpectedMetricsNoGt__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ExpectedMetricsNoGt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExpectedMetricsNoGt,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_interfaces, msg, ExpectedMetricsNoGt)() {
  return &_ExpectedMetricsNoGt__type_support;
}

#if defined(__cplusplus)
}
#endif
