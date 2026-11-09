// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/SensorDetectionArray.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/sensor_detection_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `detections`
#include "swarm_world_interfaces/msg/detail/sensor_detection__functions.h"

bool
swarm_world_interfaces__msg__SensorDetectionArray__init(swarm_world_interfaces__msg__SensorDetectionArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_world_interfaces__msg__SensorDetectionArray__fini(msg);
    return false;
  }
  // sensor_id
  // parent_actor_id
  // sensor_type
  if (!rosidl_runtime_c__String__init(&msg->sensor_type)) {
    swarm_world_interfaces__msg__SensorDetectionArray__fini(msg);
    return false;
  }
  // range
  // horizontal_fov_deg
  // upper_fov_deg
  // lower_fov_deg
  // detections
  if (!swarm_world_interfaces__msg__SensorDetection__Sequence__init(&msg->detections, 0)) {
    swarm_world_interfaces__msg__SensorDetectionArray__fini(msg);
    return false;
  }
  return true;
}

void
swarm_world_interfaces__msg__SensorDetectionArray__fini(swarm_world_interfaces__msg__SensorDetectionArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_id
  // parent_actor_id
  // sensor_type
  rosidl_runtime_c__String__fini(&msg->sensor_type);
  // range
  // horizontal_fov_deg
  // upper_fov_deg
  // lower_fov_deg
  // detections
  swarm_world_interfaces__msg__SensorDetection__Sequence__fini(&msg->detections);
}

bool
swarm_world_interfaces__msg__SensorDetectionArray__are_equal(const swarm_world_interfaces__msg__SensorDetectionArray * lhs, const swarm_world_interfaces__msg__SensorDetectionArray * rhs)
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
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // parent_actor_id
  if (lhs->parent_actor_id != rhs->parent_actor_id) {
    return false;
  }
  // sensor_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_type), &(rhs->sensor_type)))
  {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // horizontal_fov_deg
  if (lhs->horizontal_fov_deg != rhs->horizontal_fov_deg) {
    return false;
  }
  // upper_fov_deg
  if (lhs->upper_fov_deg != rhs->upper_fov_deg) {
    return false;
  }
  // lower_fov_deg
  if (lhs->lower_fov_deg != rhs->lower_fov_deg) {
    return false;
  }
  // detections
  if (!swarm_world_interfaces__msg__SensorDetection__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__SensorDetectionArray__copy(
  const swarm_world_interfaces__msg__SensorDetectionArray * input,
  swarm_world_interfaces__msg__SensorDetectionArray * output)
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
  // sensor_id
  output->sensor_id = input->sensor_id;
  // parent_actor_id
  output->parent_actor_id = input->parent_actor_id;
  // sensor_type
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_type), &(output->sensor_type)))
  {
    return false;
  }
  // range
  output->range = input->range;
  // horizontal_fov_deg
  output->horizontal_fov_deg = input->horizontal_fov_deg;
  // upper_fov_deg
  output->upper_fov_deg = input->upper_fov_deg;
  // lower_fov_deg
  output->lower_fov_deg = input->lower_fov_deg;
  // detections
  if (!swarm_world_interfaces__msg__SensorDetection__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

swarm_world_interfaces__msg__SensorDetectionArray *
swarm_world_interfaces__msg__SensorDetectionArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetectionArray * msg = (swarm_world_interfaces__msg__SensorDetectionArray *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SensorDetectionArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__SensorDetectionArray));
  bool success = swarm_world_interfaces__msg__SensorDetectionArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__SensorDetectionArray__destroy(swarm_world_interfaces__msg__SensorDetectionArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__SensorDetectionArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__init(swarm_world_interfaces__msg__SensorDetectionArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetectionArray * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SensorDetectionArray)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__SensorDetectionArray *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__SensorDetectionArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__SensorDetectionArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__SensorDetectionArray__fini(&data[i - 1]);
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
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__fini(swarm_world_interfaces__msg__SensorDetectionArray__Sequence * array)
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
      swarm_world_interfaces__msg__SensorDetectionArray__fini(&array->data[i]);
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

swarm_world_interfaces__msg__SensorDetectionArray__Sequence *
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetectionArray__Sequence * array = (swarm_world_interfaces__msg__SensorDetectionArray__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SensorDetectionArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__SensorDetectionArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__destroy(swarm_world_interfaces__msg__SensorDetectionArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__SensorDetectionArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__are_equal(const swarm_world_interfaces__msg__SensorDetectionArray__Sequence * lhs, const swarm_world_interfaces__msg__SensorDetectionArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__SensorDetectionArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__SensorDetectionArray__Sequence__copy(
  const swarm_world_interfaces__msg__SensorDetectionArray__Sequence * input,
  swarm_world_interfaces__msg__SensorDetectionArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SensorDetectionArray)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__SensorDetectionArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__SensorDetectionArray * data =
      (swarm_world_interfaces__msg__SensorDetectionArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__SensorDetectionArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__SensorDetectionArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__SensorDetectionArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
