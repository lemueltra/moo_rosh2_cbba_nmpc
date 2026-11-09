// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `params_hash`
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `lateral_deviation_mean`
// Member `lateral_deviation_min`
// Member `lateral_deviation_max`
// Member `yaw_deviation_mean`
// Member `yaw_rate_mean`
// Member `predicted_path_deviation_mean`
// Member `total_objects_count`
// Member `average_objects_count`
// Member `interval_average_objects_count`
// Member `object_count_per_class`
// Member `max_distance_per_class`
// Member `size_cv_per_class`
// Member `position_jitter_per_class`
// Member `heading_inversion_rate_per_class`
// Member `track_fragments_per_class`
// Member `track_purity_per_class`
// Member `track_length_per_class`
// Member `sensor_health`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
swarm_interfaces__msg__ExpectedMetricsNoGt__init(swarm_interfaces__msg__ExpectedMetricsNoGt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // model_based
  // params_hash
  if (!rosidl_runtime_c__String__init(&msg->params_hash)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // window_sec
  // warming_up
  // n_frames_in_window
  // classes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->classes, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // lateral_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lateral_deviation_mean, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // lateral_deviation_min
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lateral_deviation_min, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // lateral_deviation_max
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lateral_deviation_max, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // yaw_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__init(&msg->yaw_deviation_mean, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // yaw_rate_mean
  if (!rosidl_runtime_c__double__Sequence__init(&msg->yaw_rate_mean, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // predicted_path_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__init(&msg->predicted_path_deviation_mean, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // total_objects_count
  if (!rosidl_runtime_c__double__Sequence__init(&msg->total_objects_count, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // average_objects_count
  if (!rosidl_runtime_c__double__Sequence__init(&msg->average_objects_count, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // interval_average_objects_count
  if (!rosidl_runtime_c__double__Sequence__init(&msg->interval_average_objects_count, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // all_object_count
  // object_count_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->object_count_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // max_distance_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->max_distance_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // meas_to_tracked_latency_ms
  // prediction_latency_ms
  // total_latency_ms
  // cross_confirm_rate
  // unconfirmed_rate
  // missed_by_other_rate
  // class_disagree_rate
  // range_discrepancy_mean
  // range_discrepancy_p95
  // size_cv_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->size_cv_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // position_jitter_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position_jitter_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // heading_inversion_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->heading_inversion_rate_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // track_fragments_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->track_fragments_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // track_purity_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->track_purity_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // track_length_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->track_length_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // ece_proxy
  // unconfirmed_high_conf_rate
  // critical_inconsistency_per_s
  // sync_offset_ms
  // sensor_health
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->sensor_health, 0)) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
    return false;
  }
  // flight_regime_altitude_m
  // flight_regime_speed_mps
  // flight_regime_climb_rate_mps
  return true;
}

void
swarm_interfaces__msg__ExpectedMetricsNoGt__fini(swarm_interfaces__msg__ExpectedMetricsNoGt * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // model_based
  // params_hash
  rosidl_runtime_c__String__fini(&msg->params_hash);
  // window_sec
  // warming_up
  // n_frames_in_window
  // classes
  rosidl_runtime_c__String__Sequence__fini(&msg->classes);
  // lateral_deviation_mean
  rosidl_runtime_c__double__Sequence__fini(&msg->lateral_deviation_mean);
  // lateral_deviation_min
  rosidl_runtime_c__double__Sequence__fini(&msg->lateral_deviation_min);
  // lateral_deviation_max
  rosidl_runtime_c__double__Sequence__fini(&msg->lateral_deviation_max);
  // yaw_deviation_mean
  rosidl_runtime_c__double__Sequence__fini(&msg->yaw_deviation_mean);
  // yaw_rate_mean
  rosidl_runtime_c__double__Sequence__fini(&msg->yaw_rate_mean);
  // predicted_path_deviation_mean
  rosidl_runtime_c__double__Sequence__fini(&msg->predicted_path_deviation_mean);
  // total_objects_count
  rosidl_runtime_c__double__Sequence__fini(&msg->total_objects_count);
  // average_objects_count
  rosidl_runtime_c__double__Sequence__fini(&msg->average_objects_count);
  // interval_average_objects_count
  rosidl_runtime_c__double__Sequence__fini(&msg->interval_average_objects_count);
  // all_object_count
  // object_count_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->object_count_per_class);
  // max_distance_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->max_distance_per_class);
  // meas_to_tracked_latency_ms
  // prediction_latency_ms
  // total_latency_ms
  // cross_confirm_rate
  // unconfirmed_rate
  // missed_by_other_rate
  // class_disagree_rate
  // range_discrepancy_mean
  // range_discrepancy_p95
  // size_cv_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->size_cv_per_class);
  // position_jitter_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->position_jitter_per_class);
  // heading_inversion_rate_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->heading_inversion_rate_per_class);
  // track_fragments_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->track_fragments_per_class);
  // track_purity_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->track_purity_per_class);
  // track_length_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->track_length_per_class);
  // ece_proxy
  // unconfirmed_high_conf_rate
  // critical_inconsistency_per_s
  // sync_offset_ms
  // sensor_health
  rosidl_runtime_c__boolean__Sequence__fini(&msg->sensor_health);
  // flight_regime_altitude_m
  // flight_regime_speed_mps
  // flight_regime_climb_rate_mps
}

bool
swarm_interfaces__msg__ExpectedMetricsNoGt__are_equal(const swarm_interfaces__msg__ExpectedMetricsNoGt * lhs, const swarm_interfaces__msg__ExpectedMetricsNoGt * rhs)
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
  // model_based
  if (lhs->model_based != rhs->model_based) {
    return false;
  }
  // params_hash
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->params_hash), &(rhs->params_hash)))
  {
    return false;
  }
  // window_sec
  if (lhs->window_sec != rhs->window_sec) {
    return false;
  }
  // warming_up
  if (lhs->warming_up != rhs->warming_up) {
    return false;
  }
  // n_frames_in_window
  if (lhs->n_frames_in_window != rhs->n_frames_in_window) {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->classes), &(rhs->classes)))
  {
    return false;
  }
  // lateral_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lateral_deviation_mean), &(rhs->lateral_deviation_mean)))
  {
    return false;
  }
  // lateral_deviation_min
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lateral_deviation_min), &(rhs->lateral_deviation_min)))
  {
    return false;
  }
  // lateral_deviation_max
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lateral_deviation_max), &(rhs->lateral_deviation_max)))
  {
    return false;
  }
  // yaw_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->yaw_deviation_mean), &(rhs->yaw_deviation_mean)))
  {
    return false;
  }
  // yaw_rate_mean
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->yaw_rate_mean), &(rhs->yaw_rate_mean)))
  {
    return false;
  }
  // predicted_path_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->predicted_path_deviation_mean), &(rhs->predicted_path_deviation_mean)))
  {
    return false;
  }
  // total_objects_count
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->total_objects_count), &(rhs->total_objects_count)))
  {
    return false;
  }
  // average_objects_count
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->average_objects_count), &(rhs->average_objects_count)))
  {
    return false;
  }
  // interval_average_objects_count
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->interval_average_objects_count), &(rhs->interval_average_objects_count)))
  {
    return false;
  }
  // all_object_count
  if (lhs->all_object_count != rhs->all_object_count) {
    return false;
  }
  // object_count_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->object_count_per_class), &(rhs->object_count_per_class)))
  {
    return false;
  }
  // max_distance_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->max_distance_per_class), &(rhs->max_distance_per_class)))
  {
    return false;
  }
  // meas_to_tracked_latency_ms
  if (lhs->meas_to_tracked_latency_ms != rhs->meas_to_tracked_latency_ms) {
    return false;
  }
  // prediction_latency_ms
  if (lhs->prediction_latency_ms != rhs->prediction_latency_ms) {
    return false;
  }
  // total_latency_ms
  if (lhs->total_latency_ms != rhs->total_latency_ms) {
    return false;
  }
  // cross_confirm_rate
  if (lhs->cross_confirm_rate != rhs->cross_confirm_rate) {
    return false;
  }
  // unconfirmed_rate
  if (lhs->unconfirmed_rate != rhs->unconfirmed_rate) {
    return false;
  }
  // missed_by_other_rate
  if (lhs->missed_by_other_rate != rhs->missed_by_other_rate) {
    return false;
  }
  // class_disagree_rate
  if (lhs->class_disagree_rate != rhs->class_disagree_rate) {
    return false;
  }
  // range_discrepancy_mean
  if (lhs->range_discrepancy_mean != rhs->range_discrepancy_mean) {
    return false;
  }
  // range_discrepancy_p95
  if (lhs->range_discrepancy_p95 != rhs->range_discrepancy_p95) {
    return false;
  }
  // size_cv_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->size_cv_per_class), &(rhs->size_cv_per_class)))
  {
    return false;
  }
  // position_jitter_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position_jitter_per_class), &(rhs->position_jitter_per_class)))
  {
    return false;
  }
  // heading_inversion_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->heading_inversion_rate_per_class), &(rhs->heading_inversion_rate_per_class)))
  {
    return false;
  }
  // track_fragments_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->track_fragments_per_class), &(rhs->track_fragments_per_class)))
  {
    return false;
  }
  // track_purity_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->track_purity_per_class), &(rhs->track_purity_per_class)))
  {
    return false;
  }
  // track_length_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->track_length_per_class), &(rhs->track_length_per_class)))
  {
    return false;
  }
  // ece_proxy
  if (lhs->ece_proxy != rhs->ece_proxy) {
    return false;
  }
  // unconfirmed_high_conf_rate
  if (lhs->unconfirmed_high_conf_rate != rhs->unconfirmed_high_conf_rate) {
    return false;
  }
  // critical_inconsistency_per_s
  if (lhs->critical_inconsistency_per_s != rhs->critical_inconsistency_per_s) {
    return false;
  }
  // sync_offset_ms
  if (lhs->sync_offset_ms != rhs->sync_offset_ms) {
    return false;
  }
  // sensor_health
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->sensor_health), &(rhs->sensor_health)))
  {
    return false;
  }
  // flight_regime_altitude_m
  if (lhs->flight_regime_altitude_m != rhs->flight_regime_altitude_m) {
    return false;
  }
  // flight_regime_speed_mps
  if (lhs->flight_regime_speed_mps != rhs->flight_regime_speed_mps) {
    return false;
  }
  // flight_regime_climb_rate_mps
  if (lhs->flight_regime_climb_rate_mps != rhs->flight_regime_climb_rate_mps) {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__ExpectedMetricsNoGt__copy(
  const swarm_interfaces__msg__ExpectedMetricsNoGt * input,
  swarm_interfaces__msg__ExpectedMetricsNoGt * output)
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
  // model_based
  output->model_based = input->model_based;
  // params_hash
  if (!rosidl_runtime_c__String__copy(
      &(input->params_hash), &(output->params_hash)))
  {
    return false;
  }
  // window_sec
  output->window_sec = input->window_sec;
  // warming_up
  output->warming_up = input->warming_up;
  // n_frames_in_window
  output->n_frames_in_window = input->n_frames_in_window;
  // classes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->classes), &(output->classes)))
  {
    return false;
  }
  // lateral_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lateral_deviation_mean), &(output->lateral_deviation_mean)))
  {
    return false;
  }
  // lateral_deviation_min
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lateral_deviation_min), &(output->lateral_deviation_min)))
  {
    return false;
  }
  // lateral_deviation_max
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lateral_deviation_max), &(output->lateral_deviation_max)))
  {
    return false;
  }
  // yaw_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->yaw_deviation_mean), &(output->yaw_deviation_mean)))
  {
    return false;
  }
  // yaw_rate_mean
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->yaw_rate_mean), &(output->yaw_rate_mean)))
  {
    return false;
  }
  // predicted_path_deviation_mean
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->predicted_path_deviation_mean), &(output->predicted_path_deviation_mean)))
  {
    return false;
  }
  // total_objects_count
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->total_objects_count), &(output->total_objects_count)))
  {
    return false;
  }
  // average_objects_count
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->average_objects_count), &(output->average_objects_count)))
  {
    return false;
  }
  // interval_average_objects_count
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->interval_average_objects_count), &(output->interval_average_objects_count)))
  {
    return false;
  }
  // all_object_count
  output->all_object_count = input->all_object_count;
  // object_count_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->object_count_per_class), &(output->object_count_per_class)))
  {
    return false;
  }
  // max_distance_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->max_distance_per_class), &(output->max_distance_per_class)))
  {
    return false;
  }
  // meas_to_tracked_latency_ms
  output->meas_to_tracked_latency_ms = input->meas_to_tracked_latency_ms;
  // prediction_latency_ms
  output->prediction_latency_ms = input->prediction_latency_ms;
  // total_latency_ms
  output->total_latency_ms = input->total_latency_ms;
  // cross_confirm_rate
  output->cross_confirm_rate = input->cross_confirm_rate;
  // unconfirmed_rate
  output->unconfirmed_rate = input->unconfirmed_rate;
  // missed_by_other_rate
  output->missed_by_other_rate = input->missed_by_other_rate;
  // class_disagree_rate
  output->class_disagree_rate = input->class_disagree_rate;
  // range_discrepancy_mean
  output->range_discrepancy_mean = input->range_discrepancy_mean;
  // range_discrepancy_p95
  output->range_discrepancy_p95 = input->range_discrepancy_p95;
  // size_cv_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->size_cv_per_class), &(output->size_cv_per_class)))
  {
    return false;
  }
  // position_jitter_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position_jitter_per_class), &(output->position_jitter_per_class)))
  {
    return false;
  }
  // heading_inversion_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->heading_inversion_rate_per_class), &(output->heading_inversion_rate_per_class)))
  {
    return false;
  }
  // track_fragments_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->track_fragments_per_class), &(output->track_fragments_per_class)))
  {
    return false;
  }
  // track_purity_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->track_purity_per_class), &(output->track_purity_per_class)))
  {
    return false;
  }
  // track_length_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->track_length_per_class), &(output->track_length_per_class)))
  {
    return false;
  }
  // ece_proxy
  output->ece_proxy = input->ece_proxy;
  // unconfirmed_high_conf_rate
  output->unconfirmed_high_conf_rate = input->unconfirmed_high_conf_rate;
  // critical_inconsistency_per_s
  output->critical_inconsistency_per_s = input->critical_inconsistency_per_s;
  // sync_offset_ms
  output->sync_offset_ms = input->sync_offset_ms;
  // sensor_health
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->sensor_health), &(output->sensor_health)))
  {
    return false;
  }
  // flight_regime_altitude_m
  output->flight_regime_altitude_m = input->flight_regime_altitude_m;
  // flight_regime_speed_mps
  output->flight_regime_speed_mps = input->flight_regime_speed_mps;
  // flight_regime_climb_rate_mps
  output->flight_regime_climb_rate_mps = input->flight_regime_climb_rate_mps;
  return true;
}

