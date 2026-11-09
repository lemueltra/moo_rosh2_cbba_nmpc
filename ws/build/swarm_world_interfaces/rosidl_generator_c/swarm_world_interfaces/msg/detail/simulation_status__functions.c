// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/SimulationStatus.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/simulation_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
swarm_world_interfaces__msg__SimulationStatus__init(swarm_world_interfaces__msg__SimulationStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_world_interfaces__msg__SimulationStatus__fini(msg);
    return false;
  }
  // time_mode
  // step_count
  // elapsed_sim_time
  // fixed_delta_seconds
  // num_active_ugvs
  // num_active_uavs
  // num_active_sensors
  // sync_waiting
  return true;
}

void
swarm_world_interfaces__msg__SimulationStatus__fini(swarm_world_interfaces__msg__SimulationStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // time_mode
  // step_count
  // elapsed_sim_time
  // fixed_delta_seconds
  // num_active_ugvs
  // num_active_uavs
  // num_active_sensors
  // sync_waiting
}

bool
swarm_world_interfaces__msg__SimulationStatus__are_equal(const swarm_world_interfaces__msg__SimulationStatus * lhs, const swarm_world_interfaces__msg__SimulationStatus * rhs)
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
  // time_mode
  if (lhs->time_mode != rhs->time_mode) {
    return false;
  }
  // step_count
  if (lhs->step_count != rhs->step_count) {
    return false;
  }
  // elapsed_sim_time
  if (lhs->elapsed_sim_time != rhs->elapsed_sim_time) {
    return false;
  }
  // fixed_delta_seconds
  if (lhs->fixed_delta_seconds != rhs->fixed_delta_seconds) {
    return false;
  }
  // num_active_ugvs
  if (lhs->num_active_ugvs != rhs->num_active_ugvs) {
    return false;
  }
  // num_active_uavs
  if (lhs->num_active_uavs != rhs->num_active_uavs) {
    return false;
  }
  // num_active_sensors
  if (lhs->num_active_sensors != rhs->num_active_sensors) {
    return false;
  }
  // sync_waiting
  if (lhs->sync_waiting != rhs->sync_waiting) {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__SimulationStatus__copy(
  const swarm_world_interfaces__msg__SimulationStatus * input,
  swarm_world_interfaces__msg__SimulationStatus * output)
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
  // time_mode
  output->time_mode = input->time_mode;
  // step_count
  output->step_count = input->step_count;
  // elapsed_sim_time
  output->elapsed_sim_time = input->elapsed_sim_time;
  // fixed_delta_seconds
  output->fixed_delta_seconds = input->fixed_delta_seconds;
  // num_active_ugvs
  output->num_active_ugvs = input->num_active_ugvs;
  // num_active_uavs
  output->num_active_uavs = input->num_active_uavs;
  // num_active_sensors
  output->num_active_sensors = input->num_active_sensors;
  // sync_waiting
  output->sync_waiting = input->sync_waiting;
  return true;
}

swarm_world_interfaces__msg__SimulationStatus *
swarm_world_interfaces__msg__SimulationStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SimulationStatus * msg = (swarm_world_interfaces__msg__SimulationStatus *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SimulationStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__SimulationStatus));
  bool success = swarm_world_interfaces__msg__SimulationStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__SimulationStatus__destroy(swarm_world_interfaces__msg__SimulationStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__SimulationStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__SimulationStatus__Sequence__init(swarm_world_interfaces__msg__SimulationStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SimulationStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SimulationStatus)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__SimulationStatus *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__SimulationStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__SimulationStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__SimulationStatus__fini(&data[i - 1]);
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
swarm_world_interfaces__msg__SimulationStatus__Sequence__fini(swarm_world_interfaces__msg__SimulationStatus__Sequence * array)
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
      swarm_world_interfaces__msg__SimulationStatus__fini(&array->data[i]);
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

swarm_world_interfaces__msg__SimulationStatus__Sequence *
swarm_world_interfaces__msg__SimulationStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SimulationStatus__Sequence * array = (swarm_world_interfaces__msg__SimulationStatus__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SimulationStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__SimulationStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__SimulationStatus__Sequence__destroy(swarm_world_interfaces__msg__SimulationStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__SimulationStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__SimulationStatus__Sequence__are_equal(const swarm_world_interfaces__msg__SimulationStatus__Sequence * lhs, const swarm_world_interfaces__msg__SimulationStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__SimulationStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__SimulationStatus__Sequence__copy(
  const swarm_world_interfaces__msg__SimulationStatus__Sequence * input,
  swarm_world_interfaces__msg__SimulationStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SimulationStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__SimulationStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__SimulationStatus * data =
      (swarm_world_interfaces__msg__SimulationStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__SimulationStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__SimulationStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__SimulationStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
