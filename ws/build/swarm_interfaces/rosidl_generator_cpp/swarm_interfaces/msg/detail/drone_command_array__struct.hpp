// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/DroneCommandArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/drone_command_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_HPP_

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
// Member 'commands'
#include "swarm_interfaces/msg/detail/drone_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__DroneCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__DroneCommandArray __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneCommandArray_
{
  using Type = DroneCommandArray_<ContainerAllocator>;

  explicit DroneCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DroneCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _commands_type =
    std::vector<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::DroneCommand_<ContainerAllocator>>> & _arg)
  {
    this->commands = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__DroneCommandArray
    std::shared_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__DroneCommandArray
    std::shared_ptr<swarm_interfaces::msg::DroneCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneCommandArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneCommandArray_

// alias to use template instance with default allocator
using DroneCommandArray =
  swarm_interfaces::msg::DroneCommandArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__DRONE_COMMAND_ARRAY__STRUCT_HPP_
