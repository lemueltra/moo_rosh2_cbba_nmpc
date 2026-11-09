// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/NpcSpawnSummary.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/npc_spawn_summary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vehicle_actor_ids`
// Member `pedestrian_actor_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `vehicle_types`
// Member `pedestrian_types`
#include "rosidl_runtime_c/string_functions.h"

bool
swarm_world_interfaces__msg__NpcSpawnSummary__init(swarm_world_interfaces__msg__NpcSpawnSummary * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
    return false;
  }
  // seed
  // requested_vehicles
  // requested_pedestrians
  // spawned_vehicles
  // spawned_pedestrians
  // vehicle_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->vehicle_actor_ids, 0)) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
    return false;
  }
  // pedestrian_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->pedestrian_actor_ids, 0)) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
    return false;
  }
  // vehicle_types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->vehicle_types, 0)) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
    return false;
  }
  // pedestrian_types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->pedestrian_types, 0)) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
    return false;
  }
  // elapsed_s
  return true;
}

void
swarm_world_interfaces__msg__NpcSpawnSummary__fini(swarm_world_interfaces__msg__NpcSpawnSummary * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // seed
  // requested_vehicles
  // requested_pedestrians
  // spawned_vehicles
  // spawned_pedestrians
  // vehicle_actor_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->vehicle_actor_ids);
  // pedestrian_actor_ids
  rosidl_runtime_c__uint32__Sequence__fini(&msg->pedestrian_actor_ids);
  // vehicle_types
  rosidl_runtime_c__String__Sequence__fini(&msg->vehicle_types);
  // pedestrian_types
  rosidl_runtime_c__String__Sequence__fini(&msg->pedestrian_types);
  // elapsed_s
}

bool
swarm_world_interfaces__msg__NpcSpawnSummary__are_equal(const swarm_world_interfaces__msg__NpcSpawnSummary * lhs, const swarm_world_interfaces__msg__NpcSpawnSummary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // seed
  if (lhs->seed != rhs->seed) {
    return false;
  }
  // requested_vehicles
  if (lhs->requested_vehicles != rhs->requested_vehicles) {
    return false;
  }
  // requested_pedestrians
  if (lhs->requested_pedestrians != rhs->requested_pedestrians) {
    return false;
  }
  // spawned_vehicles
  if (lhs->spawned_vehicles != rhs->spawned_vehicles) {
    return false;
  }
  // spawned_pedestrians
  if (lhs->spawned_pedestrians != rhs->spawned_pedestrians) {
    return false;
  }
  // vehicle_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->vehicle_actor_ids), &(rhs->vehicle_actor_ids)))
  {
    return false;
  }
  // pedestrian_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->pedestrian_actor_ids), &(rhs->pedestrian_actor_ids)))
  {
    return false;
  }
  // vehicle_types
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->vehicle_types), &(rhs->vehicle_types)))
  {
    return false;
  }
  // pedestrian_types
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->pedestrian_types), &(rhs->pedestrian_types)))
  {
    return false;
  }
  // elapsed_s
  if (lhs->elapsed_s != rhs->elapsed_s) {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__NpcSpawnSummary__copy(
  const swarm_world_interfaces__msg__NpcSpawnSummary * input,
  swarm_world_interfaces__msg__NpcSpawnSummary * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // seed
  output->seed = input->seed;
  // requested_vehicles
  output->requested_vehicles = input->requested_vehicles;
  // requested_pedestrians
  output->requested_pedestrians = input->requested_pedestrians;
  // spawned_vehicles
  output->spawned_vehicles = input->spawned_vehicles;
  // spawned_pedestrians
  output->spawned_pedestrians = input->spawned_pedestrians;
  // vehicle_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->vehicle_actor_ids), &(output->vehicle_actor_ids)))
  {
    return false;
  }
  // pedestrian_actor_ids
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->pedestrian_actor_ids), &(output->pedestrian_actor_ids)))
  {
    return false;
  }
  // vehicle_types
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->vehicle_types), &(output->vehicle_types)))
  {
    return false;
  }
  // pedestrian_types
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->pedestrian_types), &(output->pedestrian_types)))
  {
    return false;
  }
  // elapsed_s
  output->elapsed_s = input->elapsed_s;
  return true;
}

swarm_world_interfaces__msg__NpcSpawnSummary *
swarm_world_interfaces__msg__NpcSpawnSummary__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__NpcSpawnSummary * msg = (swarm_world_interfaces__msg__NpcSpawnSummary *)allocator.allocate(sizeof(swarm_world_interfaces__msg__NpcSpawnSummary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__NpcSpawnSummary));
  bool success = swarm_world_interfaces__msg__NpcSpawnSummary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__NpcSpawnSummary__destroy(swarm_world_interfaces__msg__NpcSpawnSummary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__NpcSpawnSummary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__init(swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__NpcSpawnSummary * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__NpcSpawnSummary)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__NpcSpawnSummary *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__NpcSpawnSummary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__NpcSpawnSummary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__NpcSpawnSummary__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__fini(swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      swarm_world_interfaces__msg__NpcSpawnSummary__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

swarm_world_interfaces__msg__NpcSpawnSummary__Sequence *
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * array = (swarm_world_interfaces__msg__NpcSpawnSummary__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__NpcSpawnSummary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__destroy(swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__are_equal(const swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * lhs, const swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__NpcSpawnSummary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__NpcSpawnSummary__Sequence__copy(
  const swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * input,
  swarm_world_interfaces__msg__NpcSpawnSummary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__NpcSpawnSummary)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__NpcSpawnSummary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__NpcSpawnSummary * data =
      (swarm_world_interfaces__msg__NpcSpawnSummary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__NpcSpawnSummary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__NpcSpawnSummary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__NpcSpawnSummary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
