// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_world_interfaces:srv/DestroyActor.idl
// generated code does not contain a copyright notice

#include "swarm_world_interfaces/srv/detail/destroy_actor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__DestroyActor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x94, 0x4b, 0xd9, 0x6e, 0x9e, 0xa7, 0x1f, 0x60,
      0x4e, 0x3f, 0x18, 0x70, 0xae, 0x74, 0x12, 0x9c,
      0x26, 0x02, 0x5f, 0xfb, 0x3b, 0x23, 0xd3, 0xca,
      0xd0, 0xdb, 0x93, 0xa3, 0x2f, 0x94, 0x0d, 0x47,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__DestroyActor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xe4, 0x81, 0xd7, 0x6f, 0x13, 0x57, 0xf4,
      0x16, 0x36, 0x14, 0xe5, 0x42, 0x6e, 0xd4, 0xb8,
      0x8f, 0x33, 0xf4, 0xcf, 0xa5, 0xd3, 0xb2, 0xa2,
      0x1d, 0x17, 0x5c, 0x17, 0xf7, 0x37, 0xff, 0x99,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__DestroyActor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xbc, 0x18, 0x60, 0x0a, 0xd1, 0x0b, 0xf8,
      0x76, 0x25, 0x7c, 0xe6, 0x51, 0x4a, 0xdb, 0x51,
      0x2b, 0xfe, 0x98, 0x50, 0x77, 0xea, 0x44, 0x63,
      0x50, 0x5e, 0x45, 0x6c, 0xf9, 0x01, 0x9c, 0xfd,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__DestroyActor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0x35, 0x35, 0x5d, 0x24, 0x20, 0xe1, 0xf7,
      0x95, 0xec, 0x83, 0x82, 0x80, 0xca, 0x0c, 0xdb,
      0x63, 0xd6, 0xcf, 0x47, 0x88, 0xbf, 0x0f, 0x1c,
      0x56, 0xd6, 0x17, 0x32, 0x90, 0xf0, 0x52, 0xe9,
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

static char swarm_world_interfaces__srv__DestroyActor__TYPE_NAME[] = "swarm_world_interfaces/srv/DestroyActor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char swarm_world_interfaces__srv__DestroyActor_Event__TYPE_NAME[] = "swarm_world_interfaces/srv/DestroyActor_Event";
static char swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME[] = "swarm_world_interfaces/srv/DestroyActor_Request";
static char swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME[] = "swarm_world_interfaces/srv/DestroyActor_Response";

// Define type names, field names, and default values
static char swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__request_message[] = "request_message";
static char swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__response_message[] = "response_message";
static char swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__DestroyActor__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__DestroyActor_Event__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__DestroyActor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Event__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__DestroyActor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__DestroyActor__TYPE_NAME, 39, 39},
      {swarm_world_interfaces__srv__DestroyActor__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__DestroyActor__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = swarm_world_interfaces__srv__DestroyActor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = swarm_world_interfaces__srv__DestroyActor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = swarm_world_interfaces__srv__DestroyActor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__DestroyActor_Request__FIELD_NAME__actor_id[] = "actor_id";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__DestroyActor_Request__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__DestroyActor_Request__FIELD_NAME__actor_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__DestroyActor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
      {swarm_world_interfaces__srv__DestroyActor_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__DestroyActor_Response__FIELD_NAME__success[] = "success";
static char swarm_world_interfaces__srv__DestroyActor_Response__FIELD_NAME__error_message[] = "error_message";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__DestroyActor_Response__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__DestroyActor_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Response__FIELD_NAME__error_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__DestroyActor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
      {swarm_world_interfaces__srv__DestroyActor_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__info[] = "info";
static char swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__request[] = "request";
static char swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__DestroyActor_Event__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__DestroyActor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__DestroyActor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__DestroyActor_Event__TYPE_NAME, 45, 45},
      {swarm_world_interfaces__srv__DestroyActor_Event__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__DestroyActor_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = swarm_world_interfaces__srv__DestroyActor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = swarm_world_interfaces__srv__DestroyActor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service to destroy an actor dynamically\n"
  "uint32 actor_id\n"
  "---\n"
  "bool success\n"
  "string error_message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__DestroyActor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__DestroyActor__TYPE_NAME, 39, 39},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 96, 96},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__DestroyActor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__DestroyActor_Request__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__DestroyActor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__DestroyActor_Response__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__DestroyActor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__DestroyActor_Event__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__DestroyActor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__DestroyActor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *swarm_world_interfaces__srv__DestroyActor_Event__get_individual_type_description_source(NULL);
    sources[4] = *swarm_world_interfaces__srv__DestroyActor_Request__get_individual_type_description_source(NULL);
    sources[5] = *swarm_world_interfaces__srv__DestroyActor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__DestroyActor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__DestroyActor_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__DestroyActor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__DestroyActor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__DestroyActor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__DestroyActor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *swarm_world_interfaces__srv__DestroyActor_Request__get_individual_type_description_source(NULL);
    sources[4] = *swarm_world_interfaces__srv__DestroyActor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
