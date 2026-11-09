// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from swarm_world_interfaces:srv/SpawnActor.idl
// generated code does not contain a copyright notice

#include "swarm_world_interfaces/srv/detail/spawn_actor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__SpawnActor__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0x38, 0xee, 0xb7, 0xe8, 0x76, 0x2e, 0x49,
      0x3d, 0xd0, 0x6e, 0xe3, 0x7c, 0x8f, 0xe8, 0xd6,
      0xee, 0x16, 0x00, 0x08, 0xf5, 0x63, 0xf9, 0x94,
      0x7a, 0xc1, 0x3e, 0x15, 0x20, 0x84, 0xda, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__SpawnActor_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0x94, 0x8f, 0x9a, 0x1b, 0x07, 0x83, 0x7a,
      0x0e, 0x51, 0xa9, 0xf9, 0x32, 0xca, 0x1c, 0xd2,
      0xb4, 0x4d, 0x78, 0x00, 0x55, 0x3c, 0x9d, 0x75,
      0x48, 0xbe, 0xcc, 0x25, 0x01, 0xc7, 0x7a, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__SpawnActor_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe1, 0x0c, 0x20, 0xd4, 0x84, 0x6f, 0xb6, 0x88,
      0x17, 0xa0, 0x99, 0x17, 0x1e, 0xff, 0x85, 0x89,
      0x8c, 0x90, 0x05, 0x31, 0x9e, 0x51, 0x81, 0x6c,
      0x54, 0xcf, 0x57, 0xec, 0xda, 0x5f, 0x8e, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_swarm_world_interfaces
const rosidl_type_hash_t *
swarm_world_interfaces__srv__SpawnActor_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x53, 0xb3, 0x6d, 0x21, 0xb5, 0x96, 0xae,
      0xee, 0xc4, 0x51, 0x24, 0x43, 0x7c, 0x2f, 0xb2,
      0x43, 0x84, 0xea, 0x31, 0xb9, 0x3f, 0xc8, 0x00,
      0xa1, 0xa9, 0x22, 0x87, 0xff, 0xaa, 0x58, 0x00,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"
