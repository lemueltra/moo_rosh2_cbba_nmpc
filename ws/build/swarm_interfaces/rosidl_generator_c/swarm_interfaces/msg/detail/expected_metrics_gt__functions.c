// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice
#include "swarm_interfaces/msg/detail/expected_metrics_gt__functions.h"

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
// Member `confusion_pairs`
#include "rosidl_runtime_c/string_functions.h"
// Member `ap_per_class`
// Member `aph_per_class`
// Member `f1_max_per_class`
// Member `optimal_conf_per_class`
// Member `ratio_tp_per_class`
// Member `ratio_fp_per_class`
// Member `ratio_fn_per_class`
// Member `err_dist_mean_per_class`
// Member `err_dist_rms_per_class`
// Member `err_yaw_mean_per_class`
// Member `err_yaw_std_per_class`
// Member `err_vel_mean_per_class`
// Member `motp_per_class`
// Member `mota_per_class`
// Member `id_switch_per_class`
// Member `corner_mean_per_class`
// Member `corner_p95_per_class`
// Member `flip_rate_per_class`
// Member `nsurf_mean_per_class`
// Member `confusion_values`
// Member `cw_map_per_class`
// Member `fn_span_mean_per_class`
// Member `err_ate_per_class`
// Member `err_aoe_per_class`
// Member `err_ase_per_class`
// Member `err_ave_per_class`
// Member `n_gt_per_class`
// Member `expected_tp_per_class`
// Member `expected_fp_per_class`
// Member `expected_fn_per_class`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
swarm_interfaces__msg__ExpectedMetricsGt__init(swarm_interfaces__msg__ExpectedMetricsGt * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // model_based
  // params_hash
  if (!rosidl_runtime_c__String__init(&msg->params_hash)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // window_sec
  // warming_up
  // n_frames_in_window
  // map
  // maph
  // classes
  if (!rosidl_runtime_c__String__Sequence__init(&msg->classes, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // ap_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ap_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // aph_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->aph_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // f1_max_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->f1_max_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // optimal_conf_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->optimal_conf_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // ratio_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ratio_tp_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // ratio_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ratio_fp_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // ratio_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ratio_fn_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_dist_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_dist_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_dist_rms_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_dist_rms_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_yaw_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_yaw_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_yaw_std_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_yaw_std_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_vel_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_vel_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // motp_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->motp_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // mota_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->mota_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // id_switch_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->id_switch_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // pred_ade
  // pred_fde
  // pred_miss_rate
  // corner_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->corner_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // corner_p95_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->corner_p95_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // flip_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->flip_rate_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // mflip_rate
  // nsurf_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->nsurf_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // ece
  // ece_macro
  // confident_error_rate
  // confident_errors_per_frame
  // confusion_pairs
  if (!rosidl_runtime_c__String__Sequence__init(&msg->confusion_pairs, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // confusion_values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->confusion_values, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // critical_fp
  // critical_fn
  // cw_map
  // cw_map_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cw_map_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // fn_span_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->fn_span_mean_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // pass_rate_num_tp
  // pass_rate_num_gt_tp
  // pass_rate_metrics_score
  // err_ate_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_ate_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_aoe_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_aoe_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_ase_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_ase_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // err_ave_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->err_ave_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // n_gt_total
  // expected_tp_total
  // expected_fp_total
  // expected_fn_total
  // n_gt_per_class
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->n_gt_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // expected_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->expected_tp_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // expected_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->expected_fp_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  // expected_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__init(&msg->expected_fn_per_class, 0)) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
    return false;
  }
  return true;
}

void
swarm_interfaces__msg__ExpectedMetricsGt__fini(swarm_interfaces__msg__ExpectedMetricsGt * msg)
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
  // map
  // maph
  // classes
  rosidl_runtime_c__String__Sequence__fini(&msg->classes);
  // ap_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->ap_per_class);
  // aph_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->aph_per_class);
  // f1_max_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->f1_max_per_class);
  // optimal_conf_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->optimal_conf_per_class);
  // ratio_tp_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->ratio_tp_per_class);
  // ratio_fp_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->ratio_fp_per_class);
  // ratio_fn_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->ratio_fn_per_class);
  // err_dist_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_dist_mean_per_class);
  // err_dist_rms_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_dist_rms_per_class);
  // err_yaw_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_yaw_mean_per_class);
  // err_yaw_std_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_yaw_std_per_class);
  // err_vel_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_vel_mean_per_class);
  // motp_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->motp_per_class);
  // mota_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->mota_per_class);
  // id_switch_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->id_switch_per_class);
  // pred_ade
  // pred_fde
  // pred_miss_rate
  // corner_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->corner_mean_per_class);
  // corner_p95_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->corner_p95_per_class);
  // flip_rate_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->flip_rate_per_class);
  // mflip_rate
  // nsurf_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->nsurf_mean_per_class);
  // ece
  // ece_macro
  // confident_error_rate
  // confident_errors_per_frame
  // confusion_pairs
  rosidl_runtime_c__String__Sequence__fini(&msg->confusion_pairs);
  // confusion_values
  rosidl_runtime_c__double__Sequence__fini(&msg->confusion_values);
  // critical_fp
  // critical_fn
  // cw_map
  // cw_map_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->cw_map_per_class);
  // fn_span_mean_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->fn_span_mean_per_class);
  // pass_rate_num_tp
  // pass_rate_num_gt_tp
  // pass_rate_metrics_score
  // err_ate_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_ate_per_class);
  // err_aoe_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_aoe_per_class);
  // err_ase_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_ase_per_class);
  // err_ave_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->err_ave_per_class);
  // n_gt_total
  // expected_tp_total
  // expected_fp_total
  // expected_fn_total
  // n_gt_per_class
  rosidl_runtime_c__uint32__Sequence__fini(&msg->n_gt_per_class);
  // expected_tp_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->expected_tp_per_class);
  // expected_fp_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->expected_fp_per_class);
  // expected_fn_per_class
  rosidl_runtime_c__double__Sequence__fini(&msg->expected_fn_per_class);
}

bool
swarm_interfaces__msg__ExpectedMetricsGt__are_equal(const swarm_interfaces__msg__ExpectedMetricsGt * lhs, const swarm_interfaces__msg__ExpectedMetricsGt * rhs)
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
  // map
  if (lhs->map != rhs->map) {
    return false;
  }
  // maph
  if (lhs->maph != rhs->maph) {
    return false;
  }
  // classes
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->classes), &(rhs->classes)))
  {
    return false;
  }
  // ap_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ap_per_class), &(rhs->ap_per_class)))
  {
    return false;
  }
  // aph_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->aph_per_class), &(rhs->aph_per_class)))
  {
    return false;
  }
  // f1_max_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->f1_max_per_class), &(rhs->f1_max_per_class)))
  {
    return false;
  }
  // optimal_conf_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->optimal_conf_per_class), &(rhs->optimal_conf_per_class)))
  {
    return false;
  }
  // ratio_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ratio_tp_per_class), &(rhs->ratio_tp_per_class)))
  {
    return false;
  }
  // ratio_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ratio_fp_per_class), &(rhs->ratio_fp_per_class)))
  {
    return false;
  }
  // ratio_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ratio_fn_per_class), &(rhs->ratio_fn_per_class)))
  {
    return false;
  }
  // err_dist_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_dist_mean_per_class), &(rhs->err_dist_mean_per_class)))
  {
    return false;
  }
  // err_dist_rms_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_dist_rms_per_class), &(rhs->err_dist_rms_per_class)))
  {
    return false;
  }
  // err_yaw_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_yaw_mean_per_class), &(rhs->err_yaw_mean_per_class)))
  {
    return false;
  }
  // err_yaw_std_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_yaw_std_per_class), &(rhs->err_yaw_std_per_class)))
  {
    return false;
  }
  // err_vel_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_vel_mean_per_class), &(rhs->err_vel_mean_per_class)))
  {
    return false;
  }
  // motp_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->motp_per_class), &(rhs->motp_per_class)))
  {
    return false;
  }
  // mota_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->mota_per_class), &(rhs->mota_per_class)))
  {
    return false;
  }
  // id_switch_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->id_switch_per_class), &(rhs->id_switch_per_class)))
  {
    return false;
  }
  // pred_ade
  if (lhs->pred_ade != rhs->pred_ade) {
    return false;
  }
  // pred_fde
  if (lhs->pred_fde != rhs->pred_fde) {
    return false;
  }
  // pred_miss_rate
  if (lhs->pred_miss_rate != rhs->pred_miss_rate) {
    return false;
  }
  // corner_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->corner_mean_per_class), &(rhs->corner_mean_per_class)))
  {
    return false;
  }
  // corner_p95_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->corner_p95_per_class), &(rhs->corner_p95_per_class)))
  {
    return false;
  }
  // flip_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->flip_rate_per_class), &(rhs->flip_rate_per_class)))
  {
    return false;
  }
  // mflip_rate
  if (lhs->mflip_rate != rhs->mflip_rate) {
    return false;
  }
  // nsurf_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->nsurf_mean_per_class), &(rhs->nsurf_mean_per_class)))
  {
    return false;
  }
  // ece
  if (lhs->ece != rhs->ece) {
    return false;
  }
  // ece_macro
  if (lhs->ece_macro != rhs->ece_macro) {
    return false;
  }
  // confident_error_rate
  if (lhs->confident_error_rate != rhs->confident_error_rate) {
    return false;
  }
  // confident_errors_per_frame
  if (lhs->confident_errors_per_frame != rhs->confident_errors_per_frame) {
    return false;
  }
  // confusion_pairs
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->confusion_pairs), &(rhs->confusion_pairs)))
  {
    return false;
  }
  // confusion_values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->confusion_values), &(rhs->confusion_values)))
  {
    return false;
  }
  // critical_fp
  if (lhs->critical_fp != rhs->critical_fp) {
    return false;
  }
  // critical_fn
  if (lhs->critical_fn != rhs->critical_fn) {
    return false;
  }
  // cw_map
  if (lhs->cw_map != rhs->cw_map) {
    return false;
  }
  // cw_map_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cw_map_per_class), &(rhs->cw_map_per_class)))
  {
    return false;
  }
  // fn_span_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->fn_span_mean_per_class), &(rhs->fn_span_mean_per_class)))
  {
    return false;
  }
  // pass_rate_num_tp
  if (lhs->pass_rate_num_tp != rhs->pass_rate_num_tp) {
    return false;
  }
  // pass_rate_num_gt_tp
  if (lhs->pass_rate_num_gt_tp != rhs->pass_rate_num_gt_tp) {
    return false;
  }
  // pass_rate_metrics_score
  if (lhs->pass_rate_metrics_score != rhs->pass_rate_metrics_score) {
    return false;
  }
  // err_ate_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_ate_per_class), &(rhs->err_ate_per_class)))
  {
    return false;
  }
  // err_aoe_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_aoe_per_class), &(rhs->err_aoe_per_class)))
  {
    return false;
  }
  // err_ase_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_ase_per_class), &(rhs->err_ase_per_class)))
  {
    return false;
  }
  // err_ave_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->err_ave_per_class), &(rhs->err_ave_per_class)))
  {
    return false;
  }
  // n_gt_total
  if (lhs->n_gt_total != rhs->n_gt_total) {
    return false;
  }
  // expected_tp_total
  if (lhs->expected_tp_total != rhs->expected_tp_total) {
    return false;
  }
  // expected_fp_total
  if (lhs->expected_fp_total != rhs->expected_fp_total) {
    return false;
  }
  // expected_fn_total
  if (lhs->expected_fn_total != rhs->expected_fn_total) {
    return false;
  }
  // n_gt_per_class
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->n_gt_per_class), &(rhs->n_gt_per_class)))
  {
    return false;
  }
  // expected_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->expected_tp_per_class), &(rhs->expected_tp_per_class)))
  {
    return false;
  }
  // expected_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->expected_fp_per_class), &(rhs->expected_fp_per_class)))
  {
    return false;
  }
  // expected_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->expected_fn_per_class), &(rhs->expected_fn_per_class)))
  {
    return false;
  }
  return true;
}

