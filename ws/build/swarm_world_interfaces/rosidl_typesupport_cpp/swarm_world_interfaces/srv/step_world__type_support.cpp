// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:srv/StepWorld.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "swarm_world_interfaces/srv/detail/step_world__functions.h"
#include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
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

typedef struct _StepWorld_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StepWorld_Request_type_support_ids_t;

static const _StepWorld_Request_type_support_ids_t _StepWorld_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StepWorld_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StepWorld_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StepWorld_Request_type_support_symbol_names_t _StepWorld_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, StepWorld_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, StepWorld_Request)),
  }
};

typedef struct _StepWorld_Request_type_support_data_t
{
  void * data[2];
} _StepWorld_Request_type_support_data_t;

static _StepWorld_Request_type_support_data_t _StepWorld_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StepWorld_Request_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_StepWorld_Request_message_typesupport_ids.typesupport_identifier[0],
  &_StepWorld_Request_message_typesupport_symbol_names.symbol_name[0],
  &_StepWorld_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StepWorld_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StepWorld_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__StepWorld_Request__get_type_hash,
  &swarm_world_interfaces__srv__StepWorld_Request__get_type_description,
  &swarm_world_interfaces__srv__StepWorld_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Request>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::StepWorld_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, StepWorld_Request)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Request>();
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
// #include "swarm_world_interfaces/srv/detail/step_world__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
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

typedef struct _StepWorld_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StepWorld_Response_type_support_ids_t;

static const _StepWorld_Response_type_support_ids_t _StepWorld_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StepWorld_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StepWorld_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StepWorld_Response_type_support_symbol_names_t _StepWorld_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, StepWorld_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, StepWorld_Response)),
  }
};

typedef struct _StepWorld_Response_type_support_data_t
{
  void * data[2];
} _StepWorld_Response_type_support_data_t;

static _StepWorld_Response_type_support_data_t _StepWorld_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StepWorld_Response_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_StepWorld_Response_message_typesupport_ids.typesupport_identifier[0],
  &_StepWorld_Response_message_typesupport_symbol_names.symbol_name[0],
  &_StepWorld_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StepWorld_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StepWorld_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__StepWorld_Response__get_type_hash,
  &swarm_world_interfaces__srv__StepWorld_Response__get_type_description,
  &swarm_world_interfaces__srv__StepWorld_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Response>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::StepWorld_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, StepWorld_Response)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Response>();
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
// #include "swarm_world_interfaces/srv/detail/step_world__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
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

typedef struct _StepWorld_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StepWorld_Event_type_support_ids_t;

static const _StepWorld_Event_type_support_ids_t _StepWorld_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StepWorld_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StepWorld_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StepWorld_Event_type_support_symbol_names_t _StepWorld_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, StepWorld_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, StepWorld_Event)),
  }
};

typedef struct _StepWorld_Event_type_support_data_t
{
  void * data[2];
} _StepWorld_Event_type_support_data_t;

static _StepWorld_Event_type_support_data_t _StepWorld_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StepWorld_Event_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_StepWorld_Event_message_typesupport_ids.typesupport_identifier[0],
  &_StepWorld_Event_message_typesupport_symbol_names.symbol_name[0],
  &_StepWorld_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t StepWorld_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StepWorld_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__StepWorld_Event__get_type_hash,
  &swarm_world_interfaces__srv__StepWorld_Event__get_type_description,
  &swarm_world_interfaces__srv__StepWorld_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Event>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::StepWorld_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, StepWorld_Event)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Event>();
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
// #include "swarm_world_interfaces/srv/detail/step_world__struct.hpp"
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

typedef struct _StepWorld_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _StepWorld_type_support_ids_t;

static const _StepWorld_type_support_ids_t _StepWorld_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _StepWorld_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _StepWorld_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _StepWorld_type_support_symbol_names_t _StepWorld_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, StepWorld)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, StepWorld)),
  }
};

typedef struct _StepWorld_type_support_data_t
{
  void * data[2];
} _StepWorld_type_support_data_t;

static _StepWorld_type_support_data_t _StepWorld_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _StepWorld_service_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_StepWorld_service_typesupport_ids.typesupport_identifier[0],
  &_StepWorld_service_typesupport_symbol_names.symbol_name[0],
  &_StepWorld_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t StepWorld_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_StepWorld_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::StepWorld_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<swarm_world_interfaces::srv::StepWorld>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<swarm_world_interfaces::srv::StepWorld>,
  &swarm_world_interfaces__srv__StepWorld__get_type_hash,
  &swarm_world_interfaces__srv__StepWorld__get_type_description,
  &swarm_world_interfaces__srv__StepWorld__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<swarm_world_interfaces::srv::StepWorld>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::StepWorld_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, StepWorld)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<swarm_world_interfaces::srv::StepWorld>();
}

#ifdef __cplusplus
}
#endif
