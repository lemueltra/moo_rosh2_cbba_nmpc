// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UgvState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/ugv_state.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__UgvState __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UgvState __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UgvState_
{
  using Type = UgvState_<ContainerAllocator>;

  explicit UgvState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ugv_id = 0ul;
      this->active = false;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->v = 0.0;
      this->route_length_m = 0.0;
    }
  }

  explicit UgvState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ugv_id = 0ul;
      this->active = false;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
      this->v = 0.0;
      this->route_length_m = 0.0;
    }
  }

  // field types and members
  using _ugv_id_type =
    uint32_t;
  _ugv_id_type ugv_id;
  using _active_type =
    bool;
  _active_type active;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _v_type =
    double;
  _v_type v;
  using _route_length_m_type =
    double;
  _route_length_m_type route_length_m;

  // setters for named parameter idiom
  Type & set__ugv_id(
    const uint32_t & _arg)
  {
    this->ugv_id = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
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
  Type & set__v(
    const double & _arg)
  {
    this->v = _arg;
    return *this;
  }
  Type & set__route_length_m(
    const double & _arg)
  {
    this->route_length_m = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UgvState_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UgvState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UgvState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UgvState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UgvState
    std::shared_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UgvState
    std::shared_ptr<swarm_interfaces::msg::UgvState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UgvState_ & other) const
  {
    if (this->ugv_id != other.ugv_id) {
      return false;
    }
    if (this->active != other.active) {
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
    if (this->v != other.v) {
      return false;
    }
    if (this->route_length_m != other.route_length_m) {
      return false;
    }
    return true;
  }
  bool operator!=(const UgvState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UgvState_

// alias to use template instance with default allocator
using UgvState =
  swarm_interfaces::msg::UgvState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UGV_STATE__STRUCT_HPP_
