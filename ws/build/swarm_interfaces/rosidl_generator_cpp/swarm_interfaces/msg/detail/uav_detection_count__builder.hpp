// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/uav_detection_count__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_UavDetectionCount_sensor_streams
{
public:
  explicit Init_UavDetectionCount_sensor_streams(::swarm_interfaces::msg::UavDetectionCount & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::UavDetectionCount sensor_streams(::swarm_interfaces::msg::UavDetectionCount::_sensor_streams_type arg)
  {
    msg_.sensor_streams = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCount msg_;
};

class Init_UavDetectionCount_detections_now
{
public:
  explicit Init_UavDetectionCount_detections_now(::swarm_interfaces::msg::UavDetectionCount & msg)
  : msg_(msg)
  {}
  Init_UavDetectionCount_sensor_streams detections_now(::swarm_interfaces::msg::UavDetectionCount::_detections_now_type arg)
  {
    msg_.detections_now = std::move(arg);
    return Init_UavDetectionCount_sensor_streams(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCount msg_;
};

class Init_UavDetectionCount_drone_id
{
public:
  explicit Init_UavDetectionCount_drone_id(::swarm_interfaces::msg::UavDetectionCount & msg)
  : msg_(msg)
  {}
  Init_UavDetectionCount_detections_now drone_id(::swarm_interfaces::msg::UavDetectionCount::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_UavDetectionCount_detections_now(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCount msg_;
};

class Init_UavDetectionCount_header
{
public:
  Init_UavDetectionCount_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UavDetectionCount_drone_id header(::swarm_interfaces::msg::UavDetectionCount::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UavDetectionCount_drone_id(msg_);
  }

private:
  ::swarm_interfaces::msg::UavDetectionCount msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::UavDetectionCount>()
{
  return swarm_interfaces::msg::builder::Init_UavDetectionCount_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__BUILDER_HPP_
