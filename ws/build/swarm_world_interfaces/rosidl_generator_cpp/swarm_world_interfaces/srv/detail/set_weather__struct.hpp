// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_world_interfaces:srv/SetWeather.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_world_interfaces/srv/set_weather.hpp"


#ifndef SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__STRUCT_HPP_
#define SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'custom_parameters'
#include "swarm_world_interfaces/msg/detail/weather_preset__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Request __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Request __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWeather_Request_
{
  using Type = SetWeather_Request_<ContainerAllocator>;

  explicit SetWeather_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : custom_parameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->use_custom = false;
    }
  }

  explicit SetWeather_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preset_name(_alloc),
    custom_parameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->use_custom = false;
    }
  }

  // field types and members
  using _preset_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _preset_name_type preset_name;
  using _custom_parameters_type =
    swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator>;
  _custom_parameters_type custom_parameters;
  using _use_custom_type =
    bool;
  _use_custom_type use_custom;

  // setters for named parameter idiom
  Type & set__preset_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->preset_name = _arg;
    return *this;
  }
  Type & set__custom_parameters(
    const swarm_world_interfaces::msg::WeatherPreset_<ContainerAllocator> & _arg)
  {
    this->custom_parameters = _arg;
    return *this;
  }
  Type & set__use_custom(
    const bool & _arg)
  {
    this->use_custom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Request
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Request
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWeather_Request_ & other) const
  {
    if (this->preset_name != other.preset_name) {
      return false;
    }
    if (this->custom_parameters != other.custom_parameters) {
      return false;
    }
    if (this->use_custom != other.use_custom) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWeather_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWeather_Request_

// alias to use template instance with default allocator
using SetWeather_Request =
  swarm_world_interfaces::srv::SetWeather_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Response __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Response __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWeather_Response_
{
  using Type = SetWeather_Response_<ContainerAllocator>;

  explicit SetWeather_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit SetWeather_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
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
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Response
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Response
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWeather_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWeather_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWeather_Response_

// alias to use template instance with default allocator
using SetWeather_Response =
  swarm_world_interfaces::srv::SetWeather_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Event __attribute__((deprecated))
#else
# define DEPRECATED__swarm_world_interfaces__srv__SetWeather_Event __declspec(deprecated)
#endif

namespace swarm_world_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWeather_Event_
{
  using Type = SetWeather_Event_<ContainerAllocator>;

  explicit SetWeather_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetWeather_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SetWeather_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<swarm_world_interfaces::srv::SetWeather_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Event
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_world_interfaces__srv__SetWeather_Event
    std::shared_ptr<swarm_world_interfaces::srv::SetWeather_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWeather_Event_ & other) const
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
  bool operator!=(const SetWeather_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWeather_Event_

// alias to use template instance with default allocator
using SetWeather_Event =
  swarm_world_interfaces::srv::SetWeather_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace swarm_world_interfaces
{

namespace srv
{

struct SetWeather
{
  using Request = swarm_world_interfaces::srv::SetWeather_Request;
  using Response = swarm_world_interfaces::srv::SetWeather_Response;
  using Event = swarm_world_interfaces::srv::SetWeather_Event;
};

}  // namespace srv

}  // namespace swarm_world_interfaces

#endif  // SWARM_WORLD_INTERFACES__SRV__DETAIL__SET_WEATHER__STRUCT_HPP_
