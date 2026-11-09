// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_world_interfaces:msg/WeatherPreset.idl
// generated code does not contain a copyright notice
#include "swarm_world_interfaces/msg/detail/weather_preset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `preset_name`
#include "rosidl_runtime_c/string_functions.h"

bool
swarm_world_interfaces__msg__WeatherPreset__init(swarm_world_interfaces__msg__WeatherPreset * msg)
{
  if (!msg) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__init(&msg->preset_name)) {
    swarm_world_interfaces__msg__WeatherPreset__fini(msg);
    return false;
  }
  // cloudiness
  // precipitation
  // precipitation_deposits
  // wind_intensity
  // sun_azimuth_angle
  // sun_altitude_angle
  // fog_density
  // fog_distance
  // fog_falloff
  // wetness
  return true;
}

void
swarm_world_interfaces__msg__WeatherPreset__fini(swarm_world_interfaces__msg__WeatherPreset * msg)
{
  if (!msg) {
    return;
  }
  // preset_name
  rosidl_runtime_c__String__fini(&msg->preset_name);
  // cloudiness
  // precipitation
  // precipitation_deposits
  // wind_intensity
  // sun_azimuth_angle
  // sun_altitude_angle
  // fog_density
  // fog_distance
  // fog_falloff
  // wetness
}

bool
swarm_world_interfaces__msg__WeatherPreset__are_equal(const swarm_world_interfaces__msg__WeatherPreset * lhs, const swarm_world_interfaces__msg__WeatherPreset * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->preset_name), &(rhs->preset_name)))
  {
    return false;
  }
  // cloudiness
  if (lhs->cloudiness != rhs->cloudiness) {
    return false;
  }
  // precipitation
  if (lhs->precipitation != rhs->precipitation) {
    return false;
  }
  // precipitation_deposits
  if (lhs->precipitation_deposits != rhs->precipitation_deposits) {
    return false;
  }
  // wind_intensity
  if (lhs->wind_intensity != rhs->wind_intensity) {
    return false;
  }
  // sun_azimuth_angle
  if (lhs->sun_azimuth_angle != rhs->sun_azimuth_angle) {
    return false;
  }
  // sun_altitude_angle
  if (lhs->sun_altitude_angle != rhs->sun_altitude_angle) {
    return false;
  }
  // fog_density
  if (lhs->fog_density != rhs->fog_density) {
    return false;
  }
  // fog_distance
  if (lhs->fog_distance != rhs->fog_distance) {
    return false;
  }
  // fog_falloff
  if (lhs->fog_falloff != rhs->fog_falloff) {
    return false;
  }
  // wetness
  if (lhs->wetness != rhs->wetness) {
    return false;
  }
  return true;
}

bool
swarm_world_interfaces__msg__WeatherPreset__copy(
  const swarm_world_interfaces__msg__WeatherPreset * input,
  swarm_world_interfaces__msg__WeatherPreset * output)
{
  if (!input || !output) {
    return false;
  }
  // preset_name
  if (!rosidl_runtime_c__String__copy(
      &(input->preset_name), &(output->preset_name)))
  {
    return false;
  }
  // cloudiness
  output->cloudiness = input->cloudiness;
  // precipitation
  output->precipitation = input->precipitation;
  // precipitation_deposits
  output->precipitation_deposits = input->precipitation_deposits;
  // wind_intensity
  output->wind_intensity = input->wind_intensity;
  // sun_azimuth_angle
  output->sun_azimuth_angle = input->sun_azimuth_angle;
  // sun_altitude_angle
  output->sun_altitude_angle = input->sun_altitude_angle;
  // fog_density
  output->fog_density = input->fog_density;
  // fog_distance
  output->fog_distance = input->fog_distance;
  // fog_falloff
  output->fog_falloff = input->fog_falloff;
  // wetness
  output->wetness = input->wetness;
  return true;
}

swarm_world_interfaces__msg__WeatherPreset *
swarm_world_interfaces__msg__WeatherPreset__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__WeatherPreset * msg = (swarm_world_interfaces__msg__WeatherPreset *)allocator.allocate(sizeof(swarm_world_interfaces__msg__WeatherPreset), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_world_interfaces__msg__WeatherPreset));
  bool success = swarm_world_interfaces__msg__WeatherPreset__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_world_interfaces__msg__WeatherPreset__destroy(swarm_world_interfaces__msg__WeatherPreset * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_world_interfaces__msg__WeatherPreset__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_world_interfaces__msg__WeatherPreset__Sequence__init(swarm_world_interfaces__msg__WeatherPreset__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__WeatherPreset * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__WeatherPreset)) {
      return false;
    }
    data = (swarm_world_interfaces__msg__WeatherPreset *)allocator.zero_allocate(size, sizeof(swarm_world_interfaces__msg__WeatherPreset), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_world_interfaces__msg__WeatherPreset__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_world_interfaces__msg__WeatherPreset__fini(&data[i - 1]);
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
swarm_world_interfaces__msg__WeatherPreset__Sequence__fini(swarm_world_interfaces__msg__WeatherPreset__Sequence * array)
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
      swarm_world_interfaces__msg__WeatherPreset__fini(&array->data[i]);
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

swarm_world_interfaces__msg__WeatherPreset__Sequence *
swarm_world_interfaces__msg__WeatherPreset__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_world_interfaces__msg__WeatherPreset__Sequence * array = (swarm_world_interfaces__msg__WeatherPreset__Sequence *)allocator.allocate(sizeof(swarm_world_interfaces__msg__WeatherPreset__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_world_interfaces__msg__WeatherPreset__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_world_interfaces__msg__WeatherPreset__Sequence__destroy(swarm_world_interfaces__msg__WeatherPreset__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_world_interfaces__msg__WeatherPreset__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_world_interfaces__msg__WeatherPreset__Sequence__are_equal(const swarm_world_interfaces__msg__WeatherPreset__Sequence * lhs, const swarm_world_interfaces__msg__WeatherPreset__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_world_interfaces__msg__WeatherPreset__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_world_interfaces__msg__WeatherPreset__Sequence__copy(
  const swarm_world_interfaces__msg__WeatherPreset__Sequence * input,
  swarm_world_interfaces__msg__WeatherPreset__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_world_interfaces__msg__WeatherPreset)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_world_interfaces__msg__WeatherPreset);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_world_interfaces__msg__WeatherPreset * data =
      (swarm_world_interfaces__msg__WeatherPreset *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_world_interfaces__msg__WeatherPreset__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_world_interfaces__msg__WeatherPreset__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_world_interfaces__msg__WeatherPreset__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
