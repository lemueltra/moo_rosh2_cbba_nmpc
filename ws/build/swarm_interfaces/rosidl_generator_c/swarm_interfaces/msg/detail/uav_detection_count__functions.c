// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/UavDetectionCount.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/uav_detection_count__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
swarm_interfaces__msg__UavDetectionCount__init(swarm_interfaces__msg__UavDetectionCount * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__UavDetectionCount__fini(msg);
    return false;
  }
  // drone_id
  // detections_now
  // sensor_streams
  return true;
}

void
swarm_interfaces__msg__UavDetectionCount__fini(swarm_interfaces__msg__UavDetectionCount * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drone_id
  // detections_now
  // sensor_streams
}

bool
swarm_interfaces__msg__UavDetectionCount__are_equal(const swarm_interfaces__msg__UavDetectionCount * lhs, const swarm_interfaces__msg__UavDetectionCount * rhs)
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
  // drone_id
  if (lhs->drone_id != rhs->drone_id) {
    return false;
  }
  // detections_now
  if (lhs->detections_now != rhs->detections_now) {
    return false;
  }
  // sensor_streams
  if (lhs->sensor_streams != rhs->sensor_streams) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__UavDetectionCount__copy(
  const swarm_interfaces__msg__UavDetectionCount * input,
  swarm_interfaces__msg__UavDetectionCount * output)
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
  // drone_id
  output->drone_id = input->drone_id;
  // detections_now
  output->detections_now = input->detections_now;
  // sensor_streams
  output->sensor_streams = input->sensor_streams;
  return true;
}

swarm_interfaces__msg__UavDetectionCount *
swarm_interfaces__msg__UavDetectionCount__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavDetectionCount * msg = (swarm_interfaces__msg__UavDetectionCount *)allocator.allocate(sizeof(swarm_interfaces__msg__UavDetectionCount), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__UavDetectionCount));
  bool success = swarm_interfaces__msg__UavDetectionCount__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__UavDetectionCount__destroy(swarm_interfaces__msg__UavDetectionCount * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__UavDetectionCount__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__UavDetectionCount__Sequence__init(swarm_interfaces__msg__UavDetectionCount__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavDetectionCount * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavDetectionCount)) {
      return false;
    }
    data = (swarm_interfaces__msg__UavDetectionCount *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__UavDetectionCount), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__UavDetectionCount__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__UavDetectionCount__fini(&data[i - 1]);
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
swarm_interfaces__msg__UavDetectionCount__Sequence__fini(swarm_interfaces__msg__UavDetectionCount__Sequence * array)
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
      swarm_interfaces__msg__UavDetectionCount__fini(&array->data[i]);
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

swarm_interfaces__msg__UavDetectionCount__Sequence *
swarm_interfaces__msg__UavDetectionCount__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavDetectionCount__Sequence * array = (swarm_interfaces__msg__UavDetectionCount__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__UavDetectionCount__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__UavDetectionCount__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__UavDetectionCount__Sequence__destroy(swarm_interfaces__msg__UavDetectionCount__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__UavDetectionCount__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__UavDetectionCount__Sequence__are_equal(const swarm_interfaces__msg__UavDetectionCount__Sequence * lhs, const swarm_interfaces__msg__UavDetectionCount__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__UavDetectionCount__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__UavDetectionCount__Sequence__copy(
  const swarm_interfaces__msg__UavDetectionCount__Sequence * input,
  swarm_interfaces__msg__UavDetectionCount__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavDetectionCount)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__UavDetectionCount);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__UavDetectionCount * data =
      (swarm_interfaces__msg__UavDetectionCount *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__UavDetectionCount__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__UavDetectionCount__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__UavDetectionCount__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
