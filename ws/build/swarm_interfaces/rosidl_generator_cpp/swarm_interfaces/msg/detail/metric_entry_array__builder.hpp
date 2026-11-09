// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/MetricEntryArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/metric_entry_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MetricEntryArray_entries
{
public:
  explicit Init_MetricEntryArray_entries(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::MetricEntryArray entries(::swarm_interfaces::msg::MetricEntryArray::_entries_type arg)
  {
    msg_.entries = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_n_frames_in_window
{
public:
  explicit Init_MetricEntryArray_n_frames_in_window(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  Init_MetricEntryArray_entries n_frames_in_window(::swarm_interfaces::msg::MetricEntryArray::_n_frames_in_window_type arg)
  {
    msg_.n_frames_in_window = std::move(arg);
    return Init_MetricEntryArray_entries(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_warming_up
{
public:
  explicit Init_MetricEntryArray_warming_up(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  Init_MetricEntryArray_n_frames_in_window warming_up(::swarm_interfaces::msg::MetricEntryArray::_warming_up_type arg)
  {
    msg_.warming_up = std::move(arg);
    return Init_MetricEntryArray_n_frames_in_window(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_window_sec
{
public:
  explicit Init_MetricEntryArray_window_sec(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  Init_MetricEntryArray_warming_up window_sec(::swarm_interfaces::msg::MetricEntryArray::_window_sec_type arg)
  {
    msg_.window_sec = std::move(arg);
    return Init_MetricEntryArray_warming_up(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_params_hash
{
public:
  explicit Init_MetricEntryArray_params_hash(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  Init_MetricEntryArray_window_sec params_hash(::swarm_interfaces::msg::MetricEntryArray::_params_hash_type arg)
  {
    msg_.params_hash = std::move(arg);
    return Init_MetricEntryArray_window_sec(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_model_based
{
public:
  explicit Init_MetricEntryArray_model_based(::swarm_interfaces::msg::MetricEntryArray & msg)
  : msg_(msg)
  {}
  Init_MetricEntryArray_params_hash model_based(::swarm_interfaces::msg::MetricEntryArray::_model_based_type arg)
  {
    msg_.model_based = std::move(arg);
    return Init_MetricEntryArray_params_hash(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

class Init_MetricEntryArray_header
{
public:
  Init_MetricEntryArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricEntryArray_model_based header(::swarm_interfaces::msg::MetricEntryArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MetricEntryArray_model_based(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntryArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::MetricEntryArray>()
{
  return swarm_interfaces::msg::builder::Init_MetricEntryArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY_ARRAY__BUILDER_HPP_
