// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_HPP_

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
# define DEPRECATED__swarm_interfaces__msg__ExpectedMetricsGt __attribute__((deprecated))
#else
# define DEPRECATED__swarm_interfaces__msg__ExpectedMetricsGt __declspec(deprecated)
#endif

namespace swarm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExpectedMetricsGt_
{
  using Type = ExpectedMetricsGt_<ContainerAllocator>;

  explicit ExpectedMetricsGt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->map = 0.0;
      this->maph = 0.0;
      this->pred_ade = 0.0;
      this->pred_fde = 0.0;
      this->pred_miss_rate = 0.0;
      this->mflip_rate = 0.0;
      this->ece = 0.0;
      this->ece_macro = 0.0;
      this->confident_error_rate = 0.0;
      this->confident_errors_per_frame = 0.0;
      this->critical_fp = 0.0;
      this->critical_fn = 0.0;
      this->cw_map = 0.0;
      this->pass_rate_num_tp = 0.0;
      this->pass_rate_num_gt_tp = 0.0;
      this->pass_rate_metrics_score = 0.0;
      this->n_gt_total = 0ul;
      this->expected_tp_total = 0.0;
      this->expected_fp_total = 0.0;
      this->expected_fn_total = 0.0;
    }
  }

  explicit ExpectedMetricsGt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
      this->map = 0.0;
      this->maph = 0.0;
      this->pred_ade = 0.0;
      this->pred_fde = 0.0;
      this->pred_miss_rate = 0.0;
      this->mflip_rate = 0.0;
      this->ece = 0.0;
      this->ece_macro = 0.0;
      this->confident_error_rate = 0.0;
      this->confident_errors_per_frame = 0.0;
      this->critical_fp = 0.0;
      this->critical_fn = 0.0;
      this->cw_map = 0.0;
      this->pass_rate_num_tp = 0.0;
      this->pass_rate_num_gt_tp = 0.0;
      this->pass_rate_metrics_score = 0.0;
      this->n_gt_total = 0ul;
      this->expected_tp_total = 0.0;
      this->expected_fp_total = 0.0;
      this->expected_fn_total = 0.0;
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
  using _map_type =
    double;
  _map_type map;
  using _maph_type =
    double;
  _maph_type maph;
  using _classes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _classes_type classes;
  using _ap_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ap_per_class_type ap_per_class;
  using _aph_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _aph_per_class_type aph_per_class;
  using _f1_max_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _f1_max_per_class_type f1_max_per_class;
  using _optimal_conf_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _optimal_conf_per_class_type optimal_conf_per_class;
  using _ratio_tp_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ratio_tp_per_class_type ratio_tp_per_class;
  using _ratio_fp_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ratio_fp_per_class_type ratio_fp_per_class;
  using _ratio_fn_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ratio_fn_per_class_type ratio_fn_per_class;
  using _err_dist_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_dist_mean_per_class_type err_dist_mean_per_class;
  using _err_dist_rms_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_dist_rms_per_class_type err_dist_rms_per_class;
  using _err_yaw_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_yaw_mean_per_class_type err_yaw_mean_per_class;
  using _err_yaw_std_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_yaw_std_per_class_type err_yaw_std_per_class;
  using _err_vel_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_vel_mean_per_class_type err_vel_mean_per_class;
  using _motp_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _motp_per_class_type motp_per_class;
  using _mota_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _mota_per_class_type mota_per_class;
  using _id_switch_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _id_switch_per_class_type id_switch_per_class;
  using _pred_ade_type =
    double;
  _pred_ade_type pred_ade;
  using _pred_fde_type =
    double;
  _pred_fde_type pred_fde;
  using _pred_miss_rate_type =
    double;
  _pred_miss_rate_type pred_miss_rate;
  using _corner_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _corner_mean_per_class_type corner_mean_per_class;
  using _corner_p95_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _corner_p95_per_class_type corner_p95_per_class;
  using _flip_rate_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _flip_rate_per_class_type flip_rate_per_class;
  using _mflip_rate_type =
    double;
  _mflip_rate_type mflip_rate;
  using _nsurf_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _nsurf_mean_per_class_type nsurf_mean_per_class;
  using _ece_type =
    double;
  _ece_type ece;
  using _ece_macro_type =
    double;
  _ece_macro_type ece_macro;
  using _confident_error_rate_type =
    double;
  _confident_error_rate_type confident_error_rate;
  using _confident_errors_per_frame_type =
    double;
  _confident_errors_per_frame_type confident_errors_per_frame;
  using _confusion_pairs_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _confusion_pairs_type confusion_pairs;
  using _confusion_values_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _confusion_values_type confusion_values;
  using _critical_fp_type =
    double;
  _critical_fp_type critical_fp;
  using _critical_fn_type =
    double;
  _critical_fn_type critical_fn;
  using _cw_map_type =
    double;
  _cw_map_type cw_map;
  using _cw_map_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cw_map_per_class_type cw_map_per_class;
  using _fn_span_mean_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _fn_span_mean_per_class_type fn_span_mean_per_class;
  using _pass_rate_num_tp_type =
    double;
  _pass_rate_num_tp_type pass_rate_num_tp;
  using _pass_rate_num_gt_tp_type =
    double;
  _pass_rate_num_gt_tp_type pass_rate_num_gt_tp;
  using _pass_rate_metrics_score_type =
    double;
  _pass_rate_metrics_score_type pass_rate_metrics_score;
  using _err_ate_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_ate_per_class_type err_ate_per_class;
  using _err_aoe_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_aoe_per_class_type err_aoe_per_class;
  using _err_ase_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_ase_per_class_type err_ase_per_class;
  using _err_ave_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _err_ave_per_class_type err_ave_per_class;
  using _n_gt_total_type =
    uint32_t;
  _n_gt_total_type n_gt_total;
  using _expected_tp_total_type =
    double;
  _expected_tp_total_type expected_tp_total;
  using _expected_fp_total_type =
    double;
  _expected_fp_total_type expected_fp_total;
  using _expected_fn_total_type =
    double;
  _expected_fn_total_type expected_fn_total;
  using _n_gt_per_class_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _n_gt_per_class_type n_gt_per_class;
  using _expected_tp_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _expected_tp_per_class_type expected_tp_per_class;
  using _expected_fp_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _expected_fp_per_class_type expected_fp_per_class;
  using _expected_fn_per_class_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _expected_fn_per_class_type expected_fn_per_class;

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
  Type & set__map(
    const double & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__maph(
    const double & _arg)
  {
    this->maph = _arg;
    return *this;
  }
  Type & set__classes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->classes = _arg;
    return *this;
  }
  Type & set__ap_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ap_per_class = _arg;
    return *this;
  }
  Type & set__aph_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->aph_per_class = _arg;
    return *this;
  }
  Type & set__f1_max_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->f1_max_per_class = _arg;
    return *this;
  }
  Type & set__optimal_conf_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->optimal_conf_per_class = _arg;
    return *this;
  }
  Type & set__ratio_tp_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ratio_tp_per_class = _arg;
    return *this;
  }
  Type & set__ratio_fp_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ratio_fp_per_class = _arg;
    return *this;
  }
  Type & set__ratio_fn_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ratio_fn_per_class = _arg;
    return *this;
  }
  Type & set__err_dist_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_dist_mean_per_class = _arg;
    return *this;
  }
  Type & set__err_dist_rms_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_dist_rms_per_class = _arg;
    return *this;
  }
  Type & set__err_yaw_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_yaw_mean_per_class = _arg;
    return *this;
  }
  Type & set__err_yaw_std_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_yaw_std_per_class = _arg;
    return *this;
  }
  Type & set__err_vel_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_vel_mean_per_class = _arg;
    return *this;
  }
  Type & set__motp_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->motp_per_class = _arg;
    return *this;
  }
  Type & set__mota_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->mota_per_class = _arg;
    return *this;
  }
  Type & set__id_switch_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->id_switch_per_class = _arg;
    return *this;
  }
  Type & set__pred_ade(
    const double & _arg)
  {
    this->pred_ade = _arg;
    return *this;
  }
  Type & set__pred_fde(
    const double & _arg)
  {
    this->pred_fde = _arg;
    return *this;
  }
  Type & set__pred_miss_rate(
    const double & _arg)
  {
    this->pred_miss_rate = _arg;
    return *this;
  }
  Type & set__corner_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->corner_mean_per_class = _arg;
    return *this;
  }
  Type & set__corner_p95_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->corner_p95_per_class = _arg;
    return *this;
  }
  Type & set__flip_rate_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->flip_rate_per_class = _arg;
    return *this;
  }
  Type & set__mflip_rate(
    const double & _arg)
  {
    this->mflip_rate = _arg;
    return *this;
  }
  Type & set__nsurf_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->nsurf_mean_per_class = _arg;
    return *this;
  }
  Type & set__ece(
    const double & _arg)
  {
    this->ece = _arg;
    return *this;
  }
  Type & set__ece_macro(
    const double & _arg)
  {
    this->ece_macro = _arg;
    return *this;
  }
  Type & set__confident_error_rate(
    const double & _arg)
  {
    this->confident_error_rate = _arg;
    return *this;
  }
  Type & set__confident_errors_per_frame(
    const double & _arg)
  {
    this->confident_errors_per_frame = _arg;
    return *this;
  }
  Type & set__confusion_pairs(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->confusion_pairs = _arg;
    return *this;
  }
  Type & set__confusion_values(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->confusion_values = _arg;
    return *this;
  }
  Type & set__critical_fp(
    const double & _arg)
  {
    this->critical_fp = _arg;
    return *this;
  }
  Type & set__critical_fn(
    const double & _arg)
  {
    this->critical_fn = _arg;
    return *this;
  }
  Type & set__cw_map(
    const double & _arg)
  {
    this->cw_map = _arg;
    return *this;
  }
  Type & set__cw_map_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cw_map_per_class = _arg;
    return *this;
  }
  Type & set__fn_span_mean_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->fn_span_mean_per_class = _arg;
    return *this;
  }
  Type & set__pass_rate_num_tp(
    const double & _arg)
  {
    this->pass_rate_num_tp = _arg;
    return *this;
  }
  Type & set__pass_rate_num_gt_tp(
    const double & _arg)
  {
    this->pass_rate_num_gt_tp = _arg;
    return *this;
  }
  Type & set__pass_rate_metrics_score(
    const double & _arg)
  {
    this->pass_rate_metrics_score = _arg;
    return *this;
  }
  Type & set__err_ate_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_ate_per_class = _arg;
    return *this;
  }
  Type & set__err_aoe_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_aoe_per_class = _arg;
    return *this;
  }
  Type & set__err_ase_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_ase_per_class = _arg;
    return *this;
  }
  Type & set__err_ave_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->err_ave_per_class = _arg;
    return *this;
  }
  Type & set__n_gt_total(
    const uint32_t & _arg)
  {
    this->n_gt_total = _arg;
    return *this;
  }
  Type & set__expected_tp_total(
    const double & _arg)
  {
    this->expected_tp_total = _arg;
    return *this;
  }
  Type & set__expected_fp_total(
    const double & _arg)
  {
    this->expected_fp_total = _arg;
    return *this;
  }
  Type & set__expected_fn_total(
    const double & _arg)
  {
    this->expected_fn_total = _arg;
    return *this;
  }
  Type & set__n_gt_per_class(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->n_gt_per_class = _arg;
    return *this;
  }
  Type & set__expected_tp_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->expected_tp_per_class = _arg;
    return *this;
  }
  Type & set__expected_fp_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->expected_fp_per_class = _arg;
    return *this;
  }
  Type & set__expected_fn_per_class(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->expected_fn_per_class = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> *;
  using ConstRawPtr =
    const swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__swarm_interfaces__msg__ExpectedMetricsGt
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__swarm_interfaces__msg__ExpectedMetricsGt
    std::shared_ptr<swarm_interfaces::msg::ExpectedMetricsGt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExpectedMetricsGt_ & other) const
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
    if (this->map != other.map) {
      return false;
    }
    if (this->maph != other.maph) {
      return false;
    }
    if (this->classes != other.classes) {
      return false;
    }
    if (this->ap_per_class != other.ap_per_class) {
      return false;
    }
    if (this->aph_per_class != other.aph_per_class) {
      return false;
    }
    if (this->f1_max_per_class != other.f1_max_per_class) {
      return false;
    }
    if (this->optimal_conf_per_class != other.optimal_conf_per_class) {
      return false;
    }
    if (this->ratio_tp_per_class != other.ratio_tp_per_class) {
      return false;
    }
    if (this->ratio_fp_per_class != other.ratio_fp_per_class) {
      return false;
    }
    if (this->ratio_fn_per_class != other.ratio_fn_per_class) {
      return false;
    }
    if (this->err_dist_mean_per_class != other.err_dist_mean_per_class) {
      return false;
    }
    if (this->err_dist_rms_per_class != other.err_dist_rms_per_class) {
      return false;
    }
    if (this->err_yaw_mean_per_class != other.err_yaw_mean_per_class) {
      return false;
    }
    if (this->err_yaw_std_per_class != other.err_yaw_std_per_class) {
      return false;
    }
    if (this->err_vel_mean_per_class != other.err_vel_mean_per_class) {
      return false;
    }
    if (this->motp_per_class != other.motp_per_class) {
      return false;
    }
    if (this->mota_per_class != other.mota_per_class) {
      return false;
    }
    if (this->id_switch_per_class != other.id_switch_per_class) {
      return false;
    }
    if (this->pred_ade != other.pred_ade) {
      return false;
    }
    if (this->pred_fde != other.pred_fde) {
      return false;
    }
    if (this->pred_miss_rate != other.pred_miss_rate) {
      return false;
    }
    if (this->corner_mean_per_class != other.corner_mean_per_class) {
      return false;
    }
    if (this->corner_p95_per_class != other.corner_p95_per_class) {
      return false;
    }
    if (this->flip_rate_per_class != other.flip_rate_per_class) {
      return false;
    }
    if (this->mflip_rate != other.mflip_rate) {
      return false;
    }
    if (this->nsurf_mean_per_class != other.nsurf_mean_per_class) {
      return false;
    }
    if (this->ece != other.ece) {
      return false;
    }
    if (this->ece_macro != other.ece_macro) {
      return false;
    }
    if (this->confident_error_rate != other.confident_error_rate) {
      return false;
    }
    if (this->confident_errors_per_frame != other.confident_errors_per_frame) {
      return false;
    }
    if (this->confusion_pairs != other.confusion_pairs) {
      return false;
    }
    if (this->confusion_values != other.confusion_values) {
      return false;
    }
    if (this->critical_fp != other.critical_fp) {
      return false;
    }
    if (this->critical_fn != other.critical_fn) {
      return false;
    }
    if (this->cw_map != other.cw_map) {
      return false;
    }
    if (this->cw_map_per_class != other.cw_map_per_class) {
      return false;
    }
    if (this->fn_span_mean_per_class != other.fn_span_mean_per_class) {
      return false;
    }
    if (this->pass_rate_num_tp != other.pass_rate_num_tp) {
      return false;
    }
    if (this->pass_rate_num_gt_tp != other.pass_rate_num_gt_tp) {
      return false;
    }
    if (this->pass_rate_metrics_score != other.pass_rate_metrics_score) {
      return false;
    }
    if (this->err_ate_per_class != other.err_ate_per_class) {
      return false;
    }
    if (this->err_aoe_per_class != other.err_aoe_per_class) {
      return false;
    }
    if (this->err_ase_per_class != other.err_ase_per_class) {
      return false;
    }
    if (this->err_ave_per_class != other.err_ave_per_class) {
      return false;
    }
    if (this->n_gt_total != other.n_gt_total) {
      return false;
    }
    if (this->expected_tp_total != other.expected_tp_total) {
      return false;
    }
    if (this->expected_fp_total != other.expected_fp_total) {
      return false;
    }
    if (this->expected_fn_total != other.expected_fn_total) {
      return false;
    }
    if (this->n_gt_per_class != other.n_gt_per_class) {
      return false;
    }
    if (this->expected_tp_per_class != other.expected_tp_per_class) {
      return false;
    }
    if (this->expected_fp_per_class != other.expected_fp_per_class) {
      return false;
    }
    if (this->expected_fn_per_class != other.expected_fn_per_class) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExpectedMetricsGt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExpectedMetricsGt_

// alias to use template instance with default allocator
using ExpectedMetricsGt =
  swarm_interfaces::msg::ExpectedMetricsGt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace swarm_interfaces

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__STRUCT_HPP_