swarm_interfaces__msg__ExpectedMetricsNoGt *
swarm_interfaces__msg__ExpectedMetricsNoGt__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsNoGt * msg = (swarm_interfaces__msg__ExpectedMetricsNoGt *)allocator.allocate(sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt));
  bool success = swarm_interfaces__msg__ExpectedMetricsNoGt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__ExpectedMetricsNoGt__destroy(swarm_interfaces__msg__ExpectedMetricsNoGt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__init(swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsNoGt * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt)) {
      return false;
    }
    data = (swarm_interfaces__msg__ExpectedMetricsNoGt *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__ExpectedMetricsNoGt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__ExpectedMetricsNoGt__fini(&data[i - 1]);
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
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__fini(swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * array)
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
      swarm_interfaces__msg__ExpectedMetricsNoGt__fini(&array->data[i]);
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

swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence *
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * array = (swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__destroy(swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__are_equal(const swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * lhs, const swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__ExpectedMetricsNoGt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence__copy(
  const swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * input,
  swarm_interfaces__msg__ExpectedMetricsNoGt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__ExpectedMetricsNoGt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__ExpectedMetricsNoGt * data =
      (swarm_interfaces__msg__ExpectedMetricsNoGt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__ExpectedMetricsNoGt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__ExpectedMetricsNoGt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__ExpectedMetricsNoGt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
