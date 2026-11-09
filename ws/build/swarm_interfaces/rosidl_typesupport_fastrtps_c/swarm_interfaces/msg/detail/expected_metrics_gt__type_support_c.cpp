// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/expected_metrics_gt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "swarm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__struct.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ap_per_class, aph_per_class, confusion_values, corner_mean_per_class, corner_p95_per_class, cw_map_per_class, err_aoe_per_class, err_ase_per_class, err_ate_per_class, err_ave_per_class, err_dist_mean_per_class, err_dist_rms_per_class, err_vel_mean_per_class, err_yaw_mean_per_class, err_yaw_std_per_class, expected_fn_per_class, expected_fp_per_class, expected_tp_per_class, f1_max_per_class, flip_rate_per_class, fn_span_mean_per_class, id_switch_per_class, mota_per_class, motp_per_class, n_gt_per_class, nsurf_mean_per_class, optimal_conf_per_class, ratio_fn_per_class, ratio_fp_per_class, ratio_tp_per_class
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ap_per_class, aph_per_class, confusion_values, corner_mean_per_class, corner_p95_per_class, cw_map_per_class, err_aoe_per_class, err_ase_per_class, err_ate_per_class, err_ave_per_class, err_dist_mean_per_class, err_dist_rms_per_class, err_vel_mean_per_class, err_yaw_mean_per_class, err_yaw_std_per_class, expected_fn_per_class, expected_fp_per_class, expected_tp_per_class, f1_max_per_class, flip_rate_per_class, fn_span_mean_per_class, id_switch_per_class, mota_per_class, motp_per_class, n_gt_per_class, nsurf_mean_per_class, optimal_conf_per_class, ratio_fn_per_class, ratio_fp_per_class, ratio_tp_per_class
#include "rosidl_runtime_c/string.h"  // classes, confusion_pairs, params_hash
#include "rosidl_runtime_c/string_functions.h"  // classes, confusion_pairs, params_hash
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


