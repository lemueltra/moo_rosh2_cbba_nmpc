// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__functions.h"
#include "swarm_interfaces/msg/detail/expected_metrics_gt__struct.hpp"
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

void ExpectedMetricsGt_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) swarm_interfaces::msg::ExpectedMetricsGt(_init);
}

void ExpectedMetricsGt_fini_function(void * message_memory)
{
  auto typed_message = static_cast<swarm_interfaces::msg::ExpectedMetricsGt *>(message_memory);
  typed_message->~ExpectedMetricsGt();
}

size_t size_function__ExpectedMetricsGt__classes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__classes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__classes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__classes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ExpectedMetricsGt__classes(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__classes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ExpectedMetricsGt__classes(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__classes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__ap_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__ap_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__ap_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__ap_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__ap_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__ap_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__ap_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__ap_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__aph_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__aph_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__aph_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__aph_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__aph_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__aph_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__aph_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__aph_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__f1_max_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__f1_max_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__f1_max_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__f1_max_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__f1_max_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__f1_max_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__f1_max_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__f1_max_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__optimal_conf_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__optimal_conf_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__optimal_conf_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__optimal_conf_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__optimal_conf_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__optimal_conf_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__optimal_conf_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__optimal_conf_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__ratio_tp_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__ratio_tp_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__ratio_tp_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__ratio_tp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__ratio_tp_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__ratio_tp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__ratio_tp_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__ratio_tp_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__ratio_fp_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__ratio_fp_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__ratio_fp_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__ratio_fp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__ratio_fp_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__ratio_fp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__ratio_fp_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__ratio_fp_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__ratio_fn_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__ratio_fn_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__ratio_fn_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__ratio_fn_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__ratio_fn_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__ratio_fn_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__ratio_fn_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__ratio_fn_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_dist_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_dist_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_dist_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_dist_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_dist_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_dist_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_dist_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_dist_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_dist_rms_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_dist_rms_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_dist_rms_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_dist_rms_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_dist_rms_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_dist_rms_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_dist_rms_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_dist_rms_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_yaw_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_yaw_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_yaw_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_yaw_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_yaw_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_yaw_std_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_yaw_std_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_yaw_std_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_yaw_std_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_yaw_std_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_yaw_std_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_yaw_std_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_yaw_std_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_vel_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_vel_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_vel_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_vel_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_vel_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_vel_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_vel_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_vel_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__motp_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__motp_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__motp_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__motp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__motp_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__motp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__motp_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__motp_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__mota_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__mota_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__mota_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__mota_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__mota_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__mota_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__mota_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__mota_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__id_switch_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__id_switch_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__id_switch_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__id_switch_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__id_switch_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__id_switch_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__id_switch_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__id_switch_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__corner_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__corner_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__corner_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__corner_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__corner_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__corner_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__corner_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__corner_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__corner_p95_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__corner_p95_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__corner_p95_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__corner_p95_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__corner_p95_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__corner_p95_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__corner_p95_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__corner_p95_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__flip_rate_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__flip_rate_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__flip_rate_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__flip_rate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__flip_rate_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__flip_rate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__flip_rate_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__flip_rate_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__nsurf_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__nsurf_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__nsurf_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__nsurf_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__nsurf_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__nsurf_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__nsurf_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__nsurf_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__confusion_pairs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__confusion_pairs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__confusion_pairs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__confusion_pairs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ExpectedMetricsGt__confusion_pairs(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__confusion_pairs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ExpectedMetricsGt__confusion_pairs(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__confusion_pairs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__confusion_values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__confusion_values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__confusion_values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__confusion_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__confusion_values(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__confusion_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__confusion_values(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__confusion_values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__cw_map_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__cw_map_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__cw_map_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__cw_map_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__cw_map_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__cw_map_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__cw_map_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__cw_map_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__fn_span_mean_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__fn_span_mean_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__fn_span_mean_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__fn_span_mean_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__fn_span_mean_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__fn_span_mean_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__fn_span_mean_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__fn_span_mean_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_ate_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_ate_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_ate_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_ate_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_ate_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_ate_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_ate_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_ate_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_aoe_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_aoe_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_aoe_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_aoe_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_aoe_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_aoe_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_aoe_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_aoe_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_ase_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_ase_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_ase_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_ase_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_ase_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_ase_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_ase_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_ase_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__err_ave_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__err_ave_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__err_ave_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__err_ave_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__err_ave_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__err_ave_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__err_ave_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__err_ave_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__n_gt_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__n_gt_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__n_gt_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__n_gt_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__ExpectedMetricsGt__n_gt_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__n_gt_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__ExpectedMetricsGt__n_gt_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__n_gt_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__expected_tp_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__expected_tp_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__expected_tp_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__expected_tp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__expected_tp_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__expected_tp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__expected_tp_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__expected_tp_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__expected_fp_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__expected_fp_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__expected_fp_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__expected_fp_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__expected_fp_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__expected_fp_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__expected_fp_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__expected_fp_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ExpectedMetricsGt__expected_fn_per_class(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExpectedMetricsGt__expected_fn_per_class(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ExpectedMetricsGt__expected_fn_per_class(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExpectedMetricsGt__expected_fn_per_class(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ExpectedMetricsGt__expected_fn_per_class(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ExpectedMetricsGt__expected_fn_per_class(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ExpectedMetricsGt__expected_fn_per_class(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ExpectedMetricsGt__expected_fn_per_class(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExpectedMetricsGt_message_member_array[58] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, header),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, model_based),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, params_hash),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, window_sec),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, warming_up),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, n_frames_in_window),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "maph",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, maph),  // bytes offset in struct
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
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, classes),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__classes,  // size() function pointer
    get_const_function__ExpectedMetricsGt__classes,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__classes,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__classes,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__classes,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__classes  // resize(index) function pointer
  },
  {
    "ap_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ap_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__ap_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__ap_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__ap_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__ap_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__ap_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__ap_per_class  // resize(index) function pointer
  },
  {
    "aph_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, aph_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__aph_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__aph_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__aph_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__aph_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__aph_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__aph_per_class  // resize(index) function pointer
  },
  {
    "f1_max_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, f1_max_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__f1_max_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__f1_max_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__f1_max_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__f1_max_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__f1_max_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__f1_max_per_class  // resize(index) function pointer
  },
  {
    "optimal_conf_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, optimal_conf_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__optimal_conf_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__optimal_conf_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__optimal_conf_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__optimal_conf_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__optimal_conf_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__optimal_conf_per_class  // resize(index) function pointer
  },
  {
    "ratio_tp_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ratio_tp_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__ratio_tp_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__ratio_tp_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__ratio_tp_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__ratio_tp_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__ratio_tp_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__ratio_tp_per_class  // resize(index) function pointer
  },
  {
    "ratio_fp_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ratio_fp_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__ratio_fp_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__ratio_fp_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__ratio_fp_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__ratio_fp_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__ratio_fp_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__ratio_fp_per_class  // resize(index) function pointer
  },
  {
    "ratio_fn_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ratio_fn_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__ratio_fn_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__ratio_fn_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__ratio_fn_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__ratio_fn_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__ratio_fn_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__ratio_fn_per_class  // resize(index) function pointer
  },
  {
    "err_dist_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_dist_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_dist_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_dist_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_dist_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_dist_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_dist_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_dist_mean_per_class  // resize(index) function pointer
  },
  {
    "err_dist_rms_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_dist_rms_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_dist_rms_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_dist_rms_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_dist_rms_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_dist_rms_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_dist_rms_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_dist_rms_per_class  // resize(index) function pointer
  },
  {
    "err_yaw_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_yaw_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_yaw_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_yaw_mean_per_class  // resize(index) function pointer
  },
  {
    "err_yaw_std_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_yaw_std_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_yaw_std_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_yaw_std_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_yaw_std_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_yaw_std_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_yaw_std_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_yaw_std_per_class  // resize(index) function pointer
  },
  {
    "err_vel_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_vel_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_vel_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_vel_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_vel_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_vel_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_vel_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_vel_mean_per_class  // resize(index) function pointer
  },
  {
    "motp_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, motp_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__motp_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__motp_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__motp_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__motp_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__motp_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__motp_per_class  // resize(index) function pointer
  },
  {
    "mota_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, mota_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__mota_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__mota_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__mota_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__mota_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__mota_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__mota_per_class  // resize(index) function pointer
  },
  {
    "id_switch_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, id_switch_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__id_switch_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__id_switch_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__id_switch_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__id_switch_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__id_switch_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__id_switch_per_class  // resize(index) function pointer
  },
  {
    "pred_ade",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pred_ade),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pred_fde",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pred_fde),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pred_miss_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pred_miss_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "corner_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, corner_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__corner_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__corner_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__corner_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__corner_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__corner_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__corner_mean_per_class  // resize(index) function pointer
  },
  {
    "corner_p95_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, corner_p95_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__corner_p95_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__corner_p95_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__corner_p95_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__corner_p95_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__corner_p95_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__corner_p95_per_class  // resize(index) function pointer
  },
  {
    "flip_rate_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, flip_rate_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__flip_rate_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__flip_rate_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__flip_rate_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__flip_rate_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__flip_rate_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__flip_rate_per_class  // resize(index) function pointer
  },
  {
    "mflip_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, mflip_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "nsurf_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, nsurf_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__nsurf_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__nsurf_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__nsurf_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__nsurf_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__nsurf_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__nsurf_mean_per_class  // resize(index) function pointer
  },
  {
    "ece",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ece),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ece_macro",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, ece_macro),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confident_error_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, confident_error_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confident_errors_per_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, confident_errors_per_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confusion_pairs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, confusion_pairs),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__confusion_pairs,  // size() function pointer
    get_const_function__ExpectedMetricsGt__confusion_pairs,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__confusion_pairs,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__confusion_pairs,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__confusion_pairs,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__confusion_pairs  // resize(index) function pointer
  },
  {
    "confusion_values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, confusion_values),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__confusion_values,  // size() function pointer
    get_const_function__ExpectedMetricsGt__confusion_values,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__confusion_values,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__confusion_values,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__confusion_values,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__confusion_values  // resize(index) function pointer
  },
  {
    "critical_fp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, critical_fp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "critical_fn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, critical_fn),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cw_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, cw_map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cw_map_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, cw_map_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__cw_map_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__cw_map_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__cw_map_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__cw_map_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__cw_map_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__cw_map_per_class  // resize(index) function pointer
  },
  {
    "fn_span_mean_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, fn_span_mean_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__fn_span_mean_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__fn_span_mean_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__fn_span_mean_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__fn_span_mean_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__fn_span_mean_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__fn_span_mean_per_class  // resize(index) function pointer
  },
  {
    "pass_rate_num_tp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pass_rate_num_tp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pass_rate_num_gt_tp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pass_rate_num_gt_tp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pass_rate_metrics_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, pass_rate_metrics_score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "err_ate_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_ate_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_ate_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_ate_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_ate_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_ate_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_ate_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_ate_per_class  // resize(index) function pointer
  },
  {
    "err_aoe_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_aoe_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_aoe_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_aoe_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_aoe_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_aoe_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_aoe_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_aoe_per_class  // resize(index) function pointer
  },
  {
    "err_ase_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_ase_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_ase_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_ase_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_ase_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_ase_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_ase_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_ase_per_class  // resize(index) function pointer
  },
  {
    "err_ave_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, err_ave_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__err_ave_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__err_ave_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__err_ave_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__err_ave_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__err_ave_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__err_ave_per_class  // resize(index) function pointer
  },
  {
    "n_gt_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, n_gt_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "expected_tp_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_tp_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "expected_fp_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_fp_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "expected_fn_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_fn_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_gt_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, n_gt_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__n_gt_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__n_gt_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__n_gt_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__n_gt_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__n_gt_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__n_gt_per_class  // resize(index) function pointer
  },
  {
    "expected_tp_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_tp_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__expected_tp_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__expected_tp_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__expected_tp_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__expected_tp_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__expected_tp_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__expected_tp_per_class  // resize(index) function pointer
  },
  {
    "expected_fp_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_fp_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__expected_fp_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__expected_fp_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__expected_fp_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__expected_fp_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__expected_fp_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__expected_fp_per_class  // resize(index) function pointer
  },
  {
    "expected_fn_per_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(swarm_interfaces::msg::ExpectedMetricsGt, expected_fn_per_class),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExpectedMetricsGt__expected_fn_per_class,  // size() function pointer
    get_const_function__ExpectedMetricsGt__expected_fn_per_class,  // get_const(index) function pointer
    get_function__ExpectedMetricsGt__expected_fn_per_class,  // get(index) function pointer
    fetch_function__ExpectedMetricsGt__expected_fn_per_class,  // fetch(index, &value) function pointer
    assign_function__ExpectedMetricsGt__expected_fn_per_class,  // assign(index, value) function pointer
    resize_function__ExpectedMetricsGt__expected_fn_per_class  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExpectedMetricsGt_message_members = {
  "swarm_interfaces::msg",  // message namespace
  "ExpectedMetricsGt",  // message name
  58,  // number of fields
  sizeof(swarm_interfaces::msg::ExpectedMetricsGt),
  false,  // has_any_key_member_
  ExpectedMetricsGt_message_member_array,  // message members
  ExpectedMetricsGt_init_function,  // function to initialize message memory (memory has to be allocated)
  ExpectedMetricsGt_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExpectedMetricsGt_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExpectedMetricsGt_message_members,
  get_message_typesupport_handle_function,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_hash,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description,
  &swarm_interfaces__msg__ExpectedMetricsGt__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace swarm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_interfaces::msg::ExpectedMetricsGt>()
{
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::ExpectedMetricsGt_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_interfaces, msg, ExpectedMetricsGt)() {
  return &::swarm_interfaces::msg::rosidl_typesupport_introspection_cpp::ExpectedMetricsGt_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
