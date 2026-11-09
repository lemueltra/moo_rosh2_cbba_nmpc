// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DetectionSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/detection_summary.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__DetectionSummary __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DetectionSummary __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectionSummary_
{
  using Type = DetectionSummary_<ContainerAllocator>;

  explicit DetectionSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total = 0ul;
      this->buildings = 0ul;
      this->vehicles = 0ul;
      this->pedestrians = 0ul;
      this->fleet = 0ul;
      this->blocked = 0ul;
      this->partially_blocked = 0ul;
    }
  }

  explicit DetectionSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total = 0ul;
      this->buildings = 0ul;
      this->vehicles = 0ul;
      this->pedestrians = 0ul;
      this->fleet = 0ul;
      this->blocked = 0ul;
      this->partially_blocked = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _total_type =
    uint32_t;
  _total_type total;
  using _buildings_type =
    uint32_t;
  _buildings_type buildings;
  using _vehicles_type =
    uint32_t;
  _vehicles_type vehicles;
  using _pedestrians_type =
    uint32_t;
  _pedestrians_type pedestrians;
  using _fleet_type =
    uint32_t;
  _fleet_type fleet;
  using _blocked_type =
    uint32_t;
  _blocked_type blocked;
  using _partially_blocked_type =
    uint32_t;
  _partially_blocked_type partially_blocked;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__total(
    const uint32_t & _arg)
  {
    this->total = _arg;
    return *this;
  }
  Type & set__buildings(
    const uint32_t & _arg)
  {
    this->buildings = _arg;
    return *this;
  }
  Type & set__vehicles(
    const uint32_t & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }
  Type & set__pedestrians(
    const uint32_t & _arg)
  {
    this->pedestrians = _arg;
    return *this;
  }
  Type & set__fleet(
    const uint32_t & _arg)
  {
    this->fleet = _arg;
    return *this;
  }
  Type & set__blocked(
    const uint32_t & _arg)
  {
    this->blocked = _arg;
    return *this;
  }
  Type & set__partially_blocked(
    const uint32_t & _arg)
  {
    this->partially_blocked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DetectionSummary
    std::shared_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DetectionSummary
    std::shared_ptr<swarm_interfaces::msg::DetectionSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectionSummary_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->total != other.total) {
      return false;
    }
    if (this->buildings != other.buildings) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    if (this->pedestrians != other.pedestrians) {
      return false;
    }
    if (this->fleet != other.fleet) {
      return false;
    }
    if (this->blocked != other.blocked) {
      return false;
    }
    if (this->partially_blocked != other.partially_blocked) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectionSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectionSummary_

// alias to use template instance with default allocator
using DetectionSummary =
  swarm_interfaces::msg::DetectionSummary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DETECTION_SUMMARY__STRUCT_HPP_
