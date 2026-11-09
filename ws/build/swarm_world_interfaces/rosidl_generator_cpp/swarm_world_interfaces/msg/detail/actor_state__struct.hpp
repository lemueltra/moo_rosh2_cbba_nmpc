// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/ActorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_state.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'acceleration'
// Member 'bounding_box_extent'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__ActorState __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__ActorState __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorState_
{
  using Type = ActorState_<ContainerAllocator>;

  explicit ActorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    twist(_init),
    acceleration(_init),
    bounding_box_extent(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->type_id = "";
      this->role_name = "";
      this->active = false;
      this->control_source = 0;
    }
  }

  explicit ActorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_id(_alloc),
    role_name(_alloc),
    pose(_alloc, _init),
    twist(_alloc, _init),
    acceleration(_alloc, _init),
    bounding_box_extent(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->type_id = "";
      this->role_name = "";
      this->active = false;
      this->control_source = 0;
    }
  }

  // field types and members
  using _actor_id_type =
    uint32_t;
  _actor_id_type actor_id;
  using _type_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_id_type type_id;
  using _role_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_name_type role_name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _acceleration_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _acceleration_type acceleration;
  using _bounding_box_extent_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _bounding_box_extent_type bounding_box_extent;
  using _active_type =
    bool;
  _active_type active;
  using _control_source_type =
    uint8_t;
  _control_source_type control_source;

  // setters for named parameter idiom
  Type & set__actor_id(
    const uint32_t & _arg)
  {
    this->actor_id = _arg;
    return *this;
  }
  Type & set__type_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type_id = _arg;
    return *this;
  }
  Type & set__role_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->role_name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__acceleration(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__bounding_box_extent(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->bounding_box_extent = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }
  Type & set__control_source(
    const uint8_t & _arg)
  {
    this->control_source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_DISABLED =
    0u;
  static constexpr uint8_t CONTROL_AUTOPILOT =
    1u;
  static constexpr uint8_t CONTROL_NATIVE_TOPIC =
    2u;
  static constexpr uint8_t CONTROL_CARLA_AIR_CMD =
    3u;
  static constexpr uint8_t CONTROL_DIRECT_API =
    4u;

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::ActorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::ActorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::ActorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::ActorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__ActorState
    std::shared_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__ActorState
    std::shared_ptr<swarm_world_interfaces::msg::ActorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorState_ & other) const
  {
    if (this->actor_id != other.actor_id) {
      return false;
    }
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->role_name != other.role_name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->bounding_box_extent != other.bounding_box_extent) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    if (this->control_source != other.control_source) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorState_

// alias to use template instance with default allocator
using ActorState =
  swarm_world_interfaces::msg::ActorState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActorState_<ContainerAllocator>::CONTROL_DISABLED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActorState_<ContainerAllocator>::CONTROL_AUTOPILOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActorState_<ContainerAllocator>::CONTROL_NATIVE_TOPIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActorState_<ContainerAllocator>::CONTROL_CARLA_AIR_CMD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ActorState_<ContainerAllocator>::CONTROL_DIRECT_API;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_STATE__STRUCT_HPP_