using _ExpectedMetricsGt__ros_msg_type = swarm_interfaces__msg__ExpectedMetricsGt;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_swarm_interfaces__msg__ExpectedMetricsGt(
  const swarm_interfaces__msg__ExpectedMetricsGt * ros_message,
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

  // Field name: map
  {
    cdr << ros_message->map;
  }

  // Field name: maph
  {
    cdr << ros_message->maph;
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

  // Field name: ap_per_class
  {
    size_t size = ros_message->ap_per_class.size;
    auto array_ptr = ros_message->ap_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: aph_per_class
  {
    size_t size = ros_message->aph_per_class.size;
    auto array_ptr = ros_message->aph_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: f1_max_per_class
  {
    size_t size = ros_message->f1_max_per_class.size;
    auto array_ptr = ros_message->f1_max_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: optimal_conf_per_class
  {
    size_t size = ros_message->optimal_conf_per_class.size;
    auto array_ptr = ros_message->optimal_conf_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_tp_per_class
  {
    size_t size = ros_message->ratio_tp_per_class.size;
    auto array_ptr = ros_message->ratio_tp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_fp_per_class
  {
    size_t size = ros_message->ratio_fp_per_class.size;
    auto array_ptr = ros_message->ratio_fp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_fn_per_class
  {
    size_t size = ros_message->ratio_fn_per_class.size;
    auto array_ptr = ros_message->ratio_fn_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_dist_mean_per_class
  {
    size_t size = ros_message->err_dist_mean_per_class.size;
    auto array_ptr = ros_message->err_dist_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_dist_rms_per_class
  {
    size_t size = ros_message->err_dist_rms_per_class.size;
    auto array_ptr = ros_message->err_dist_rms_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_yaw_mean_per_class
  {
    size_t size = ros_message->err_yaw_mean_per_class.size;
    auto array_ptr = ros_message->err_yaw_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_yaw_std_per_class
  {
    size_t size = ros_message->err_yaw_std_per_class.size;
    auto array_ptr = ros_message->err_yaw_std_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_vel_mean_per_class
  {
    size_t size = ros_message->err_vel_mean_per_class.size;
    auto array_ptr = ros_message->err_vel_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: motp_per_class
  {
    size_t size = ros_message->motp_per_class.size;
    auto array_ptr = ros_message->motp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mota_per_class
  {
    size_t size = ros_message->mota_per_class.size;
    auto array_ptr = ros_message->mota_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: id_switch_per_class
  {
    size_t size = ros_message->id_switch_per_class.size;
    auto array_ptr = ros_message->id_switch_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pred_ade
  {
    cdr << ros_message->pred_ade;
  }

  // Field name: pred_fde
  {
    cdr << ros_message->pred_fde;
  }

  // Field name: pred_miss_rate
  {
    cdr << ros_message->pred_miss_rate;
  }

  // Field name: corner_mean_per_class
  {
    size_t size = ros_message->corner_mean_per_class.size;
    auto array_ptr = ros_message->corner_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: corner_p95_per_class
  {
    size_t size = ros_message->corner_p95_per_class.size;
    auto array_ptr = ros_message->corner_p95_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: flip_rate_per_class
  {
    size_t size = ros_message->flip_rate_per_class.size;
    auto array_ptr = ros_message->flip_rate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mflip_rate
  {
    cdr << ros_message->mflip_rate;
  }

  // Field name: nsurf_mean_per_class
  {
    size_t size = ros_message->nsurf_mean_per_class.size;
    auto array_ptr = ros_message->nsurf_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ece
  {
    cdr << ros_message->ece;
  }

  // Field name: ece_macro
  {
    cdr << ros_message->ece_macro;
  }

  // Field name: confident_error_rate
  {
    cdr << ros_message->confident_error_rate;
  }

  // Field name: confident_errors_per_frame
  {
    cdr << ros_message->confident_errors_per_frame;
  }

  // Field name: confusion_pairs
  {
    size_t size = ros_message->confusion_pairs.size;
    auto array_ptr = ros_message->confusion_pairs.data;
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

  // Field name: confusion_values
  {
    size_t size = ros_message->confusion_values.size;
    auto array_ptr = ros_message->confusion_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: critical_fp
  {
    cdr << ros_message->critical_fp;
  }

  // Field name: critical_fn
  {
    cdr << ros_message->critical_fn;
  }

  // Field name: cw_map
  {
    cdr << ros_message->cw_map;
  }

  // Field name: cw_map_per_class
  {
    size_t size = ros_message->cw_map_per_class.size;
    auto array_ptr = ros_message->cw_map_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fn_span_mean_per_class
  {
    size_t size = ros_message->fn_span_mean_per_class.size;
    auto array_ptr = ros_message->fn_span_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pass_rate_num_tp
  {
    cdr << ros_message->pass_rate_num_tp;
  }

  // Field name: pass_rate_num_gt_tp
  {
    cdr << ros_message->pass_rate_num_gt_tp;
  }

  // Field name: pass_rate_metrics_score
  {
    cdr << ros_message->pass_rate_metrics_score;
  }

  // Field name: err_ate_per_class
  {
    size_t size = ros_message->err_ate_per_class.size;
    auto array_ptr = ros_message->err_ate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_aoe_per_class
  {
    size_t size = ros_message->err_aoe_per_class.size;
    auto array_ptr = ros_message->err_aoe_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_ase_per_class
  {
    size_t size = ros_message->err_ase_per_class.size;
    auto array_ptr = ros_message->err_ase_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_ave_per_class
  {
    size_t size = ros_message->err_ave_per_class.size;
    auto array_ptr = ros_message->err_ave_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: n_gt_total
  {
    cdr << ros_message->n_gt_total;
  }

  // Field name: expected_tp_total
  {
    cdr << ros_message->expected_tp_total;
  }

  // Field name: expected_fp_total
  {
    cdr << ros_message->expected_fp_total;
  }

  // Field name: expected_fn_total
  {
    cdr << ros_message->expected_fn_total;
  }

  // Field name: n_gt_per_class
  {
    size_t size = ros_message->n_gt_per_class.size;
    auto array_ptr = ros_message->n_gt_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_tp_per_class
  {
    size_t size = ros_message->expected_tp_per_class.size;
    auto array_ptr = ros_message->expected_tp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_fp_per_class
  {
    size_t size = ros_message->expected_fp_per_class.size;
    auto array_ptr = ros_message->expected_fp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_fn_per_class
  {
    size_t size = ros_message->expected_fn_per_class.size;
    auto array_ptr = ros_message->expected_fn_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_deserialize_swarm_interfaces__msg__ExpectedMetricsGt(
  eprosima::fastcdr::Cdr & cdr,
  swarm_interfaces__msg__ExpectedMetricsGt * ros_message)
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

  // Field name: map
  {
    cdr >> ros_message->map;
  }

  // Field name: maph
  {
    cdr >> ros_message->maph;
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

  // Field name: ap_per_class
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

    if (ros_message->ap_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ap_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ap_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'ap_per_class'");
      return false;
    }
    auto array_ptr = ros_message->ap_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: aph_per_class
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

    if (ros_message->aph_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->aph_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->aph_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'aph_per_class'");
      return false;
    }
    auto array_ptr = ros_message->aph_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: f1_max_per_class
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

    if (ros_message->f1_max_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->f1_max_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->f1_max_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'f1_max_per_class'");
      return false;
    }
    auto array_ptr = ros_message->f1_max_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: optimal_conf_per_class
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

    if (ros_message->optimal_conf_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->optimal_conf_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->optimal_conf_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'optimal_conf_per_class'");
      return false;
    }
    auto array_ptr = ros_message->optimal_conf_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: ratio_tp_per_class
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

    if (ros_message->ratio_tp_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ratio_tp_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ratio_tp_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'ratio_tp_per_class'");
      return false;
    }
    auto array_ptr = ros_message->ratio_tp_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: ratio_fp_per_class
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

    if (ros_message->ratio_fp_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ratio_fp_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ratio_fp_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'ratio_fp_per_class'");
      return false;
    }
    auto array_ptr = ros_message->ratio_fp_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: ratio_fn_per_class
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

    if (ros_message->ratio_fn_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ratio_fn_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ratio_fn_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'ratio_fn_per_class'");
      return false;
    }
    auto array_ptr = ros_message->ratio_fn_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_dist_mean_per_class
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

    if (ros_message->err_dist_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_dist_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_dist_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_dist_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_dist_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_dist_rms_per_class
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

    if (ros_message->err_dist_rms_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_dist_rms_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_dist_rms_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_dist_rms_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_dist_rms_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_yaw_mean_per_class
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

    if (ros_message->err_yaw_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_yaw_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_yaw_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_yaw_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_yaw_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_yaw_std_per_class
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

    if (ros_message->err_yaw_std_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_yaw_std_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_yaw_std_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_yaw_std_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_yaw_std_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_vel_mean_per_class
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

    if (ros_message->err_vel_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_vel_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_vel_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_vel_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_vel_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: motp_per_class
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

    if (ros_message->motp_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->motp_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->motp_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'motp_per_class'");
      return false;
    }
    auto array_ptr = ros_message->motp_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: mota_per_class
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

    if (ros_message->mota_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->mota_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->mota_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'mota_per_class'");
      return false;
    }
    auto array_ptr = ros_message->mota_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: id_switch_per_class
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

    if (ros_message->id_switch_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->id_switch_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->id_switch_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'id_switch_per_class'");
      return false;
    }
    auto array_ptr = ros_message->id_switch_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pred_ade
  {
    cdr >> ros_message->pred_ade;
  }

  // Field name: pred_fde
  {
    cdr >> ros_message->pred_fde;
  }

  // Field name: pred_miss_rate
  {
    cdr >> ros_message->pred_miss_rate;
  }

  // Field name: corner_mean_per_class
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

    if (ros_message->corner_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->corner_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->corner_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'corner_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->corner_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: corner_p95_per_class
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

    if (ros_message->corner_p95_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->corner_p95_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->corner_p95_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'corner_p95_per_class'");
      return false;
    }
    auto array_ptr = ros_message->corner_p95_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: flip_rate_per_class
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

    if (ros_message->flip_rate_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->flip_rate_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->flip_rate_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'flip_rate_per_class'");
      return false;
    }
    auto array_ptr = ros_message->flip_rate_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: mflip_rate
  {
    cdr >> ros_message->mflip_rate;
  }

  // Field name: nsurf_mean_per_class
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

    if (ros_message->nsurf_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->nsurf_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->nsurf_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'nsurf_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->nsurf_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: ece
  {
    cdr >> ros_message->ece;
  }

  // Field name: ece_macro
  {
    cdr >> ros_message->ece_macro;
  }

  // Field name: confident_error_rate
  {
    cdr >> ros_message->confident_error_rate;
  }

  // Field name: confident_errors_per_frame
  {
    cdr >> ros_message->confident_errors_per_frame;
  }

  // Field name: confusion_pairs
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

    if (ros_message->confusion_pairs.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->confusion_pairs);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->confusion_pairs, size)) {
      fprintf(stderr, "failed to create array for field 'confusion_pairs'");
      return false;
    }
    auto array_ptr = ros_message->confusion_pairs.data;
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
        fprintf(stderr, "failed to assign string into field 'confusion_pairs'\n");
        return false;
      }
    }
  }

  // Field name: confusion_values
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

    if (ros_message->confusion_values.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->confusion_values);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->confusion_values, size)) {
      fprintf(stderr, "failed to create array for field 'confusion_values'");
      return false;
    }
    auto array_ptr = ros_message->confusion_values.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: critical_fp
  {
    cdr >> ros_message->critical_fp;
  }

  // Field name: critical_fn
  {
    cdr >> ros_message->critical_fn;
  }

  // Field name: cw_map
  {
    cdr >> ros_message->cw_map;
  }

  // Field name: cw_map_per_class
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

    if (ros_message->cw_map_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cw_map_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cw_map_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'cw_map_per_class'");
      return false;
    }
    auto array_ptr = ros_message->cw_map_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: fn_span_mean_per_class
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

    if (ros_message->fn_span_mean_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->fn_span_mean_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->fn_span_mean_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'fn_span_mean_per_class'");
      return false;
    }
    auto array_ptr = ros_message->fn_span_mean_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: pass_rate_num_tp
  {
    cdr >> ros_message->pass_rate_num_tp;
  }

  // Field name: pass_rate_num_gt_tp
  {
    cdr >> ros_message->pass_rate_num_gt_tp;
  }

  // Field name: pass_rate_metrics_score
  {
    cdr >> ros_message->pass_rate_metrics_score;
  }

  // Field name: err_ate_per_class
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

    if (ros_message->err_ate_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_ate_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_ate_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_ate_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_ate_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_aoe_per_class
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

    if (ros_message->err_aoe_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_aoe_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_aoe_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_aoe_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_aoe_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_ase_per_class
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

    if (ros_message->err_ase_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_ase_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_ase_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_ase_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_ase_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: err_ave_per_class
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

    if (ros_message->err_ave_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->err_ave_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->err_ave_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'err_ave_per_class'");
      return false;
    }
    auto array_ptr = ros_message->err_ave_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: n_gt_total
  {
    cdr >> ros_message->n_gt_total;
  }

  // Field name: expected_tp_total
  {
    cdr >> ros_message->expected_tp_total;
  }

  // Field name: expected_fp_total
  {
    cdr >> ros_message->expected_fp_total;
  }

  // Field name: expected_fn_total
  {
    cdr >> ros_message->expected_fn_total;
  }

  // Field name: n_gt_per_class
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

    if (ros_message->n_gt_per_class.data) {
      rosidl_runtime_c__uint32__Sequence__fini(&ros_message->n_gt_per_class);
    }
    if (!rosidl_runtime_c__uint32__Sequence__init(&ros_message->n_gt_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'n_gt_per_class'");
      return false;
    }
    auto array_ptr = ros_message->n_gt_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: expected_tp_per_class
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

    if (ros_message->expected_tp_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->expected_tp_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->expected_tp_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'expected_tp_per_class'");
      return false;
    }
    auto array_ptr = ros_message->expected_tp_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: expected_fp_per_class
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

    if (ros_message->expected_fp_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->expected_fp_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->expected_fp_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'expected_fp_per_class'");
      return false;
    }
    auto array_ptr = ros_message->expected_fp_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: expected_fn_per_class
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

    if (ros_message->expected_fn_per_class.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->expected_fn_per_class);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->expected_fn_per_class, size)) {
      fprintf(stderr, "failed to create array for field 'expected_fn_per_class'");
      return false;
    }
    auto array_ptr = ros_message->expected_fn_per_class.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_swarm_interfaces__msg__ExpectedMetricsGt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExpectedMetricsGt__ros_msg_type * ros_message = static_cast<const _ExpectedMetricsGt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: map
  {
    size_t item_size = sizeof(ros_message->map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: maph
  {
    size_t item_size = sizeof(ros_message->maph);
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

  // Field name: ap_per_class
  {
    size_t array_size = ros_message->ap_per_class.size;
    auto array_ptr = ros_message->ap_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aph_per_class
  {
    size_t array_size = ros_message->aph_per_class.size;
    auto array_ptr = ros_message->aph_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: f1_max_per_class
  {
    size_t array_size = ros_message->f1_max_per_class.size;
    auto array_ptr = ros_message->f1_max_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: optimal_conf_per_class
  {
    size_t array_size = ros_message->optimal_conf_per_class.size;
    auto array_ptr = ros_message->optimal_conf_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_tp_per_class
  {
    size_t array_size = ros_message->ratio_tp_per_class.size;
    auto array_ptr = ros_message->ratio_tp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_fp_per_class
  {
    size_t array_size = ros_message->ratio_fp_per_class.size;
    auto array_ptr = ros_message->ratio_fp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_fn_per_class
  {
    size_t array_size = ros_message->ratio_fn_per_class.size;
    auto array_ptr = ros_message->ratio_fn_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_dist_mean_per_class
  {
    size_t array_size = ros_message->err_dist_mean_per_class.size;
    auto array_ptr = ros_message->err_dist_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_dist_rms_per_class
  {
    size_t array_size = ros_message->err_dist_rms_per_class.size;
    auto array_ptr = ros_message->err_dist_rms_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_yaw_mean_per_class
  {
    size_t array_size = ros_message->err_yaw_mean_per_class.size;
    auto array_ptr = ros_message->err_yaw_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_yaw_std_per_class
  {
    size_t array_size = ros_message->err_yaw_std_per_class.size;
    auto array_ptr = ros_message->err_yaw_std_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_vel_mean_per_class
  {
    size_t array_size = ros_message->err_vel_mean_per_class.size;
    auto array_ptr = ros_message->err_vel_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motp_per_class
  {
    size_t array_size = ros_message->motp_per_class.size;
    auto array_ptr = ros_message->motp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mota_per_class
  {
    size_t array_size = ros_message->mota_per_class.size;
    auto array_ptr = ros_message->mota_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: id_switch_per_class
  {
    size_t array_size = ros_message->id_switch_per_class.size;
    auto array_ptr = ros_message->id_switch_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_ade
  {
    size_t item_size = sizeof(ros_message->pred_ade);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_fde
  {
    size_t item_size = sizeof(ros_message->pred_fde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_miss_rate
  {
    size_t item_size = sizeof(ros_message->pred_miss_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: corner_mean_per_class
  {
    size_t array_size = ros_message->corner_mean_per_class.size;
    auto array_ptr = ros_message->corner_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: corner_p95_per_class
  {
    size_t array_size = ros_message->corner_p95_per_class.size;
    auto array_ptr = ros_message->corner_p95_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flip_rate_per_class
  {
    size_t array_size = ros_message->flip_rate_per_class.size;
    auto array_ptr = ros_message->flip_rate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mflip_rate
  {
    size_t item_size = sizeof(ros_message->mflip_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nsurf_mean_per_class
  {
    size_t array_size = ros_message->nsurf_mean_per_class.size;
    auto array_ptr = ros_message->nsurf_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece
  {
    size_t item_size = sizeof(ros_message->ece);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece_macro
  {
    size_t item_size = sizeof(ros_message->ece_macro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confident_error_rate
  {
    size_t item_size = sizeof(ros_message->confident_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confident_errors_per_frame
  {
    size_t item_size = sizeof(ros_message->confident_errors_per_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confusion_pairs
  {
    size_t array_size = ros_message->confusion_pairs.size;
    auto array_ptr = ros_message->confusion_pairs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: confusion_values
  {
    size_t array_size = ros_message->confusion_values.size;
    auto array_ptr = ros_message->confusion_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_fp
  {
    size_t item_size = sizeof(ros_message->critical_fp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_fn
  {
    size_t item_size = sizeof(ros_message->critical_fn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cw_map
  {
    size_t item_size = sizeof(ros_message->cw_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cw_map_per_class
  {
    size_t array_size = ros_message->cw_map_per_class.size;
    auto array_ptr = ros_message->cw_map_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fn_span_mean_per_class
  {
    size_t array_size = ros_message->fn_span_mean_per_class.size;
    auto array_ptr = ros_message->fn_span_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_num_tp
  {
    size_t item_size = sizeof(ros_message->pass_rate_num_tp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_num_gt_tp
  {
    size_t item_size = sizeof(ros_message->pass_rate_num_gt_tp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_metrics_score
  {
    size_t item_size = sizeof(ros_message->pass_rate_metrics_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ate_per_class
  {
    size_t array_size = ros_message->err_ate_per_class.size;
    auto array_ptr = ros_message->err_ate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_aoe_per_class
  {
    size_t array_size = ros_message->err_aoe_per_class.size;
    auto array_ptr = ros_message->err_aoe_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ase_per_class
  {
    size_t array_size = ros_message->err_ase_per_class.size;
    auto array_ptr = ros_message->err_ase_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ave_per_class
  {
    size_t array_size = ros_message->err_ave_per_class.size;
    auto array_ptr = ros_message->err_ave_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_gt_total
  {
    size_t item_size = sizeof(ros_message->n_gt_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_tp_total
  {
    size_t item_size = sizeof(ros_message->expected_tp_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fp_total
  {
    size_t item_size = sizeof(ros_message->expected_fp_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fn_total
  {
    size_t item_size = sizeof(ros_message->expected_fn_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_gt_per_class
  {
    size_t array_size = ros_message->n_gt_per_class.size;
    auto array_ptr = ros_message->n_gt_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_tp_per_class
  {
    size_t array_size = ros_message->expected_tp_per_class.size;
    auto array_ptr = ros_message->expected_tp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fp_per_class
  {
    size_t array_size = ros_message->expected_fp_per_class.size;
    auto array_ptr = ros_message->expected_fp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fn_per_class
  {
    size_t array_size = ros_message->expected_fn_per_class.size;
    auto array_ptr = ros_message->expected_fn_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_swarm_interfaces__msg__ExpectedMetricsGt(
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

  // Field name: map
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: maph
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

  // Field name: ap_per_class
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

  // Field name: aph_per_class
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

  // Field name: f1_max_per_class
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

  // Field name: optimal_conf_per_class
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

  // Field name: ratio_tp_per_class
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

  // Field name: ratio_fp_per_class
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

  // Field name: ratio_fn_per_class
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

  // Field name: err_dist_mean_per_class
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

  // Field name: err_dist_rms_per_class
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

  // Field name: err_yaw_mean_per_class
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

  // Field name: err_yaw_std_per_class
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

  // Field name: err_vel_mean_per_class
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

  // Field name: motp_per_class
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

  // Field name: mota_per_class
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

  // Field name: id_switch_per_class
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

  // Field name: pred_ade
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pred_fde
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pred_miss_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: corner_mean_per_class
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

  // Field name: corner_p95_per_class
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

  // Field name: flip_rate_per_class
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

  // Field name: mflip_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: nsurf_mean_per_class
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

  // Field name: ece
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ece_macro
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confident_error_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confident_errors_per_frame
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confusion_pairs
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

  // Field name: confusion_values
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

  // Field name: critical_fp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: critical_fn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cw_map
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cw_map_per_class
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

  // Field name: fn_span_mean_per_class
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

  // Field name: pass_rate_num_tp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pass_rate_num_gt_tp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pass_rate_metrics_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: err_ate_per_class
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

  // Field name: err_aoe_per_class
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

  // Field name: err_ase_per_class
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

  // Field name: err_ave_per_class
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

  // Field name: n_gt_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: expected_tp_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: expected_fp_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: expected_fn_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: n_gt_per_class
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

  // Field name: expected_tp_per_class
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

  // Field name: expected_fp_per_class
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

  // Field name: expected_fn_per_class
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__ExpectedMetricsGt;
    is_plain =
      (
      offsetof(DataType, expected_fn_per_class) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
bool cdr_serialize_key_swarm_interfaces__msg__ExpectedMetricsGt(
  const swarm_interfaces__msg__ExpectedMetricsGt * ros_message,
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

  // Field name: map
  {
    cdr << ros_message->map;
  }

  // Field name: maph
  {
    cdr << ros_message->maph;
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

  // Field name: ap_per_class
  {
    size_t size = ros_message->ap_per_class.size;
    auto array_ptr = ros_message->ap_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: aph_per_class
  {
    size_t size = ros_message->aph_per_class.size;
    auto array_ptr = ros_message->aph_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: f1_max_per_class
  {
    size_t size = ros_message->f1_max_per_class.size;
    auto array_ptr = ros_message->f1_max_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: optimal_conf_per_class
  {
    size_t size = ros_message->optimal_conf_per_class.size;
    auto array_ptr = ros_message->optimal_conf_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_tp_per_class
  {
    size_t size = ros_message->ratio_tp_per_class.size;
    auto array_ptr = ros_message->ratio_tp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_fp_per_class
  {
    size_t size = ros_message->ratio_fp_per_class.size;
    auto array_ptr = ros_message->ratio_fp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ratio_fn_per_class
  {
    size_t size = ros_message->ratio_fn_per_class.size;
    auto array_ptr = ros_message->ratio_fn_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_dist_mean_per_class
  {
    size_t size = ros_message->err_dist_mean_per_class.size;
    auto array_ptr = ros_message->err_dist_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_dist_rms_per_class
  {
    size_t size = ros_message->err_dist_rms_per_class.size;
    auto array_ptr = ros_message->err_dist_rms_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_yaw_mean_per_class
  {
    size_t size = ros_message->err_yaw_mean_per_class.size;
    auto array_ptr = ros_message->err_yaw_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_yaw_std_per_class
  {
    size_t size = ros_message->err_yaw_std_per_class.size;
    auto array_ptr = ros_message->err_yaw_std_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_vel_mean_per_class
  {
    size_t size = ros_message->err_vel_mean_per_class.size;
    auto array_ptr = ros_message->err_vel_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: motp_per_class
  {
    size_t size = ros_message->motp_per_class.size;
    auto array_ptr = ros_message->motp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mota_per_class
  {
    size_t size = ros_message->mota_per_class.size;
    auto array_ptr = ros_message->mota_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: id_switch_per_class
  {
    size_t size = ros_message->id_switch_per_class.size;
    auto array_ptr = ros_message->id_switch_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pred_ade
  {
    cdr << ros_message->pred_ade;
  }

  // Field name: pred_fde
  {
    cdr << ros_message->pred_fde;
  }

  // Field name: pred_miss_rate
  {
    cdr << ros_message->pred_miss_rate;
  }

  // Field name: corner_mean_per_class
  {
    size_t size = ros_message->corner_mean_per_class.size;
    auto array_ptr = ros_message->corner_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: corner_p95_per_class
  {
    size_t size = ros_message->corner_p95_per_class.size;
    auto array_ptr = ros_message->corner_p95_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: flip_rate_per_class
  {
    size_t size = ros_message->flip_rate_per_class.size;
    auto array_ptr = ros_message->flip_rate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: mflip_rate
  {
    cdr << ros_message->mflip_rate;
  }

  // Field name: nsurf_mean_per_class
  {
    size_t size = ros_message->nsurf_mean_per_class.size;
    auto array_ptr = ros_message->nsurf_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: ece
  {
    cdr << ros_message->ece;
  }

  // Field name: ece_macro
  {
    cdr << ros_message->ece_macro;
  }

  // Field name: confident_error_rate
  {
    cdr << ros_message->confident_error_rate;
  }

  // Field name: confident_errors_per_frame
  {
    cdr << ros_message->confident_errors_per_frame;
  }

  // Field name: confusion_pairs
  {
    size_t size = ros_message->confusion_pairs.size;
    auto array_ptr = ros_message->confusion_pairs.data;
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

  // Field name: confusion_values
  {
    size_t size = ros_message->confusion_values.size;
    auto array_ptr = ros_message->confusion_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: critical_fp
  {
    cdr << ros_message->critical_fp;
  }

  // Field name: critical_fn
  {
    cdr << ros_message->critical_fn;
  }

  // Field name: cw_map
  {
    cdr << ros_message->cw_map;
  }

  // Field name: cw_map_per_class
  {
    size_t size = ros_message->cw_map_per_class.size;
    auto array_ptr = ros_message->cw_map_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: fn_span_mean_per_class
  {
    size_t size = ros_message->fn_span_mean_per_class.size;
    auto array_ptr = ros_message->fn_span_mean_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: pass_rate_num_tp
  {
    cdr << ros_message->pass_rate_num_tp;
  }

  // Field name: pass_rate_num_gt_tp
  {
    cdr << ros_message->pass_rate_num_gt_tp;
  }

  // Field name: pass_rate_metrics_score
  {
    cdr << ros_message->pass_rate_metrics_score;
  }

  // Field name: err_ate_per_class
  {
    size_t size = ros_message->err_ate_per_class.size;
    auto array_ptr = ros_message->err_ate_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_aoe_per_class
  {
    size_t size = ros_message->err_aoe_per_class.size;
    auto array_ptr = ros_message->err_aoe_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_ase_per_class
  {
    size_t size = ros_message->err_ase_per_class.size;
    auto array_ptr = ros_message->err_ase_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: err_ave_per_class
  {
    size_t size = ros_message->err_ave_per_class.size;
    auto array_ptr = ros_message->err_ave_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: n_gt_total
  {
    cdr << ros_message->n_gt_total;
  }

  // Field name: expected_tp_total
  {
    cdr << ros_message->expected_tp_total;
  }

  // Field name: expected_fp_total
  {
    cdr << ros_message->expected_fp_total;
  }

  // Field name: expected_fn_total
  {
    cdr << ros_message->expected_fn_total;
  }

  // Field name: n_gt_per_class
  {
    size_t size = ros_message->n_gt_per_class.size;
    auto array_ptr = ros_message->n_gt_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_tp_per_class
  {
    size_t size = ros_message->expected_tp_per_class.size;
    auto array_ptr = ros_message->expected_tp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_fp_per_class
  {
    size_t size = ros_message->expected_fp_per_class.size;
    auto array_ptr = ros_message->expected_fp_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: expected_fn_per_class
  {
    size_t size = ros_message->expected_fn_per_class.size;
    auto array_ptr = ros_message->expected_fn_per_class.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t get_serialized_size_key_swarm_interfaces__msg__ExpectedMetricsGt(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ExpectedMetricsGt__ros_msg_type * ros_message = static_cast<const _ExpectedMetricsGt__ros_msg_type *>(untyped_ros_message);
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

  // Field name: map
  {
    size_t item_size = sizeof(ros_message->map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: maph
  {
    size_t item_size = sizeof(ros_message->maph);
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

  // Field name: ap_per_class
  {
    size_t array_size = ros_message->ap_per_class.size;
    auto array_ptr = ros_message->ap_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aph_per_class
  {
    size_t array_size = ros_message->aph_per_class.size;
    auto array_ptr = ros_message->aph_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: f1_max_per_class
  {
    size_t array_size = ros_message->f1_max_per_class.size;
    auto array_ptr = ros_message->f1_max_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: optimal_conf_per_class
  {
    size_t array_size = ros_message->optimal_conf_per_class.size;
    auto array_ptr = ros_message->optimal_conf_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_tp_per_class
  {
    size_t array_size = ros_message->ratio_tp_per_class.size;
    auto array_ptr = ros_message->ratio_tp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_fp_per_class
  {
    size_t array_size = ros_message->ratio_fp_per_class.size;
    auto array_ptr = ros_message->ratio_fp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ratio_fn_per_class
  {
    size_t array_size = ros_message->ratio_fn_per_class.size;
    auto array_ptr = ros_message->ratio_fn_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_dist_mean_per_class
  {
    size_t array_size = ros_message->err_dist_mean_per_class.size;
    auto array_ptr = ros_message->err_dist_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_dist_rms_per_class
  {
    size_t array_size = ros_message->err_dist_rms_per_class.size;
    auto array_ptr = ros_message->err_dist_rms_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_yaw_mean_per_class
  {
    size_t array_size = ros_message->err_yaw_mean_per_class.size;
    auto array_ptr = ros_message->err_yaw_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_yaw_std_per_class
  {
    size_t array_size = ros_message->err_yaw_std_per_class.size;
    auto array_ptr = ros_message->err_yaw_std_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_vel_mean_per_class
  {
    size_t array_size = ros_message->err_vel_mean_per_class.size;
    auto array_ptr = ros_message->err_vel_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: motp_per_class
  {
    size_t array_size = ros_message->motp_per_class.size;
    auto array_ptr = ros_message->motp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mota_per_class
  {
    size_t array_size = ros_message->mota_per_class.size;
    auto array_ptr = ros_message->mota_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: id_switch_per_class
  {
    size_t array_size = ros_message->id_switch_per_class.size;
    auto array_ptr = ros_message->id_switch_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_ade
  {
    size_t item_size = sizeof(ros_message->pred_ade);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_fde
  {
    size_t item_size = sizeof(ros_message->pred_fde);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pred_miss_rate
  {
    size_t item_size = sizeof(ros_message->pred_miss_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: corner_mean_per_class
  {
    size_t array_size = ros_message->corner_mean_per_class.size;
    auto array_ptr = ros_message->corner_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: corner_p95_per_class
  {
    size_t array_size = ros_message->corner_p95_per_class.size;
    auto array_ptr = ros_message->corner_p95_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: flip_rate_per_class
  {
    size_t array_size = ros_message->flip_rate_per_class.size;
    auto array_ptr = ros_message->flip_rate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mflip_rate
  {
    size_t item_size = sizeof(ros_message->mflip_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: nsurf_mean_per_class
  {
    size_t array_size = ros_message->nsurf_mean_per_class.size;
    auto array_ptr = ros_message->nsurf_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece
  {
    size_t item_size = sizeof(ros_message->ece);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ece_macro
  {
    size_t item_size = sizeof(ros_message->ece_macro);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confident_error_rate
  {
    size_t item_size = sizeof(ros_message->confident_error_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confident_errors_per_frame
  {
    size_t item_size = sizeof(ros_message->confident_errors_per_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: confusion_pairs
  {
    size_t array_size = ros_message->confusion_pairs.size;
    auto array_ptr = ros_message->confusion_pairs.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: confusion_values
  {
    size_t array_size = ros_message->confusion_values.size;
    auto array_ptr = ros_message->confusion_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_fp
  {
    size_t item_size = sizeof(ros_message->critical_fp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: critical_fn
  {
    size_t item_size = sizeof(ros_message->critical_fn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cw_map
  {
    size_t item_size = sizeof(ros_message->cw_map);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cw_map_per_class
  {
    size_t array_size = ros_message->cw_map_per_class.size;
    auto array_ptr = ros_message->cw_map_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fn_span_mean_per_class
  {
    size_t array_size = ros_message->fn_span_mean_per_class.size;
    auto array_ptr = ros_message->fn_span_mean_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_num_tp
  {
    size_t item_size = sizeof(ros_message->pass_rate_num_tp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_num_gt_tp
  {
    size_t item_size = sizeof(ros_message->pass_rate_num_gt_tp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pass_rate_metrics_score
  {
    size_t item_size = sizeof(ros_message->pass_rate_metrics_score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ate_per_class
  {
    size_t array_size = ros_message->err_ate_per_class.size;
    auto array_ptr = ros_message->err_ate_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_aoe_per_class
  {
    size_t array_size = ros_message->err_aoe_per_class.size;
    auto array_ptr = ros_message->err_aoe_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ase_per_class
  {
    size_t array_size = ros_message->err_ase_per_class.size;
    auto array_ptr = ros_message->err_ase_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: err_ave_per_class
  {
    size_t array_size = ros_message->err_ave_per_class.size;
    auto array_ptr = ros_message->err_ave_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_gt_total
  {
    size_t item_size = sizeof(ros_message->n_gt_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_tp_total
  {
    size_t item_size = sizeof(ros_message->expected_tp_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fp_total
  {
    size_t item_size = sizeof(ros_message->expected_fp_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fn_total
  {
    size_t item_size = sizeof(ros_message->expected_fn_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: n_gt_per_class
  {
    size_t array_size = ros_message->n_gt_per_class.size;
    auto array_ptr = ros_message->n_gt_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_tp_per_class
  {
    size_t array_size = ros_message->expected_tp_per_class.size;
    auto array_ptr = ros_message->expected_tp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fp_per_class
  {
    size_t array_size = ros_message->expected_fp_per_class.size;
    auto array_ptr = ros_message->expected_fp_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: expected_fn_per_class
  {
    size_t array_size = ros_message->expected_fn_per_class.size;
    auto array_ptr = ros_message->expected_fn_per_class.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_swarm_interfaces
size_t max_serialized_size_key_swarm_interfaces__msg__ExpectedMetricsGt(
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

  // Field name: map
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: maph
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
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

  // Field name: ap_per_class
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

  // Field name: aph_per_class
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

  // Field name: f1_max_per_class
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

  // Field name: optimal_conf_per_class
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

  // Field name: ratio_tp_per_class
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

  // Field name: ratio_fp_per_class
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

  // Field name: ratio_fn_per_class
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

  // Field name: err_dist_mean_per_class
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

  // Field name: err_dist_rms_per_class
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

  // Field name: err_yaw_mean_per_class
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

  // Field name: err_yaw_std_per_class
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

  // Field name: err_vel_mean_per_class
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

  // Field name: motp_per_class
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

  // Field name: mota_per_class
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

  // Field name: id_switch_per_class
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

  // Field name: pred_ade
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pred_fde
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pred_miss_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: corner_mean_per_class
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

  // Field name: corner_p95_per_class
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

  // Field name: flip_rate_per_class
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

  // Field name: mflip_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: nsurf_mean_per_class
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

  // Field name: ece
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: ece_macro
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confident_error_rate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confident_errors_per_frame
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: confusion_pairs
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

  // Field name: confusion_values
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

  // Field name: critical_fp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: critical_fn
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cw_map
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: cw_map_per_class
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

  // Field name: fn_span_mean_per_class
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

  // Field name: pass_rate_num_tp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pass_rate_num_gt_tp
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: pass_rate_metrics_score
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: err_ate_per_class
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

  // Field name: err_aoe_per_class
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

  // Field name: err_ase_per_class
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

  // Field name: err_ave_per_class
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

  // Field name: n_gt_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: expected_tp_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: expected_fp_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: expected_fn_total
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: n_gt_per_class
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

  // Field name: expected_tp_per_class
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

  // Field name: expected_fp_per_class
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

  // Field name: expected_fn_per_class
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = swarm_interfaces__msg__ExpectedMetricsGt;
    is_plain =
      (
      offsetof(DataType, expected_fn_per_class) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ExpectedMetricsGt__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const swarm_interfaces__msg__ExpectedMetricsGt * ros_message = static_cast<const swarm_interfaces__msg__ExpectedMetricsGt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_swarm_interfaces__msg__ExpectedMetricsGt(ros_message, cdr);
}

static bool _ExpectedMetricsGt__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  swarm_interfaces__msg__ExpectedMetricsGt * ros_message = static_cast<swarm_interfaces__msg__ExpectedMetricsGt *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_swarm_interfaces__msg__ExpectedMetricsGt(cdr, ros_message);
}

static uint32_t _ExpectedMetricsGt__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_swarm_interfaces__msg__ExpectedMetricsGt(
      untyped_ros_message, 0));
}

static size_t _ExpectedMetricsGt__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_swarm_interfaces__msg__ExpectedMetricsGt(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ExpectedMetricsGt = {
  "swarm_interfaces::msg",
  "ExpectedMetricsGt",
  _ExpectedMetricsGt__cdr_serialize,
  _ExpectedMetricsGt__cdr_deserialize,
  _ExpectedMetricsGt__get_serialized_size,
  _ExpectedMetricsGt__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ExpectedMetricsGt__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ExpectedMetricsGt,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_interfaces, msg, ExpectedMetricsGt)() {
  return &_ExpectedMetricsGt__type_support;
}

#if defined(__cplusplus)
}
#endif
