// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/SensorDetection.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/sensor_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox_pose_world`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `bbox_extent`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `aim_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
swarm_world_interfaces__msg__SensorDetection__init(swarm_world_interfaces__msg__SensorDetection * msg)
{
  if (!msg) {
    return false;
  }
  // actor_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    swarm_world_interfaces__msg__SensorDetection__fini(msg);
    return false;
  }
  // bbox_pose_world
  if (!geometry_msgs__msg__Pose__init(&msg->bbox_pose_world)) {
    swarm_world_interfaces__msg__SensorDetection__fini(msg);
    return false;
  }
  // bbox_extent
  if (!geometry_msgs__msg__Vector3__init(&msg->bbox_extent)) {
    swarm_world_interfaces__msg__SensorDetection__fini(msg);
    return false;
  }
  // range
  // azimuth
  // elevation
  // occluded
  // partially_occluded
  // occlusion_ratio
  // aim_point
  if (!geometry_msgs__msg__Point__init(&msg->aim_point)) {
    swarm_world_interfaces__msg__SensorDetection__fini(msg);
    return false;
  }
  return true;
}

void
swarm_world_interfaces__msg__SensorDetection__fini(swarm_world_interfaces__msg__SensorDetection * msg)
{
  if (!msg) {
    return;
  }
  // actor_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // bbox_pose_world
  geometry_msgs__msg__Pose__fini(&msg->bbox_pose_world);
  // bbox_extent
  geometry_msgs__msg__Vector3__fini(&msg->bbox_extent);
  // range
  // azimuth
  // elevation
  // occluded
  // partially_occluded
  // occlusion_ratio
  // aim_point
  geometry_msgs__msg__Point__fini(&msg->aim_point);
}

bool
swarm_world_interfaces__msg__SensorDetection__are_equal(const swarm_world_interfaces__msg__SensorDetection * lhs, const swarm_world_interfaces__msg__SensorDetection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // actor_id
  if (lhs->actor_id != rhs->actor_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // bbox_pose_world
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->bbox_pose_world), &(rhs->bbox_pose_world)))
  {
    return false;
  }
  // bbox_extent
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bbox_extent), &(rhs->bbox_extent)))
  {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // azimuth
  if (lhs->azimuth != rhs->azimuth) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // occluded
  if (lhs->occluded != rhs->occluded) {
    return false;
  }
  // partially_occluded
  if (lhs->partially_occluded != rhs->partially_occluded) {
    return false;
  }
  // occlusion_ratio
  if (lhs->occlusion_ratio != rhs->occlusion_ratio) {
    return false;
  }
  // aim_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->aim_point), &(rhs->aim_point)))
  {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__SensorDetection__copy(
  const swarm_world_interfaces__msg__SensorDetection * input,
  swarm_world_interfaces__msg__SensorDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // actor_id
  output->actor_id = input->actor_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // bbox_pose_world
  if (!geometry_msgs__msg__Pose__copy(
      &(input->bbox_pose_world), &(output->bbox_pose_world)))
  {
    return false;
  }
  // bbox_extent
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bbox_extent), &(output->bbox_extent)))
  {
    return false;
  }
  // range
  output->range = input->range;
  // azimuth
  output->azimuth = input->azimuth;
  // elevation
  output->elevation = input->elevation;
  // occluded
  output->occluded = input->occluded;
  // partially_occluded
  output->partially_occluded = input->partially_occluded;
  // occlusion_ratio
  output->occlusion_ratio = input->occlusion_ratio;
  // aim_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->aim_point), &(output->aim_point)))
  {
    return false;
  }
  return true;
}

swarm_world_interfaces__msg__SensorDetection *
swarm_world_interfaces__msg__SensorDetection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetection * msg = (swarm_world_interfaces__msg__SensorDetection *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SensorDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__SensorDetection));
  bool success = swarm_world_interfaces__msg__SensorDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__SensorDetection__destroy(swarm_world_interfaces__msg__SensorDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__SensorDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__SensorDetection__Sequence__init(swarm_world_interfaces__msg__SensorDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetection * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SensorDetection)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__SensorDetection *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__SensorDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__SensorDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__SensorDetection__fini(&data[i - 1]);
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
swarm_world_interfaces__msg__SensorDetection__Sequence__fini(swarm_world_interfaces__msg__SensorDetection__Sequence * array)
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
      swarm_world_interfaces__msg__SensorDetection__fini(&array->data[i]);
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

swarm_world_interfaces__msg__SensorDetection__Sequence *
swarm_world_interfaces__msg__SensorDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__SensorDetection__Sequence * array = (swarm_world_interfaces__msg__SensorDetection__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__SensorDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__SensorDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__SensorDetection__Sequence__destroy(swarm_world_interfaces__msg__SensorDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__SensorDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__SensorDetection__Sequence__are_equal(const swarm_world_interfaces__msg__SensorDetection__Sequence * lhs, const swarm_world_interfaces__msg__SensorDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__SensorDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__SensorDetection__Sequence__copy(
  const swarm_world_interfaces__msg__SensorDetection__Sequence * input,
  swarm_world_interfaces__msg__SensorDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__SensorDetection)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__SensorDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__SensorDetection * data =
      (swarm_world_interfaces__msg__SensorDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__SensorDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__SensorDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__SensorDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
