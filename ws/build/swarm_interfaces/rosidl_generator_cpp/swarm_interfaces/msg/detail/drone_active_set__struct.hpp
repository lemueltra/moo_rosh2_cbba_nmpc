// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DroneActiveSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_active_set.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_HPP_

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
# define DEPRECATED__swarm_interfaces__msg__DroneActiveSet __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DroneActiveSet __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneActiveSet_
{
  using Type = DroneActiveSet_<ContainerAllocator>;

  explicit DroneActiveSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DroneActiveSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _active_ids_type active_ids;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->active_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DroneActiveSet
    std::shared_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DroneActiveSet
    std::shared_ptr<swarm_interfaces::msg::DroneActiveSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneActiveSet_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active_ids != other.active_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneActiveSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneActiveSet_

// alias to use template instance with default allocator
using DroneActiveSet =
  swarm_interfaces::msg::DroneActiveSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_ACTIVE_SET__STRUCT_HPP_
