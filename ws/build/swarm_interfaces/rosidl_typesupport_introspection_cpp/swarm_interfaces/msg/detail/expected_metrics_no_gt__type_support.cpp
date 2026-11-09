// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__functions.h"
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace swarm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExpectedMetricsNoGt_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_interfaces::msg::ExpectedMetricsNoGt(_init);
}

void ExpectedMetricsNoGt_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_interfaces::msg::ExpectedMetricsNoGt *>(message_memory);
  typed_message->~ExpectedMetricsNoGt();
}

size_t size_function__ExpectedMetricsNoGt__classes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__classes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__classes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ExpectedMetricsNoGt__classes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ExpectedMetricsNoGt__classes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__classes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__lateral_deviation_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__lateral_deviation_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__lateral_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__lateral_deviation_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__lateral_deviation_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__lateral_deviation_min(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__lateral_deviation_min(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__lateral_deviation_min(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__lateral_deviation_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_min(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__lateral_deviation_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__lateral_deviation_min(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__lateral_deviation_min(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__lateral_deviation_max(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__lateral_deviation_max(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__lateral_deviation_max(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__lateral_deviation_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_max(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__lateral_deviation_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__lateral_deviation_max(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__lateral_deviation_max(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__yaw_deviation_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__yaw_deviation_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__yaw_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__yaw_deviation_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__yaw_deviation_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__yaw_rate_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__yaw_rate_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__yaw_rate_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__yaw_rate_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__yaw_rate_mean(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__yaw_rate_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__yaw_rate_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__yaw_rate_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__predicted_path_deviation_mean(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__total_objects_count(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__total_objects_count(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__total_objects_count(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__total_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__total_objects_count(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__total_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__total_objects_count(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__total_objects_count(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__average_objects_count(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__average_objects_count(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__average_objects_count(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__average_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__average_objects_count(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__average_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__average_objects_count(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__average_objects_count(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__interval_average_objects_count(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__interval_average_objects_count(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__interval_average_objects_count(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__interval_average_objects_count(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__interval_average_objects_count(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__interval_average_objects_count(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__interval_average_objects_count(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__interval_average_objects_count(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__object_count_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__object_count_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__object_count_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__object_count_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__object_count_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__object_count_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__object_count_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__object_count_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__max_distance_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__max_distance_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__max_distance_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__max_distance_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__max_distance_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__max_distance_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__max_distance_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__max_distance_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__size_cv_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__size_cv_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__size_cv_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__size_cv_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__size_cv_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__size_cv_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__size_cv_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__size_cv_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__position_jitter_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__position_jitter_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__position_jitter_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__position_jitter_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__position_jitter_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__position_jitter_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__position_jitter_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__position_jitter_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__track_fragments_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__track_fragments_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__track_fragments_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__track_fragments_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__track_fragments_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__track_fragments_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__track_fragments_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__track_fragments_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__track_purity_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__track_purity_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__track_purity_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__track_purity_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__track_purity_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__track_purity_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__track_purity_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__track_purity_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__track_length_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsNoGt__track_length_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsNoGt__track_length_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsNoGt__track_length_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsNoGt__track_length_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsNoGt__track_length_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsNoGt__track_length_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsNoGt__track_length_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsNoGt__sensor_health(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bool> *>(untyped_member);
  return member->size();
}

void fetch_function__ExpectedMetricsNoGt__sensor_health(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & member = *reinterpret_cast<const std::vector<bool> *>(untyped_member);
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = member[index];
}

void assign_function__ExpectedMetricsNoGt__sensor_health(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & member = *reinterpret_cast<std::vector<bool> *>(untyped_member);
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  member[index] = value;
}

void resize_function__ExpectedMetricsNoGt__sensor_health(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExpectedMetricsNoGt_message_member_array[42] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "model_based",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, model_based),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params_hash",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, params_hash),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "window_sec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, window_sec),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "warming_up",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, warming_up),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_frames_in_window",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, n_frames_in_window),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "classes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, classes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__classes,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__classes,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__classes,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__classes,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__classes,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__classes  // resize(index) function pointer
  },
  {
    "lateral_deviation_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, lateral_deviation_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__lateral_deviation_mean,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__lateral_deviation_mean  // resize(index) function pointer
  },
  {
    "lateral_deviation_min",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, lateral_deviation_min),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__lateral_deviation_min,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_min,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__lateral_deviation_min,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__lateral_deviation_min,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__lateral_deviation_min,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__lateral_deviation_min  // resize(index) function pointer
  },
  {
    "lateral_deviation_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, lateral_deviation_max),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__lateral_deviation_max,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__lateral_deviation_max,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__lateral_deviation_max,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__lateral_deviation_max,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__lateral_deviation_max,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__lateral_deviation_max  // resize(index) function pointer
  },
  {
    "yaw_deviation_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, yaw_deviation_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__yaw_deviation_mean,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__yaw_deviation_mean  // resize(index) function pointer
  },
  {
    "yaw_rate_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, yaw_rate_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__yaw_rate_mean,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__yaw_rate_mean,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__yaw_rate_mean,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__yaw_rate_mean,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__yaw_rate_mean,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__yaw_rate_mean  // resize(index) function pointer
  },
  {
    "predicted_path_deviation_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, predicted_path_deviation_mean),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__predicted_path_deviation_mean,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__predicted_path_deviation_mean  // resize(index) function pointer
  },
  {
    "total_objects_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, total_objects_count),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__total_objects_count,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__total_objects_count,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__total_objects_count,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__total_objects_count,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__total_objects_count,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__total_objects_count  // resize(index) function pointer
  },
  {
    "average_objects_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, average_objects_count),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__average_objects_count,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__average_objects_count,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__average_objects_count,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__average_objects_count,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__average_objects_count,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__average_objects_count  // resize(index) function pointer
  },
  {
    "interval_average_objects_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, interval_average_objects_count),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__interval_average_objects_count,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__interval_average_objects_count,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__interval_average_objects_count,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__interval_average_objects_count,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__interval_average_objects_count,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__interval_average_objects_count  // resize(index) function pointer
  },
  {
    "all_object_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, all_object_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_count_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, object_count_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__object_count_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__object_count_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__object_count_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__object_count_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__object_count_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__object_count_per_class  // resize(index) function pointer
  },
  {
    "max_distance_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, max_distance_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__max_distance_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__max_distance_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__max_distance_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__max_distance_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__max_distance_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__max_distance_per_class  // resize(index) function pointer
  },
  {
    "meas_to_tracked_latency_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, meas_to_tracked_latency_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prediction_latency_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, prediction_latency_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_latency_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, total_latency_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cross_confirm_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, cross_confirm_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unconfirmed_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, unconfirmed_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "missed_by_other_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, missed_by_other_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "class_disagree_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, class_disagree_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range_discrepancy_mean",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, range_discrepancy_mean),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "range_discrepancy_p95",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, range_discrepancy_p95),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "size_cv_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, size_cv_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__size_cv_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__size_cv_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__size_cv_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__size_cv_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__size_cv_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__size_cv_per_class  // resize(index) function pointer
  },
  {
    "position_jitter_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, position_jitter_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__position_jitter_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__position_jitter_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__position_jitter_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__position_jitter_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__position_jitter_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__position_jitter_per_class  // resize(index) function pointer
  },
  {
    "heading_inversion_rate_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, heading_inversion_rate_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__heading_inversion_rate_per_class  // resize(index) function pointer
  },
  {
    "track_fragments_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, track_fragments_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__track_fragments_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__track_fragments_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__track_fragments_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__track_fragments_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__track_fragments_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__track_fragments_per_class  // resize(index) function pointer
  },
  {
    "track_purity_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, track_purity_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__track_purity_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__track_purity_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__track_purity_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__track_purity_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__track_purity_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__track_purity_per_class  // resize(index) function pointer
  },
  {
    "track_length_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, track_length_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__track_length_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsNoGt__track_length_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsNoGt__track_length_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__track_length_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__track_length_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__track_length_per_class  // resize(index) function pointer
  },
  {
    "ece_proxy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, ece_proxy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "unconfirmed_high_conf_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, unconfirmed_high_conf_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "critical_inconsistency_per_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, critical_inconsistency_per_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sync_offset_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, sync_offset_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sensor_health",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, sensor_health),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsNoGt__sensor_health,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    fetch_function__ExpectedMetricsNoGt__sensor_health,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsNoGt__sensor_health,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsNoGt__sensor_health  // resize(index) function pointer
  },
  {
    "flight_regime_altitude_m",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, flight_regime_altitude_m),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flight_regime_speed_mps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, flight_regime_speed_mps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flight_regime_climb_rate_mps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsNoGt, flight_regime_climb_rate_mps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExpectedMetricsNoGt_message_members = {
  "swarm_interfaces::msg",  // message namespace
  "ExpectedMetricsNoGt",  // message name
  42,  // number of fields
  sizeof(swarm_interfaces::msg::ExpectedMetricsNoGt),
  false,  // has_any_key_member_
  ExpectedMetricsNoGt_message_member_array,  // message members
  ExpectedMetricsNoGt_init_function,  // function to initialize message memory (memory has to be allocated)
  ExpectedMetricsNoGt_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExpectedMetricsNoGt_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExpectedMetricsNoGt_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsNoGt__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_interfaces::msg::ExpectedMetricsNoGt>()
{
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::ExpectedMetricsNoGt_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_interfaces, msg, ExpectedMetricsNoGt)() {
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::ExpectedMetricsNoGt_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
