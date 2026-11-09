// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__rosidl_typesupport_introspection_c.h"
#include "swarm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__functions.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `params_hash`
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `lateral_deviation_mean`
// Member `lateral_deviation_min`
// Member `lateral_deviation_max`
// Member `yaw_deviation_mean`
// Member `yaw_rate_mean`
// Member `predicted_path_deviation_mean`
// Member `total_objects_count`
// Member `average_objects_count`
// Member `interval_average_objects_count`
// Member `object_count_per_class`
// Member `max_distance_per_class`
// Member `size_cv_per_class`
// Member `position_jitter_per_class`
// Member `heading_inversion_rate_per_class`
// Member `track_fragments_per_class`
// Member `track_purity_per_class`
// Member `track_length_per_class`
// Member `sensor_health`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  swarm_interfaces__msg__ExpectedMetricsNoGt__init(message_memory);
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_fini_function(void * message_memory)
{
  swarm_interfaces__msg__ExpectedMetricsNoGt__fini(message_memory);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__classes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__classes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__classes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__classes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__classes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__classes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_mean(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_min(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_min(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_min(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_min(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_min(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_min(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_max(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_max(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_max(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_max(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_max(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_max(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_deviation_mean(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__yaw_rate_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_rate_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_rate_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__yaw_rate_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_rate_mean(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__yaw_rate_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_rate_mean(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__yaw_rate_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__total_objects_count(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__total_objects_count(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__total_objects_count(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__total_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__total_objects_count(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__total_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__total_objects_count(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__total_objects_count(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__average_objects_count(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__average_objects_count(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__average_objects_count(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__average_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__average_objects_count(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__average_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__average_objects_count(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__average_objects_count(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__interval_average_objects_count(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__interval_average_objects_count(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__interval_average_objects_count(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__interval_average_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__interval_average_objects_count(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__interval_average_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__interval_average_objects_count(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__interval_average_objects_count(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__object_count_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__object_count_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__object_count_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__object_count_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__object_count_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__object_count_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__object_count_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__object_count_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__max_distance_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__max_distance_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__max_distance_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__max_distance_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__max_distance_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__max_distance_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__max_distance_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__max_distance_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__size_cv_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__size_cv_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__size_cv_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__size_cv_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__size_cv_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__size_cv_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__size_cv_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__size_cv_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__position_jitter_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__position_jitter_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__position_jitter_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__position_jitter_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__position_jitter_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__position_jitter_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__position_jitter_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__position_jitter_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_fragments_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_fragments_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_fragments_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_fragments_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_fragments_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_fragments_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_fragments_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_fragments_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_purity_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_purity_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_purity_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_purity_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_purity_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_purity_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_purity_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_purity_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_length_per_class(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_length_per_class(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_length_per_class(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_length_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_length_per_class(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_length_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_length_per_class(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_length_per_class(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__sensor_health(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__sensor_health(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__sensor_health(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__sensor_health(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__sensor_health(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__sensor_health(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__sensor_health(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__sensor_health(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_member_array[42] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, header),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, model_based),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, params_hash),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, window_sec),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, warming_up),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, n_frames_in_window),  // bytes offset in struct
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
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, classes),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__classes,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__classes,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__classes,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__classes,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__classes,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__classes  // resize(index) function pointer
  },
  {
    "lateral_deviation_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, lateral_deviation_mean),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_mean  // resize(index) function pointer
  },
  {
    "lateral_deviation_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, lateral_deviation_min),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_min,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_min,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_min,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_min,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_min,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_min  // resize(index) function pointer
  },
  {
    "lateral_deviation_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, lateral_deviation_max),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__lateral_deviation_max,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__lateral_deviation_max,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__lateral_deviation_max,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__lateral_deviation_max,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__lateral_deviation_max,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__lateral_deviation_max  // resize(index) function pointer
  },
  {
    "yaw_deviation_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, yaw_deviation_mean),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__yaw_deviation_mean  // resize(index) function pointer
  },
  {
    "yaw_rate_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, yaw_rate_mean),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__yaw_rate_mean,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__yaw_rate_mean,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__yaw_rate_mean,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__yaw_rate_mean,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__yaw_rate_mean,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__yaw_rate_mean  // resize(index) function pointer
  },
  {
    "predicted_path_deviation_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, predicted_path_deviation_mean),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__predicted_path_deviation_mean  // resize(index) function pointer
  },
  {
    "total_objects_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, total_objects_count),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__total_objects_count,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__total_objects_count,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__total_objects_count,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__total_objects_count,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__total_objects_count,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__total_objects_count  // resize(index) function pointer
  },
  {
    "average_objects_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, average_objects_count),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__average_objects_count,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__average_objects_count,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__average_objects_count,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__average_objects_count,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__average_objects_count,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__average_objects_count  // resize(index) function pointer
  },
  {
    "interval_average_objects_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, interval_average_objects_count),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__interval_average_objects_count,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__interval_average_objects_count,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__interval_average_objects_count,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__interval_average_objects_count,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__interval_average_objects_count,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__interval_average_objects_count  // resize(index) function pointer
  },
  {
    "all_object_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, all_object_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_count_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, object_count_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__object_count_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__object_count_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__object_count_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__object_count_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__object_count_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__object_count_per_class  // resize(index) function pointer
  },
  {
    "max_distance_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, max_distance_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__max_distance_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__max_distance_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__max_distance_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__max_distance_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__max_distance_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__max_distance_per_class  // resize(index) function pointer
  },
  {
    "meas_to_tracked_latency_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, meas_to_tracked_latency_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_latency_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, prediction_latency_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_latency_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, total_latency_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross_confirm_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, cross_confirm_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unconfirmed_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, unconfirmed_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "missed_by_other_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, missed_by_other_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_disagree_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, class_disagree_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_discrepancy_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, range_discrepancy_mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "range_discrepancy_p95",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, range_discrepancy_p95),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "size_cv_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, size_cv_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__size_cv_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__size_cv_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__size_cv_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__size_cv_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__size_cv_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__size_cv_per_class  // resize(index) function pointer
  },
  {
    "position_jitter_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, position_jitter_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__position_jitter_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__position_jitter_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__position_jitter_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__position_jitter_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__position_jitter_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__position_jitter_per_class  // resize(index) function pointer
  },
  {
    "heading_inversion_rate_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, heading_inversion_rate_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class  // resize(index) function pointer
  },
  {
    "track_fragments_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, track_fragments_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_fragments_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_fragments_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_fragments_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_fragments_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_fragments_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_fragments_per_class  // resize(index) function pointer
  },
  {
    "track_purity_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, track_purity_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_purity_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_purity_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_purity_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_purity_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_purity_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_purity_per_class  // resize(index) function pointer
  },
  {
    "track_length_per_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, track_length_per_class),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__track_length_per_class,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__track_length_per_class,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__track_length_per_class,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__track_length_per_class,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__track_length_per_class,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__track_length_per_class  // resize(index) function pointer
  },
  {
    "ece_proxy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, ece_proxy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unconfirmed_high_conf_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, unconfirmed_high_conf_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "critical_inconsistency_per_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, critical_inconsistency_per_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sync_offset_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, sync_offset_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_health",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, sensor_health),  // bytes offset in struct
    NULL,  // default value
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__size_function__ExpectedMetricsNoGt__sensor_health,  // size() function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_const_function__ExpectedMetricsNoGt__sensor_health,  // get_const(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__get_function__ExpectedMetricsNoGt__sensor_health,  // get(index) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__fetch_function__ExpectedMetricsNoGt__sensor_health,  // fetch(index, &value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__assign_function__ExpectedMetricsNoGt__sensor_health,  // assign(index, value) function pointer
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__resize_function__ExpectedMetricsNoGt__sensor_health  // resize(index) function pointer
  },
  {
    "flight_regime_altitude_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, flight_regime_altitude_m),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flight_regime_speed_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, flight_regime_speed_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flight_regime_climb_rate_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces__msg__ExpectedMetricsNoGt, flight_regime_climb_rate_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_members = {
  "swarm_interfaces__msg",  // message namespace
  "ExpectedMetricsNoGt",  // message name
  42,  // number of fields
  sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt),
  false,  // has_any_key_member_
  swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_member_array,  // message members
  swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_init_function,  // function to initialize message memory (memory has to be allocated)
  swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_type_support_handle = {
  0,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_swarm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_interfaces, msg, ExpectedMetricsNoGt)() {
  swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_type_support_handle.typesupport_identifier) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &swarm_interfaces__msg__ExpectedMetricsNoGt__rosidl_typesupport_introspection_c__ExpectedMetricsNoGt_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
