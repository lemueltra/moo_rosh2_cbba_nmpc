// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/UavDetectionCountArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_detection_count_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/uav_detection_count_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'uavs'
#include "swarm_interfaces/msg/detail/uav_detection_count__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UavDetectionCountArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: uavs
  {
    if (msg.uavs.size() == 0) {
      out << "uavs: []";
    } else {
      out << "uavs: [";
      size_t pending_items = msg.uavs.size();
      for (auto item : msg.uavs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UavDetectionCountArray & msg,
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

  // member: uavs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uavs.size() == 0) {
      out << "uavs: []\n";
    } else {
      out << "uavs:\n";
      for (auto item : msg.uavs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UavDetectionCountArray & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::UavDetectionCountArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::UavDetectionCountArray & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::UavDetectionCountArray>()
{
  return "swarm_interfaces::msg::UavDetectionCountArray";
}

template<>
inline const char * name<swarm_interfaces::msg::UavDetectionCountArray>()
{
  return "swarm_interfaces/msg/UavDetectionCountArray";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::UavDetectionCountArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::UavDetectionCountArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::UavDetectionCountArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_DETECTION_COUNT_ARRAY__TRAITS_HPP_
