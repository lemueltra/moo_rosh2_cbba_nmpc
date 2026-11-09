// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/uav_link_latency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UavLinkLatency_los
{
public:
  explicit Init_UavLinkLatency_los(::swarm_interfaces::msg::UavLinkLatency & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UavLinkLatency los(::swarm_interfaces::msg::UavLinkLatency::_los_type arg)
  {
    msg_.los = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatency msg_;
};

class Init_UavLinkLatency_distance_m
{
public:
  explicit Init_UavLinkLatency_distance_m(::swarm_interfaces::msg::UavLinkLatency & msg)
  : msg_(msg)
  {}
  Init_UavLinkLatency_los distance_m(::swarm_interfaces::msg::UavLinkLatency::_distance_m_type arg)
  {
    msg_.distance_m = std::move(arg);
    return Init_UavLinkLatency_los(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatency msg_;
};

class Init_UavLinkLatency_latency_ms
{
public:
  explicit Init_UavLinkLatency_latency_ms(::swarm_interfaces::msg::UavLinkLatency & msg)
  : msg_(msg)
  {}
  Init_UavLinkLatency_distance_m latency_ms(::swarm_interfaces::msg::UavLinkLatency::_latency_ms_type arg)
  {
    msg_.latency_ms = std::move(arg);
    return Init_UavLinkLatency_distance_m(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatency msg_;
};

class Init_UavLinkLatency_ugv_id
{
public:
  explicit Init_UavLinkLatency_ugv_id(::swarm_interfaces::msg::UavLinkLatency & msg)
  : msg_(msg)
  {}
  Init_UavLinkLatency_latency_ms ugv_id(::swarm_interfaces::msg::UavLinkLatency::_ugv_id_type arg)
  {
    msg_.ugv_id = std::move(arg);
    return Init_UavLinkLatency_latency_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatency msg_;
};

class Init_UavLinkLatency_drone_id
{
public:
  Init_UavLinkLatency_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavLinkLatency_ugv_id drone_id(::swarm_interfaces::msg::UavLinkLatency::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_UavLinkLatency_ugv_id(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UavLinkLatency>()
{
  return swarm_interfaces::msg::builder::Init_UavLinkLatency_drone_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__BUILDER_HPP_
