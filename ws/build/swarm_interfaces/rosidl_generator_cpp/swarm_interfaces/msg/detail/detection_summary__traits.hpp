// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/DetectionSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/detection_summary.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/detection_summary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DetectionSummary & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: total
  {
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
    out << ", ";
  }

  // member: buildings
  {
    out << "buildings: ";
    rosidl_generator_traits::value_to_yaml(msg.buildings, out);
    out << ", ";
  }

  // member: vehicles
  {
    out << "vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicles, out);
    out << ", ";
  }

  // member: pedestrians
  {
    out << "pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.pedestrians, out);
    out << ", ";
  }

  // member: fleet
  {
    out << "fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet, out);
    out << ", ";
  }

  // member: blocked
  {
    out << "blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked, out);
    out << ", ";
  }

  // member: partially_blocked
  {
    out << "partially_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.partially_blocked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DetectionSummary & msg,
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

  // member: total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total: ";
    rosidl_generator_traits::value_to_yaml(msg.total, out);
    out << "\n";
  }

  // member: buildings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buildings: ";
    rosidl_generator_traits::value_to_yaml(msg.buildings, out);
    out << "\n";
  }

  // member: vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicles, out);
    out << "\n";
  }

  // member: pedestrians
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.pedestrians, out);
    out << "\n";
  }

  // member: fleet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet, out);
    out << "\n";
  }

  // member: blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.blocked, out);
    out << "\n";
  }

  // member: partially_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "partially_blocked: ";
    rosidl_generator_traits::value_to_yaml(msg.partially_blocked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DetectionSummary & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::DetectionSummary & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::DetectionSummary & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::DetectionSummary>()
{
  return "swarm_interfaces::msg::DetectionSummary";
}

template<>
inline const char * name<swarm_interfaces::msg::DetectionSummary>()
{
  return "swarm_interfaces/msg/DetectionSummary";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::DetectionSummary>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::DetectionSummary>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<swarm_interfaces::msg::DetectionSummary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__TRAITS_HPP_
