// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/expected_metrics_gt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExpectedMetricsGt & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: model_based
  {
    out << "model_based: ";
    rosidl_generator_traits::value_to_yaml(msg.model_based, out);
    out << ", ";
  }

  // member: params_hash
  {
    out << "params_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.params_hash, out);
    out << ", ";
  }

  // member: window_sec
  {
    out << "window_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.window_sec, out);
    out << ", ";
  }

  // member: warming_up
  {
    out << "warming_up: ";
    rosidl_generator_traits::value_to_yaml(msg.warming_up, out);
    out << ", ";
  }

  // member: n_frames_in_window
  {
    out << "n_frames_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.n_frames_in_window, out);
    out << ", ";
  }

  // member: map
  {
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << ", ";
  }

  // member: maph
  {
    out << "maph: ";
    rosidl_generator_traits::value_to_yaml(msg.maph, out);
    out << ", ";
  }

  // member: classes
  {
    if (msg.classes.size() == 0) {
      out << "classes: []";
    } else {
      out << "classes: [";
      size_t pending_items = msg.classes.size();
      for (auto item : msg.classes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ap_per_class
  {
    if (msg.ap_per_class.size() == 0) {
      out << "ap_per_class: []";
    } else {
      out << "ap_per_class: [";
      size_t pending_items = msg.ap_per_class.size();
      for (auto item : msg.ap_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: aph_per_class
  {
    if (msg.aph_per_class.size() == 0) {
      out << "aph_per_class: []";
    } else {
      out << "aph_per_class: [";
      size_t pending_items = msg.aph_per_class.size();
      for (auto item : msg.aph_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: f1_max_per_class
  {
    if (msg.f1_max_per_class.size() == 0) {
      out << "f1_max_per_class: []";
    } else {
      out << "f1_max_per_class: [";
      size_t pending_items = msg.f1_max_per_class.size();
      for (auto item : msg.f1_max_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: optimal_conf_per_class
  {
    if (msg.optimal_conf_per_class.size() == 0) {
      out << "optimal_conf_per_class: []";
    } else {
      out << "optimal_conf_per_class: [";
      size_t pending_items = msg.optimal_conf_per_class.size();
      for (auto item : msg.optimal_conf_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ratio_tp_per_class
  {
    if (msg.ratio_tp_per_class.size() == 0) {
      out << "ratio_tp_per_class: []";
    } else {
      out << "ratio_tp_per_class: [";
      size_t pending_items = msg.ratio_tp_per_class.size();
      for (auto item : msg.ratio_tp_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ratio_fp_per_class
  {
    if (msg.ratio_fp_per_class.size() == 0) {
      out << "ratio_fp_per_class: []";
    } else {
      out << "ratio_fp_per_class: [";
      size_t pending_items = msg.ratio_fp_per_class.size();
      for (auto item : msg.ratio_fp_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ratio_fn_per_class
  {
    if (msg.ratio_fn_per_class.size() == 0) {
      out << "ratio_fn_per_class: []";
    } else {
      out << "ratio_fn_per_class: [";
      size_t pending_items = msg.ratio_fn_per_class.size();
      for (auto item : msg.ratio_fn_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_dist_mean_per_class
  {
    if (msg.err_dist_mean_per_class.size() == 0) {
      out << "err_dist_mean_per_class: []";
    } else {
      out << "err_dist_mean_per_class: [";
      size_t pending_items = msg.err_dist_mean_per_class.size();
      for (auto item : msg.err_dist_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_dist_rms_per_class
  {
    if (msg.err_dist_rms_per_class.size() == 0) {
      out << "err_dist_rms_per_class: []";
    } else {
      out << "err_dist_rms_per_class: [";
      size_t pending_items = msg.err_dist_rms_per_class.size();
      for (auto item : msg.err_dist_rms_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_yaw_mean_per_class
  {
    if (msg.err_yaw_mean_per_class.size() == 0) {
      out << "err_yaw_mean_per_class: []";
    } else {
      out << "err_yaw_mean_per_class: [";
      size_t pending_items = msg.err_yaw_mean_per_class.size();
      for (auto item : msg.err_yaw_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_yaw_std_per_class
  {
    if (msg.err_yaw_std_per_class.size() == 0) {
      out << "err_yaw_std_per_class: []";
    } else {
      out << "err_yaw_std_per_class: [";
      size_t pending_items = msg.err_yaw_std_per_class.size();
      for (auto item : msg.err_yaw_std_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_vel_mean_per_class
  {
    if (msg.err_vel_mean_per_class.size() == 0) {
      out << "err_vel_mean_per_class: []";
    } else {
      out << "err_vel_mean_per_class: [";
      size_t pending_items = msg.err_vel_mean_per_class.size();
      for (auto item : msg.err_vel_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motp_per_class
  {
    if (msg.motp_per_class.size() == 0) {
      out << "motp_per_class: []";
    } else {
      out << "motp_per_class: [";
      size_t pending_items = msg.motp_per_class.size();
      for (auto item : msg.motp_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mota_per_class
  {
    if (msg.mota_per_class.size() == 0) {
      out << "mota_per_class: []";
    } else {
      out << "mota_per_class: [";
      size_t pending_items = msg.mota_per_class.size();
      for (auto item : msg.mota_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: id_switch_per_class
  {
    if (msg.id_switch_per_class.size() == 0) {
      out << "id_switch_per_class: []";
    } else {
      out << "id_switch_per_class: [";
      size_t pending_items = msg.id_switch_per_class.size();
      for (auto item : msg.id_switch_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pred_ade
  {
    out << "pred_ade: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_ade, out);
    out << ", ";
  }

  // member: pred_fde
  {
    out << "pred_fde: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_fde, out);
    out << ", ";
  }

  // member: pred_miss_rate
  {
    out << "pred_miss_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_miss_rate, out);
    out << ", ";
  }

  // member: corner_mean_per_class
  {
    if (msg.corner_mean_per_class.size() == 0) {
      out << "corner_mean_per_class: []";
    } else {
      out << "corner_mean_per_class: [";
      size_t pending_items = msg.corner_mean_per_class.size();
      for (auto item : msg.corner_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_p95_per_class
  {
    if (msg.corner_p95_per_class.size() == 0) {
      out << "corner_p95_per_class: []";
    } else {
      out << "corner_p95_per_class: [";
      size_t pending_items = msg.corner_p95_per_class.size();
      for (auto item : msg.corner_p95_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flip_rate_per_class
  {
    if (msg.flip_rate_per_class.size() == 0) {
      out << "flip_rate_per_class: []";
    } else {
      out << "flip_rate_per_class: [";
      size_t pending_items = msg.flip_rate_per_class.size();
      for (auto item : msg.flip_rate_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mflip_rate
  {
    out << "mflip_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.mflip_rate, out);
    out << ", ";
  }

  // member: nsurf_mean_per_class
  {
    if (msg.nsurf_mean_per_class.size() == 0) {
      out << "nsurf_mean_per_class: []";
    } else {
      out << "nsurf_mean_per_class: [";
      size_t pending_items = msg.nsurf_mean_per_class.size();
      for (auto item : msg.nsurf_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ece
  {
    out << "ece: ";
    rosidl_generator_traits::value_to_yaml(msg.ece, out);
    out << ", ";
  }

  // member: ece_macro
  {
    out << "ece_macro: ";
    rosidl_generator_traits::value_to_yaml(msg.ece_macro, out);
    out << ", ";
  }

  // member: confident_error_rate
  {
    out << "confident_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.confident_error_rate, out);
    out << ", ";
  }

  // member: confident_errors_per_frame
  {
    out << "confident_errors_per_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.confident_errors_per_frame, out);
    out << ", ";
  }

  // member: confusion_pairs
  {
    if (msg.confusion_pairs.size() == 0) {
      out << "confusion_pairs: []";
    } else {
      out << "confusion_pairs: [";
      size_t pending_items = msg.confusion_pairs.size();
      for (auto item : msg.confusion_pairs) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: confusion_values
  {
    if (msg.confusion_values.size() == 0) {
      out << "confusion_values: []";
    } else {
      out << "confusion_values: [";
      size_t pending_items = msg.confusion_values.size();
      for (auto item : msg.confusion_values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: critical_fp
  {
    out << "critical_fp: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_fp, out);
    out << ", ";
  }

  // member: critical_fn
  {
    out << "critical_fn: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_fn, out);
    out << ", ";
  }

  // member: cw_map
  {
    out << "cw_map: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_map, out);
    out << ", ";
  }

  // member: cw_map_per_class
  {
    if (msg.cw_map_per_class.size() == 0) {
      out << "cw_map_per_class: []";
    } else {
      out << "cw_map_per_class: [";
      size_t pending_items = msg.cw_map_per_class.size();
      for (auto item : msg.cw_map_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fn_span_mean_per_class
  {
    if (msg.fn_span_mean_per_class.size() == 0) {
      out << "fn_span_mean_per_class: []";
    } else {
      out << "fn_span_mean_per_class: [";
      size_t pending_items = msg.fn_span_mean_per_class.size();
      for (auto item : msg.fn_span_mean_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pass_rate_num_tp
  {
    out << "pass_rate_num_tp: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_num_tp, out);
    out << ", ";
  }

  // member: pass_rate_num_gt_tp
  {
    out << "pass_rate_num_gt_tp: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_num_gt_tp, out);
    out << ", ";
  }

  // member: pass_rate_metrics_score
  {
    out << "pass_rate_metrics_score: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_metrics_score, out);
    out << ", ";
  }

  // member: err_ate_per_class
  {
    if (msg.err_ate_per_class.size() == 0) {
      out << "err_ate_per_class: []";
    } else {
      out << "err_ate_per_class: [";
      size_t pending_items = msg.err_ate_per_class.size();
      for (auto item : msg.err_ate_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_aoe_per_class
  {
    if (msg.err_aoe_per_class.size() == 0) {
      out << "err_aoe_per_class: []";
    } else {
      out << "err_aoe_per_class: [";
      size_t pending_items = msg.err_aoe_per_class.size();
      for (auto item : msg.err_aoe_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_ase_per_class
  {
    if (msg.err_ase_per_class.size() == 0) {
      out << "err_ase_per_class: []";
    } else {
      out << "err_ase_per_class: [";
      size_t pending_items = msg.err_ase_per_class.size();
      for (auto item : msg.err_ase_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: err_ave_per_class
  {
    if (msg.err_ave_per_class.size() == 0) {
      out << "err_ave_per_class: []";
    } else {
      out << "err_ave_per_class: [";
      size_t pending_items = msg.err_ave_per_class.size();
      for (auto item : msg.err_ave_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: n_gt_total
  {
    out << "n_gt_total: ";
    rosidl_generator_traits::value_to_yaml(msg.n_gt_total, out);
    out << ", ";
  }

  // member: expected_tp_total
  {
    out << "expected_tp_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_tp_total, out);
    out << ", ";
  }

  // member: expected_fp_total
  {
    out << "expected_fp_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_fp_total, out);
    out << ", ";
  }

  // member: expected_fn_total
  {
    out << "expected_fn_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_fn_total, out);
    out << ", ";
  }

  // member: n_gt_per_class
  {
    if (msg.n_gt_per_class.size() == 0) {
      out << "n_gt_per_class: []";
    } else {
      out << "n_gt_per_class: [";
      size_t pending_items = msg.n_gt_per_class.size();
      for (auto item : msg.n_gt_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expected_tp_per_class
  {
    if (msg.expected_tp_per_class.size() == 0) {
      out << "expected_tp_per_class: []";
    } else {
      out << "expected_tp_per_class: [";
      size_t pending_items = msg.expected_tp_per_class.size();
      for (auto item : msg.expected_tp_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expected_fp_per_class
  {
    if (msg.expected_fp_per_class.size() == 0) {
      out << "expected_fp_per_class: []";
    } else {
      out << "expected_fp_per_class: [";
      size_t pending_items = msg.expected_fp_per_class.size();
      for (auto item : msg.expected_fp_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: expected_fn_per_class
  {
    if (msg.expected_fn_per_class.size() == 0) {
      out << "expected_fn_per_class: []";
    } else {
      out << "expected_fn_per_class: [";
      size_t pending_items = msg.expected_fn_per_class.size();
      for (auto item : msg.expected_fn_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExpectedMetricsGt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: model_based
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_based: ";
    rosidl_generator_traits::value_to_yaml(msg.model_based, out);
    out << "\n";
  }

  // member: params_hash
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_hash: ";
    rosidl_generator_traits::value_to_yaml(msg.params_hash, out);
    out << "\n";
  }

  // member: window_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "window_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.window_sec, out);
    out << "\n";
  }

  // member: warming_up
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warming_up: ";
    rosidl_generator_traits::value_to_yaml(msg.warming_up, out);
    out << "\n";
  }

  // member: n_frames_in_window
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_frames_in_window: ";
    rosidl_generator_traits::value_to_yaml(msg.n_frames_in_window, out);
    out << "\n";
  }

  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << "\n";
  }

  // member: maph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maph: ";
    rosidl_generator_traits::value_to_yaml(msg.maph, out);
    out << "\n";
  }

  // member: classes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classes.size() == 0) {
      out << "classes: []\n";
    } else {
      out << "classes:\n";
      for (auto item : msg.classes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ap_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ap_per_class.size() == 0) {
      out << "ap_per_class: []\n";
    } else {
      out << "ap_per_class:\n";
      for (auto item : msg.ap_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: aph_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aph_per_class.size() == 0) {
      out << "aph_per_class: []\n";
    } else {
      out << "aph_per_class:\n";
      for (auto item : msg.aph_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: f1_max_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.f1_max_per_class.size() == 0) {
      out << "f1_max_per_class: []\n";
    } else {
      out << "f1_max_per_class:\n";
      for (auto item : msg.f1_max_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: optimal_conf_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.optimal_conf_per_class.size() == 0) {
      out << "optimal_conf_per_class: []\n";
    } else {
      out << "optimal_conf_per_class:\n";
      for (auto item : msg.optimal_conf_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ratio_tp_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ratio_tp_per_class.size() == 0) {
      out << "ratio_tp_per_class: []\n";
    } else {
      out << "ratio_tp_per_class:\n";
      for (auto item : msg.ratio_tp_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ratio_fp_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ratio_fp_per_class.size() == 0) {
      out << "ratio_fp_per_class: []\n";
    } else {
      out << "ratio_fp_per_class:\n";
      for (auto item : msg.ratio_fp_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ratio_fn_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ratio_fn_per_class.size() == 0) {
      out << "ratio_fn_per_class: []\n";
    } else {
      out << "ratio_fn_per_class:\n";
      for (auto item : msg.ratio_fn_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_dist_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_dist_mean_per_class.size() == 0) {
      out << "err_dist_mean_per_class: []\n";
    } else {
      out << "err_dist_mean_per_class:\n";
      for (auto item : msg.err_dist_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_dist_rms_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_dist_rms_per_class.size() == 0) {
      out << "err_dist_rms_per_class: []\n";
    } else {
      out << "err_dist_rms_per_class:\n";
      for (auto item : msg.err_dist_rms_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_yaw_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_yaw_mean_per_class.size() == 0) {
      out << "err_yaw_mean_per_class: []\n";
    } else {
      out << "err_yaw_mean_per_class:\n";
      for (auto item : msg.err_yaw_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_yaw_std_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_yaw_std_per_class.size() == 0) {
      out << "err_yaw_std_per_class: []\n";
    } else {
      out << "err_yaw_std_per_class:\n";
      for (auto item : msg.err_yaw_std_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_vel_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_vel_mean_per_class.size() == 0) {
      out << "err_vel_mean_per_class: []\n";
    } else {
      out << "err_vel_mean_per_class:\n";
      for (auto item : msg.err_vel_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motp_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motp_per_class.size() == 0) {
      out << "motp_per_class: []\n";
    } else {
      out << "motp_per_class:\n";
      for (auto item : msg.motp_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mota_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mota_per_class.size() == 0) {
      out << "mota_per_class: []\n";
    } else {
      out << "mota_per_class:\n";
      for (auto item : msg.mota_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: id_switch_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id_switch_per_class.size() == 0) {
      out << "id_switch_per_class: []\n";
    } else {
      out << "id_switch_per_class:\n";
      for (auto item : msg.id_switch_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pred_ade
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_ade: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_ade, out);
    out << "\n";
  }

  // member: pred_fde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_fde: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_fde, out);
    out << "\n";
  }

  // member: pred_miss_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_miss_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_miss_rate, out);
    out << "\n";
  }

  // member: corner_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_mean_per_class.size() == 0) {
      out << "corner_mean_per_class: []\n";
    } else {
      out << "corner_mean_per_class:\n";
      for (auto item : msg.corner_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: corner_p95_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_p95_per_class.size() == 0) {
      out << "corner_p95_per_class: []\n";
    } else {
      out << "corner_p95_per_class:\n";
      for (auto item : msg.corner_p95_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flip_rate_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flip_rate_per_class.size() == 0) {
      out << "flip_rate_per_class: []\n";
    } else {
      out << "flip_rate_per_class:\n";
      for (auto item : msg.flip_rate_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mflip_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mflip_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.mflip_rate, out);
    out << "\n";
  }

  // member: nsurf_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nsurf_mean_per_class.size() == 0) {
      out << "nsurf_mean_per_class: []\n";
    } else {
      out << "nsurf_mean_per_class:\n";
      for (auto item : msg.nsurf_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ece
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ece: ";
    rosidl_generator_traits::value_to_yaml(msg.ece, out);
    out << "\n";
  }

  // member: ece_macro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ece_macro: ";
    rosidl_generator_traits::value_to_yaml(msg.ece_macro, out);
    out << "\n";
  }

  // member: confident_error_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confident_error_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.confident_error_rate, out);
    out << "\n";
  }

  // member: confident_errors_per_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confident_errors_per_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.confident_errors_per_frame, out);
    out << "\n";
  }

  // member: confusion_pairs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confusion_pairs.size() == 0) {
      out << "confusion_pairs: []\n";
    } else {
      out << "confusion_pairs:\n";
      for (auto item : msg.confusion_pairs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: confusion_values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.confusion_values.size() == 0) {
      out << "confusion_values: []\n";
    } else {
      out << "confusion_values:\n";
      for (auto item : msg.confusion_values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: critical_fp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_fp: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_fp, out);
    out << "\n";
  }

  // member: critical_fn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_fn: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_fn, out);
    out << "\n";
  }

  // member: cw_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cw_map: ";
    rosidl_generator_traits::value_to_yaml(msg.cw_map, out);
    out << "\n";
  }

  // member: cw_map_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cw_map_per_class.size() == 0) {
      out << "cw_map_per_class: []\n";
    } else {
      out << "cw_map_per_class:\n";
      for (auto item : msg.cw_map_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fn_span_mean_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fn_span_mean_per_class.size() == 0) {
      out << "fn_span_mean_per_class: []\n";
    } else {
      out << "fn_span_mean_per_class:\n";
      for (auto item : msg.fn_span_mean_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pass_rate_num_tp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_rate_num_tp: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_num_tp, out);
    out << "\n";
  }

  // member: pass_rate_num_gt_tp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_rate_num_gt_tp: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_num_gt_tp, out);
    out << "\n";
  }

  // member: pass_rate_metrics_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_rate_metrics_score: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_rate_metrics_score, out);
    out << "\n";
  }

  // member: err_ate_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_ate_per_class.size() == 0) {
      out << "err_ate_per_class: []\n";
    } else {
      out << "err_ate_per_class:\n";
      for (auto item : msg.err_ate_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_aoe_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_aoe_per_class.size() == 0) {
      out << "err_aoe_per_class: []\n";
    } else {
      out << "err_aoe_per_class:\n";
      for (auto item : msg.err_aoe_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_ase_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_ase_per_class.size() == 0) {
      out << "err_ase_per_class: []\n";
    } else {
      out << "err_ase_per_class:\n";
      for (auto item : msg.err_ase_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: err_ave_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.err_ave_per_class.size() == 0) {
      out << "err_ave_per_class: []\n";
    } else {
      out << "err_ave_per_class:\n";
      for (auto item : msg.err_ave_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: n_gt_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_gt_total: ";
    rosidl_generator_traits::value_to_yaml(msg.n_gt_total, out);
    out << "\n";
  }

  // member: expected_tp_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_tp_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_tp_total, out);
    out << "\n";
  }

  // member: expected_fp_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_fp_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_fp_total, out);
    out << "\n";
  }

  // member: expected_fn_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_fn_total: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_fn_total, out);
    out << "\n";
  }

  // member: n_gt_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.n_gt_per_class.size() == 0) {
      out << "n_gt_per_class: []\n";
    } else {
      out << "n_gt_per_class:\n";
      for (auto item : msg.n_gt_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: expected_tp_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expected_tp_per_class.size() == 0) {
      out << "expected_tp_per_class: []\n";
    } else {
      out << "expected_tp_per_class:\n";
      for (auto item : msg.expected_tp_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: expected_fp_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expected_fp_per_class.size() == 0) {
      out << "expected_fp_per_class: []\n";
    } else {
      out << "expected_fp_per_class:\n";
      for (auto item : msg.expected_fp_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: expected_fn_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.expected_fn_per_class.size() == 0) {
      out << "expected_fn_per_class: []\n";
    } else {
      out << "expected_fn_per_class:\n";
      for (auto item : msg.expected_fn_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExpectedMetricsGt & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace swarm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use swarm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const swarm_interfaces::msg::ExpectedMetricsGt & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::ExpectedMetricsGt & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::ExpectedMetricsGt>()
{
  return "swarm_interfaces::msg::ExpectedMetricsGt";
}

template<>
inline const char * name<swarm_interfaces::msg::ExpectedMetricsGt>()
{
  return "swarm_interfaces/msg/ExpectedMetricsGt";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::ExpectedMetricsGt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::ExpectedMetricsGt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::ExpectedMetricsGt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_GT__TRAITS_HPP_
