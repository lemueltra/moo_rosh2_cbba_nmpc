// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_world_interfaces:srv/ConfigureUavRig.idl
// generated code does not contain a copyright notice

#include "swarm_world_interfaces/srv/detail/configure_uav_rig__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__ConfigureUavRig__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0xc3, 0x6e, 0x92, 0xca, 0x28, 0x48, 0x53,
      0x38, 0x6b, 0xbf, 0xb0, 0x2f, 0xe7, 0x6b, 0xa7,
      0x43, 0x0b, 0xbb, 0x90, 0x29, 0x71, 0x5d, 0x18,
      0xcc, 0x08, 0xd8, 0xa6, 0x79, 0x25, 0x92, 0x9e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__ConfigureUavRig_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x76, 0xb4, 0xd9, 0x16, 0x2c, 0xb9, 0x92, 0xad,
      0x79, 0x9f, 0xbe, 0xe6, 0x84, 0x3f, 0x4c, 0xe4,
      0x6c, 0x23, 0x52, 0x59, 0xf0, 0x20, 0x7a, 0xd6,
      0xee, 0xd6, 0xe4, 0x73, 0xd1, 0x3e, 0x66, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__ConfigureUavRig_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x10, 0x41, 0xa3, 0x9b, 0x26, 0x51, 0x6c,
      0x82, 0xbb, 0x77, 0xfc, 0xfd, 0xe7, 0x50, 0x13,
      0xb7, 0xce, 0x11, 0x07, 0x26, 0x4d, 0x81, 0x78,
      0xb6, 0x7d, 0x55, 0x08, 0xb9, 0xcd, 0x15, 0xb3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__ConfigureUavRig_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x13, 0xb7, 0x8b, 0x31, 0x69, 0xb0, 0xaa, 0x5d,
      0xd4, 0x6a, 0xec, 0x46, 0xaf, 0xf6, 0x69, 0x2a,
      0x46, 0x1d, 0xaa, 0x3a, 0x17, 0xbe, 0xf4, 0xda,
      0x2b, 0x13, 0xd3, 0x25, 0x5b, 0xf9, 0x97, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char swarm_world_interfaces__srv__ConfigureUavRig__TYPE_NAME[] = "swarm_world_interfaces/srv/ConfigureUavRig";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char swarm_world_interfaces__srv__ConfigureUavRig_Event__TYPE_NAME[] = "swarm_world_interfaces/srv/ConfigureUavRig_Event";
static char swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME[] = "swarm_world_interfaces/srv/ConfigureUavRig_Request";
static char swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME[] = "swarm_world_interfaces/srv/ConfigureUavRig_Response";

// Define type names, field names, and default values
static char swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__request_message[] = "request_message";
static char swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__response_message[] = "response_message";
static char swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__ConfigureUavRig__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__ConfigureUavRig_Event__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__ConfigureUavRig__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__ConfigureUavRig__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__ConfigureUavRig__TYPE_NAME, 42, 42},
      {swarm_world_interfaces__srv__ConfigureUavRig__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__ConfigureUavRig__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = swarm_world_interfaces__srv__ConfigureUavRig_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = swarm_world_interfaces__srv__ConfigureUavRig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = swarm_world_interfaces__srv__ConfigureUavRig_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__uav_id[] = "uav_id";
static char swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__rig_override[] = "rig_override";
static char swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__reset_to_default[] = "reset_to_default";
static char swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__detach_current_sensors[] = "detach_current_sensors";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__uav_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__rig_override, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__reset_to_default, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELD_NAME__detach_current_sensors, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__ConfigureUavRig_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
      {swarm_world_interfaces__srv__ConfigureUavRig_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__success[] = "success";
static char swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__error_message[] = "error_message";
static char swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__attached_sensor_ids[] = "attached_sensor_ids";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__error_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELD_NAME__attached_sensor_ids, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__ConfigureUavRig_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
      {swarm_world_interfaces__srv__ConfigureUavRig_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__info[] = "info";
static char swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__request[] = "request";
static char swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__ConfigureUavRig_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__ConfigureUavRig_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__ConfigureUavRig_Event__TYPE_NAME, 48, 48},
      {swarm_world_interfaces__srv__ConfigureUavRig_Event__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = swarm_world_interfaces__srv__ConfigureUavRig_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = swarm_world_interfaces__srv__ConfigureUavRig_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service to configure or reconfigure a UAV's sensor rig dynamically at runtime\n"
  "int32 uav_id\n"
  "string rig_override\n"
  "bool reset_to_default\n"
  "bool detach_current_sensors\n"
  "---\n"
  "bool success\n"
  "string error_message\n"
  "uint32[] attached_sensor_ids";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__ConfigureUavRig__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__ConfigureUavRig__TYPE_NAME, 42, 42},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 230, 230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__ConfigureUavRig_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__ConfigureUavRig_Request__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__ConfigureUavRig_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__ConfigureUavRig_Response__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__ConfigureUavRig_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__ConfigureUavRig_Event__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__ConfigureUavRig__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__ConfigureUavRig__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *swarm_world_interfaces__srv__ConfigureUavRig_Event__get_individual_type_description_source(NULL);
    sources[4] = *swarm_world_interfaces__srv__ConfigureUavRig_Request__get_individual_type_description_source(NULL);
    sources[5] = *swarm_world_interfaces__srv__ConfigureUavRig_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__ConfigureUavRig_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__ConfigureUavRig_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__ConfigureUavRig_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__ConfigureUavRig_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__ConfigureUavRig_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__ConfigureUavRig_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *swarm_world_interfaces__srv__ConfigureUavRig_Request__get_individual_type_description_source(NULL);
    sources[4] = *swarm_world_interfaces__srv__ConfigureUavRig_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
