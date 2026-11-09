// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/uav_detection_count__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavDetectionCount & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: detections_now
  {
    out << "detections_now: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_now, out);
    out << ", ";
  }

  // member: sensor_streams
  {
    out << "sensor_streams: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_streams, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavDetectionCount & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: detections_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections_now: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_now, out);
    out << "\n";
  }

  // member: sensor_streams
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_streams: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_streams, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavDetectionCount & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace swarm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_interfaces::msg::UavDetectionCount & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::UavDetectionCount & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::UavDetectionCount>()
{
  return "swarm_interfaces::msg::UavDetectionCount";
}

template<>
inline const char * name<swarm_interfaces::msg::UavDetectionCount>()
{
  return "swarm_interfaces/msg/UavDetectionCount";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::UavDetectionCount>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::UavDetectionCount>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<swarm_interfaces::msg::UavDetectionCount>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT__TRAITS_HPP_
