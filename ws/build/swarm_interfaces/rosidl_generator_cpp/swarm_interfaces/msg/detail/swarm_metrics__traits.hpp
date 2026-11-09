// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/swarm_metrics.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/swarm_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'uavs'
#include "swarm_interfaces/msg/detail/uav_metric__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SwarmMetrics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: active_count
  {
    out << "active_count: ";
    rosidl_generator_traits::value_to_yaml(msg.active_count, out);
    out << ", ";
  }

  // member: active_ids
  {
    if (msg.active_ids.size() == 0) {
      out << "active_ids: []";
    } else {
      out << "active_ids: [";
      size_t pending_items = msg.active_ids.size();
      for (auto item : msg.active_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: detections_mean_60s
  {
    out << "detections_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_mean_60s, out);
    out << ", ";
  }

  // member: latency_mean_60s
  {
    out << "latency_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_mean_60s, out);
    out << ", ";
  }

  // member: latency_max_60s
  {
    out << "latency_max_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_max_60s, out);
    out << ", ";
  }

  // member: samples_in_window
  {
    out << "samples_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_in_window, out);
    out << ", ";
  }

  // member: window_capacity
  {
    out << "window_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.window_capacity, out);
    out << ", ";
  }

  // member: coverage_ratio
  {
    out << "coverage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_ratio, out);
    out << ", ";
  }

  // member: ugv_weighted_coverage
  {
    out << "ugv_weighted_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_weighted_coverage, out);
    out << ", ";
  }

  // member: redundancy_score
  {
    out << "redundancy_score: ";
    rosidl_generator_traits::value_to_yaml(msg.redundancy_score, out);
    out << ", ";
  }

  // member: planner_cycle_us
  {
    out << "planner_cycle_us: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_cycle_us, out);
    out << ", ";
  }

  // member: planner_deadline_misses
  {
    out << "planner_deadline_misses: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_deadline_misses, out);
    out << ", ";
  }

  // member: clamped_references
  {
    out << "clamped_references: ";
    rosidl_generator_traits::value_to_yaml(msg.clamped_references, out);
    out << ", ";
  }

  // member: clock_hz
  {
    out << "clock_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_hz, out);
    out << ", ";
  }

  // member: sim_time_s
  {
    out << "sim_time_s: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time_s, out);
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
  const SwarmMetrics & msg,
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

  // member: active_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_count: ";
    rosidl_generator_traits::value_to_yaml(msg.active_count, out);
    out << "\n";
  }

  // member: active_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active_ids.size() == 0) {
      out << "active_ids: []\n";
    } else {
      out << "active_ids:\n";
      for (auto item : msg.active_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: detections_mean_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detections_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.detections_mean_60s, out);
    out << "\n";
  }

  // member: latency_mean_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_mean_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_mean_60s, out);
    out << "\n";
  }

  // member: latency_max_60s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency_max_60s: ";
    rosidl_generator_traits::value_to_yaml(msg.latency_max_60s, out);
    out << "\n";
  }

  // member: samples_in_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "samples_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.samples_in_window, out);
    out << "\n";
  }

  // member: window_capacity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_capacity: ";
    rosidl_generator_traits::value_to_yaml(msg.window_capacity, out);
    out << "\n";
  }

  // member: coverage_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coverage_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.coverage_ratio, out);
    out << "\n";
  }

  // member: ugv_weighted_coverage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ugv_weighted_coverage: ";
    rosidl_generator_traits::value_to_yaml(msg.ugv_weighted_coverage, out);
    out << "\n";
  }

  // member: redundancy_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "redundancy_score: ";
    rosidl_generator_traits::value_to_yaml(msg.redundancy_score, out);
    out << "\n";
  }

  // member: planner_cycle_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_cycle_us: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_cycle_us, out);
    out << "\n";
  }

  // member: planner_deadline_misses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner_deadline_misses: ";
    rosidl_generator_traits::value_to_yaml(msg.planner_deadline_misses, out);
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

  // member: clock_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clock_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.clock_hz, out);
    out << "\n";
  }

  // member: sim_time_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sim_time_s: ";
    rosidl_generator_traits::value_to_yaml(msg.sim_time_s, out);
    out << "\n";
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

inline std::string to_yaml(const SwarmMetrics & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::SwarmMetrics & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::SwarmMetrics & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::SwarmMetrics>()
{
  return "swarm_interfaces::msg::SwarmMetrics";
}

template<>
inline const char * name<swarm_interfaces::msg::SwarmMetrics>()
{
  return "swarm_interfaces/msg/SwarmMetrics";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::SwarmMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::SwarmMetrics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::SwarmMetrics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__TRAITS_HPP_
