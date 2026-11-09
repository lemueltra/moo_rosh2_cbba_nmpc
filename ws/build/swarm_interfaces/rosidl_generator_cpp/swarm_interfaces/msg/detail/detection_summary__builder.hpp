// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DetectionSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/detection_summary.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/detection_summary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DetectionSummary_partially_blocked
{
public:
  explicit Init_DetectionSummary_partially_blocked(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DetectionSummary partially_blocked(::swarm_interfaces::msg::DetectionSummary::_partially_blocked_type arg)
  {
    msg_.partially_blocked = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_blocked
{
public:
  explicit Init_DetectionSummary_blocked(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_partially_blocked blocked(::swarm_interfaces::msg::DetectionSummary::_blocked_type arg)
  {
    msg_.blocked = std::move(arg);
    return Init_DetectionSummary_partially_blocked(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_fleet
{
public:
  explicit Init_DetectionSummary_fleet(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_blocked fleet(::swarm_interfaces::msg::DetectionSummary::_fleet_type arg)
  {
    msg_.fleet = std::move(arg);
    return Init_DetectionSummary_blocked(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_pedestrians
{
public:
  explicit Init_DetectionSummary_pedestrians(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_fleet pedestrians(::swarm_interfaces::msg::DetectionSummary::_pedestrians_type arg)
  {
    msg_.pedestrians = std::move(arg);
    return Init_DetectionSummary_fleet(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_vehicles
{
public:
  explicit Init_DetectionSummary_vehicles(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_pedestrians vehicles(::swarm_interfaces::msg::DetectionSummary::_vehicles_type arg)
  {
    msg_.vehicles = std::move(arg);
    return Init_DetectionSummary_pedestrians(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_buildings
{
public:
  explicit Init_DetectionSummary_buildings(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_vehicles buildings(::swarm_interfaces::msg::DetectionSummary::_buildings_type arg)
  {
    msg_.buildings = std::move(arg);
    return Init_DetectionSummary_vehicles(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_total
{
public:
  explicit Init_DetectionSummary_total(::swarm_interfaces::msg::DetectionSummary & msg)
  : msg_(msg)
  {}
  Init_DetectionSummary_buildings total(::swarm_interfaces::msg::DetectionSummary::_total_type arg)
  {
    msg_.total = std::move(arg);
    return Init_DetectionSummary_buildings(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

class Init_DetectionSummary_header
{
public:
  Init_DetectionSummary_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectionSummary_total header(::swarm_interfaces::msg::DetectionSummary::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DetectionSummary_total(msg_);
  }

private:
  ::swarm_interfaces::msg::DetectionSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DetectionSummary>()
{
  return swarm_interfaces::msg::builder::Init_DetectionSummary_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__BUILDER_HPP_
