// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/SensorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/sensor_definition.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/sensor_definition__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorDefinition & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_id
  {
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: type_id
  {
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << ", ";
  }

  // member: parent_actor_id
  {
    out << "parent_actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_actor_id, out);
    out << ", ";
  }

  // member: transform
  {
    out << "transform: ";
    to_flow_style_yaml(msg.transform, out);
    out << ", ";
  }

  // member: attribute_keys
  {
    if (msg.attribute_keys.size() == 0) {
      out << "attribute_keys: []";
    } else {
      out << "attribute_keys: [";
      size_t pending_items = msg.attribute_keys.size();
      for (auto item : msg.attribute_keys) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: attribute_values
  {
    if (msg.attribute_values.size() == 0) {
      out << "attribute_values: []";
    } else {
      out << "attribute_values: [";
      size_t pending_items = msg.attribute_values.size();
      for (auto item : msg.attribute_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SensorDefinition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_id, out);
    out << "\n";
  }

  // member: type_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_id: ";
    rosidl_generator_traits::value_to_yaml(msg.type_id, out);
    out << "\n";
  }

  // member: parent_actor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent_actor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.parent_actor_id, out);
    out << "\n";
  }

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_block_style_yaml(msg.transform, out, indentation + 2);
  }

  // member: attribute_keys
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attribute_keys.size() == 0) {
      out << "attribute_keys: []\n";
    } else {
      out << "attribute_keys:\n";
      for (auto item : msg.attribute_keys) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: attribute_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.attribute_values.size() == 0) {
      out << "attribute_values: []\n";
    } else {
      out << "attribute_values:\n";
      for (auto item : msg.attribute_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorDefinition & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::msg::SensorDefinition & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::SensorDefinition & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::SensorDefinition>()
{
  return "swarm_world_interfaces::msg::SensorDefinition";
}

template<>
inline const char * name<swarm_world_interfaces::msg::SensorDefinition>()
{
  return "swarm_world_interfaces/msg/SensorDefinition";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::SensorDefinition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::SensorDefinition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::SensorDefinition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__SENSOR_DEFINITION__TRAITS_HPP_
