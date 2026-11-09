// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/simulation_status.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/simulation_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SimulationStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_mode
  {
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << ", ";
  }

  // member: step_count
  {
    out << "step_count: ";
    rosidl_generator_traits::value_to_yaml(msg.step_count, out);
    out << ", ";
  }

  // member: elapsed_sim_time
  {
    out << "elapsed_sim_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_sim_time, out);
    out << ", ";
  }

  // member: fixed_delta_seconds
  {
    out << "fixed_delta_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_delta_seconds, out);
    out << ", ";
  }

  // member: num_active_ugvs
  {
    out << "num_active_ugvs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_ugvs, out);
    out << ", ";
  }

  // member: num_active_uavs
  {
    out << "num_active_uavs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_uavs, out);
    out << ", ";
  }

  // member: num_active_sensors
  {
    out << "num_active_sensors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_sensors, out);
    out << ", ";
  }

  // member: sync_waiting
  {
    out << "sync_waiting: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_waiting, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SimulationStatus & msg,
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

  // member: time_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.time_mode, out);
    out << "\n";
  }

  // member: step_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "step_count: ";
    rosidl_generator_traits::value_to_yaml(msg.step_count, out);
    out << "\n";
  }

  // member: elapsed_sim_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_sim_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_sim_time, out);
    out << "\n";
  }

  // member: fixed_delta_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_delta_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_delta_seconds, out);
    out << "\n";
  }

  // member: num_active_ugvs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_active_ugvs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_ugvs, out);
    out << "\n";
  }

  // member: num_active_uavs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_active_uavs: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_uavs, out);
    out << "\n";
  }

  // member: num_active_sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_active_sensors: ";
    rosidl_generator_traits::value_to_yaml(msg.num_active_sensors, out);
    out << "\n";
  }

  // member: sync_waiting
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_waiting: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_waiting, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SimulationStatus & msg, bool use_flow_style = false)
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

}  // namespace swarm_world_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_world_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_world_interfaces::msg::SimulationStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::SimulationStatus & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::SimulationStatus>()
{
  return "swarm_world_interfaces::msg::SimulationStatus";
}

template<>
inline const char * name<swarm_world_interfaces::msg::SimulationStatus>()
{
  return "swarm_world_interfaces/msg/SimulationStatus";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::SimulationStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::SimulationStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<swarm_world_interfaces::msg::SimulationStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SIMULATION_STATUS__TRAITS_HPP_
