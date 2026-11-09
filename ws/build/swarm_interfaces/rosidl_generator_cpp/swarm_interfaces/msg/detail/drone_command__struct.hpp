// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DroneCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__DroneCommand __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DroneCommand __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneCommand_
{
  using Type = DroneCommand_<ContainerAllocator>;

  explicit DroneCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->active = false;
      this->vx = 0.0;
      this->vy = 0.0;
      this->yaw_rate = 0.0;
      this->vz = 0.0;
    }
  }

  explicit DroneCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->active = false;
      this->vx = 0.0;
      this->vy = 0.0;
      this->yaw_rate = 0.0;
      this->vz = 0.0;
    }
  }

  // field types and members
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _active_type =
    bool;
  _active_type active;
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _vz_type =
    double;
  _vz_type vz;

  // setters for named parameter idiom
  Type & set__drone_id(
    const uint32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DroneCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DroneCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DroneCommand
    std::shared_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DroneCommand
    std::shared_ptr<swarm_interfaces::msg::DroneCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneCommand_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneCommand_

// alias to use template instance with default allocator
using DroneCommand =
  swarm_interfaces::msg::DroneCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND__STRUCT_HPP_
