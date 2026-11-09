// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/expected_metrics_gt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExpectedMetricsGt_expected_fn_per_class
{
public:
  explicit Init_ExpectedMetricsGt_expected_fn_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::ExpectedMetricsGt expected_fn_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_fn_per_class_type arg)
  {
    msg_.expected_fn_per_class = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_expected_fp_per_class
{
public:
  explicit Init_ExpectedMetricsGt_expected_fp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_fn_per_class expected_fp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_fp_per_class_type arg)
  {
    msg_.expected_fp_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_expected_fn_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_expected_tp_per_class
{
public:
  explicit Init_ExpectedMetricsGt_expected_tp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_fp_per_class expected_tp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_tp_per_class_type arg)
  {
    msg_.expected_tp_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_expected_fp_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_n_gt_per_class
{
public:
  explicit Init_ExpectedMetricsGt_n_gt_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_tp_per_class n_gt_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_n_gt_per_class_type arg)
  {
    msg_.n_gt_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_expected_tp_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_expected_fn_total
{
public:
  explicit Init_ExpectedMetricsGt_expected_fn_total(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_n_gt_per_class expected_fn_total(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_fn_total_type arg)
  {
    msg_.expected_fn_total = std::move(arg);
    return Init_ExpectedMetricsGt_n_gt_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_expected_fp_total
{
public:
  explicit Init_ExpectedMetricsGt_expected_fp_total(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_fn_total expected_fp_total(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_fp_total_type arg)
  {
    msg_.expected_fp_total = std::move(arg);
    return Init_ExpectedMetricsGt_expected_fn_total(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_expected_tp_total
{
public:
  explicit Init_ExpectedMetricsGt_expected_tp_total(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_fp_total expected_tp_total(::swarm_interfaces::msg::ExpectedMetricsGt::_expected_tp_total_type arg)
  {
    msg_.expected_tp_total = std::move(arg);
    return Init_ExpectedMetricsGt_expected_fp_total(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_n_gt_total
{
public:
  explicit Init_ExpectedMetricsGt_n_gt_total(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_expected_tp_total n_gt_total(::swarm_interfaces::msg::ExpectedMetricsGt::_n_gt_total_type arg)
  {
    msg_.n_gt_total = std::move(arg);
    return Init_ExpectedMetricsGt_expected_tp_total(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_ave_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_ave_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_n_gt_total err_ave_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_ave_per_class_type arg)
  {
    msg_.err_ave_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_n_gt_total(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_ase_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_ase_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_ave_per_class err_ase_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_ase_per_class_type arg)
  {
    msg_.err_ase_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_ave_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_aoe_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_aoe_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_ase_per_class err_aoe_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_aoe_per_class_type arg)
  {
    msg_.err_aoe_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_ase_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_ate_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_ate_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_aoe_per_class err_ate_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_ate_per_class_type arg)
  {
    msg_.err_ate_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_aoe_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pass_rate_metrics_score
{
public:
  explicit Init_ExpectedMetricsGt_pass_rate_metrics_score(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_ate_per_class pass_rate_metrics_score(::swarm_interfaces::msg::ExpectedMetricsGt::_pass_rate_metrics_score_type arg)
  {
    msg_.pass_rate_metrics_score = std::move(arg);
    return Init_ExpectedMetricsGt_err_ate_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pass_rate_num_gt_tp
{
public:
  explicit Init_ExpectedMetricsGt_pass_rate_num_gt_tp(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pass_rate_metrics_score pass_rate_num_gt_tp(::swarm_interfaces::msg::ExpectedMetricsGt::_pass_rate_num_gt_tp_type arg)
  {
    msg_.pass_rate_num_gt_tp = std::move(arg);
    return Init_ExpectedMetricsGt_pass_rate_metrics_score(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pass_rate_num_tp
{
public:
  explicit Init_ExpectedMetricsGt_pass_rate_num_tp(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pass_rate_num_gt_tp pass_rate_num_tp(::swarm_interfaces::msg::ExpectedMetricsGt::_pass_rate_num_tp_type arg)
  {
    msg_.pass_rate_num_tp = std::move(arg);
    return Init_ExpectedMetricsGt_pass_rate_num_gt_tp(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_fn_span_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_fn_span_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pass_rate_num_tp fn_span_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_fn_span_mean_per_class_type arg)
  {
    msg_.fn_span_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_pass_rate_num_tp(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_cw_map_per_class
{
public:
  explicit Init_ExpectedMetricsGt_cw_map_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_fn_span_mean_per_class cw_map_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_cw_map_per_class_type arg)
  {
    msg_.cw_map_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_fn_span_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_cw_map
{
public:
  explicit Init_ExpectedMetricsGt_cw_map(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_cw_map_per_class cw_map(::swarm_interfaces::msg::ExpectedMetricsGt::_cw_map_type arg)
  {
    msg_.cw_map = std::move(arg);
    return Init_ExpectedMetricsGt_cw_map_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_critical_fn
{
public:
  explicit Init_ExpectedMetricsGt_critical_fn(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_cw_map critical_fn(::swarm_interfaces::msg::ExpectedMetricsGt::_critical_fn_type arg)
  {
    msg_.critical_fn = std::move(arg);
    return Init_ExpectedMetricsGt_cw_map(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_critical_fp
{
public:
  explicit Init_ExpectedMetricsGt_critical_fp(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_critical_fn critical_fp(::swarm_interfaces::msg::ExpectedMetricsGt::_critical_fp_type arg)
  {
    msg_.critical_fp = std::move(arg);
    return Init_ExpectedMetricsGt_critical_fn(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_confusion_values
{
public:
  explicit Init_ExpectedMetricsGt_confusion_values(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_critical_fp confusion_values(::swarm_interfaces::msg::ExpectedMetricsGt::_confusion_values_type arg)
  {
    msg_.confusion_values = std::move(arg);
    return Init_ExpectedMetricsGt_critical_fp(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_confusion_pairs
{
public:
  explicit Init_ExpectedMetricsGt_confusion_pairs(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_confusion_values confusion_pairs(::swarm_interfaces::msg::ExpectedMetricsGt::_confusion_pairs_type arg)
  {
    msg_.confusion_pairs = std::move(arg);
    return Init_ExpectedMetricsGt_confusion_values(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_confident_errors_per_frame
{
public:
  explicit Init_ExpectedMetricsGt_confident_errors_per_frame(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_confusion_pairs confident_errors_per_frame(::swarm_interfaces::msg::ExpectedMetricsGt::_confident_errors_per_frame_type arg)
  {
    msg_.confident_errors_per_frame = std::move(arg);
    return Init_ExpectedMetricsGt_confusion_pairs(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_confident_error_rate
{
public:
  explicit Init_ExpectedMetricsGt_confident_error_rate(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_confident_errors_per_frame confident_error_rate(::swarm_interfaces::msg::ExpectedMetricsGt::_confident_error_rate_type arg)
  {
    msg_.confident_error_rate = std::move(arg);
    return Init_ExpectedMetricsGt_confident_errors_per_frame(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ece_macro
{
public:
  explicit Init_ExpectedMetricsGt_ece_macro(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_confident_error_rate ece_macro(::swarm_interfaces::msg::ExpectedMetricsGt::_ece_macro_type arg)
  {
    msg_.ece_macro = std::move(arg);
    return Init_ExpectedMetricsGt_confident_error_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ece
{
public:
  explicit Init_ExpectedMetricsGt_ece(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ece_macro ece(::swarm_interfaces::msg::ExpectedMetricsGt::_ece_type arg)
  {
    msg_.ece = std::move(arg);
    return Init_ExpectedMetricsGt_ece_macro(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_nsurf_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_nsurf_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ece nsurf_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_nsurf_mean_per_class_type arg)
  {
    msg_.nsurf_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_ece(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_mflip_rate
{
public:
  explicit Init_ExpectedMetricsGt_mflip_rate(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_nsurf_mean_per_class mflip_rate(::swarm_interfaces::msg::ExpectedMetricsGt::_mflip_rate_type arg)
  {
    msg_.mflip_rate = std::move(arg);
    return Init_ExpectedMetricsGt_nsurf_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_flip_rate_per_class
{
public:
  explicit Init_ExpectedMetricsGt_flip_rate_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_mflip_rate flip_rate_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_flip_rate_per_class_type arg)
  {
    msg_.flip_rate_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_mflip_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_corner_p95_per_class
{
public:
  explicit Init_ExpectedMetricsGt_corner_p95_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_flip_rate_per_class corner_p95_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_corner_p95_per_class_type arg)
  {
    msg_.corner_p95_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_flip_rate_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_corner_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_corner_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_corner_p95_per_class corner_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_corner_mean_per_class_type arg)
  {
    msg_.corner_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_corner_p95_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pred_miss_rate
{
public:
  explicit Init_ExpectedMetricsGt_pred_miss_rate(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_corner_mean_per_class pred_miss_rate(::swarm_interfaces::msg::ExpectedMetricsGt::_pred_miss_rate_type arg)
  {
    msg_.pred_miss_rate = std::move(arg);
    return Init_ExpectedMetricsGt_corner_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pred_fde
{
public:
  explicit Init_ExpectedMetricsGt_pred_fde(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pred_miss_rate pred_fde(::swarm_interfaces::msg::ExpectedMetricsGt::_pred_fde_type arg)
  {
    msg_.pred_fde = std::move(arg);
    return Init_ExpectedMetricsGt_pred_miss_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_pred_ade
{
public:
  explicit Init_ExpectedMetricsGt_pred_ade(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pred_fde pred_ade(::swarm_interfaces::msg::ExpectedMetricsGt::_pred_ade_type arg)
  {
    msg_.pred_ade = std::move(arg);
    return Init_ExpectedMetricsGt_pred_fde(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_id_switch_per_class
{
public:
  explicit Init_ExpectedMetricsGt_id_switch_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_pred_ade id_switch_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_id_switch_per_class_type arg)
  {
    msg_.id_switch_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_pred_ade(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_mota_per_class
{
public:
  explicit Init_ExpectedMetricsGt_mota_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_id_switch_per_class mota_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_mota_per_class_type arg)
  {
    msg_.mota_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_id_switch_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_motp_per_class
{
public:
  explicit Init_ExpectedMetricsGt_motp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_mota_per_class motp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_motp_per_class_type arg)
  {
    msg_.motp_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_mota_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_vel_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_vel_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_motp_per_class err_vel_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_vel_mean_per_class_type arg)
  {
    msg_.err_vel_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_motp_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_yaw_std_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_yaw_std_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_vel_mean_per_class err_yaw_std_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_yaw_std_per_class_type arg)
  {
    msg_.err_yaw_std_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_vel_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_yaw_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_yaw_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_yaw_std_per_class err_yaw_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_yaw_mean_per_class_type arg)
  {
    msg_.err_yaw_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_yaw_std_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_dist_rms_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_dist_rms_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_yaw_mean_per_class err_dist_rms_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_dist_rms_per_class_type arg)
  {
    msg_.err_dist_rms_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_yaw_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_err_dist_mean_per_class
{
public:
  explicit Init_ExpectedMetricsGt_err_dist_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_dist_rms_per_class err_dist_mean_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_err_dist_mean_per_class_type arg)
  {
    msg_.err_dist_mean_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_dist_rms_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ratio_fn_per_class
{
public:
  explicit Init_ExpectedMetricsGt_ratio_fn_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_err_dist_mean_per_class ratio_fn_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_ratio_fn_per_class_type arg)
  {
    msg_.ratio_fn_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_err_dist_mean_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ratio_fp_per_class
{
public:
  explicit Init_ExpectedMetricsGt_ratio_fp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ratio_fn_per_class ratio_fp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_ratio_fp_per_class_type arg)
  {
    msg_.ratio_fp_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_ratio_fn_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ratio_tp_per_class
{
public:
  explicit Init_ExpectedMetricsGt_ratio_tp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ratio_fp_per_class ratio_tp_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_ratio_tp_per_class_type arg)
  {
    msg_.ratio_tp_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_ratio_fp_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_optimal_conf_per_class
{
public:
  explicit Init_ExpectedMetricsGt_optimal_conf_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ratio_tp_per_class optimal_conf_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_optimal_conf_per_class_type arg)
  {
    msg_.optimal_conf_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_ratio_tp_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_f1_max_per_class
{
public:
  explicit Init_ExpectedMetricsGt_f1_max_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_optimal_conf_per_class f1_max_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_f1_max_per_class_type arg)
  {
    msg_.f1_max_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_optimal_conf_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_aph_per_class
{
public:
  explicit Init_ExpectedMetricsGt_aph_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_f1_max_per_class aph_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_aph_per_class_type arg)
  {
    msg_.aph_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_f1_max_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_ap_per_class
{
public:
  explicit Init_ExpectedMetricsGt_ap_per_class(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_aph_per_class ap_per_class(::swarm_interfaces::msg::ExpectedMetricsGt::_ap_per_class_type arg)
  {
    msg_.ap_per_class = std::move(arg);
    return Init_ExpectedMetricsGt_aph_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_classes
{
public:
  explicit Init_ExpectedMetricsGt_classes(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_ap_per_class classes(::swarm_interfaces::msg::ExpectedMetricsGt::_classes_type arg)
  {
    msg_.classes = std::move(arg);
    return Init_ExpectedMetricsGt_ap_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_maph
{
public:
  explicit Init_ExpectedMetricsGt_maph(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_classes maph(::swarm_interfaces::msg::ExpectedMetricsGt::_maph_type arg)
  {
    msg_.maph = std::move(arg);
    return Init_ExpectedMetricsGt_classes(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_map
{
public:
  explicit Init_ExpectedMetricsGt_map(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_maph map(::swarm_interfaces::msg::ExpectedMetricsGt::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_ExpectedMetricsGt_maph(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_n_frames_in_window
{
public:
  explicit Init_ExpectedMetricsGt_n_frames_in_window(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_map n_frames_in_window(::swarm_interfaces::msg::ExpectedMetricsGt::_n_frames_in_window_type arg)
  {
    msg_.n_frames_in_window = std::move(arg);
    return Init_ExpectedMetricsGt_map(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_warming_up
{
public:
  explicit Init_ExpectedMetricsGt_warming_up(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_n_frames_in_window warming_up(::swarm_interfaces::msg::ExpectedMetricsGt::_warming_up_type arg)
  {
    msg_.warming_up = std::move(arg);
    return Init_ExpectedMetricsGt_n_frames_in_window(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_window_sec
{
public:
  explicit Init_ExpectedMetricsGt_window_sec(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_warming_up window_sec(::swarm_interfaces::msg::ExpectedMetricsGt::_window_sec_type arg)
  {
    msg_.window_sec = std::move(arg);
    return Init_ExpectedMetricsGt_warming_up(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_params_hash
{
public:
  explicit Init_ExpectedMetricsGt_params_hash(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_window_sec params_hash(::swarm_interfaces::msg::ExpectedMetricsGt::_params_hash_type arg)
  {
    msg_.params_hash = std::move(arg);
    return Init_ExpectedMetricsGt_window_sec(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_model_based
{
public:
  explicit Init_ExpectedMetricsGt_model_based(::swarm_interfaces::msg::ExpectedMetricsGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsGt_params_hash model_based(::swarm_interfaces::msg::ExpectedMetricsGt::_model_based_type arg)
  {
    msg_.model_based = std::move(arg);
    return Init_ExpectedMetricsGt_params_hash(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

class Init_ExpectedMetricsGt_header
{
public:
  Init_ExpectedMetricsGt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpectedMetricsGt_model_based header(::swarm_interfaces::msg::ExpectedMetricsGt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExpectedMetricsGt_model_based(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsGt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::ExpectedMetricsGt>()
{
  return swarm_interfaces::msg::builder::Init_ExpectedMetricsGt_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__BUILDER_HPP_
