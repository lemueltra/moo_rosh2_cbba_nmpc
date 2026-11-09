// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
#include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
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

typedef struct _SpawnActor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnActor_Request_type_support_ids_t;

static const _SpawnActor_Request_type_support_ids_t _SpawnActor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpawnActor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnActor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnActor_Request_type_support_symbol_names_t _SpawnActor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, SpawnActor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, SpawnActor_Request)),
  }
};

typedef struct _SpawnActor_Request_type_support_data_t
{
  void * data[2];
} _SpawnActor_Request_type_support_data_t;

static _SpawnActor_Request_type_support_data_t _SpawnActor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnActor_Request_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_SpawnActor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnActor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnActor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnActor_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnActor_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Request>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::SpawnActor_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, SpawnActor_Request)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Request>();
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
// #include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
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

typedef struct _SpawnActor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnActor_Response_type_support_ids_t;

static const _SpawnActor_Response_type_support_ids_t _SpawnActor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpawnActor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnActor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnActor_Response_type_support_symbol_names_t _SpawnActor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, SpawnActor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, SpawnActor_Response)),
  }
};

typedef struct _SpawnActor_Response_type_support_data_t
{
  void * data[2];
} _SpawnActor_Response_type_support_data_t;

static _SpawnActor_Response_type_support_data_t _SpawnActor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnActor_Response_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_SpawnActor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnActor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnActor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnActor_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnActor_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Response>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::SpawnActor_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, SpawnActor_Response)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Response>();
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
// #include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
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

typedef struct _SpawnActor_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnActor_Event_type_support_ids_t;

static const _SpawnActor_Event_type_support_ids_t _SpawnActor_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpawnActor_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnActor_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnActor_Event_type_support_symbol_names_t _SpawnActor_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, SpawnActor_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, SpawnActor_Event)),
  }
};

typedef struct _SpawnActor_Event_type_support_data_t
{
  void * data[2];
} _SpawnActor_Event_type_support_data_t;

static _SpawnActor_Event_type_support_data_t _SpawnActor_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnActor_Event_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_SpawnActor_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SpawnActor_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SpawnActor_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SpawnActor_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnActor_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Event>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::SpawnActor_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, SpawnActor_Event)() {
  return get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Event>();
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
// #include "swarm_world_interfaces/srv/detail/spawn_actor__struct.hpp"
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

typedef struct _SpawnActor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SpawnActor_type_support_ids_t;

static const _SpawnActor_type_support_ids_t _SpawnActor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SpawnActor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SpawnActor_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SpawnActor_type_support_symbol_names_t _SpawnActor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, swarm_world_interfaces, srv, SpawnActor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, swarm_world_interfaces, srv, SpawnActor)),
  }
};

typedef struct _SpawnActor_type_support_data_t
{
  void * data[2];
} _SpawnActor_type_support_data_t;

static _SpawnActor_type_support_data_t _SpawnActor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SpawnActor_service_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_SpawnActor_service_typesupport_ids.typesupport_identifier[0],
  &_SpawnActor_service_typesupport_symbol_names.symbol_name[0],
  &_SpawnActor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SpawnActor_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SpawnActor_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<swarm_world_interfaces::srv::SpawnActor_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<swarm_world_interfaces::srv::SpawnActor>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<swarm_world_interfaces::srv::SpawnActor>,
  &swarm_world_interfaces__srv__SpawnActor__get_type_hash,
  &swarm_world_interfaces__srv__SpawnActor__get_type_description,
  &swarm_world_interfaces__srv__SpawnActor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace swarm_world_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<swarm_world_interfaces::srv::SpawnActor>()
{
  return &::swarm_world_interfaces::srv::rosidl_typesupport_cpp::SpawnActor_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, swarm_world_interfaces, srv, SpawnActor)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<swarm_world_interfaces::srv::SpawnActor>();
}

#ifdef __cplusplus
}
#endif
