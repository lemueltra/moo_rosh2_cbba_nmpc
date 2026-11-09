// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/UavLinkLatency.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/uav_link_latency__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
swarm_interfaces__msg__UavLinkLatency__init(swarm_interfaces__msg__UavLinkLatency * msg)
{
  if (!msg) {
    return false;
  }
  // drone_id
  // ugv_id
  // latency_ms
  // distance_m
  // los
  return true;
}

void
swarm_interfaces__msg__UavLinkLatency__fini(swarm_interfaces__msg__UavLinkLatency * msg)
{
  if (!msg) {
    return;
  }
  // drone_id
  // ugv_id
  // latency_ms
  // distance_m
  // los
}

bool
swarm_interfaces__msg__UavLinkLatency__are_equal(const swarm_interfaces__msg__UavLinkLatency * lhs, const swarm_interfaces__msg__UavLinkLatency * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // ugv_id
  if (lhs->ugv_id != rhs->ugv_id) {
    return false;
  }
  // latency_ms
  if (lhs->latency_ms != rhs->latency_ms) {
    return false;
  }
  // distance_m
  if (lhs->distance_m != rhs->distance_m) {
    return false;
  }
  // los
  if (lhs->los != rhs->los) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__UavLinkLatency__copy(
  const swarm_interfaces__msg__UavLinkLatency * input,
  swarm_interfaces__msg__UavLinkLatency * output)
{
  if (!input || !output) {
    return false;
  }
  // drone_id
  output->drone_id = input->drone_id;
  // ugv_id
  output->ugv_id = input->ugv_id;
  // latency_ms
  output->latency_ms = input->latency_ms;
  // distance_m
  output->distance_m = input->distance_m;
  // los
  output->los = input->los;
  return true;
}

swarm_interfaces__msg__UavLinkLatency *
swarm_interfaces__msg__UavLinkLatency__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavLinkLatency * msg = (swarm_interfaces__msg__UavLinkLatency *)allocator.allocate(sizeof(swarm_interfaces__msg__UavLinkLatency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__UavLinkLatency));
  bool success = swarm_interfaces__msg__UavLinkLatency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__UavLinkLatency__destroy(swarm_interfaces__msg__UavLinkLatency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__UavLinkLatency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__UavLinkLatency__Sequence__init(swarm_interfaces__msg__UavLinkLatency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavLinkLatency * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavLinkLatency)) {
      return false;
    }
    data = (swarm_interfaces__msg__UavLinkLatency *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__UavLinkLatency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__UavLinkLatency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__UavLinkLatency__fini(&data[i - 1]);
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
swarm_interfaces__msg__UavLinkLatency__Sequence__fini(swarm_interfaces__msg__UavLinkLatency__Sequence * array)
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
      swarm_interfaces__msg__UavLinkLatency__fini(&array->data[i]);
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

swarm_interfaces__msg__UavLinkLatency__Sequence *
swarm_interfaces__msg__UavLinkLatency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavLinkLatency__Sequence * array = (swarm_interfaces__msg__UavLinkLatency__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__UavLinkLatency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__UavLinkLatency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__UavLinkLatency__Sequence__destroy(swarm_interfaces__msg__UavLinkLatency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__UavLinkLatency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__UavLinkLatency__Sequence__are_equal(const swarm_interfaces__msg__UavLinkLatency__Sequence * lhs, const swarm_interfaces__msg__UavLinkLatency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__UavLinkLatency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__UavLinkLatency__Sequence__copy(
  const swarm_interfaces__msg__UavLinkLatency__Sequence * input,
  swarm_interfaces__msg__UavLinkLatency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavLinkLatency)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__UavLinkLatency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__UavLinkLatency * data =
      (swarm_interfaces__msg__UavLinkLatency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__UavLinkLatency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__UavLinkLatency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__UavLinkLatency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
