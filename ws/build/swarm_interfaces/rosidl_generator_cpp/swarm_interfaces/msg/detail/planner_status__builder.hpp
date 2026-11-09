// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/planner_status.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/planner_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_PlannerStatus_clamped_references
{
public:
  explicit Init_PlannerStatus_clamped_references(::swarm_interfaces::msg::PlannerStatus & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::PlannerStatus clamped_references(::swarm_interfaces::msg::PlannerStatus::_clamped_references_type arg)
  {
    msg_.clamped_references = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

class Init_PlannerStatus_deadline_misses
{
public:
  explicit Init_PlannerStatus_deadline_misses(::swarm_interfaces::msg::PlannerStatus & msg)
  : msg_(msg)
  {}
  Init_PlannerStatus_clamped_references deadline_misses(::swarm_interfaces::msg::PlannerStatus::_deadline_misses_type arg)
  {
    msg_.deadline_misses = std::move(arg);
    return Init_PlannerStatus_clamped_references(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

class Init_PlannerStatus_cycle_time_max_us
{
public:
  explicit Init_PlannerStatus_cycle_time_max_us(::swarm_interfaces::msg::PlannerStatus & msg)
  : msg_(msg)
  {}
  Init_PlannerStatus_deadline_misses cycle_time_max_us(::swarm_interfaces::msg::PlannerStatus::_cycle_time_max_us_type arg)
  {
    msg_.cycle_time_max_us = std::move(arg);
    return Init_PlannerStatus_deadline_misses(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

class Init_PlannerStatus_cycle_time_us
{
public:
  explicit Init_PlannerStatus_cycle_time_us(::swarm_interfaces::msg::PlannerStatus & msg)
  : msg_(msg)
  {}
  Init_PlannerStatus_cycle_time_max_us cycle_time_us(::swarm_interfaces::msg::PlannerStatus::_cycle_time_us_type arg)
  {
    msg_.cycle_time_us = std::move(arg);
    return Init_PlannerStatus_cycle_time_max_us(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

class Init_PlannerStatus_drones
{
public:
  explicit Init_PlannerStatus_drones(::swarm_interfaces::msg::PlannerStatus & msg)
  : msg_(msg)
  {}
  Init_PlannerStatus_cycle_time_us drones(::swarm_interfaces::msg::PlannerStatus::_drones_type arg)
  {
    msg_.drones = std::move(arg);
    return Init_PlannerStatus_cycle_time_us(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

class Init_PlannerStatus_header
{
public:
  Init_PlannerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlannerStatus_drones header(::swarm_interfaces::msg::PlannerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlannerStatus_drones(msg_);
  }

private:
  ::swarm_interfaces::msg::PlannerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::PlannerStatus>()
{
  return swarm_interfaces::msg::builder::Init_PlannerStatus_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__BUILDER_HPP_
