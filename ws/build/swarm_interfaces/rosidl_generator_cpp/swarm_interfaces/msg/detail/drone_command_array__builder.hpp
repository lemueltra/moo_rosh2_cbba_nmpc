// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneCommandArray_commands
{
public:
  explicit Init_DroneCommandArray_commands(::swarm_interfaces::msg::DroneCommandArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneCommandArray commands(::swarm_interfaces::msg::DroneCommandArray::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommandArray msg_;
};

class Init_DroneCommandArray_header
{
public:
  Init_DroneCommandArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneCommandArray_commands header(::swarm_interfaces::msg::DroneCommandArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneCommandArray_commands(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneCommandArray>()
{
  return swarm_interfaces::msg::builder::Init_DroneCommandArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__BUILDER_HPP_
