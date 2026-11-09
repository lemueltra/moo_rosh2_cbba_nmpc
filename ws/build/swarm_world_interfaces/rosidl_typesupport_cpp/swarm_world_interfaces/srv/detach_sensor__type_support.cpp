// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:srv/DetachSensor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "swarm_world_interfaces/srv/detail/detach_sensor__functions.h"
#include "swarm_world_interfaces/srv/detail/detach_sensor__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetachSensor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetachSensor_Request_type_support_ids_t;

static const _DetachSensor_Request_type_support_ids_t _DetachSensor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetachSensor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetachSensor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetachSensor_Request_type_support_symbol_names_t _DetachSensor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, DetachSensor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, DetachSensor_Request)),
  }
};

typedef struct _DetachSensor_Request_type_support_data_t
{
  void * data[2];
} _DetachSensor_Request_type_support_data_t;

static _DetachSensor_Request_type_support_data_t _DetachSensor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetachSensor_Request_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DetachSensor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DetachSensor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DetachSensor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetachSensor_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetachSensor_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DetachSensor_Request__get_type_hash,
  &swarm_world_interfaces__srv__DetachSensor_Request__get_type_description,
  &swarm_world_interfaces__srv__DetachSensor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Request>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::DetachSensor_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, DetachSensor_Request)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/detach_sensor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/detach_sensor__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetachSensor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetachSensor_Response_type_support_ids_t;

static const _DetachSensor_Response_type_support_ids_t _DetachSensor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetachSensor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetachSensor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetachSensor_Response_type_support_symbol_names_t _DetachSensor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, DetachSensor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, DetachSensor_Response)),
  }
};

typedef struct _DetachSensor_Response_type_support_data_t
{
  void * data[2];
} _DetachSensor_Response_type_support_data_t;

static _DetachSensor_Response_type_support_data_t _DetachSensor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetachSensor_Response_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DetachSensor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DetachSensor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DetachSensor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetachSensor_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetachSensor_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DetachSensor_Response__get_type_hash,
  &swarm_world_interfaces__srv__DetachSensor_Response__get_type_description,
  &swarm_world_interfaces__srv__DetachSensor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Response>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::DetachSensor_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, DetachSensor_Response)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/detach_sensor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/detach_sensor__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetachSensor_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetachSensor_Event_type_support_ids_t;

static const _DetachSensor_Event_type_support_ids_t _DetachSensor_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetachSensor_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetachSensor_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetachSensor_Event_type_support_symbol_names_t _DetachSensor_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, DetachSensor_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, DetachSensor_Event)),
  }
};

typedef struct _DetachSensor_Event_type_support_data_t
{
  void * data[2];
} _DetachSensor_Event_type_support_data_t;

static _DetachSensor_Event_type_support_data_t _DetachSensor_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetachSensor_Event_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DetachSensor_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DetachSensor_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DetachSensor_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DetachSensor_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetachSensor_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DetachSensor_Event__get_type_hash,
  &swarm_world_interfaces__srv__DetachSensor_Event__get_type_description,
  &swarm_world_interfaces__srv__DetachSensor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Event>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::DetachSensor_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, DetachSensor_Event)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "swarm_world_interfaces/srv/detail/detach_sensor__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _DetachSensor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DetachSensor_type_support_ids_t;

static const _DetachSensor_type_support_ids_t _DetachSensor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DetachSensor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DetachSensor_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DetachSensor_type_support_symbol_names_t _DetachSensor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, DetachSensor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, DetachSensor)),
  }
};

typedef struct _DetachSensor_type_support_data_t
{
  void * data[2];
} _DetachSensor_type_support_data_t;

static _DetachSensor_type_support_data_t _DetachSensor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DetachSensor_service_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DetachSensor_service_typesupport_ids.typesupport_identifier[0],
  &_DetachSensor_service_typesupport_symbol_names.symbol_name[0],
  &_DetachSensor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DetachSensor_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DetachSensor_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::DetachSensor_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<swarm_world_interfaces::srv::DetachSensor>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<swarm_world_interfaces::srv::DetachSensor>,
  &swarm_world_interfaces__srv__DetachSensor__get_type_hash,
  &swarm_world_interfaces__srv__DetachSensor__get_type_description,
  &swarm_world_interfaces__srv__DetachSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<swarm_world_interfaces::srv::DetachSensor>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::DetachSensor_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, DetachSensor)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<swarm_world_interfaces::srv::DetachSensor>();
}

#ifdef __cplusplus
}
#endif