#include "geometry_msgs/msg/detail/pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/quaternion__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose__EXPECTED_HASH = {1, {
    0xd5, 0x01, 0x95, 0x4e, 0x94, 0x76, 0xce, 0xa2,
    0x99, 0x69, 0x84, 0xe8, 0x12, 0x05, 0x4b, 0x68,
    0x02, 0x6a, 0xe0, 0xbf, 0xae, 0x78, 0x9d, 0x9a,
    0x10, 0xb2, 0x3d, 0xaf, 0x35, 0xcc, 0x90, 0xfa,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Quaternion__EXPECTED_HASH = {1, {
    0x8a, 0x76, 0x5f, 0x66, 0x77, 0x8c, 0x8f, 0xf7,
    0xc8, 0xab, 0x94, 0xaf, 0xcc, 0x59, 0x0a, 0x2e,
    0xd5, 0x32, 0x5a, 0x1d, 0x9a, 0x07, 0x6f, 0xff,
    0xf3, 0x8f, 0xbc, 0xe3, 0x6f, 0x45, 0x86, 0x84,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char swarm_world_interfaces__srv__SpawnActor__TYPE_NAME[] = "swarm_world_interfaces/srv/SpawnActor";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char geometry_msgs__msg__Pose__TYPE_NAME[] = "geometry_msgs/msg/Pose";
static char geometry_msgs__msg__Quaternion__TYPE_NAME[] = "geometry_msgs/msg/Quaternion";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char swarm_world_interfaces__srv__SpawnActor_Event__TYPE_NAME[] = "swarm_world_interfaces/srv/SpawnActor_Event";
static char swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME[] = "swarm_world_interfaces/srv/SpawnActor_Request";
static char swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME[] = "swarm_world_interfaces/srv/SpawnActor_Response";

// Define type names, field names, and default values
static char swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__request_message[] = "request_message";
static char swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__response_message[] = "response_message";
static char swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__SpawnActor__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {swarm_world_interfaces__srv__SpawnActor_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__SpawnActor__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__SpawnActor__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__SpawnActor__TYPE_NAME, 37, 37},
      {swarm_world_interfaces__srv__SpawnActor__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__SpawnActor__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = swarm_world_interfaces__srv__SpawnActor_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = swarm_world_interfaces__srv__SpawnActor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = swarm_world_interfaces__srv__SpawnActor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__type_id[] = "type_id";
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__role_name[] = "role_name";
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__transform[] = "transform";
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__parent_id[] = "parent_id";
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__attribute_keys[] = "attribute_keys";
static char swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__attribute_values[] = "attribute_values";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__SpawnActor_Request__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__type_id, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__role_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__transform, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__parent_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__attribute_keys, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__FIELD_NAME__attribute_values, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__SpawnActor_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__SpawnActor_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
      {swarm_world_interfaces__srv__SpawnActor_Request__FIELDS, 6, 6},
    },
    {swarm_world_interfaces__srv__SpawnActor_Request__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__success[] = "success";
static char swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__actor_id[] = "actor_id";
static char swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__error_message[] = "error_message";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__SpawnActor_Response__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__actor_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Response__FIELD_NAME__error_message, 13, 13},
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
swarm_world_interfaces__srv__SpawnActor_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
      {swarm_world_interfaces__srv__SpawnActor_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__info[] = "info";
static char swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__request[] = "request";
static char swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field swarm_world_interfaces__srv__SpawnActor_Event__FIELDS[] = {
  {
    {swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription swarm_world_interfaces__srv__SpawnActor_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Quaternion__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
swarm_world_interfaces__srv__SpawnActor_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {swarm_world_interfaces__srv__SpawnActor_Event__TYPE_NAME, 43, 43},
      {swarm_world_interfaces__srv__SpawnActor_Event__FIELDS, 3, 3},
    },
    {swarm_world_interfaces__srv__SpawnActor_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose__EXPECTED_HASH, geometry_msgs__msg__Pose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = geometry_msgs__msg__Pose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Quaternion__EXPECTED_HASH, geometry_msgs__msg__Quaternion__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = geometry_msgs__msg__Quaternion__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = swarm_world_interfaces__srv__SpawnActor_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = swarm_world_interfaces__srv__SpawnActor_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Service to spawn an actor dynamically\n"
  "string type_id\n"
  "string role_name\n"
  "geometry_msgs/Pose transform\n"
  "uint32 parent_id\n"
  "string[] attribute_keys\n"
  "string[] attribute_values\n"
  "---\n"
  "bool success\n"
  "uint32 actor_id\n"
  "string error_message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__SpawnActor__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__SpawnActor__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 222, 222},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__SpawnActor_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__SpawnActor_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__SpawnActor_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__SpawnActor_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
swarm_world_interfaces__srv__SpawnActor_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {swarm_world_interfaces__srv__SpawnActor_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__SpawnActor__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__SpawnActor__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *swarm_world_interfaces__srv__SpawnActor_Event__get_individual_type_description_source(NULL);
    sources[7] = *swarm_world_interfaces__srv__SpawnActor_Request__get_individual_type_description_source(NULL);
    sources[8] = *swarm_world_interfaces__srv__SpawnActor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__SpawnActor_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__SpawnActor_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__SpawnActor_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__SpawnActor_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
swarm_world_interfaces__srv__SpawnActor_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *swarm_world_interfaces__srv__SpawnActor_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *geometry_msgs__msg__Pose__get_individual_type_description_source(NULL);
    sources[4] = *geometry_msgs__msg__Quaternion__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *swarm_world_interfaces__srv__SpawnActor_Request__get_individual_type_description_source(NULL);
    sources[7] = *swarm_world_interfaces__srv__SpawnActor_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
