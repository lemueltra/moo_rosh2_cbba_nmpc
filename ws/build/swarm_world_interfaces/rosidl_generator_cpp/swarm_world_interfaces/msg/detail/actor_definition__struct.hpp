// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/ActorDefinition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/actor_definition.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__msg__ActorDefinition __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__ActorDefinition __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActorDefinition_
{
  using Type = ActorDefinition_<ContainerAllocator>;

  explicit ActorDefinition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : initial_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->type_id = "";
      this->role_name = "";
      this->parent_id = 0ul;
    }
  }

  explicit ActorDefinition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_id(_alloc),
    role_name(_alloc),
    initial_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->actor_id = 0ul;
      this->type_id = "";
      this->role_name = "";
      this->parent_id = 0ul;
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
  using _initial_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _initial_pose_type initial_pose;
  using _parent_id_type =
    uint32_t;
  _parent_id_type parent_id;
  using _attribute_keys_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _attribute_keys_type attribute_keys;
  using _attribute_values_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _attribute_values_type attribute_values;

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
  Type & set__initial_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return *this;
  }
  Type & set__parent_id(
    const uint32_t & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__attribute_keys(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->attribute_keys = _arg;
    return *this;
  }
  Type & set__attribute_values(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->attribute_values = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__ActorDefinition
    std::shared_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__ActorDefinition
    std::shared_ptr<swarm_world_interfaces::msg::ActorDefinition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActorDefinition_ & other) const
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
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->attribute_keys != other.attribute_keys) {
      return false;
    }
    if (this->attribute_values != other.attribute_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActorDefinition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActorDefinition_

// alias to use template instance with default allocator
using ActorDefinition =
  swarm_world_interfaces::msg::ActorDefinition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__ACTOR_DEFINITION__STRUCT_HPP_