bool
swarm_interfaces__msg__ExpectedMetricsGt__copy(
  const swarm_interfaces__msg__ExpectedMetricsGt * input,
  swarm_interfaces__msg__ExpectedMetricsGt * output)
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
  // map
  output->map = input->map;
  // maph
  output->maph = input->maph;
  // classes
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->classes), &(output->classes)))
  {
    return false;
  }
  // ap_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ap_per_class), &(output->ap_per_class)))
  {
    return false;
  }
  // aph_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->aph_per_class), &(output->aph_per_class)))
  {
    return false;
  }
  // f1_max_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->f1_max_per_class), &(output->f1_max_per_class)))
  {
    return false;
  }
  // optimal_conf_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->optimal_conf_per_class), &(output->optimal_conf_per_class)))
  {
    return false;
  }
  // ratio_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ratio_tp_per_class), &(output->ratio_tp_per_class)))
  {
    return false;
  }
  // ratio_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ratio_fp_per_class), &(output->ratio_fp_per_class)))
  {
    return false;
  }
  // ratio_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ratio_fn_per_class), &(output->ratio_fn_per_class)))
  {
    return false;
  }
  // err_dist_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_dist_mean_per_class), &(output->err_dist_mean_per_class)))
  {
    return false;
  }
  // err_dist_rms_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_dist_rms_per_class), &(output->err_dist_rms_per_class)))
  {
    return false;
  }
  // err_yaw_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_yaw_mean_per_class), &(output->err_yaw_mean_per_class)))
  {
    return false;
  }
  // err_yaw_std_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_yaw_std_per_class), &(output->err_yaw_std_per_class)))
  {
    return false;
  }
  // err_vel_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_vel_mean_per_class), &(output->err_vel_mean_per_class)))
  {
    return false;
  }
  // motp_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->motp_per_class), &(output->motp_per_class)))
  {
    return false;
  }
  // mota_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->mota_per_class), &(output->mota_per_class)))
  {
    return false;
  }
  // id_switch_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->id_switch_per_class), &(output->id_switch_per_class)))
  {
    return false;
  }
  // pred_ade
  output->pred_ade = input->pred_ade;
  // pred_fde
  output->pred_fde = input->pred_fde;
  // pred_miss_rate
  output->pred_miss_rate = input->pred_miss_rate;
  // corner_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->corner_mean_per_class), &(output->corner_mean_per_class)))
  {
    return false;
  }
  // corner_p95_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->corner_p95_per_class), &(output->corner_p95_per_class)))
  {
    return false;
  }
  // flip_rate_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->flip_rate_per_class), &(output->flip_rate_per_class)))
  {
    return false;
  }
  // mflip_rate
  output->mflip_rate = input->mflip_rate;
  // nsurf_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->nsurf_mean_per_class), &(output->nsurf_mean_per_class)))
  {
    return false;
  }
  // ece
  output->ece = input->ece;
  // ece_macro
  output->ece_macro = input->ece_macro;
  // confident_error_rate
  output->confident_error_rate = input->confident_error_rate;
  // confident_errors_per_frame
  output->confident_errors_per_frame = input->confident_errors_per_frame;
  // confusion_pairs
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->confusion_pairs), &(output->confusion_pairs)))
  {
    return false;
  }
  // confusion_values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->confusion_values), &(output->confusion_values)))
  {
    return false;
  }
  // critical_fp
  output->critical_fp = input->critical_fp;
  // critical_fn
  output->critical_fn = input->critical_fn;
  // cw_map
  output->cw_map = input->cw_map;
  // cw_map_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cw_map_per_class), &(output->cw_map_per_class)))
  {
    return false;
  }
  // fn_span_mean_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->fn_span_mean_per_class), &(output->fn_span_mean_per_class)))
  {
    return false;
  }
  // pass_rate_num_tp
  output->pass_rate_num_tp = input->pass_rate_num_tp;
  // pass_rate_num_gt_tp
  output->pass_rate_num_gt_tp = input->pass_rate_num_gt_tp;
  // pass_rate_metrics_score
  output->pass_rate_metrics_score = input->pass_rate_metrics_score;
  // err_ate_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_ate_per_class), &(output->err_ate_per_class)))
  {
    return false;
  }
  // err_aoe_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_aoe_per_class), &(output->err_aoe_per_class)))
  {
    return false;
  }
  // err_ase_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_ase_per_class), &(output->err_ase_per_class)))
  {
    return false;
  }
  // err_ave_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->err_ave_per_class), &(output->err_ave_per_class)))
  {
    return false;
  }
  // n_gt_total
  output->n_gt_total = input->n_gt_total;
  // expected_tp_total
  output->expected_tp_total = input->expected_tp_total;
  // expected_fp_total
  output->expected_fp_total = input->expected_fp_total;
  // expected_fn_total
  output->expected_fn_total = input->expected_fn_total;
  // n_gt_per_class
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->n_gt_per_class), &(output->n_gt_per_class)))
  {
    return false;
  }
  // expected_tp_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->expected_tp_per_class), &(output->expected_tp_per_class)))
  {
    return false;
  }
  // expected_fp_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->expected_fp_per_class), &(output->expected_fp_per_class)))
  {
    return false;
  }
  // expected_fn_per_class
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->expected_fn_per_class), &(output->expected_fn_per_class)))
  {
    return false;
  }
  return true;
}

