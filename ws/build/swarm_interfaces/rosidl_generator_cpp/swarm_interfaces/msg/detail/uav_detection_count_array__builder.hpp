// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UavDetectionCountArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/uav_detection_count_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UavDetectionCountArray_uavs
{
public:
  explicit Init_UavDetectionCountArray_uavs(::swarm_interfaces::msg::UavDetectionCountArray & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UavDetectionCountArray uavs(::swarm_interfaces::msg::UavDetectionCountArray::_uavs_type arg)
  {
    msg_.uavs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCountArray msg_;
};

class Init_UavDetectionCountArray_header
{
public:
  Init_UavDetectionCountArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavDetectionCountArray_uavs header(::swarm_interfaces::msg::UavDetectionCountArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavDetectionCountArray_uavs(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCountArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UavDetectionCountArray>()
{
  return swarm_interfaces::msg::builder::Init_UavDetectionCountArray_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__BUILDER_HPP_
