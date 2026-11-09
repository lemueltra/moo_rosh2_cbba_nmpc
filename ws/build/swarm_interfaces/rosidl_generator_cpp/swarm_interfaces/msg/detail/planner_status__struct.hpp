// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/PlannerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/planner_status.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_HPP_

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
// Member 'drones'
#include "swarm_interfaces/msg/detail/drone_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__PlannerStatus __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__PlannerStatus __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlannerStatus_
{
  using Type = PlannerStatus_<ContainerAllocator>;

  explicit PlannerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle_time_us = 0.0;
      this->cycle_time_max_us = 0.0;
      this->deadline_misses = 0ul;
      this->clamped_references = 0ul;
    }
  }

  explicit PlannerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cycle_time_us = 0.0;
      this->cycle_time_max_us = 0.0;
      this->deadline_misses = 0ul;
      this->clamped_references = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drones_type =
    std::vector<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>>;
  _drones_type drones;
  using _cycle_time_us_type =
    double;
  _cycle_time_us_type cycle_time_us;
  using _cycle_time_max_us_type =
    double;
  _cycle_time_max_us_type cycle_time_max_us;
  using _deadline_misses_type =
    uint32_t;
  _deadline_misses_type deadline_misses;
  using _clamped_references_type =
    uint32_t;
  _clamped_references_type clamped_references;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drones(
    const std::vector<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::DroneStatus_<ContainerAllocator>>> & _arg)
  {
    this->drones = _arg;
    return *this;
  }
  Type & set__cycle_time_us(
    const double & _arg)
  {
    this->cycle_time_us = _arg;
    return *this;
  }
  Type & set__cycle_time_max_us(
    const double & _arg)
  {
    this->cycle_time_max_us = _arg;
    return *this;
  }
  Type & set__deadline_misses(
    const uint32_t & _arg)
  {
    this->deadline_misses = _arg;
    return *this;
  }
  Type & set__clamped_references(
    const uint32_t & _arg)
  {
    this->clamped_references = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__PlannerStatus
    std::shared_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__PlannerStatus
    std::shared_ptr<swarm_interfaces::msg::PlannerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlannerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drones != other.drones) {
      return false;
    }
    if (this->cycle_time_us != other.cycle_time_us) {
      return false;
    }
    if (this->cycle_time_max_us != other.cycle_time_max_us) {
      return false;
    }
    if (this->deadline_misses != other.deadline_misses) {
      return false;
    }
    if (this->clamped_references != other.clamped_references) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlannerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlannerStatus_

// alias to use template instance with default allocator
using PlannerStatus =
  swarm_interfaces::msg::PlannerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__PLANNER_STATUS__STRUCT_HPP_
