// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/UavLinkLatencyArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/uav_link_latency_array.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_HPP_

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
// Member 'links'
#include "swarm_interfaces/msg/detail/uav_link_latency__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__UavLinkLatencyArray __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__UavLinkLatencyArray __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UavLinkLatencyArray_
{
  using Type = UavLinkLatencyArray_<ContainerAllocator>;

  explicit UavLinkLatencyArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit UavLinkLatencyArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _links_type =
    std::vector<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>>;
  _links_type links;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_interfaces::msg::UavLinkLatency_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__UavLinkLatencyArray
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__UavLinkLatencyArray
    std::shared_ptr<swarm_interfaces::msg::UavLinkLatencyArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UavLinkLatencyArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    return true;
  }
  bool operator!=(const UavLinkLatencyArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UavLinkLatencyArray_

// alias to use template instance with default allocator
using UavLinkLatencyArray =
  swarm_interfaces::msg::UavLinkLatencyArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__UAV_LINK_LATENCY_ARRAY__STRUCT_HPP_
