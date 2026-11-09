// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_no_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ExpectedMetricsNoGt_flight_regime_climb_rate_mps
{
public:
  explicit Init_ExpectedMetricsNoGt_flight_regime_climb_rate_mps(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::ExpectedMetricsNoGt flight_regime_climb_rate_mps(::swarm_interfaces::msg::ExpectedMetricsNoGt::_flight_regime_climb_rate_mps_type arg)
  {
    msg_.flight_regime_climb_rate_mps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_flight_regime_speed_mps
{
public:
  explicit Init_ExpectedMetricsNoGt_flight_regime_speed_mps(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_flight_regime_climb_rate_mps flight_regime_speed_mps(::swarm_interfaces::msg::ExpectedMetricsNoGt::_flight_regime_speed_mps_type arg)
  {
    msg_.flight_regime_speed_mps = std::move(arg);
    return Init_ExpectedMetricsNoGt_flight_regime_climb_rate_mps(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_flight_regime_altitude_m
{
public:
  explicit Init_ExpectedMetricsNoGt_flight_regime_altitude_m(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_flight_regime_speed_mps flight_regime_altitude_m(::swarm_interfaces::msg::ExpectedMetricsNoGt::_flight_regime_altitude_m_type arg)
  {
    msg_.flight_regime_altitude_m = std::move(arg);
    return Init_ExpectedMetricsNoGt_flight_regime_speed_mps(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_sensor_health
{
public:
  explicit Init_ExpectedMetricsNoGt_sensor_health(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_flight_regime_altitude_m sensor_health(::swarm_interfaces::msg::ExpectedMetricsNoGt::_sensor_health_type arg)
  {
    msg_.sensor_health = std::move(arg);
    return Init_ExpectedMetricsNoGt_flight_regime_altitude_m(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_sync_offset_ms
{
public:
  explicit Init_ExpectedMetricsNoGt_sync_offset_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_sensor_health sync_offset_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt::_sync_offset_ms_type arg)
  {
    msg_.sync_offset_ms = std::move(arg);
    return Init_ExpectedMetricsNoGt_sensor_health(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_critical_inconsistency_per_s
{
public:
  explicit Init_ExpectedMetricsNoGt_critical_inconsistency_per_s(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_sync_offset_ms critical_inconsistency_per_s(::swarm_interfaces::msg::ExpectedMetricsNoGt::_critical_inconsistency_per_s_type arg)
  {
    msg_.critical_inconsistency_per_s = std::move(arg);
    return Init_ExpectedMetricsNoGt_sync_offset_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_unconfirmed_high_conf_rate
{
public:
  explicit Init_ExpectedMetricsNoGt_unconfirmed_high_conf_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_critical_inconsistency_per_s unconfirmed_high_conf_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt::_unconfirmed_high_conf_rate_type arg)
  {
    msg_.unconfirmed_high_conf_rate = std::move(arg);
    return Init_ExpectedMetricsNoGt_critical_inconsistency_per_s(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_ece_proxy
{
public:
  explicit Init_ExpectedMetricsNoGt_ece_proxy(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_unconfirmed_high_conf_rate ece_proxy(::swarm_interfaces::msg::ExpectedMetricsNoGt::_ece_proxy_type arg)
  {
    msg_.ece_proxy = std::move(arg);
    return Init_ExpectedMetricsNoGt_unconfirmed_high_conf_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_track_length_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_track_length_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_ece_proxy track_length_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_track_length_per_class_type arg)
  {
    msg_.track_length_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_ece_proxy(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_track_purity_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_track_purity_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_track_length_per_class track_purity_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_track_purity_per_class_type arg)
  {
    msg_.track_purity_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_track_length_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_track_fragments_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_track_fragments_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_track_purity_per_class track_fragments_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_track_fragments_per_class_type arg)
  {
    msg_.track_fragments_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_track_purity_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_heading_inversion_rate_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_heading_inversion_rate_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_track_fragments_per_class heading_inversion_rate_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_heading_inversion_rate_per_class_type arg)
  {
    msg_.heading_inversion_rate_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_track_fragments_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_position_jitter_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_position_jitter_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_heading_inversion_rate_per_class position_jitter_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_position_jitter_per_class_type arg)
  {
    msg_.position_jitter_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_heading_inversion_rate_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_size_cv_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_size_cv_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_position_jitter_per_class size_cv_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_size_cv_per_class_type arg)
  {
    msg_.size_cv_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_position_jitter_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_range_discrepancy_p95
{
public:
  explicit Init_ExpectedMetricsNoGt_range_discrepancy_p95(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_size_cv_per_class range_discrepancy_p95(::swarm_interfaces::msg::ExpectedMetricsNoGt::_range_discrepancy_p95_type arg)
  {
    msg_.range_discrepancy_p95 = std::move(arg);
    return Init_ExpectedMetricsNoGt_size_cv_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_range_discrepancy_mean
{
public:
  explicit Init_ExpectedMetricsNoGt_range_discrepancy_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_range_discrepancy_p95 range_discrepancy_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt::_range_discrepancy_mean_type arg)
  {
    msg_.range_discrepancy_mean = std::move(arg);
    return Init_ExpectedMetricsNoGt_range_discrepancy_p95(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_class_disagree_rate
{
public:
  explicit Init_ExpectedMetricsNoGt_class_disagree_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_range_discrepancy_mean class_disagree_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt::_class_disagree_rate_type arg)
  {
    msg_.class_disagree_rate = std::move(arg);
    return Init_ExpectedMetricsNoGt_range_discrepancy_mean(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_missed_by_other_rate
{
public:
  explicit Init_ExpectedMetricsNoGt_missed_by_other_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_class_disagree_rate missed_by_other_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt::_missed_by_other_rate_type arg)
  {
    msg_.missed_by_other_rate = std::move(arg);
    return Init_ExpectedMetricsNoGt_class_disagree_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_unconfirmed_rate
{
public:
  explicit Init_ExpectedMetricsNoGt_unconfirmed_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_missed_by_other_rate unconfirmed_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt::_unconfirmed_rate_type arg)
  {
    msg_.unconfirmed_rate = std::move(arg);
    return Init_ExpectedMetricsNoGt_missed_by_other_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_cross_confirm_rate
{
public:
  explicit Init_ExpectedMetricsNoGt_cross_confirm_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_unconfirmed_rate cross_confirm_rate(::swarm_interfaces::msg::ExpectedMetricsNoGt::_cross_confirm_rate_type arg)
  {
    msg_.cross_confirm_rate = std::move(arg);
    return Init_ExpectedMetricsNoGt_unconfirmed_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_total_latency_ms
{
public:
  explicit Init_ExpectedMetricsNoGt_total_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_cross_confirm_rate total_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt::_total_latency_ms_type arg)
  {
    msg_.total_latency_ms = std::move(arg);
    return Init_ExpectedMetricsNoGt_cross_confirm_rate(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_prediction_latency_ms
{
public:
  explicit Init_ExpectedMetricsNoGt_prediction_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_total_latency_ms prediction_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt::_prediction_latency_ms_type arg)
  {
    msg_.prediction_latency_ms = std::move(arg);
    return Init_ExpectedMetricsNoGt_total_latency_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_meas_to_tracked_latency_ms
{
public:
  explicit Init_ExpectedMetricsNoGt_meas_to_tracked_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_prediction_latency_ms meas_to_tracked_latency_ms(::swarm_interfaces::msg::ExpectedMetricsNoGt::_meas_to_tracked_latency_ms_type arg)
  {
    msg_.meas_to_tracked_latency_ms = std::move(arg);
    return Init_ExpectedMetricsNoGt_prediction_latency_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_max_distance_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_max_distance_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_meas_to_tracked_latency_ms max_distance_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_max_distance_per_class_type arg)
  {
    msg_.max_distance_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_meas_to_tracked_latency_ms(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_object_count_per_class
{
public:
  explicit Init_ExpectedMetricsNoGt_object_count_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_max_distance_per_class object_count_per_class(::swarm_interfaces::msg::ExpectedMetricsNoGt::_object_count_per_class_type arg)
  {
    msg_.object_count_per_class = std::move(arg);
    return Init_ExpectedMetricsNoGt_max_distance_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_all_object_count
{
public:
  explicit Init_ExpectedMetricsNoGt_all_object_count(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_object_count_per_class all_object_count(::swarm_interfaces::msg::ExpectedMetricsNoGt::_all_object_count_type arg)
  {
    msg_.all_object_count = std::move(arg);
    return Init_ExpectedMetricsNoGt_object_count_per_class(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_interval_average_objects_count
{
public:
  explicit Init_ExpectedMetricsNoGt_interval_average_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_all_object_count interval_average_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt::_interval_average_objects_count_type arg)
  {
    msg_.interval_average_objects_count = std::move(arg);
    return Init_ExpectedMetricsNoGt_all_object_count(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_average_objects_count
{
public:
  explicit Init_ExpectedMetricsNoGt_average_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_interval_average_objects_count average_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt::_average_objects_count_type arg)
  {
    msg_.average_objects_count = std::move(arg);
    return Init_ExpectedMetricsNoGt_interval_average_objects_count(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_total_objects_count
{
public:
  explicit Init_ExpectedMetricsNoGt_total_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_average_objects_count total_objects_count(::swarm_interfaces::msg::ExpectedMetricsNoGt::_total_objects_count_type arg)
  {
    msg_.total_objects_count = std::move(arg);
    return Init_ExpectedMetricsNoGt_average_objects_count(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_predicted_path_deviation_mean
{
public:
  explicit Init_ExpectedMetricsNoGt_predicted_path_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_total_objects_count predicted_path_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt::_predicted_path_deviation_mean_type arg)
  {
    msg_.predicted_path_deviation_mean = std::move(arg);
    return Init_ExpectedMetricsNoGt_total_objects_count(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_yaw_rate_mean
{
public:
  explicit Init_ExpectedMetricsNoGt_yaw_rate_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_predicted_path_deviation_mean yaw_rate_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt::_yaw_rate_mean_type arg)
  {
    msg_.yaw_rate_mean = std::move(arg);
    return Init_ExpectedMetricsNoGt_predicted_path_deviation_mean(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_yaw_deviation_mean
{
public:
  explicit Init_ExpectedMetricsNoGt_yaw_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_yaw_rate_mean yaw_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt::_yaw_deviation_mean_type arg)
  {
    msg_.yaw_deviation_mean = std::move(arg);
    return Init_ExpectedMetricsNoGt_yaw_rate_mean(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_lateral_deviation_max
{
public:
  explicit Init_ExpectedMetricsNoGt_lateral_deviation_max(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_yaw_deviation_mean lateral_deviation_max(::swarm_interfaces::msg::ExpectedMetricsNoGt::_lateral_deviation_max_type arg)
  {
    msg_.lateral_deviation_max = std::move(arg);
    return Init_ExpectedMetricsNoGt_yaw_deviation_mean(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_lateral_deviation_min
{
public:
  explicit Init_ExpectedMetricsNoGt_lateral_deviation_min(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_lateral_deviation_max lateral_deviation_min(::swarm_interfaces::msg::ExpectedMetricsNoGt::_lateral_deviation_min_type arg)
  {
    msg_.lateral_deviation_min = std::move(arg);
    return Init_ExpectedMetricsNoGt_lateral_deviation_max(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_lateral_deviation_mean
{
public:
  explicit Init_ExpectedMetricsNoGt_lateral_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_lateral_deviation_min lateral_deviation_mean(::swarm_interfaces::msg::ExpectedMetricsNoGt::_lateral_deviation_mean_type arg)
  {
    msg_.lateral_deviation_mean = std::move(arg);
    return Init_ExpectedMetricsNoGt_lateral_deviation_min(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_classes
{
public:
  explicit Init_ExpectedMetricsNoGt_classes(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_lateral_deviation_mean classes(::swarm_interfaces::msg::ExpectedMetricsNoGt::_classes_type arg)
  {
    msg_.classes = std::move(arg);
    return Init_ExpectedMetricsNoGt_lateral_deviation_mean(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_n_frames_in_window
{
public:
  explicit Init_ExpectedMetricsNoGt_n_frames_in_window(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_classes n_frames_in_window(::swarm_interfaces::msg::ExpectedMetricsNoGt::_n_frames_in_window_type arg)
  {
    msg_.n_frames_in_window = std::move(arg);
    return Init_ExpectedMetricsNoGt_classes(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_warming_up
{
public:
  explicit Init_ExpectedMetricsNoGt_warming_up(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_n_frames_in_window warming_up(::swarm_interfaces::msg::ExpectedMetricsNoGt::_warming_up_type arg)
  {
    msg_.warming_up = std::move(arg);
    return Init_ExpectedMetricsNoGt_n_frames_in_window(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_window_sec
{
public:
  explicit Init_ExpectedMetricsNoGt_window_sec(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_warming_up window_sec(::swarm_interfaces::msg::ExpectedMetricsNoGt::_window_sec_type arg)
  {
    msg_.window_sec = std::move(arg);
    return Init_ExpectedMetricsNoGt_warming_up(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_params_hash
{
public:
  explicit Init_ExpectedMetricsNoGt_params_hash(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_window_sec params_hash(::swarm_interfaces::msg::ExpectedMetricsNoGt::_params_hash_type arg)
  {
    msg_.params_hash = std::move(arg);
    return Init_ExpectedMetricsNoGt_window_sec(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_model_based
{
public:
  explicit Init_ExpectedMetricsNoGt_model_based(::swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
  : msg_(msg)
  {}
  Init_ExpectedMetricsNoGt_params_hash model_based(::swarm_interfaces::msg::ExpectedMetricsNoGt::_model_based_type arg)
  {
    msg_.model_based = std::move(arg);
    return Init_ExpectedMetricsNoGt_params_hash(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

class Init_ExpectedMetricsNoGt_header
{
public:
  Init_ExpectedMetricsNoGt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExpectedMetricsNoGt_model_based header(::swarm_interfaces::msg::ExpectedMetricsNoGt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ExpectedMetricsNoGt_model_based(msg_);
  }

private:
  ::swarm_interfaces::msg::ExpectedMetricsNoGt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::ExpectedMetricsNoGt>()
{
  return swarm_interfaces::msg::builder::Init_ExpectedMetricsNoGt_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__BUILDER_HPP_
