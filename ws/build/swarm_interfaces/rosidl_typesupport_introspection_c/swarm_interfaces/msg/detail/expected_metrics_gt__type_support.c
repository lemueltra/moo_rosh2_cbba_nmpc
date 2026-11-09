// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_interfaces/msg/detail/expected_metrics_gt__rosidl_typesupport_introspection_c.h"
#include "swarm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__functions.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `params_hash`
// Member `classes`
// Member `confusion_pairs`
#include "rosidl_runtime_c/string_functions.h"
// Member `ap_per_class`
// Member `aph_per_class`
// Member `f1_max_per_class`
// Member `optimal_conf_per_class`
// Member `ratio_tp_per_class`
// Member `ratio_fp_per_class`
// Member `ratio_fn_per_class`
// Member `err_dist_mean_per_class`
// Member `err_dist_rms_per_class`
// Member `err_yaw_mean_per_class`
// Member `err_yaw_std_per_class`
// Member `err_vel_mean_per_class`
// Member `motp_per_class`
// Member `mota_per_class`
// Member `id_switch_per_class`
// Member `corner_mean_per_class`
// Member `corner_p95_per_class`
// Member `flip_rate_per_class`
// Member `nsurf_mean_per_class`
// Member `confusion_values`
// Member `cw_map_per_class`
// Member `fn_span_mean_per_class`
// Member `err_ate_per_class`
// Member `err_aoe_per_class`
// Member `err_ase_per_class`
// Member `err_ave_per_class`
// Member `n_gt_per_class`
// Member `expected_tp_per_class`
// Member `expected_fp_per_class`
// Member `expected_fn_per_class`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_interfaces__msg__ExpectedMetricsGt__init(message_memory);
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_fini_function(void * message_memory)
{
  swarm_interfaces__msg__ExpectedMetricsGt__fini(message_memory);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__classes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__classes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ap_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ap_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ap_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ap_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ap_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ap_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ap_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ap_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__aph_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__aph_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__aph_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__aph_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__aph_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__aph_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__aph_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__aph_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__f1_max_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__f1_max_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__f1_max_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__f1_max_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__f1_max_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__f1_max_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__f1_max_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__f1_max_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__optimal_conf_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__optimal_conf_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__optimal_conf_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__optimal_conf_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__optimal_conf_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__optimal_conf_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__optimal_conf_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__optimal_conf_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_tp_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_tp_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_tp_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_tp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_tp_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_tp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_tp_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_tp_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_fp_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fp_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fp_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_fp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fp_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_fp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fp_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_fp_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_fn_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fn_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fn_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_fn_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fn_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_fn_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fn_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_fn_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_dist_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_dist_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_dist_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_dist_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_dist_rms_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_rms_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_rms_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_dist_rms_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_rms_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_dist_rms_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_rms_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_dist_rms_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_yaw_std_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_std_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_std_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_yaw_std_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_std_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_yaw_std_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_std_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_yaw_std_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_vel_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_vel_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_vel_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_vel_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_vel_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_vel_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_vel_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_vel_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__motp_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__motp_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__motp_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__motp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__motp_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__motp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__motp_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__motp_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__mota_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__mota_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__mota_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__mota_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__mota_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__mota_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__mota_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__mota_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__id_switch_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__id_switch_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__id_switch_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__id_switch_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__id_switch_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__id_switch_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__id_switch_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__id_switch_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__corner_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__corner_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__corner_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__corner_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__corner_p95_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_p95_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_p95_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__corner_p95_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_p95_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__corner_p95_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_p95_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__corner_p95_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__flip_rate_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__flip_rate_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__flip_rate_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__flip_rate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__flip_rate_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__flip_rate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__flip_rate_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__flip_rate_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__nsurf_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__nsurf_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__nsurf_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__nsurf_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__nsurf_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__nsurf_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__nsurf_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__nsurf_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__confusion_pairs(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_pairs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_pairs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__confusion_pairs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_pairs(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__confusion_pairs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_pairs(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__confusion_pairs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__confusion_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__confusion_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_values(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__confusion_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_values(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__confusion_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__cw_map_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__cw_map_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__cw_map_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__cw_map_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__cw_map_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__cw_map_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__cw_map_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__cw_map_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__fn_span_mean_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__fn_span_mean_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__fn_span_mean_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__fn_span_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__fn_span_mean_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__fn_span_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__fn_span_mean_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__fn_span_mean_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ate_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ate_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ate_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ate_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ate_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ate_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_aoe_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_aoe_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_aoe_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_aoe_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_aoe_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_aoe_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_aoe_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_aoe_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ase_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ase_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ase_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ase_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ase_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ase_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ase_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ase_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ave_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ave_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ave_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ave_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ave_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ave_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ave_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ave_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__n_gt_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__n_gt_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__n_gt_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__n_gt_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__n_gt_per_class(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__n_gt_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__n_gt_per_class(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__n_gt_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_tp_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_tp_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_tp_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_tp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_tp_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_tp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_tp_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_tp_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_fp_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fp_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fp_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_fp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fp_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_fp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fp_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_fp_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_fn_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fn_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fn_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_fn_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fn_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_fn_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fn_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_fn_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_member_array[58] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model_based",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, model_based),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "params_hash",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, params_hash),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "window_sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, window_sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "warming_up",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, warming_up),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_frames_in_window",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, n_frames_in_window),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, maph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, classes),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__classes,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__classes,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__classes,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__classes,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__classes,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__classes  // resize(index) function pointer
  },
  {
    "ap_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ap_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ap_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ap_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ap_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ap_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ap_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ap_per_class  // resize(index) function pointer
  },
  {
    "aph_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, aph_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__aph_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__aph_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__aph_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__aph_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__aph_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__aph_per_class  // resize(index) function pointer
  },
  {
    "f1_max_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, f1_max_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__f1_max_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__f1_max_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__f1_max_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__f1_max_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__f1_max_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__f1_max_per_class  // resize(index) function pointer
  },
  {
    "optimal_conf_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, optimal_conf_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__optimal_conf_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__optimal_conf_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__optimal_conf_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__optimal_conf_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__optimal_conf_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__optimal_conf_per_class  // resize(index) function pointer
  },
  {
    "ratio_tp_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ratio_tp_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_tp_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_tp_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_tp_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_tp_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_tp_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_tp_per_class  // resize(index) function pointer
  },
  {
    "ratio_fp_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ratio_fp_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_fp_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fp_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fp_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_fp_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_fp_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_fp_per_class  // resize(index) function pointer
  },
  {
    "ratio_fn_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ratio_fn_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__ratio_fn_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__ratio_fn_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__ratio_fn_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__ratio_fn_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__ratio_fn_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__ratio_fn_per_class  // resize(index) function pointer
  },
  {
    "err_dist_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_dist_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_dist_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_dist_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_dist_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_dist_mean_per_class  // resize(index) function pointer
  },
  {
    "err_dist_rms_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_dist_rms_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_dist_rms_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_dist_rms_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_dist_rms_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_dist_rms_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_dist_rms_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_dist_rms_per_class  // resize(index) function pointer
  },
  {
    "err_yaw_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_yaw_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_yaw_mean_per_class  // resize(index) function pointer
  },
  {
    "err_yaw_std_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_yaw_std_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_yaw_std_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_yaw_std_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_yaw_std_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_yaw_std_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_yaw_std_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_yaw_std_per_class  // resize(index) function pointer
  },
  {
    "err_vel_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_vel_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_vel_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_vel_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_vel_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_vel_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_vel_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_vel_mean_per_class  // resize(index) function pointer
  },
  {
    "motp_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, motp_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__motp_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__motp_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__motp_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__motp_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__motp_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__motp_per_class  // resize(index) function pointer
  },
  {
    "mota_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, mota_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__mota_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__mota_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__mota_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__mota_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__mota_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__mota_per_class  // resize(index) function pointer
  },
  {
    "id_switch_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, id_switch_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__id_switch_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__id_switch_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__id_switch_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__id_switch_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__id_switch_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__id_switch_per_class  // resize(index) function pointer
  },
  {
    "pred_ade",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pred_ade),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pred_fde",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pred_fde),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pred_miss_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pred_miss_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corner_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, corner_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__corner_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__corner_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__corner_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__corner_mean_per_class  // resize(index) function pointer
  },
  {
    "corner_p95_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, corner_p95_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__corner_p95_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__corner_p95_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__corner_p95_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__corner_p95_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__corner_p95_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__corner_p95_per_class  // resize(index) function pointer
  },
  {
    "flip_rate_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, flip_rate_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__flip_rate_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__flip_rate_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__flip_rate_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__flip_rate_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__flip_rate_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__flip_rate_per_class  // resize(index) function pointer
  },
  {
    "mflip_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, mflip_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nsurf_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, nsurf_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__nsurf_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__nsurf_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__nsurf_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__nsurf_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__nsurf_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__nsurf_mean_per_class  // resize(index) function pointer
  },
  {
    "ece",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ece),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ece_macro",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, ece_macro),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confident_error_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, confident_error_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confident_errors_per_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, confident_errors_per_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confusion_pairs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, confusion_pairs),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__confusion_pairs,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_pairs,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_pairs,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__confusion_pairs,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__confusion_pairs,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__confusion_pairs  // resize(index) function pointer
  },
  {
    "confusion_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, confusion_values),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__confusion_values,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__confusion_values,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__confusion_values,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__confusion_values,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__confusion_values,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__confusion_values  // resize(index) function pointer
  },
  {
    "critical_fp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, critical_fp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "critical_fn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, critical_fn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cw_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, cw_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cw_map_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, cw_map_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__cw_map_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__cw_map_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__cw_map_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__cw_map_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__cw_map_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__cw_map_per_class  // resize(index) function pointer
  },
  {
    "fn_span_mean_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, fn_span_mean_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__fn_span_mean_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__fn_span_mean_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__fn_span_mean_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__fn_span_mean_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__fn_span_mean_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__fn_span_mean_per_class  // resize(index) function pointer
  },
  {
    "pass_rate_num_tp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pass_rate_num_tp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_rate_num_gt_tp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pass_rate_num_gt_tp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_rate_metrics_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, pass_rate_metrics_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_ate_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_ate_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ate_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ate_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ate_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ate_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ate_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ate_per_class  // resize(index) function pointer
  },
  {
    "err_aoe_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_aoe_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_aoe_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_aoe_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_aoe_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_aoe_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_aoe_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_aoe_per_class  // resize(index) function pointer
  },
  {
    "err_ase_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_ase_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ase_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ase_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ase_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ase_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ase_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ase_per_class  // resize(index) function pointer
  },
  {
    "err_ave_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, err_ave_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__err_ave_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__err_ave_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__err_ave_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__err_ave_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__err_ave_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__err_ave_per_class  // resize(index) function pointer
  },
  {
    "n_gt_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, n_gt_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_tp_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_tp_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_fp_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_fp_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "expected_fn_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_fn_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_gt_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, n_gt_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__n_gt_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__n_gt_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__n_gt_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__n_gt_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__n_gt_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__n_gt_per_class  // resize(index) function pointer
  },
  {
    "expected_tp_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_tp_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_tp_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_tp_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_tp_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_tp_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_tp_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_tp_per_class  // resize(index) function pointer
  },
  {
    "expected_fp_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_fp_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_fp_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fp_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fp_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_fp_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_fp_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_fp_per_class  // resize(index) function pointer
  },
  {
    "expected_fn_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsGt, expected_fn_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsGt__expected_fn_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsGt__expected_fn_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsGt__expected_fn_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsGt__expected_fn_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsGt__expected_fn_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsGt__expected_fn_per_class  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_members = {
  "swarm_interfaces__msg",  // message namespace
  "ExpectedMetricsGt",  // message name
  58,  // number of fields
  sizeof(swarm_interfaces__msg__ExpectedMetricsGt),
  false,  // has_any_key_member_
  swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_member_array,  // message members
  swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_type_support_handle = {
  0,
  &swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, ExpectedMetricsGt)() {
  swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_type_support_handle.typesupport_identifier) {
    swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_interfaces__msg__ExpectedMetricsGt__rosidl_typesupport_introspection_c__ExpectedMetricsGt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
