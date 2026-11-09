// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UgvCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/ugv_command_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UgvCommandArray_commands
{
public:
  explicit Init_UgvCommandArray_commands(::swarm_interfaces::msg::UgvCommandArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UgvCommandArray commands(::swarm_interfaces::msg::UgvCommandArray::_commands_type arg)
  {
    msg_.commands = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommandArray msg_;
};

class Init_UgvCommandArray_header
{
public:
  Init_UgvCommandArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UgvCommandArray_commands header(::swarm_interfaces::msg::UgvCommandArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UgvCommandArray_commands(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvCommandArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UgvCommandArray>()
{
  return swarm_interfaces::msg::builder::Init_UgvCommandArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND_ARRAY__BUILDER_HPP_
