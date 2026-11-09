// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/ugv_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UgvCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: ugv_id
  {
    out << "ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_id, out);
    out << ", ";
  }

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: steer
  {
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << ", ";
  }

  // member: brake
  {
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << ", ";
  }

  // member: hand_brake
  {
    out << "hand_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_brake, out);
    out << ", ";
  }

  // member: reverse
  {
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << ", ";
  }

  // member: active_cmd
  {
    out << "active_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.active_cmd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UgvCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ugv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ugv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_id, out);
    out << "\n";
  }

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: steer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer: ";
    rosidl_generator_traits::value_to_yaml(msg.steer, out);
    out << "\n";
  }

  // member: brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake: ";
    rosidl_generator_traits::value_to_yaml(msg.brake, out);
    out << "\n";
  }

  // member: hand_brake
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_brake: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_brake, out);
    out << "\n";
  }

  // member: reverse
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reverse: ";
    rosidl_generator_traits::value_to_yaml(msg.reverse, out);
    out << "\n";
  }

  // member: active_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.active_cmd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UgvCommand & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::UgvCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::UgvCommand & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::UgvCommand>()
{
  return "swarm_interfaces::msg::UgvCommand";
}

template<>
inline const char * name<swarm_interfaces::msg::UgvCommand>()
{
  return "swarm_interfaces/msg/UgvCommand";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::UgvCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::UgvCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<swarm_interfaces::msg::UgvCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__TRAITS_HPP_
