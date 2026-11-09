// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/DroneReferenceArray.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/drone_reference_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `references`
#include "swarm_interfaces/msg/detail/drone_reference__functions.h"

bool
swarm_interfaces__msg__DroneReferenceArray__init(swarm_interfaces__msg__DroneReferenceArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__DroneReferenceArray__fini(msg);
    return false;
  }
  // references
  if (!swarm_interfaces__msg__DroneReference__Sequence__init(&msg->references, 0)) {
    swarm_interfaces__msg__DroneReferenceArray__fini(msg);
    return false;
  }
  return true;
}

void
swarm_interfaces__msg__DroneReferenceArray__fini(swarm_interfaces__msg__DroneReferenceArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // references
  swarm_interfaces__msg__DroneReference__Sequence__fini(&msg->references);
}

bool
swarm_interfaces__msg__DroneReferenceArray__are_equal(const swarm_interfaces__msg__DroneReferenceArray * lhs, const swarm_interfaces__msg__DroneReferenceArray * rhs)
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
  // references
  if (!swarm_interfaces__msg__DroneReference__Sequence__are_equal(
      &(lhs->references), &(rhs->references)))
  {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__DroneReferenceArray__copy(
  const swarm_interfaces__msg__DroneReferenceArray * input,
  swarm_interfaces__msg__DroneReferenceArray * output)
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
  // references
  if (!swarm_interfaces__msg__DroneReference__Sequence__copy(
      &(input->references), &(output->references)))
  {
    return false;
  }
  return true;
}

swarm_interfaces__msg__DroneReferenceArray *
swarm_interfaces__msg__DroneReferenceArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReferenceArray * msg = (swarm_interfaces__msg__DroneReferenceArray *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneReferenceArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__DroneReferenceArray));
  bool success = swarm_interfaces__msg__DroneReferenceArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__DroneReferenceArray__destroy(swarm_interfaces__msg__DroneReferenceArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__DroneReferenceArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__DroneReferenceArray__Sequence__init(swarm_interfaces__msg__DroneReferenceArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReferenceArray * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneReferenceArray)) {
      return false;
    }
    data = (swarm_interfaces__msg__DroneReferenceArray *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__DroneReferenceArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__DroneReferenceArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__DroneReferenceArray__fini(&data[i - 1]);
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
swarm_interfaces__msg__DroneReferenceArray__Sequence__fini(swarm_interfaces__msg__DroneReferenceArray__Sequence * array)
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
      swarm_interfaces__msg__DroneReferenceArray__fini(&array->data[i]);
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

swarm_interfaces__msg__DroneReferenceArray__Sequence *
swarm_interfaces__msg__DroneReferenceArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__DroneReferenceArray__Sequence * array = (swarm_interfaces__msg__DroneReferenceArray__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__DroneReferenceArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__DroneReferenceArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__DroneReferenceArray__Sequence__destroy(swarm_interfaces__msg__DroneReferenceArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__DroneReferenceArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__DroneReferenceArray__Sequence__are_equal(const swarm_interfaces__msg__DroneReferenceArray__Sequence * lhs, const swarm_interfaces__msg__DroneReferenceArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__DroneReferenceArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__DroneReferenceArray__Sequence__copy(
  const swarm_interfaces__msg__DroneReferenceArray__Sequence * input,
  swarm_interfaces__msg__DroneReferenceArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__DroneReferenceArray)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__DroneReferenceArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__DroneReferenceArray * data =
      (swarm_interfaces__msg__DroneReferenceArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__DroneReferenceArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__DroneReferenceArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__DroneReferenceArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