swarm_interfaces__msg__ExpectedMetricsGt *
swarm_interfaces__msg__ExpectedMetricsGt__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsGt * msg = (swarm_interfaces__msg__ExpectedMetricsGt *)allocator.allocate(sizeof(swarm_interfaces__msg__ExpectedMetricsGt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(swarm_interfaces__msg__ExpectedMetricsGt));
  bool success = swarm_interfaces__msg__ExpectedMetricsGt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
swarm_interfaces__msg__ExpectedMetricsGt__destroy(swarm_interfaces__msg__ExpectedMetricsGt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    swarm_interfaces__msg__ExpectedMetricsGt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__init(swarm_interfaces__msg__ExpectedMetricsGt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsGt * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(swarm_interfaces__msg__ExpectedMetricsGt)) {
      return false;
    }
    data = (swarm_interfaces__msg__ExpectedMetricsGt *)allocator.zero_allocate(size, sizeof(swarm_interfaces__msg__ExpectedMetricsGt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = swarm_interfaces__msg__ExpectedMetricsGt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        swarm_interfaces__msg__ExpectedMetricsGt__fini(&data[i - 1]);
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
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__fini(swarm_interfaces__msg__ExpectedMetricsGt__Sequence * array)
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
      swarm_interfaces__msg__ExpectedMetricsGt__fini(&array->data[i]);
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

swarm_interfaces__msg__ExpectedMetricsGt__Sequence *
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  swarm_interfaces__msg__ExpectedMetricsGt__Sequence * array = (swarm_interfaces__msg__ExpectedMetricsGt__Sequence *)allocator.allocate(sizeof(swarm_interfaces__msg__ExpectedMetricsGt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = swarm_interfaces__msg__ExpectedMetricsGt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__destroy(swarm_interfaces__msg__ExpectedMetricsGt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    swarm_interfaces__msg__ExpectedMetricsGt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__are_equal(const swarm_interfaces__msg__ExpectedMetricsGt__Sequence * lhs, const swarm_interfaces__msg__ExpectedMetricsGt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!swarm_interfaces__msg__ExpectedMetricsGt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
swarm_interfaces__msg__ExpectedMetricsGt__Sequence__copy(
  const swarm_interfaces__msg__ExpectedMetricsGt__Sequence * input,
  swarm_interfaces__msg__ExpectedMetricsGt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(swarm_interfaces__msg__ExpectedMetricsGt)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(swarm_interfaces__msg__ExpectedMetricsGt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    swarm_interfaces__msg__ExpectedMetricsGt * data =
      (swarm_interfaces__msg__ExpectedMetricsGt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!swarm_interfaces__msg__ExpectedMetricsGt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          swarm_interfaces__msg__ExpectedMetricsGt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!swarm_interfaces__msg__ExpectedMetricsGt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
