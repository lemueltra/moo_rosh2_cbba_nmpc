// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/msg/npc_spawn_summary.hpp"


#ifndef SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_HPP_

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
# define DEPRECATED__swarm_world_interfaces__msg__NpcSpawnSummary __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__msg__NpcSpawnSummary __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NpcSpawnSummary_
{
  using Type = NpcSpawnSummary_<ContainerAllocator>;

  explicit NpcSpawnSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seed = 0ul;
      this->requested_vehicles = 0ul;
      this->requested_pedestrians = 0ul;
      this->spawned_vehicles = 0ul;
      this->spawned_pedestrians = 0ul;
      this->elapsed_s = 0.0;
    }
  }

  explicit NpcSpawnSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seed = 0ul;
      this->requested_vehicles = 0ul;
      this->requested_pedestrians = 0ul;
      this->spawned_vehicles = 0ul;
      this->spawned_pedestrians = 0ul;
      this->elapsed_s = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _seed_type =
    uint32_t;
  _seed_type seed;
  using _requested_vehicles_type =
    uint32_t;
  _requested_vehicles_type requested_vehicles;
  using _requested_pedestrians_type =
    uint32_t;
  _requested_pedestrians_type requested_pedestrians;
  using _spawned_vehicles_type =
    uint32_t;
  _spawned_vehicles_type spawned_vehicles;
  using _spawned_pedestrians_type =
    uint32_t;
  _spawned_pedestrians_type spawned_pedestrians;
  using _vehicle_actor_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _vehicle_actor_ids_type vehicle_actor_ids;
  using _pedestrian_actor_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _pedestrian_actor_ids_type pedestrian_actor_ids;
  using _vehicle_types_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _vehicle_types_type vehicle_types;
  using _pedestrian_types_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _pedestrian_types_type pedestrian_types;
  using _elapsed_s_type =
    double;
  _elapsed_s_type elapsed_s;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__seed(
    const uint32_t & _arg)
  {
    this->seed = _arg;
    return *this;
  }
  Type & set__requested_vehicles(
    const uint32_t & _arg)
  {
    this->requested_vehicles = _arg;
    return *this;
  }
  Type & set__requested_pedestrians(
    const uint32_t & _arg)
  {
    this->requested_pedestrians = _arg;
    return *this;
  }
  Type & set__spawned_vehicles(
    const uint32_t & _arg)
  {
    this->spawned_vehicles = _arg;
    return *this;
  }
  Type & set__spawned_pedestrians(
    const uint32_t & _arg)
  {
    this->spawned_pedestrians = _arg;
    return *this;
  }
  Type & set__vehicle_actor_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->vehicle_actor_ids = _arg;
    return *this;
  }
  Type & set__pedestrian_actor_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->pedestrian_actor_ids = _arg;
    return *this;
  }
  Type & set__vehicle_types(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->vehicle_types = _arg;
    return *this;
  }
  Type & set__pedestrian_types(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->pedestrian_types = _arg;
    return *this;
  }
  Type & set__elapsed_s(
    const double & _arg)
  {
    this->elapsed_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__msg__NpcSpawnSummary
    std::shared_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__msg__NpcSpawnSummary
    std::shared_ptr<swarm_world_interfaces::msg::NpcSpawnSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NpcSpawnSummary_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->seed != other.seed) {
      return false;
    }
    if (this->requested_vehicles != other.requested_vehicles) {
      return false;
    }
    if (this->requested_pedestrians != other.requested_pedestrians) {
      return false;
    }
    if (this->spawned_vehicles != other.spawned_vehicles) {
      return false;
    }
    if (this->spawned_pedestrians != other.spawned_pedestrians) {
      return false;
    }
    if (this->vehicle_actor_ids != other.vehicle_actor_ids) {
      return false;
    }
    if (this->pedestrian_actor_ids != other.pedestrian_actor_ids) {
      return false;
    }
    if (this->vehicle_types != other.vehicle_types) {
      return false;
    }
    if (this->pedestrian_types != other.pedestrian_types) {
      return false;
    }
    if (this->elapsed_s != other.elapsed_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const NpcSpawnSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NpcSpawnSummary_

// alias to use template instance with default allocator
using NpcSpawnSummary =
  swarm_world_interfaces::msg::NpcSpawnSummary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__MSG__DETAIL__NPC_SPAWN_SUMMARY__STRUCT_HPP_
