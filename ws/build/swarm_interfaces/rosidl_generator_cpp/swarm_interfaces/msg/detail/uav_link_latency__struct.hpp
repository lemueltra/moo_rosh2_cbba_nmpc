// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__UavLinkLatency __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UavLinkLatency __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavLinkLatency_
{
  using Type = UavLinkLatency_<ContainerAllocator>;

  explicit UavLinkLatency_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->ugv_id = 0ul;
      this->latency_ms = 0.0;
      this->distance_m = 0.0;
      this->los = false;
    }
  }

  explicit UavLinkLatency_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = 0ul;
      this->ugv_id = 0ul;
      this->latency_ms = 0.0;
      this->distance_m = 0.0;
      this->los = false;
    }
  }

  // field types and members
  using _drone_id_type =
    uint32_t;
  _drone_id_type drone_id;
  using _ugv_id_type =
    uint32_t;
  _ugv_id_type ugv_id;
  using _latency_ms_type =
    double;
  _latency_ms_type latency_ms;
  using _distance_m_type =
    double;
  _distance_m_type distance_m;
  using _los_type =
    bool;
  _los_type los;

  // setters for named parameter idiom
  Type & set__drone_id(
    const uint32_t & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__ugv_id(
    const uint32_t & _arg)
  {
    this->ugv_id = _arg;
    return *this;
  }
  Type & set__latency_ms(
    const double & _arg)
  {
    this->latency_ms = _arg;
    return *this;
  }
  Type & set__distance_m(
    const double & _arg)
  {
    this->distance_m = _arg;
    return *this;
  }
  Type & set__los(
    const bool & _arg)
  {
    this->los = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UavLinkLatency
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UavLinkLatency
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavLinkLatency_ & other) const
  {
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->ugv_id != other.ugv_id) {
      return false;
    }
    if (this->latency_ms != other.latency_ms) {
      return false;
    }
    if (this->distance_m != other.distance_m) {
      return false;
    }
    if (this->los != other.los) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavLinkLatency_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavLinkLatency_

// alias to use template instance with default allocator
using UavLinkLatency =
  swarm_interfaces::msg::UavLinkLatency_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY__STRUCT_HPP_
