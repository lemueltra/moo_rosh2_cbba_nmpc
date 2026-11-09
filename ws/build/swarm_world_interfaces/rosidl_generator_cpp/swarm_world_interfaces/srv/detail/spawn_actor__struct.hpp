// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/spawn_actor.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Request __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Request __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnActor_Request_
{
  using Type = SpawnActor_Request_<ContainerAllocator>;

  explicit SpawnActor_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_id = "";
      this->role_name = "";
      this->parent_id = 0ul;
    }
  }

  explicit SpawnActor_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_id(_alloc),
    role_name(_alloc),
    transform(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type_id = "";
      this->role_name = "";
      this->parent_id = 0ul;
    }
  }

  // field types and members
  using _type_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_id_type type_id;
  using _role_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _role_name_type role_name;
  using _transform_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _transform_type transform;
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
  Type & set__transform(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
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
    swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Request
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Request
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnActor_Request_ & other) const
  {
    if (this->type_id != other.type_id) {
      return false;
    }
    if (this->role_name != other.role_name) {
      return false;
    }
    if (this->transform != other.transform) {
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
  bool operator!=(const SpawnActor_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnActor_Request_

// alias to use template instance with default allocator
using SpawnActor_Request =
  swarm_world_interfaces::srv::SpawnActor_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Response __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Response __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnActor_Response_
{
  using Type = SpawnActor_Response_<ContainerAllocator>;

  explicit SpawnActor_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->actor_id = 0ul;
      this->error_message = "";
    }
  }

  explicit SpawnActor_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->actor_id = 0ul;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _actor_id_type =
    uint32_t;
  _actor_id_type actor_id;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__actor_id(
    const uint32_t & _arg)
  {
    this->actor_id = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Response
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Response
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnActor_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->actor_id != other.actor_id) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnActor_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnActor_Response_

// alias to use template instance with default allocator
using SpawnActor_Response =
  swarm_world_interfaces::srv::SpawnActor_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Event __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Event __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SpawnActor_Event_
{
  using Type = SpawnActor_Event_<ContainerAllocator>;

  explicit SpawnActor_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SpawnActor_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SpawnActor_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SpawnActor_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Event
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SpawnActor_Event
    std::shared_ptr<swarm_world_interfaces::srv::SpawnActor_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpawnActor_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpawnActor_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpawnActor_Event_

// alias to use template instance with default allocator
using SpawnActor_Event =
  swarm_world_interfaces::srv::SpawnActor_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace swarm_world_interfaces
{

namespace srv
{

struct SpawnActor
{
  using Request = swarm_world_interfaces::srv::SpawnActor_Request;
  using Response = swarm_world_interfaces::srv::SpawnActor_Response;
  using Event = swarm_world_interfaces::srv::SpawnActor_Event;
};

}  // namespace srv

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SPAWN_ACTOR__STRUCT_HPP_
