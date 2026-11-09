// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/npc_spawn_summary.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NpcSpawnSummary & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: seed
  {
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << ", ";
  }

  // member: requested_vehicles
  {
    out << "requested_vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_vehicles, out);
    out << ", ";
  }

  // member: requested_pedestrians
  {
    out << "requested_pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_pedestrians, out);
    out << ", ";
  }

  // member: spawned_vehicles
  {
    out << "spawned_vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.spawned_vehicles, out);
    out << ", ";
  }

  // member: spawned_pedestrians
  {
    out << "spawned_pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.spawned_pedestrians, out);
    out << ", ";
  }

  // member: vehicle_actor_ids
  {
    if (msg.vehicle_actor_ids.size() == 0) {
      out << "vehicle_actor_ids: []";
    } else {
      out << "vehicle_actor_ids: [";
      size_t pending_items = msg.vehicle_actor_ids.size();
      for (auto item : msg.vehicle_actor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pedestrian_actor_ids
  {
    if (msg.pedestrian_actor_ids.size() == 0) {
      out << "pedestrian_actor_ids: []";
    } else {
      out << "pedestrian_actor_ids: [";
      size_t pending_items = msg.pedestrian_actor_ids.size();
      for (auto item : msg.pedestrian_actor_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: vehicle_types
  {
    if (msg.vehicle_types.size() == 0) {
      out << "vehicle_types: []";
    } else {
      out << "vehicle_types: [";
      size_t pending_items = msg.vehicle_types.size();
      for (auto item : msg.vehicle_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pedestrian_types
  {
    if (msg.pedestrian_types.size() == 0) {
      out << "pedestrian_types: []";
    } else {
      out << "pedestrian_types: [";
      size_t pending_items = msg.pedestrian_types.size();
      for (auto item : msg.pedestrian_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elapsed_s
  {
    out << "elapsed_s: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_s, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NpcSpawnSummary & msg,
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

  // member: seed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seed: ";
    rosidl_generator_traits::value_to_yaml(msg.seed, out);
    out << "\n";
  }

  // member: requested_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_vehicles, out);
    out << "\n";
  }

  // member: requested_pedestrians
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_pedestrians, out);
    out << "\n";
  }

  // member: spawned_vehicles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spawned_vehicles: ";
    rosidl_generator_traits::value_to_yaml(msg.spawned_vehicles, out);
    out << "\n";
  }

  // member: spawned_pedestrians
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spawned_pedestrians: ";
    rosidl_generator_traits::value_to_yaml(msg.spawned_pedestrians, out);
    out << "\n";
  }

  // member: vehicle_actor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_actor_ids.size() == 0) {
      out << "vehicle_actor_ids: []\n";
    } else {
      out << "vehicle_actor_ids:\n";
      for (auto item : msg.vehicle_actor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pedestrian_actor_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pedestrian_actor_ids.size() == 0) {
      out << "pedestrian_actor_ids: []\n";
    } else {
      out << "pedestrian_actor_ids:\n";
      for (auto item : msg.pedestrian_actor_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: vehicle_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehicle_types.size() == 0) {
      out << "vehicle_types: []\n";
    } else {
      out << "vehicle_types:\n";
      for (auto item : msg.vehicle_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pedestrian_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pedestrian_types.size() == 0) {
      out << "pedestrian_types: []\n";
    } else {
      out << "pedestrian_types:\n";
      for (auto item : msg.pedestrian_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elapsed_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_s: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NpcSpawnSummary & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::msg::NpcSpawnSummary & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::NpcSpawnSummary & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::NpcSpawnSummary>()
{
  return "swarm_world_interfaces::msg::NpcSpawnSummary";
}

template<>
inline const char * name<swarm_world_interfaces::msg::NpcSpawnSummary>()
{
  return "swarm_world_interfaces/msg/NpcSpawnSummary";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::NpcSpawnSummary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::NpcSpawnSummary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::NpcSpawnSummary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__TRAITS_HPP_
