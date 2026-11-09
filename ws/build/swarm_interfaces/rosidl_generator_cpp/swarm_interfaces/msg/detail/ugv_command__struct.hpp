// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UgvCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_command.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__UgvCommand __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UgvCommand __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UgvCommand_
{
  using Type = UgvCommand_<ContainerAllocator>;

  explicit UgvCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ugv_id = 0ul;
      this->throttle = 0.0;
      this->steer = 0.0;
      this->brake = 0.0;
      this->hand_brake = false;
      this->reverse = false;
      this->active_cmd = false;
    }
  }

  explicit UgvCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ugv_id = 0ul;
      this->throttle = 0.0;
      this->steer = 0.0;
      this->brake = 0.0;
      this->hand_brake = false;
      this->reverse = false;
      this->active_cmd = false;
    }
  }

  // field types and members
  using _ugv_id_type =
    uint32_t;
  _ugv_id_type ugv_id;
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _steer_type =
    double;
  _steer_type steer;
  using _brake_type =
    double;
  _brake_type brake;
  using _hand_brake_type =
    bool;
  _hand_brake_type hand_brake;
  using _reverse_type =
    bool;
  _reverse_type reverse;
  using _active_cmd_type =
    bool;
  _active_cmd_type active_cmd;

  // setters for named parameter idiom
  Type & set__ugv_id(
    const uint32_t & _arg)
  {
    this->ugv_id = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__steer(
    const double & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__hand_brake(
    const bool & _arg)
  {
    this->hand_brake = _arg;
    return *this;
  }
  Type & set__reverse(
    const bool & _arg)
  {
    this->reverse = _arg;
    return *this;
  }
  Type & set__active_cmd(
    const bool & _arg)
  {
    this->active_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UgvCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UgvCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UgvCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UgvCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UgvCommand
    std::shared_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UgvCommand
    std::shared_ptr<swarm_interfaces::msg::UgvCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UgvCommand_ & other) const
  {
    if (this->ugv_id != other.ugv_id) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->hand_brake != other.hand_brake) {
      return false;
    }
    if (this->reverse != other.reverse) {
      return false;
    }
    if (this->active_cmd != other.active_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const UgvCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UgvCommand_

// alias to use template instance with default allocator
using UgvCommand =
  swarm_interfaces::msg::UgvCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_COMMAND__STRUCT_HPP_
