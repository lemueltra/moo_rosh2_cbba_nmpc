// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UavLinkLatencyArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/uav_link_latency_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UavLinkLatencyArray_links
{
public:
  explicit Init_UavLinkLatencyArray_links(::swarm_interfaces::msg::UavLinkLatencyArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UavLinkLatencyArray links(::swarm_interfaces::msg::UavLinkLatencyArray::_links_type arg)
  {
    msg_.links = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatencyArray msg_;
};

class Init_UavLinkLatencyArray_header
{
public:
  Init_UavLinkLatencyArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavLinkLatencyArray_links header(::swarm_interfaces::msg::UavLinkLatencyArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavLinkLatencyArray_links(msg_);
  }

private:
  ::swarm_interfaces::msg::UavLinkLatencyArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UavLinkLatencyArray>()
{
  return swarm_interfaces::msg::builder::Init_UavLinkLatencyArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__BUILDER_HPP_
