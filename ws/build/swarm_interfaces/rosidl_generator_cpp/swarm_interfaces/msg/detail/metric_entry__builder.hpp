// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/MetricEntry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/metric_entry.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/metric_entry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MetricEntry_valid
{
public:
  explicit Init_MetricEntry_valid(::swarm_interfaces::msg::MetricEntry & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::MetricEntry valid(::swarm_interfaces::msg::MetricEntry::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntry msg_;
};

class Init_MetricEntry_value
{
public:
  explicit Init_MetricEntry_value(::swarm_interfaces::msg::MetricEntry & msg)
  : msg_(msg)
  {}
  Init_MetricEntry_valid value(::swarm_interfaces::msg::MetricEntry::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_MetricEntry_valid(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntry msg_;
};

class Init_MetricEntry_unit
{
public:
  explicit Init_MetricEntry_unit(::swarm_interfaces::msg::MetricEntry & msg)
  : msg_(msg)
  {}
  Init_MetricEntry_value unit(::swarm_interfaces::msg::MetricEntry::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_MetricEntry_value(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntry msg_;
};

class Init_MetricEntry_name
{
public:
  Init_MetricEntry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricEntry_unit name(::swarm_interfaces::msg::MetricEntry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MetricEntry_unit(msg_);
  }

private:
  ::swarm_interfaces::msg::MetricEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::MetricEntry>()
{
  return swarm_interfaces::msg::builder::Init_MetricEntry_name();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__METRIC_ENTRY__BUILDER_HPP_
