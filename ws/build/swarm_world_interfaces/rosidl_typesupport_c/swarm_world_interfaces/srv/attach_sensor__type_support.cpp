// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from swarm_world_interfaces:srv/AttachSensor.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"
#include "swarm_world_interfaces/srv/detail/attach_sensor__type_support.h"
#include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
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

typedef struct _AttachSensor_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachSensor_Request_type_support_ids_t;

static const _AttachSensor_Request_type_support_ids_t _AttachSensor_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachSensor_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachSensor_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachSensor_Request_type_support_symbol_names_t _AttachSensor_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, AttachSensor_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Request)),
  }
};

typedef struct _AttachSensor_Request_type_support_data_t
{
  void * data[2];
} _AttachSensor_Request_type_support_data_t;

static _AttachSensor_Request_type_support_data_t _AttachSensor_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachSensor_Request_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_AttachSensor_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AttachSensor_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AttachSensor_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachSensor_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachSensor_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, AttachSensor_Request)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::AttachSensor_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__type_support.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
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

typedef struct _AttachSensor_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachSensor_Response_type_support_ids_t;

static const _AttachSensor_Response_type_support_ids_t _AttachSensor_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachSensor_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachSensor_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachSensor_Response_type_support_symbol_names_t _AttachSensor_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, AttachSensor_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Response)),
  }
};

typedef struct _AttachSensor_Response_type_support_data_t
{
  void * data[2];
} _AttachSensor_Response_type_support_data_t;

static _AttachSensor_Response_type_support_data_t _AttachSensor_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachSensor_Response_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_AttachSensor_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AttachSensor_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AttachSensor_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachSensor_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachSensor_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, AttachSensor_Response)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::AttachSensor_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__type_support.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__functions.h"
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

typedef struct _AttachSensor_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachSensor_Event_type_support_ids_t;

static const _AttachSensor_Event_type_support_ids_t _AttachSensor_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachSensor_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachSensor_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachSensor_Event_type_support_symbol_names_t _AttachSensor_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, AttachSensor_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor_Event)),
  }
};

typedef struct _AttachSensor_Event_type_support_data_t
{
  void * data[2];
} _AttachSensor_Event_type_support_data_t;

static _AttachSensor_Event_type_support_data_t _AttachSensor_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachSensor_Event_message_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_AttachSensor_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AttachSensor_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AttachSensor_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AttachSensor_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachSensor_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, AttachSensor_Event)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::AttachSensor_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "swarm_world_interfaces/srv/detail/attach_sensor__type_support.h"
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
typedef struct _AttachSensor_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AttachSensor_type_support_ids_t;

static const _AttachSensor_type_support_ids_t _AttachSensor_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AttachSensor_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AttachSensor_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AttachSensor_type_support_symbol_names_t _AttachSensor_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, swarm_world_interfaces, srv, AttachSensor)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, swarm_world_interfaces, srv, AttachSensor)),
  }
};

typedef struct _AttachSensor_type_support_data_t
{
  void * data[2];
} _AttachSensor_type_support_data_t;

static _AttachSensor_type_support_data_t _AttachSensor_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AttachSensor_service_typesupport_map = {
  2,
  "swarm_world_interfaces",
  &_AttachSensor_service_typesupport_ids.typesupport_identifier[0],
  &_AttachSensor_service_typesupport_symbol_names.symbol_name[0],
  &_AttachSensor_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AttachSensor_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AttachSensor_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AttachSensor_Request_message_type_support_handle,
  &AttachSensor_Response_message_type_support_handle,
  &AttachSensor_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    AttachSensor
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    swarm_world_interfaces,
    srv,
    AttachSensor
  ),
  &swarm_world_interfaces__srv__AttachSensor__get_type_hash,
  &swarm_world_interfaces__srv__AttachSensor__get_type_description,
  &swarm_world_interfaces__srv__AttachSensor__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace swarm_world_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, swarm_world_interfaces, srv, AttachSensor)() {
  return &::swarm_world_interfaces::srv::rosidl_typesupport_c::AttachSensor_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
