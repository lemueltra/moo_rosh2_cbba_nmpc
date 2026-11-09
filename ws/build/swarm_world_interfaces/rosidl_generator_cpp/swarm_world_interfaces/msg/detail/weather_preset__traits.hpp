// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/weather_preset.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__TRAITS_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_world_interfaces/msg/detail/weather_preset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace swarm_world_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const WeatherPreset & msg,
  std::ostream & out)
{
  out << "{";
  // member: preset_name
  {
    out << "preset_name: ";
    rosidl_generator_traits::value_to_yaml(msg.preset_name, out);
    out << ", ";
  }

  // member: cloudiness
  {
    out << "cloudiness: ";
    rosidl_generator_traits::value_to_yaml(msg.cloudiness, out);
    out << ", ";
  }

  // member: precipitation
  {
    out << "precipitation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation, out);
    out << ", ";
  }

  // member: precipitation_deposits
  {
    out << "precipitation_deposits: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation_deposits, out);
    out << ", ";
  }

  // member: wind_intensity
  {
    out << "wind_intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_intensity, out);
    out << ", ";
  }

  // member: sun_azimuth_angle
  {
    out << "sun_azimuth_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_azimuth_angle, out);
    out << ", ";
  }

  // member: sun_altitude_angle
  {
    out << "sun_altitude_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_altitude_angle, out);
    out << ", ";
  }

  // member: fog_density
  {
    out << "fog_density: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_density, out);
    out << ", ";
  }

  // member: fog_distance
  {
    out << "fog_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_distance, out);
    out << ", ";
  }

  // member: fog_falloff
  {
    out << "fog_falloff: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_falloff, out);
    out << ", ";
  }

  // member: wetness
  {
    out << "wetness: ";
    rosidl_generator_traits::value_to_yaml(msg.wetness, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WeatherPreset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: preset_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preset_name: ";
    rosidl_generator_traits::value_to_yaml(msg.preset_name, out);
    out << "\n";
  }

  // member: cloudiness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloudiness: ";
    rosidl_generator_traits::value_to_yaml(msg.cloudiness, out);
    out << "\n";
  }

  // member: precipitation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation, out);
    out << "\n";
  }

  // member: precipitation_deposits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation_deposits: ";
    rosidl_generator_traits::value_to_yaml(msg.precipitation_deposits, out);
    out << "\n";
  }

  // member: wind_intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_intensity: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_intensity, out);
    out << "\n";
  }

  // member: sun_azimuth_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sun_azimuth_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_azimuth_angle, out);
    out << "\n";
  }

  // member: sun_altitude_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sun_altitude_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_altitude_angle, out);
    out << "\n";
  }

  // member: fog_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_density: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_density, out);
    out << "\n";
  }

  // member: fog_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_distance, out);
    out << "\n";
  }

  // member: fog_falloff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_falloff: ";
    rosidl_generator_traits::value_to_yaml(msg.fog_falloff, out);
    out << "\n";
  }

  // member: wetness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wetness: ";
    rosidl_generator_traits::value_to_yaml(msg.wetness, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WeatherPreset & msg, bool use_flow_style = false)
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
  const swarm_world_interfaces::msg::WeatherPreset & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_world_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_world_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_world_interfaces::msg::WeatherPreset & msg)
{
  return swarm_world_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_world_interfaces::msg::WeatherPreset>()
{
  return "swarm_world_interfaces::msg::WeatherPreset";
}

template<>
inline const char * name<swarm_world_interfaces::msg::WeatherPreset>()
{
  return "swarm_world_interfaces/msg/WeatherPreset";
}

template<>
struct has_fixed_size<swarm_world_interfaces::msg::WeatherPreset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_world_interfaces::msg::WeatherPreset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_world_interfaces::msg::WeatherPreset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__TRAITS_HPP_
