// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from swarm_interfaces:msg/SwarmMetrics.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/swarm_metrics.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__BUILDER_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "swarm_interfaces/msg/detail/swarm_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace swarm_interfaces
{

namespace msg
{

namespace builder
{

class Init_SwarmMetrics_uavs
{
public:
  explicit Init_SwarmMetrics_uavs(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  ::swarm_interfaces::msg::SwarmMetrics uavs(::swarm_interfaces::msg::SwarmMetrics::_uavs_type arg)
  {
    msg_.uavs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_sim_time_s
{
public:
  explicit Init_SwarmMetrics_sim_time_s(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_uavs sim_time_s(::swarm_interfaces::msg::SwarmMetrics::_sim_time_s_type arg)
  {
    msg_.sim_time_s = std::move(arg);
    return Init_SwarmMetrics_uavs(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_clock_hz
{
public:
  explicit Init_SwarmMetrics_clock_hz(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_sim_time_s clock_hz(::swarm_interfaces::msg::SwarmMetrics::_clock_hz_type arg)
  {
    msg_.clock_hz = std::move(arg);
    return Init_SwarmMetrics_sim_time_s(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_clamped_references
{
public:
  explicit Init_SwarmMetrics_clamped_references(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_clock_hz clamped_references(::swarm_interfaces::msg::SwarmMetrics::_clamped_references_type arg)
  {
    msg_.clamped_references = std::move(arg);
    return Init_SwarmMetrics_clock_hz(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_planner_deadline_misses
{
public:
  explicit Init_SwarmMetrics_planner_deadline_misses(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_clamped_references planner_deadline_misses(::swarm_interfaces::msg::SwarmMetrics::_planner_deadline_misses_type arg)
  {
    msg_.planner_deadline_misses = std::move(arg);
    return Init_SwarmMetrics_clamped_references(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_planner_cycle_us
{
public:
  explicit Init_SwarmMetrics_planner_cycle_us(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_planner_deadline_misses planner_cycle_us(::swarm_interfaces::msg::SwarmMetrics::_planner_cycle_us_type arg)
  {
    msg_.planner_cycle_us = std::move(arg);
    return Init_SwarmMetrics_planner_deadline_misses(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_redundancy_score
{
public:
  explicit Init_SwarmMetrics_redundancy_score(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_planner_cycle_us redundancy_score(::swarm_interfaces::msg::SwarmMetrics::_redundancy_score_type arg)
  {
    msg_.redundancy_score = std::move(arg);
    return Init_SwarmMetrics_planner_cycle_us(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_ugv_weighted_coverage
{
public:
  explicit Init_SwarmMetrics_ugv_weighted_coverage(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_redundancy_score ugv_weighted_coverage(::swarm_interfaces::msg::SwarmMetrics::_ugv_weighted_coverage_type arg)
  {
    msg_.ugv_weighted_coverage = std::move(arg);
    return Init_SwarmMetrics_redundancy_score(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_coverage_ratio
{
public:
  explicit Init_SwarmMetrics_coverage_ratio(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_ugv_weighted_coverage coverage_ratio(::swarm_interfaces::msg::SwarmMetrics::_coverage_ratio_type arg)
  {
    msg_.coverage_ratio = std::move(arg);
    return Init_SwarmMetrics_ugv_weighted_coverage(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_window_capacity
{
public:
  explicit Init_SwarmMetrics_window_capacity(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_coverage_ratio window_capacity(::swarm_interfaces::msg::SwarmMetrics::_window_capacity_type arg)
  {
    msg_.window_capacity = std::move(arg);
    return Init_SwarmMetrics_coverage_ratio(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_samples_in_window
{
public:
  explicit Init_SwarmMetrics_samples_in_window(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_window_capacity samples_in_window(::swarm_interfaces::msg::SwarmMetrics::_samples_in_window_type arg)
  {
    msg_.samples_in_window = std::move(arg);
    return Init_SwarmMetrics_window_capacity(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_latency_max_60s
{
public:
  explicit Init_SwarmMetrics_latency_max_60s(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_samples_in_window latency_max_60s(::swarm_interfaces::msg::SwarmMetrics::_latency_max_60s_type arg)
  {
    msg_.latency_max_60s = std::move(arg);
    return Init_SwarmMetrics_samples_in_window(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_latency_mean_60s
{
public:
  explicit Init_SwarmMetrics_latency_mean_60s(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_latency_max_60s latency_mean_60s(::swarm_interfaces::msg::SwarmMetrics::_latency_mean_60s_type arg)
  {
    msg_.latency_mean_60s = std::move(arg);
    return Init_SwarmMetrics_latency_max_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_detections_mean_60s
{
public:
  explicit Init_SwarmMetrics_detections_mean_60s(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_latency_mean_60s detections_mean_60s(::swarm_interfaces::msg::SwarmMetrics::_detections_mean_60s_type arg)
  {
    msg_.detections_mean_60s = std::move(arg);
    return Init_SwarmMetrics_latency_mean_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_active_ids
{
public:
  explicit Init_SwarmMetrics_active_ids(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_detections_mean_60s active_ids(::swarm_interfaces::msg::SwarmMetrics::_active_ids_type arg)
  {
    msg_.active_ids = std::move(arg);
    return Init_SwarmMetrics_detections_mean_60s(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_active_count
{
public:
  explicit Init_SwarmMetrics_active_count(::swarm_interfaces::msg::SwarmMetrics & msg)
  : msg_(msg)
  {}
  Init_SwarmMetrics_active_ids active_count(::swarm_interfaces::msg::SwarmMetrics::_active_count_type arg)
  {
    msg_.active_count = std::move(arg);
    return Init_SwarmMetrics_active_ids(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

class Init_SwarmMetrics_header
{
public:
  Init_SwarmMetrics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SwarmMetrics_active_count header(::swarm_interfaces::msg::SwarmMetrics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SwarmMetrics_active_count(msg_);
  }

private:
  ::swarm_interfaces::msg::SwarmMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::swarm_interfaces::msg::SwarmMetrics>()
{
  return swarm_interfaces::msg::builder::Init_SwarmMetrics_header();
}

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__SWARM_METRICS__BUILDER_HPP_
