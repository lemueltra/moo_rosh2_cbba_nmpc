// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/planner_status.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/planner_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drones'
#include "swarm_interfaces/msg/detail/drone_status__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlannerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drones
  {
    if (msg.drones.size() == 0) {
      out << "drones: []";
    } else {
      out << "drones: [";
      size_t pending_items = msg.drones.size();
      for (auto item : msg.drones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cycle_time_us
  {
    out << "cycle_time_us: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time_us, out);
    out << ", ";
  }

  // member: cycle_time_max_us
  {
    out << "cycle_time_max_us: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time_max_us, out);
    out << ", ";
  }

  // member: deadline_misses
  {
    out << "deadline_misses: ";
    rosidl_generator_traits::value_to_yaml(msg.deadline_misses, out);
    out << ", ";
  }

  // member: clamped_references
  {
    out << "clamped_references: ";
    rosidl_generator_traits::value_to_yaml(msg.clamped_references, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlannerStatus & msg,
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

  // member: drones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drones.size() == 0) {
      out << "drones: []\n";
    } else {
      out << "drones:\n";
      for (auto item : msg.drones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cycle_time_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_time_us: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time_us, out);
    out << "\n";
  }

  // member: cycle_time_max_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cycle_time_max_us: ";
    rosidl_generator_traits::value_to_yaml(msg.cycle_time_max_us, out);
    out << "\n";
  }

  // member: deadline_misses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deadline_misses: ";
    rosidl_generator_traits::value_to_yaml(msg.deadline_misses, out);
    out << "\n";
  }

  // member: clamped_references
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clamped_references: ";
    rosidl_generator_traits::value_to_yaml(msg.clamped_references, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlannerStatus & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::PlannerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::PlannerStatus & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::PlannerStatus>()
{
  return "swarm_interfaces::msg::PlannerStatus";
}

template<>
inline const char * name<swarm_interfaces::msg::PlannerStatus>()
{
  return "swarm_interfaces/msg/PlannerStatus";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::PlannerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::PlannerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::PlannerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__TRAITS_HPP_
