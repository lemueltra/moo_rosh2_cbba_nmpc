// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/DroneReferenceArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_reference_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/drone_reference_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_DroneReferenceArray_references
{
public:
  explicit Init_DroneReferenceArray_references(::swarm_interfaces::msg::DroneReferenceArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::DroneReferenceArray references(::swarm_interfaces::msg::DroneReferenceArray::_references_type arg)
  {
    msg_.references = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReferenceArray msg_;
};

class Init_DroneReferenceArray_header
{
public:
  Init_DroneReferenceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneReferenceArray_references header(::swarm_interfaces::msg::DroneReferenceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneReferenceArray_references(msg_);
  }

private:
  ::swarm_interfaces::msg::DroneReferenceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::DroneReferenceArray>()
{
  return swarm_interfaces::msg::builder::Init_DroneReferenceArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE_ARRAY__BUILDER_HPP_
