// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DroneStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_status.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__DroneStatus __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DroneStatus __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneStatus_
{
  using Type = DroneStatus_<ContainerAllocator>;

  explicit DroneStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->mode = 0;
      this->position_error = 0.0;
      this->yaw_error = 0.0;
      this->eta = 0.0;
      this->replan_count = 0ul;
      this->compute_time_us = 0.0;
    }
  }

  explicit DroneStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->mode = 0;
      this->position_error = 0.0;
      this->yaw_error = 0.0;
      this->eta = 0.0;
      this->replan_count = 0ul;
      this->compute_time_us = 0.0;
    }
  }

  // field types and members
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _position_error_type =
    double;
  _position_error_type position_error;
  using _yaw_error_type =
    double;
  _yaw_error_type yaw_error;
  using _eta_type =
    double;
  _eta_type eta;
  using _replan_count_type =
    uint32_t;
  _replan_count_type replan_count;
  using _compute_time_us_type =
    double;
  _compute_time_us_type compute_time_us;

  // setters for named parameter idiom
  Type & set__drone_id(
    const uint32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__position_error(
    const double & _arg)
  {
    this->position_error = _arg;
    return *this;
  }
  Type & set__yaw_error(
    const double & _arg)
  {
    this->yaw_error = _arg;
    return *this;
  }
  Type & set__eta(
    const double & _arg)
  {
    this->eta = _arg;
    return *this;
  }
  Type & set__replan_count(
    const uint32_t & _arg)
  {
    this->replan_count = _arg;
    return *this;
  }
  Type & set__compute_time_us(
    const double & _arg)
  {
    this->compute_time_us = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MODE_INACTIVE =
    0u;
  static constexpr uint8_t MODE_HOLD =
    1u;
  static constexpr uint8_t MODE_PLANNING =
    2u;
  static constexpr uint8_t MODE_TRACKING =
    3u;
  static constexpr uint8_t MODE_REACHED =
    4u;
  static constexpr uint8_t MODE_REFERENCE_STALE =
    5u;
  static constexpr uint8_t MODE_REFERENCE_INVALID =
    6u;
  static constexpr uint8_t MODE_PLAN_FAILED =
    7u;

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DroneStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DroneStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DroneStatus
    std::shared_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DroneStatus
    std::shared_ptr<swarm_interfaces::msg::DroneStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneStatus_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->position_error != other.position_error) {
      return false;
    }
    if (this->yaw_error != other.yaw_error) {
      return false;
    }
    if (this->eta != other.eta) {
      return false;
    }
    if (this->replan_count != other.replan_count) {
      return false;
    }
    if (this->compute_time_us != other.compute_time_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneStatus_

// alias to use template instance with default allocator
using DroneStatus =
  swarm_interfaces::msg::DroneStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_INACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_HOLD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_PLANNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_TRACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_REACHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_REFERENCE_STALE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_REFERENCE_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DroneStatus_<ContainerAllocator>::MODE_PLAN_FAILED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_STATUS__STRUCT_HPP_
