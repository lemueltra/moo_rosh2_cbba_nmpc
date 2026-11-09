// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:srv/DestroyActor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "swarm_world_interfaces/srv/detail/destroy_actor__struct.h"
#include "swarm_world_interfaces/srv/detail/destroy_actor__type_support.h"
#include "swarm_world_interfaces/srv/detail/destroy_actor__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DestroyActor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DestroyActor_Request_type_support_ids_t;

static const _DestroyActor_Request_type_support_ids_t _DestroyActor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DestroyActor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DestroyActor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DestroyActor_Request_type_support_symbol_names_t _DestroyActor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, DestroyActor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, DestroyActor_Request)),
  }
};

typedef struct _DestroyActor_Request_type_support_data_t
{
  void * data[2];
} _DestroyActor_Request_type_support_data_t;

static _DestroyActor_Request_type_support_data_t _DestroyActor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DestroyActor_Request_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DestroyActor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DestroyActor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DestroyActor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DestroyActor_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DestroyActor_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DestroyActor_Request__get_type_hash,
  &swarm_world_interfaces__srv__DestroyActor_Request__get_type_description,
  &swarm_world_interfaces__srv__DestroyActor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, DestroyActor_Request)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::DestroyActor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__type_support.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DestroyActor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DestroyActor_Response_type_support_ids_t;

static const _DestroyActor_Response_type_support_ids_t _DestroyActor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DestroyActor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DestroyActor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DestroyActor_Response_type_support_symbol_names_t _DestroyActor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, DestroyActor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, DestroyActor_Response)),
  }
};

typedef struct _DestroyActor_Response_type_support_data_t
{
  void * data[2];
} _DestroyActor_Response_type_support_data_t;

static _DestroyActor_Response_type_support_data_t _DestroyActor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DestroyActor_Response_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DestroyActor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DestroyActor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DestroyActor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DestroyActor_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DestroyActor_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DestroyActor_Response__get_type_hash,
  &swarm_world_interfaces__srv__DestroyActor_Response__get_type_description,
  &swarm_world_interfaces__srv__DestroyActor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, DestroyActor_Response)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::DestroyActor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__type_support.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _DestroyActor_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DestroyActor_Event_type_support_ids_t;

static const _DestroyActor_Event_type_support_ids_t _DestroyActor_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DestroyActor_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DestroyActor_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DestroyActor_Event_type_support_symbol_names_t _DestroyActor_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, DestroyActor_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, DestroyActor_Event)),
  }
};

typedef struct _DestroyActor_Event_type_support_data_t
{
  void * data[2];
} _DestroyActor_Event_type_support_data_t;

static _DestroyActor_Event_type_support_data_t _DestroyActor_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DestroyActor_Event_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DestroyActor_Event_message_typesupport_ids.typesupport_identifier[0],
  &_DestroyActor_Event_message_typesupport_symbol_names.symbol_name[0],
  &_DestroyActor_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DestroyActor_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DestroyActor_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__DestroyActor_Event__get_type_hash,
  &swarm_world_interfaces__srv__DestroyActor_Event__get_type_description,
  &swarm_world_interfaces__srv__DestroyActor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, DestroyActor_Event)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::DestroyActor_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/destroy_actor__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace swarm_world_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _DestroyActor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DestroyActor_type_support_ids_t;

static const _DestroyActor_type_support_ids_t _DestroyActor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DestroyActor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DestroyActor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DestroyActor_type_support_symbol_names_t _DestroyActor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, DestroyActor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, DestroyActor)),
  }
};

typedef struct _DestroyActor_type_support_data_t
{
  void * data[2];
} _DestroyActor_type_support_data_t;

static _DestroyActor_type_support_data_t _DestroyActor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DestroyActor_service_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_DestroyActor_service_typesupport_ids.typesupport_identifier[0],
  &_DestroyActor_service_typesupport_symbol_names.symbol_name[0],
  &_DestroyActor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DestroyActor_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DestroyActor_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &DestroyActor_Request_message_type_support_handle,
  &DestroyActor_Response_message_type_support_handle,
  &DestroyActor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    DestroyActor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    DestroyActor
  ),
  &swarm_world_interfaces__srv__DestroyActor__get_type_hash,
  &swarm_world_interfaces__srv__DestroyActor__get_type_description,
  &swarm_world_interfaces__srv__DestroyActor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, DestroyActor)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::DestroyActor_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
