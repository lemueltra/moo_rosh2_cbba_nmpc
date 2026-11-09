// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/weather_preset.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__WeatherPreset __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__WeatherPreset __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WeatherPreset_
{
  using Type = WeatherPreset_<ContainerAllocator>;

  explicit WeatherPreset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->cloudiness = 0.0f;
      this->precipitation = 0.0f;
      this->precipitation_deposits = 0.0f;
      this->wind_intensity = 0.0f;
      this->sun_azimuth_angle = 0.0f;
      this->sun_altitude_angle = 0.0f;
      this->fog_density = 0.0f;
      this->fog_distance = 0.0f;
      this->fog_falloff = 0.0f;
      this->wetness = 0.0f;
    }
  }

  explicit WeatherPreset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preset_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->cloudiness = 0.0f;
      this->precipitation = 0.0f;
      this->precipitation_deposits = 0.0f;
      this->wind_intensity = 0.0f;
      this->sun_azimuth_angle = 0.0f;
      this->sun_altitude_angle = 0.0f;
      this->fog_density = 0.0f;
      this->fog_distance = 0.0f;
      this->fog_falloff = 0.0f;
      this->wetness = 0.0f;
    }
  }

  // field types and members
  using _preset_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _preset_name_type preset_name;
  using _cloudiness_type =
    float;
  _cloudiness_type cloudiness;
  using _precipitation_type =
    float;
  _precipitation_type precipitation;
  using _precipitation_deposits_type =
    float;
  _precipitation_deposits_type precipitation_deposits;
  using _wind_intensity_type =
    float;
  _wind_intensity_type wind_intensity;
  using _sun_azimuth_angle_type =
    float;
  _sun_azimuth_angle_type sun_azimuth_angle;
  using _sun_altitude_angle_type =
    float;
  _sun_altitude_angle_type sun_altitude_angle;
  using _fog_density_type =
    float;
  _fog_density_type fog_density;
  using _fog_distance_type =
    float;
  _fog_distance_type fog_distance;
  using _fog_falloff_type =
    float;
  _fog_falloff_type fog_falloff;
  using _wetness_type =
    float;
  _wetness_type wetness;

  // setters for named parameter idiom
  Type & set__preset_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->preset_name = _arg;
    return *this;
  }
  Type & set__cloudiness(
    const float & _arg)
  {
    this->cloudiness = _arg;
    return *this;
  }
  Type & set__precipitation(
    const float & _arg)
  {
    this->precipitation = _arg;
    return *this;
  }
  Type & set__precipitation_deposits(
    const float & _arg)
  {
    this->precipitation_deposits = _arg;
    return *this;
  }
  Type & set__wind_intensity(
    const float & _arg)
  {
    this->wind_intensity = _arg;
    return *this;
  }
  Type & set__sun_azimuth_angle(
    const float & _arg)
  {
    this->sun_azimuth_angle = _arg;
    return *this;
  }
  Type & set__sun_altitude_angle(
    const float & _arg)
  {
    this->sun_altitude_angle = _arg;
    return *this;
  }
  Type & set__fog_density(
    const float & _arg)
  {
    this->fog_density = _arg;
    return *this;
  }
  Type & set__fog_distance(
    const float & _arg)
  {
    this->fog_distance = _arg;
    return *this;
  }
  Type & set__fog_falloff(
    const float & _arg)
  {
    this->fog_falloff = _arg;
    return *this;
  }
  Type & set__wetness(
    const float & _arg)
  {
    this->wetness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__WeatherPreset
    std::shared_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__WeatherPreset
    std::shared_ptr<swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WeatherPreset_ & other) const
  {
    if (this->preset_name != other.preset_name) {
      return false;
    }
    if (this->cloudiness != other.cloudiness) {
      return false;
    }
    if (this->precipitation != other.precipitation) {
      return false;
    }
    if (this->precipitation_deposits != other.precipitation_deposits) {
      return false;
    }
    if (this->wind_intensity != other.wind_intensity) {
      return false;
    }
    if (this->sun_azimuth_angle != other.sun_azimuth_angle) {
      return false;
    }
    if (this->sun_altitude_angle != other.sun_altitude_angle) {
      return false;
    }
    if (this->fog_density != other.fog_density) {
      return false;
    }
    if (this->fog_distance != other.fog_distance) {
      return false;
    }
    if (this->fog_falloff != other.fog_falloff) {
      return false;
    }
    if (this->wetness != other.wetness) {
      return false;
    }
    return true;
  }
  bool operator!=(const WeatherPreset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WeatherPreset_

// alias to use template instance with default allocator
using WeatherPreset =
  swarm_world_interfaces::msg::WeatherPreset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__WEATHER_PRESET__STRUCT_HPP_
