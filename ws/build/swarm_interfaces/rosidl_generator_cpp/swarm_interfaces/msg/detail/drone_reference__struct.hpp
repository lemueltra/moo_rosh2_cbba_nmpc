// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DroneReference.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_reference.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__DroneReference __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DroneReference __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneReference_
{
  using Type = DroneReference_<ContainerAllocator>;

  explicit DroneReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->max_speed = 0.0;
      this->z = 0.0;
      this->ugv_id = 0ul;
      this->frame_relative = false;
    }
  }

  explicit DroneReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->max_speed = 0.0;
      this->z = 0.0;
      this->ugv_id = 0ul;
      this->frame_relative = false;
    }
  }

  // field types and members
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _max_speed_type =
    double;
  _max_speed_type max_speed;
  using _z_type =
    double;
  _z_type z;
  using _ugv_id_type =
    uint32_t;
  _ugv_id_type ugv_id;
  using _frame_relative_type =
    bool;
  _frame_relative_type frame_relative;

  // setters for named parameter idiom
  Type & set__drone_id(
    const uint32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__max_speed(
    const double & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__ugv_id(
    const uint32_t & _arg)
  {
    this->ugv_id = _arg;
    return *this;
  }
  Type & set__frame_relative(
    const bool & _arg)
  {
    this->frame_relative = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DroneReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DroneReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DroneReference
    std::shared_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DroneReference
    std::shared_ptr<swarm_interfaces::msg::DroneReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneReference_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->ugv_id != other.ugv_id) {
      return false;
    }
    if (this->frame_relative != other.frame_relative) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneReference_

// alias to use template instance with default allocator
using DroneReference =
  swarm_interfaces::msg::DroneReference_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_REFERENCE__STRUCT_HPP_
