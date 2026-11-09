// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/OptimizerFeedback.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/optimizer_feedback.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/optimizer_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_OptimizerFeedback_samples_in_window
{
public:
  explicit Init_OptimizerFeedback_samples_in_window(::swarm_interfaces::msg::OptimizerFeedback & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::OptimizerFeedback samples_in_window(::swarm_interfaces::msg::OptimizerFeedback::_samples_in_window_type arg)
  {
    msg_.samples_in_window = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

class Init_OptimizerFeedback_latency_max_60s
{
public:
  explicit Init_OptimizerFeedback_latency_max_60s(::swarm_interfaces::msg::OptimizerFeedback & msg)
  : msg_(msg)
  {}
  Init_OptimizerFeedback_samples_in_window latency_max_60s(::swarm_interfaces::msg::OptimizerFeedback::_latency_max_60s_type arg)
  {
    msg_.latency_max_60s = std::move(arg);
    return Init_OptimizerFeedback_samples_in_window(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

class Init_OptimizerFeedback_latency_mean_60s
{
public:
  explicit Init_OptimizerFeedback_latency_mean_60s(::swarm_interfaces::msg::OptimizerFeedback & msg)
  : msg_(msg)
  {}
  Init_OptimizerFeedback_latency_max_60s latency_mean_60s(::swarm_interfaces::msg::OptimizerFeedback::_latency_mean_60s_type arg)
  {
    msg_.latency_mean_60s = std::move(arg);
    return Init_OptimizerFeedback_latency_max_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

class Init_OptimizerFeedback_detections_mean_60s
{
public:
  explicit Init_OptimizerFeedback_detections_mean_60s(::swarm_interfaces::msg::OptimizerFeedback & msg)
  : msg_(msg)
  {}
  Init_OptimizerFeedback_latency_mean_60s detections_mean_60s(::swarm_interfaces::msg::OptimizerFeedback::_detections_mean_60s_type arg)
  {
    msg_.detections_mean_60s = std::move(arg);
    return Init_OptimizerFeedback_latency_mean_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

class Init_OptimizerFeedback_active_ids
{
public:
  explicit Init_OptimizerFeedback_active_ids(::swarm_interfaces::msg::OptimizerFeedback & msg)
  : msg_(msg)
  {}
  Init_OptimizerFeedback_detections_mean_60s active_ids(::swarm_interfaces::msg::OptimizerFeedback::_active_ids_type arg)
  {
    msg_.active_ids = std::move(arg);
    return Init_OptimizerFeedback_detections_mean_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

class Init_OptimizerFeedback_header
{
public:
  Init_OptimizerFeedback_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizerFeedback_active_ids header(::swarm_interfaces::msg::OptimizerFeedback::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OptimizerFeedback_active_ids(msg_);
  }

private:
  ::swarm_interfaces::msg::OptimizerFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::OptimizerFeedback>()
{
  return swarm_interfaces::msg::builder::Init_OptimizerFeedback_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__OPTIMIZER_FEEDBACK__BUILDER_HPP_
