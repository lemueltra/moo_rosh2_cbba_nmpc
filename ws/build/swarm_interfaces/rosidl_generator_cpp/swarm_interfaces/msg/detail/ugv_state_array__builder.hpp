// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UgvStateArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_state_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/ugv_state_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UgvStateArray_states
{
public:
  explicit Init_UgvStateArray_states(::swarm_interfaces::msg::UgvStateArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UgvStateArray states(::swarm_interfaces::msg::UgvStateArray::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvStateArray msg_;
};

class Init_UgvStateArray_header
{
public:
  Init_UgvStateArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UgvStateArray_states header(::swarm_interfaces::msg::UgvStateArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UgvStateArray_states(msg_);
  }

private:
  ::swarm_interfaces::msg::UgvStateArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UgvStateArray>()
{
  return swarm_interfaces::msg::builder::Init_UgvStateArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_STATE_ARRAY__BUILDER_HPP_
