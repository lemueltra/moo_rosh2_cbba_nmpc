// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneActiveSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_active_set.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_active_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneActiveSet_active_ids
{
public:
  explicit Init_DroneActiveSet_active_ids(::swarm_interfaces::msg::DroneActiveSet & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneActiveSet active_ids(::swarm_interfaces::msg::DroneActiveSet::_active_ids_type arg)
  {
    msg_.active_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneActiveSet msg_;
};

class Init_DroneActiveSet_header
{
public:
  Init_DroneActiveSet_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneActiveSet_active_ids header(::swarm_interfaces::msg::DroneActiveSet::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneActiveSet_active_ids(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneActiveSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneActiveSet>()
{
  return swarm_interfaces::msg::builder::Init_DroneActiveSet_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__BUILDER_HPP_
