// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/weather_preset.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__BUILDER_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_world_interfaces/msg/detail/weather_preset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_world_interfaces
{

namespace msg
{

namespace builder
{

class Init_WeatherPreset_wetness
{
public:
  explicit Init_WeatherPreset_wetness(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  ::swarm_world_interfaces::msg::WeatherPreset wetness(::swarm_world_interfaces::msg::WeatherPreset::_wetness_type arg)
  {
    msg_.wetness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_fog_falloff
{
public:
  explicit Init_WeatherPreset_fog_falloff(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_wetness fog_falloff(::swarm_world_interfaces::msg::WeatherPreset::_fog_falloff_type arg)
  {
    msg_.fog_falloff = std::move(arg);
    return Init_WeatherPreset_wetness(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_fog_distance
{
public:
  explicit Init_WeatherPreset_fog_distance(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_fog_falloff fog_distance(::swarm_world_interfaces::msg::WeatherPreset::_fog_distance_type arg)
  {
    msg_.fog_distance = std::move(arg);
    return Init_WeatherPreset_fog_falloff(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_fog_density
{
public:
  explicit Init_WeatherPreset_fog_density(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_fog_distance fog_density(::swarm_world_interfaces::msg::WeatherPreset::_fog_density_type arg)
  {
    msg_.fog_density = std::move(arg);
    return Init_WeatherPreset_fog_distance(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_sun_altitude_angle
{
public:
  explicit Init_WeatherPreset_sun_altitude_angle(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_fog_density sun_altitude_angle(::swarm_world_interfaces::msg::WeatherPreset::_sun_altitude_angle_type arg)
  {
    msg_.sun_altitude_angle = std::move(arg);
    return Init_WeatherPreset_fog_density(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_sun_azimuth_angle
{
public:
  explicit Init_WeatherPreset_sun_azimuth_angle(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_sun_altitude_angle sun_azimuth_angle(::swarm_world_interfaces::msg::WeatherPreset::_sun_azimuth_angle_type arg)
  {
    msg_.sun_azimuth_angle = std::move(arg);
    return Init_WeatherPreset_sun_altitude_angle(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_wind_intensity
{
public:
  explicit Init_WeatherPreset_wind_intensity(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_sun_azimuth_angle wind_intensity(::swarm_world_interfaces::msg::WeatherPreset::_wind_intensity_type arg)
  {
    msg_.wind_intensity = std::move(arg);
    return Init_WeatherPreset_sun_azimuth_angle(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_precipitation_deposits
{
public:
  explicit Init_WeatherPreset_precipitation_deposits(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_wind_intensity precipitation_deposits(::swarm_world_interfaces::msg::WeatherPreset::_precipitation_deposits_type arg)
  {
    msg_.precipitation_deposits = std::move(arg);
    return Init_WeatherPreset_wind_intensity(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_precipitation
{
public:
  explicit Init_WeatherPreset_precipitation(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_precipitation_deposits precipitation(::swarm_world_interfaces::msg::WeatherPreset::_precipitation_type arg)
  {
    msg_.precipitation = std::move(arg);
    return Init_WeatherPreset_precipitation_deposits(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_cloudiness
{
public:
  explicit Init_WeatherPreset_cloudiness(::swarm_world_interfaces::msg::WeatherPreset & msg)
  : msg_(msg)
  {}
  Init_WeatherPreset_precipitation cloudiness(::swarm_world_interfaces::msg::WeatherPreset::_cloudiness_type arg)
  {
    msg_.cloudiness = std::move(arg);
    return Init_WeatherPreset_precipitation(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

class Init_WeatherPreset_preset_name
{
public:
  Init_WeatherPreset_preset_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WeatherPreset_cloudiness preset_name(::swarm_world_interfaces::msg::WeatherPreset::_preset_name_type arg)
  {
    msg_.preset_name = std::move(arg);
    return Init_WeatherPreset_cloudiness(msg_);
  }

private:
  ::swarm_world_interfaces::msg::WeatherPreset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_world_interfaces::msg::WeatherPreset>()
{
  return swarm_world_interfaces::msg::builder::Init_WeatherPreset_preset_name();
}

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__BUILDER_HPP_
