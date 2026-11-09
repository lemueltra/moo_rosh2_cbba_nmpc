// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_no_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__swarm_interfaces__msg__ExpectedMetricsNoGt __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__ExpectedMetricsNoGt __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExpectedMetricsNoGt_
{
  using Type = ExpectedMetricsNoGt_<ContainerAllocator>;

  explicit ExpectedMetricsNoGt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_based = false;
      this->params_hash = "";
      this->window_sec = 0.0;
      this->warming_up = false;
      this->n_frames_in_window = 0ul;
      this->all_object_count = 0.0;
      this->meas_to_tracked_latency_ms = 0.0;
      this->prediction_latency_ms = 0.0;
      this->total_latency_ms = 0.0;
      this->cross_confirm_rate = 0.0;
      this->unconfirmed_rate = 0.0;
      this->missed_by_other_rate = 0.0;
      this->class_disagree_rate = 0.0;
      this->range_discrepancy_mean = 0.0;
      this->range_discrepancy_p95 = 0.0;
      this->ece_proxy = 0.0;
      this->unconfirmed_high_conf_rate = 0.0;
      this->critical_inconsistency_per_s = 0.0;
      this->sync_offset_ms = 0.0;
      this->flight_regime_altitude_m = 0.0;
      this->flight_regime_speed_mps = 0.0;
      this->flight_regime_climb_rate_mps = 0.0;
    }
  }

  explicit ExpectedMetricsNoGt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    params_hash(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_based = false;
      this->params_hash = "";
      this->window_sec = 0.0;
      this->warming_up = false;
      this->n_frames_in_window = 0ul;
      this->all_object_count = 0.0;
      this->meas_to_tracked_latency_ms = 0.0;
      this->prediction_latency_ms = 0.0;
      this->total_latency_ms = 0.0;
      this->cross_confirm_rate = 0.0;
      this->unconfirmed_rate = 0.0;
      this->missed_by_other_rate = 0.0;
      this->class_disagree_rate = 0.0;
      this->range_discrepancy_mean = 0.0;
      this->range_discrepancy_p95 = 0.0;
      this->ece_proxy = 0.0;
      this->unconfirmed_high_conf_rate = 0.0;
      this->critical_inconsistency_per_s = 0.0;
      this->sync_offset_ms = 0.0;
      this->flight_regime_altitude_m = 0.0;
      this->flight_regime_speed_mps = 0.0;
      this->flight_regime_climb_rate_mps = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _model_based_type =
    bool;
  _model_based_type model_based;
  using _params_hash_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_hash_type params_hash;
  using _window_sec_type =
    double;
  _window_sec_type window_sec;
  using _warming_up_type =
    bool;
  _warming_up_type warming_up;
  using _n_frames_in_window_type =
    uint32_t;
  _n_frames_in_window_type n_frames_in_window;
  using _classes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _classes_type classes;
  using _lateral_deviation_mean_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lateral_deviation_mean_type lateral_deviation_mean;
  using _lateral_deviation_min_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lateral_deviation_min_type lateral_deviation_min;
  using _lateral_deviation_max_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lateral_deviation_max_type lateral_deviation_max;
  using _yaw_deviation_mean_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _yaw_deviation_mean_type yaw_deviation_mean;
  using _yaw_rate_mean_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _yaw_rate_mean_type yaw_rate_mean;
  using _predicted_path_deviation_mean_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _predicted_path_deviation_mean_type predicted_path_deviation_mean;
  using _total_objects_count_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _total_objects_count_type total_objects_count;
  using _average_objects_count_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _average_objects_count_type average_objects_count;
  using _interval_average_objects_count_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _interval_average_objects_count_type interval_average_objects_count;
  using _all_object_count_type =
    double;
  _all_object_count_type all_object_count;
  using _object_count_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _object_count_per_class_type object_count_per_class;
  using _max_distance_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _max_distance_per_class_type max_distance_per_class;
  using _meas_to_tracked_latency_ms_type =
    double;
  _meas_to_tracked_latency_ms_type meas_to_tracked_latency_ms;
  using _prediction_latency_ms_type =
    double;
  _prediction_latency_ms_type prediction_latency_ms;
  using _total_latency_ms_type =
    double;
  _total_latency_ms_type total_latency_ms;
  using _cross_confirm_rate_type =
    double;
  _cross_confirm_rate_type cross_confirm_rate;
  using _unconfirmed_rate_type =
    double;
  _unconfirmed_rate_type unconfirmed_rate;
  using _missed_by_other_rate_type =
    double;
  _missed_by_other_rate_type missed_by_other_rate;
  using _class_disagree_rate_type =
    double;
  _class_disagree_rate_type class_disagree_rate;
  using _range_discrepancy_mean_type =
    double;
  _range_discrepancy_mean_type range_discrepancy_mean;
  using _range_discrepancy_p95_type =
    double;
  _range_discrepancy_p95_type range_discrepancy_p95;
  using _size_cv_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _size_cv_per_class_type size_cv_per_class;
  using _position_jitter_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _position_jitter_per_class_type position_jitter_per_class;
  using _heading_inversion_rate_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _heading_inversion_rate_per_class_type heading_inversion_rate_per_class;
  using _track_fragments_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _track_fragments_per_class_type track_fragments_per_class;
  using _track_purity_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _track_purity_per_class_type track_purity_per_class;
  using _track_length_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _track_length_per_class_type track_length_per_class;
  using _ece_proxy_type =
    double;
  _ece_proxy_type ece_proxy;
  using _unconfirmed_high_conf_rate_type =
    double;
  _unconfirmed_high_conf_rate_type unconfirmed_high_conf_rate;
  using _critical_inconsistency_per_s_type =
    double;
  _critical_inconsistency_per_s_type critical_inconsistency_per_s;
  using _sync_offset_ms_type =
    double;
  _sync_offset_ms_type sync_offset_ms;
  using _sensor_health_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _sensor_health_type sensor_health;
  using _flight_regime_altitude_m_type =
    double;
  _flight_regime_altitude_m_type flight_regime_altitude_m;
  using _flight_regime_speed_mps_type =
    double;
  _flight_regime_speed_mps_type flight_regime_speed_mps;
  using _flight_regime_climb_rate_mps_type =
    double;
  _flight_regime_climb_rate_mps_type flight_regime_climb_rate_mps;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__model_based(
    const bool & _arg)
  {
    this->model_based = _arg;
    return *this;
  }
  Type & set__params_hash(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params_hash = _arg;
    return *this;
  }
  Type & set__window_sec(
    const double & _arg)
  {
    this->window_sec = _arg;
    return *this;
  }
  Type & set__warming_up(
    const bool & _arg)
  {
    this->warming_up = _arg;
    return *this;
  }
  Type & set__n_frames_in_window(
    const uint32_t & _arg)
  {
    this->n_frames_in_window = _arg;
    return *this;
  }
  Type & set__classes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->classes = _arg;
    return *this;
  }
  Type & set__lateral_deviation_mean(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lateral_deviation_mean = _arg;
    return *this;
  }
  Type & set__lateral_deviation_min(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lateral_deviation_min = _arg;
    return *this;
  }
  Type & set__lateral_deviation_max(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lateral_deviation_max = _arg;
    return *this;
  }
  Type & set__yaw_deviation_mean(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->yaw_deviation_mean = _arg;
    return *this;
  }
  Type & set__yaw_rate_mean(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->yaw_rate_mean = _arg;
    return *this;
  }
  Type & set__predicted_path_deviation_mean(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->predicted_path_deviation_mean = _arg;
    return *this;
  }
  Type & set__total_objects_count(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->total_objects_count = _arg;
    return *this;
  }
  Type & set__average_objects_count(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->average_objects_count = _arg;
    return *this;
  }
  Type & set__interval_average_objects_count(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->interval_average_objects_count = _arg;
    return *this;
  }
  Type & set__all_object_count(
    const double & _arg)
  {
    this->all_object_count = _arg;
    return *this;
  }
  Type & set__object_count_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->object_count_per_class = _arg;
    return *this;
  }
  Type & set__max_distance_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->max_distance_per_class = _arg;
    return *this;
  }
  Type & set__meas_to_tracked_latency_ms(
    const double & _arg)
  {
    this->meas_to_tracked_latency_ms = _arg;
    return *this;
  }
  Type & set__prediction_latency_ms(
    const double & _arg)
  {
    this->prediction_latency_ms = _arg;
    return *this;
  }
  Type & set__total_latency_ms(
    const double & _arg)
  {
    this->total_latency_ms = _arg;
    return *this;
  }
  Type & set__cross_confirm_rate(
    const double & _arg)
  {
    this->cross_confirm_rate = _arg;
    return *this;
  }
  Type & set__unconfirmed_rate(
    const double & _arg)
  {
    this->unconfirmed_rate = _arg;
    return *this;
  }
  Type & set__missed_by_other_rate(
    const double & _arg)
  {
    this->missed_by_other_rate = _arg;
    return *this;
  }
  Type & set__class_disagree_rate(
    const double & _arg)
  {
    this->class_disagree_rate = _arg;
    return *this;
  }
  Type & set__range_discrepancy_mean(
    const double & _arg)
  {
    this->range_discrepancy_mean = _arg;
    return *this;
  }
  Type & set__range_discrepancy_p95(
    const double & _arg)
  {
    this->range_discrepancy_p95 = _arg;
    return *this;
  }
  Type & set__size_cv_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->size_cv_per_class = _arg;
    return *this;
  }
  Type & set__position_jitter_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->position_jitter_per_class = _arg;
    return *this;
  }
  Type & set__heading_inversion_rate_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->heading_inversion_rate_per_class = _arg;
    return *this;
  }
  Type & set__track_fragments_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->track_fragments_per_class = _arg;
    return *this;
  }
  Type & set__track_purity_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->track_purity_per_class = _arg;
    return *this;
  }
  Type & set__track_length_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->track_length_per_class = _arg;
    return *this;
  }
  Type & set__ece_proxy(
    const double & _arg)
  {
    this->ece_proxy = _arg;
    return *this;
  }
  Type & set__unconfirmed_high_conf_rate(
    const double & _arg)
  {
    this->unconfirmed_high_conf_rate = _arg;
    return *this;
  }
  Type & set__critical_inconsistency_per_s(
    const double & _arg)
  {
    this->critical_inconsistency_per_s = _arg;
    return *this;
  }
  Type & set__sync_offset_ms(
    const double & _arg)
  {
    this->sync_offset_ms = _arg;
    return *this;
  }
  Type & set__sensor_health(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->sensor_health = _arg;
    return *this;
  }
  Type & set__flight_regime_altitude_m(
    const double & _arg)
  {
    this->flight_regime_altitude_m = _arg;
    return *this;
  }
  Type & set__flight_regime_speed_mps(
    const double & _arg)
  {
    this->flight_regime_speed_mps = _arg;
    return *this;
  }
  Type & set__flight_regime_climb_rate_mps(
    const double & _arg)
  {
    this->flight_regime_climb_rate_mps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__ExpectedMetricsNoGt
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__ExpectedMetricsNoGt
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsNoGt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExpectedMetricsNoGt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->model_based != other.model_based) {
      return false;
    }
    if (this->params_hash != other.params_hash) {
      return false;
    }
    if (this->window_sec != other.window_sec) {
      return false;
    }
    if (this->warming_up != other.warming_up) {
      return false;
    }
    if (this->n_frames_in_window != other.n_frames_in_window) {
      return false;
    }
    if (this->classes != other.classes) {
      return false;
    }
    if (this->lateral_deviation_mean != other.lateral_deviation_mean) {
      return false;
    }
    if (this->lateral_deviation_min != other.lateral_deviation_min) {
      return false;
    }
    if (this->lateral_deviation_max != other.lateral_deviation_max) {
      return false;
    }
    if (this->yaw_deviation_mean != other.yaw_deviation_mean) {
      return false;
    }
    if (this->yaw_rate_mean != other.yaw_rate_mean) {
      return false;
    }
    if (this->predicted_path_deviation_mean != other.predicted_path_deviation_mean) {
      return false;
    }
    if (this->total_objects_count != other.total_objects_count) {
      return false;
    }
    if (this->average_objects_count != other.average_objects_count) {
      return false;
    }
    if (this->interval_average_objects_count != other.interval_average_objects_count) {
      return false;
    }
    if (this->all_object_count != other.all_object_count) {
      return false;
    }
    if (this->object_count_per_class != other.object_count_per_class) {
      return false;
    }
    if (this->max_distance_per_class != other.max_distance_per_class) {
      return false;
    }
    if (this->meas_to_tracked_latency_ms != other.meas_to_tracked_latency_ms) {
      return false;
    }
    if (this->prediction_latency_ms != other.prediction_latency_ms) {
      return false;
    }
    if (this->total_latency_ms != other.total_latency_ms) {
      return false;
    }
    if (this->cross_confirm_rate != other.cross_confirm_rate) {
      return false;
    }
    if (this->unconfirmed_rate != other.unconfirmed_rate) {
      return false;
    }
    if (this->missed_by_other_rate != other.missed_by_other_rate) {
      return false;
    }
    if (this->class_disagree_rate != other.class_disagree_rate) {
      return false;
    }
    if (this->range_discrepancy_mean != other.range_discrepancy_mean) {
      return false;
    }
    if (this->range_discrepancy_p95 != other.range_discrepancy_p95) {
      return false;
    }
    if (this->size_cv_per_class != other.size_cv_per_class) {
      return false;
    }
    if (this->position_jitter_per_class != other.position_jitter_per_class) {
      return false;
    }
    if (this->heading_inversion_rate_per_class != other.heading_inversion_rate_per_class) {
      return false;
    }
    if (this->track_fragments_per_class != other.track_fragments_per_class) {
      return false;
    }
    if (this->track_purity_per_class != other.track_purity_per_class) {
      return false;
    }
    if (this->track_length_per_class != other.track_length_per_class) {
      return false;
    }
    if (this->ece_proxy != other.ece_proxy) {
      return false;
    }
    if (this->unconfirmed_high_conf_rate != other.unconfirmed_high_conf_rate) {
      return false;
    }
    if (this->critical_inconsistency_per_s != other.critical_inconsistency_per_s) {
      return false;
    }
    if (this->sync_offset_ms != other.sync_offset_ms) {
      return false;
    }
    if (this->sensor_health != other.sensor_health) {
      return false;
    }
    if (this->flight_regime_altitude_m != other.flight_regime_altitude_m) {
      return false;
    }
    if (this->flight_regime_speed_mps != other.flight_regime_speed_mps) {
      return false;
    }
    if (this->flight_regime_climb_rate_mps != other.flight_regime_climb_rate_mps) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExpectedMetricsNoGt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExpectedMetricsNoGt_

// alias to use template instance with default allocator
using ExpectedMetricsNoGt =
  swarm_interfaces::msg::ExpectedMetricsNoGt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__STRUCT_HPP_
