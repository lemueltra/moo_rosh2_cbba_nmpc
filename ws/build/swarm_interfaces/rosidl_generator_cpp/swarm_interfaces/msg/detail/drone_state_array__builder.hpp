// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_state_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneStateArray_states
{
public:
  explicit Init_DroneStateArray_states(::swarm_interfaces::msg::DroneStateArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneStateArray states(::swarm_interfaces::msg::DroneStateArray::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStateArray msg_;
};

class Init_DroneStateArray_header
{
public:
  Init_DroneStateArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneStateArray_states header(::swarm_interfaces::msg::DroneStateArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneStateArray_states(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneStateArray>()
{
  return swarm_interfaces::msg::builder::Init_DroneStateArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATE_ARRAY__BUILDER_HPP_
