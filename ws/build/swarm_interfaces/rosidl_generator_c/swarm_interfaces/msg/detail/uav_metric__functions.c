// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/UavMetric.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/uav_metric__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
swarm_interfaces__msg__UavMetric__init(swarm_interfaces__msg__UavMetric * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__UavMetric__fini(msg);
    return false;
  }
  // drone_id
  // active
  // mode
  // x
  // y
  // yaw
  // z
  // vx
  // vy
  // vz
  // speed_3d
  // yaw_rate
  // has_link
  // nearest_ugv_id
  // ugv_distance_m
  // latency_ms
  // los
  // detections_now
  // sensor_streams
  // position_error
  // yaw_error
  // has_reference
  // reference_relative
  // reference_z_requested
  // reference_z_clamped
  // reference_z_clamped_flag
  // reference_age_s
  return true;
}

void
swarm_interfaces__msg__UavMetric__fini(swarm_interfaces__msg__UavMetric * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drone_id
  // active
  // mode
  // x
  // y
  // yaw
  // z
  // vx
  // vy
  // vz
  // speed_3d
  // yaw_rate
  // has_link
  // nearest_ugv_id
  // ugv_distance_m
  // latency_ms
  // los
  // detections_now
  // sensor_streams
  // position_error
  // yaw_error
  // has_reference
  // reference_relative
  // reference_z_requested
  // reference_z_clamped
  // reference_z_clamped_flag
  // reference_age_s
}

bool
swarm_interfaces__msg__UavMetric__are_equal(const swarm_interfaces__msg__UavMetric * lhs, const swarm_interfaces__msg__UavMetric * rhs)
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
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // speed_3d
  if (lhs->speed_3d != rhs->speed_3d) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // has_link
  if (lhs->has_link != rhs->has_link) {
    return false;
  }
  // nearest_ugv_id
  if (lhs->nearest_ugv_id != rhs->nearest_ugv_id) {
    return false;
  }
  // ugv_distance_m
  if (lhs->ugv_distance_m != rhs->ugv_distance_m) {
    return false;
  }
  // latency_ms
  if (lhs->latency_ms != rhs->latency_ms) {
    return false;
  }
  // los
  if (lhs->los != rhs->los) {
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
  // position_error
  if (lhs->position_error != rhs->position_error) {
    return false;
  }
  // yaw_error
  if (lhs->yaw_error != rhs->yaw_error) {
    return false;
  }
  // has_reference
  if (lhs->has_reference != rhs->has_reference) {
    return false;
  }
  // reference_relative
  if (lhs->reference_relative != rhs->reference_relative) {
    return false;
  }
  // reference_z_requested
  if (lhs->reference_z_requested != rhs->reference_z_requested) {
    return false;
  }
  // reference_z_clamped
  if (lhs->reference_z_clamped != rhs->reference_z_clamped) {
    return false;
  }
  // reference_z_clamped_flag
  if (lhs->reference_z_clamped_flag != rhs->reference_z_clamped_flag) {
    return false;
  }
  // reference_age_s
  if (lhs->reference_age_s != rhs->reference_age_s) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__UavMetric__copy(
  const swarm_interfaces__msg__UavMetric * input,
  swarm_interfaces__msg__UavMetric * output)
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
  // active
  output->active = input->active;
  // mode
  output->mode = input->mode;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // z
  output->z = input->z;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // speed_3d
  output->speed_3d = input->speed_3d;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // has_link
  output->has_link = input->has_link;
  // nearest_ugv_id
  output->nearest_ugv_id = input->nearest_ugv_id;
  // ugv_distance_m
  output->ugv_distance_m = input->ugv_distance_m;
  // latency_ms
  output->latency_ms = input->latency_ms;
  // los
  output->los = input->los;
  // detections_now
  output->detections_now = input->detections_now;
  // sensor_streams
  output->sensor_streams = input->sensor_streams;
  // position_error
  output->position_error = input->position_error;
  // yaw_error
  output->yaw_error = input->yaw_error;
  // has_reference
  output->has_reference = input->has_reference;
  // reference_relative
  output->reference_relative = input->reference_relative;
  // reference_z_requested
  output->reference_z_requested = input->reference_z_requested;
  // reference_z_clamped
  output->reference_z_clamped = input->reference_z_clamped;
  // reference_z_clamped_flag
  output->reference_z_clamped_flag = input->reference_z_clamped_flag;
  // reference_age_s
  output->reference_age_s = input->reference_age_s;
  return true;
}

swarm_interfaces__msg__UavMetric *
swarm_interfaces__msg__UavMetric__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavMetric * msg = (swarm_interfaces__msg__UavMetric *)allocator.allocate(sizeof(swarm_interfaces__msg__UavMetric), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__UavMetric));
  bool success = swarm_interfaces__msg__UavMetric__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__UavMetric__destroy(swarm_interfaces__msg__UavMetric * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__UavMetric__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__UavMetric__Sequence__init(swarm_interfaces__msg__UavMetric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavMetric * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavMetric)) {
      return false;
    }
    data = (swarm_interfaces__msg__UavMetric *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__UavMetric), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__UavMetric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__UavMetric__fini(&data[i - 1]);
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
swarm_interfaces__msg__UavMetric__Sequence__fini(swarm_interfaces__msg__UavMetric__Sequence * array)
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
      swarm_interfaces__msg__UavMetric__fini(&array->data[i]);
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

swarm_interfaces__msg__UavMetric__Sequence *
swarm_interfaces__msg__UavMetric__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__UavMetric__Sequence * array = (swarm_interfaces__msg__UavMetric__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__UavMetric__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__UavMetric__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__UavMetric__Sequence__destroy(swarm_interfaces__msg__UavMetric__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__UavMetric__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__UavMetric__Sequence__are_equal(const swarm_interfaces__msg__UavMetric__Sequence * lhs, const swarm_interfaces__msg__UavMetric__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__UavMetric__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__UavMetric__Sequence__copy(
  const swarm_interfaces__msg__UavMetric__Sequence * input,
  swarm_interfaces__msg__UavMetric__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__UavMetric)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__UavMetric);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__UavMetric * data =
      (swarm_interfaces__msg__UavMetric *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__UavMetric__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__UavMetric__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__UavMetric__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
