// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/DroneReference.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/drone_reference__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
swarm_interfaces__msg__DroneReference__init(swarm_interfaces__msg__DroneReference * msg)
{
  if (!msg) {
    return false;
  }
  // drone_id
  // x
  // y
  // yaw
  // max_speed
  // z
  // ugv_id
  // frame_relative
  return true;
}

void
swarm_interfaces__msg__DroneReference__fini(swarm_interfaces__msg__DroneReference * msg)
{
  if (!msg) {
    return;
  }
  // drone_id
  // x
  // y
  // yaw
  // max_speed
  // z
  // ugv_id
  // frame_relative
}

bool
swarm_interfaces__msg__DroneReference__are_equal(const swarm_interfaces__msg__DroneReference * lhs, const swarm_interfaces__msg__DroneReference * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // ugv_id
  if (lhs->ugv_id != rhs->ugv_id) {
    return false;
  }
  // frame_relative
  if (lhs->frame_relative != rhs->frame_relative) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__DroneReference__copy(
  const swarm_interfaces__msg__DroneReference * input,
  swarm_interfaces__msg__DroneReference * output)
{
  if (!input || !output) {
    return false;
  }
  // drone_id
  output->drone_id = input->drone_id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // max_speed
  output->max_speed = input->max_speed;
  // z
  output->z = input->z;
  // ugv_id
  output->ugv_id = input->ugv_id;
  // frame_relative
  output->frame_relative = input->frame_relative;
  return true;
}

swarm_interfaces__msg__DroneReference *
swarm_interfaces__msg__DroneReference__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReference * msg = (swarm_interfaces__msg__DroneReference *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneReference), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__DroneReference));
  bool success = swarm_interfaces__msg__DroneReference__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__DroneReference__destroy(swarm_interfaces__msg__DroneReference * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__DroneReference__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__DroneReference__Sequence__init(swarm_interfaces__msg__DroneReference__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReference * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneReference)) {
      return false;
    }
    data = (swarm_interfaces__msg__DroneReference *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__DroneReference), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__DroneReference__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__DroneReference__fini(&data[i - 1]);
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
swarm_interfaces__msg__DroneReference__Sequence__fini(swarm_interfaces__msg__DroneReference__Sequence * array)
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
      swarm_interfaces__msg__DroneReference__fini(&array->data[i]);
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

swarm_interfaces__msg__DroneReference__Sequence *
swarm_interfaces__msg__DroneReference__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReference__Sequence * array = (swarm_interfaces__msg__DroneReference__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneReference__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__DroneReference__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__DroneReference__Sequence__destroy(swarm_interfaces__msg__DroneReference__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__DroneReference__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__DroneReference__Sequence__are_equal(const swarm_interfaces__msg__DroneReference__Sequence * lhs, const swarm_interfaces__msg__DroneReference__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__DroneReference__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__DroneReference__Sequence__copy(
  const swarm_interfaces__msg__DroneReference__Sequence * input,
  swarm_interfaces__msg__DroneReference__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneReference)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__DroneReference);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__DroneReference * data =
      (swarm_interfaces__msg__DroneReference *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__DroneReference__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__DroneReference__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__DroneReference__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
