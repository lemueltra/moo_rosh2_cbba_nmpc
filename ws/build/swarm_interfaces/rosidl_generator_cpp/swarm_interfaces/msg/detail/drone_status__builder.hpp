// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_status.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneStatus_compute_time_us
{
public:
  explicit Init_DroneStatus_compute_time_us(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneStatus compute_time_us(::swarm_interfaces::msg::DroneStatus::_compute_time_us_type arg)
  {
    msg_.compute_time_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_replan_count
{
public:
  explicit Init_DroneStatus_replan_count(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_compute_time_us replan_count(::swarm_interfaces::msg::DroneStatus::_replan_count_type arg)
  {
    msg_.replan_count = std::move(arg);
    return Init_DroneStatus_compute_time_us(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_eta
{
public:
  explicit Init_DroneStatus_eta(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_replan_count eta(::swarm_interfaces::msg::DroneStatus::_eta_type arg)
  {
    msg_.eta = std::move(arg);
    return Init_DroneStatus_replan_count(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_yaw_error
{
public:
  explicit Init_DroneStatus_yaw_error(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_eta yaw_error(::swarm_interfaces::msg::DroneStatus::_yaw_error_type arg)
  {
    msg_.yaw_error = std::move(arg);
    return Init_DroneStatus_eta(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_position_error
{
public:
  explicit Init_DroneStatus_position_error(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_yaw_error position_error(::swarm_interfaces::msg::DroneStatus::_position_error_type arg)
  {
    msg_.position_error = std::move(arg);
    return Init_DroneStatus_yaw_error(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_mode
{
public:
  explicit Init_DroneStatus_mode(::swarm_interfaces::msg::DroneStatus & msg)
  : msg_(msg)
  {}
  Init_DroneStatus_position_error mode(::swarm_interfaces::msg::DroneStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_DroneStatus_position_error(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

class Init_DroneStatus_drone_id
{
public:
  Init_DroneStatus_drone_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneStatus_mode drone_id(::swarm_interfaces::msg::DroneStatus::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneStatus_mode(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneStatus>()
{
  return swarm_interfaces::msg::builder::Init_DroneStatus_drone_id();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__BUILDER_HPP_
