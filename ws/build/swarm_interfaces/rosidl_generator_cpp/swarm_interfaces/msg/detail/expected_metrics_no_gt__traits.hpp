// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from swarm_interfaces:msg/ExpectedMetricsNoGt.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "swarm_interfaces/msg/expected_metrics_no_gt.hpp"


#ifndef SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__TRAITS_HPP_
#define SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "swarm_interfaces/msg/detail/expected_metrics_no_gt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace swarm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExpectedMetricsNoGt & msg,
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

  // member: lateral_deviation_mean
  {
    if (msg.lateral_deviation_mean.size() == 0) {
      out << "lateral_deviation_mean: []";
    } else {
      out << "lateral_deviation_mean: [";
      size_t pending_items = msg.lateral_deviation_mean.size();
      for (auto item : msg.lateral_deviation_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lateral_deviation_min
  {
    if (msg.lateral_deviation_min.size() == 0) {
      out << "lateral_deviation_min: []";
    } else {
      out << "lateral_deviation_min: [";
      size_t pending_items = msg.lateral_deviation_min.size();
      for (auto item : msg.lateral_deviation_min) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lateral_deviation_max
  {
    if (msg.lateral_deviation_max.size() == 0) {
      out << "lateral_deviation_max: []";
    } else {
      out << "lateral_deviation_max: [";
      size_t pending_items = msg.lateral_deviation_max.size();
      for (auto item : msg.lateral_deviation_max) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_deviation_mean
  {
    if (msg.yaw_deviation_mean.size() == 0) {
      out << "yaw_deviation_mean: []";
    } else {
      out << "yaw_deviation_mean: [";
      size_t pending_items = msg.yaw_deviation_mean.size();
      for (auto item : msg.yaw_deviation_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: yaw_rate_mean
  {
    if (msg.yaw_rate_mean.size() == 0) {
      out << "yaw_rate_mean: []";
    } else {
      out << "yaw_rate_mean: [";
      size_t pending_items = msg.yaw_rate_mean.size();
      for (auto item : msg.yaw_rate_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicted_path_deviation_mean
  {
    if (msg.predicted_path_deviation_mean.size() == 0) {
      out << "predicted_path_deviation_mean: []";
    } else {
      out << "predicted_path_deviation_mean: [";
      size_t pending_items = msg.predicted_path_deviation_mean.size();
      for (auto item : msg.predicted_path_deviation_mean) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: total_objects_count
  {
    if (msg.total_objects_count.size() == 0) {
      out << "total_objects_count: []";
    } else {
      out << "total_objects_count: [";
      size_t pending_items = msg.total_objects_count.size();
      for (auto item : msg.total_objects_count) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: average_objects_count
  {
    if (msg.average_objects_count.size() == 0) {
      out << "average_objects_count: []";
    } else {
      out << "average_objects_count: [";
      size_t pending_items = msg.average_objects_count.size();
      for (auto item : msg.average_objects_count) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: interval_average_objects_count
  {
    if (msg.interval_average_objects_count.size() == 0) {
      out << "interval_average_objects_count: []";
    } else {
      out << "interval_average_objects_count: [";
      size_t pending_items = msg.interval_average_objects_count.size();
      for (auto item : msg.interval_average_objects_count) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: all_object_count
  {
    out << "all_object_count: ";
    rosidl_generator_traits::value_to_yaml(msg.all_object_count, out);
    out << ", ";
  }

  // member: object_count_per_class
  {
    if (msg.object_count_per_class.size() == 0) {
      out << "object_count_per_class: []";
    } else {
      out << "object_count_per_class: [";
      size_t pending_items = msg.object_count_per_class.size();
      for (auto item : msg.object_count_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_distance_per_class
  {
    if (msg.max_distance_per_class.size() == 0) {
      out << "max_distance_per_class: []";
    } else {
      out << "max_distance_per_class: [";
      size_t pending_items = msg.max_distance_per_class.size();
      for (auto item : msg.max_distance_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: meas_to_tracked_latency_ms
  {
    out << "meas_to_tracked_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_to_tracked_latency_ms, out);
    out << ", ";
  }

  // member: prediction_latency_ms
  {
    out << "prediction_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_latency_ms, out);
    out << ", ";
  }

  // member: total_latency_ms
  {
    out << "total_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.total_latency_ms, out);
    out << ", ";
  }

  // member: cross_confirm_rate
  {
    out << "cross_confirm_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_confirm_rate, out);
    out << ", ";
  }

  // member: unconfirmed_rate
  {
    out << "unconfirmed_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.unconfirmed_rate, out);
    out << ", ";
  }

  // member: missed_by_other_rate
  {
    out << "missed_by_other_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.missed_by_other_rate, out);
    out << ", ";
  }

  // member: class_disagree_rate
  {
    out << "class_disagree_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.class_disagree_rate, out);
    out << ", ";
  }

  // member: range_discrepancy_mean
  {
    out << "range_discrepancy_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.range_discrepancy_mean, out);
    out << ", ";
  }

  // member: range_discrepancy_p95
  {
    out << "range_discrepancy_p95: ";
    rosidl_generator_traits::value_to_yaml(msg.range_discrepancy_p95, out);
    out << ", ";
  }

  // member: size_cv_per_class
  {
    if (msg.size_cv_per_class.size() == 0) {
      out << "size_cv_per_class: []";
    } else {
      out << "size_cv_per_class: [";
      size_t pending_items = msg.size_cv_per_class.size();
      for (auto item : msg.size_cv_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_jitter_per_class
  {
    if (msg.position_jitter_per_class.size() == 0) {
      out << "position_jitter_per_class: []";
    } else {
      out << "position_jitter_per_class: [";
      size_t pending_items = msg.position_jitter_per_class.size();
      for (auto item : msg.position_jitter_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_inversion_rate_per_class
  {
    if (msg.heading_inversion_rate_per_class.size() == 0) {
      out << "heading_inversion_rate_per_class: []";
    } else {
      out << "heading_inversion_rate_per_class: [";
      size_t pending_items = msg.heading_inversion_rate_per_class.size();
      for (auto item : msg.heading_inversion_rate_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: track_fragments_per_class
  {
    if (msg.track_fragments_per_class.size() == 0) {
      out << "track_fragments_per_class: []";
    } else {
      out << "track_fragments_per_class: [";
      size_t pending_items = msg.track_fragments_per_class.size();
      for (auto item : msg.track_fragments_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: track_purity_per_class
  {
    if (msg.track_purity_per_class.size() == 0) {
      out << "track_purity_per_class: []";
    } else {
      out << "track_purity_per_class: [";
      size_t pending_items = msg.track_purity_per_class.size();
      for (auto item : msg.track_purity_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: track_length_per_class
  {
    if (msg.track_length_per_class.size() == 0) {
      out << "track_length_per_class: []";
    } else {
      out << "track_length_per_class: [";
      size_t pending_items = msg.track_length_per_class.size();
      for (auto item : msg.track_length_per_class) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ece_proxy
  {
    out << "ece_proxy: ";
    rosidl_generator_traits::value_to_yaml(msg.ece_proxy, out);
    out << ", ";
  }

  // member: unconfirmed_high_conf_rate
  {
    out << "unconfirmed_high_conf_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.unconfirmed_high_conf_rate, out);
    out << ", ";
  }

  // member: critical_inconsistency_per_s
  {
    out << "critical_inconsistency_per_s: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_inconsistency_per_s, out);
    out << ", ";
  }

  // member: sync_offset_ms
  {
    out << "sync_offset_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_offset_ms, out);
    out << ", ";
  }

  // member: sensor_health
  {
    if (msg.sensor_health.size() == 0) {
      out << "sensor_health: []";
    } else {
      out << "sensor_health: [";
      size_t pending_items = msg.sensor_health.size();
      for (auto item : msg.sensor_health) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flight_regime_altitude_m
  {
    out << "flight_regime_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_altitude_m, out);
    out << ", ";
  }

  // member: flight_regime_speed_mps
  {
    out << "flight_regime_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_speed_mps, out);
    out << ", ";
  }

  // member: flight_regime_climb_rate_mps
  {
    out << "flight_regime_climb_rate_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_climb_rate_mps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExpectedMetricsNoGt & msg,
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

  // member: lateral_deviation_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lateral_deviation_mean.size() == 0) {
      out << "lateral_deviation_mean: []\n";
    } else {
      out << "lateral_deviation_mean:\n";
      for (auto item : msg.lateral_deviation_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lateral_deviation_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lateral_deviation_min.size() == 0) {
      out << "lateral_deviation_min: []\n";
    } else {
      out << "lateral_deviation_min:\n";
      for (auto item : msg.lateral_deviation_min) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lateral_deviation_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lateral_deviation_max.size() == 0) {
      out << "lateral_deviation_max: []\n";
    } else {
      out << "lateral_deviation_max:\n";
      for (auto item : msg.lateral_deviation_max) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw_deviation_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw_deviation_mean.size() == 0) {
      out << "yaw_deviation_mean: []\n";
    } else {
      out << "yaw_deviation_mean:\n";
      for (auto item : msg.yaw_deviation_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: yaw_rate_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.yaw_rate_mean.size() == 0) {
      out << "yaw_rate_mean: []\n";
    } else {
      out << "yaw_rate_mean:\n";
      for (auto item : msg.yaw_rate_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: predicted_path_deviation_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_path_deviation_mean.size() == 0) {
      out << "predicted_path_deviation_mean: []\n";
    } else {
      out << "predicted_path_deviation_mean:\n";
      for (auto item : msg.predicted_path_deviation_mean) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: total_objects_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.total_objects_count.size() == 0) {
      out << "total_objects_count: []\n";
    } else {
      out << "total_objects_count:\n";
      for (auto item : msg.total_objects_count) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: average_objects_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.average_objects_count.size() == 0) {
      out << "average_objects_count: []\n";
    } else {
      out << "average_objects_count:\n";
      for (auto item : msg.average_objects_count) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: interval_average_objects_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.interval_average_objects_count.size() == 0) {
      out << "interval_average_objects_count: []\n";
    } else {
      out << "interval_average_objects_count:\n";
      for (auto item : msg.interval_average_objects_count) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: all_object_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_object_count: ";
    rosidl_generator_traits::value_to_yaml(msg.all_object_count, out);
    out << "\n";
  }

  // member: object_count_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_count_per_class.size() == 0) {
      out << "object_count_per_class: []\n";
    } else {
      out << "object_count_per_class:\n";
      for (auto item : msg.object_count_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_distance_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_distance_per_class.size() == 0) {
      out << "max_distance_per_class: []\n";
    } else {
      out << "max_distance_per_class:\n";
      for (auto item : msg.max_distance_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: meas_to_tracked_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "meas_to_tracked_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.meas_to_tracked_latency_ms, out);
    out << "\n";
  }

  // member: prediction_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_latency_ms, out);
    out << "\n";
  }

  // member: total_latency_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_latency_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.total_latency_ms, out);
    out << "\n";
  }

  // member: cross_confirm_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cross_confirm_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.cross_confirm_rate, out);
    out << "\n";
  }

  // member: unconfirmed_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unconfirmed_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.unconfirmed_rate, out);
    out << "\n";
  }

  // member: missed_by_other_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "missed_by_other_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.missed_by_other_rate, out);
    out << "\n";
  }

  // member: class_disagree_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_disagree_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.class_disagree_rate, out);
    out << "\n";
  }

  // member: range_discrepancy_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_discrepancy_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.range_discrepancy_mean, out);
    out << "\n";
  }

  // member: range_discrepancy_p95
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_discrepancy_p95: ";
    rosidl_generator_traits::value_to_yaml(msg.range_discrepancy_p95, out);
    out << "\n";
  }

  // member: size_cv_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.size_cv_per_class.size() == 0) {
      out << "size_cv_per_class: []\n";
    } else {
      out << "size_cv_per_class:\n";
      for (auto item : msg.size_cv_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_jitter_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_jitter_per_class.size() == 0) {
      out << "position_jitter_per_class: []\n";
    } else {
      out << "position_jitter_per_class:\n";
      for (auto item : msg.position_jitter_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: heading_inversion_rate_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_inversion_rate_per_class.size() == 0) {
      out << "heading_inversion_rate_per_class: []\n";
    } else {
      out << "heading_inversion_rate_per_class:\n";
      for (auto item : msg.heading_inversion_rate_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: track_fragments_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track_fragments_per_class.size() == 0) {
      out << "track_fragments_per_class: []\n";
    } else {
      out << "track_fragments_per_class:\n";
      for (auto item : msg.track_fragments_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: track_purity_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track_purity_per_class.size() == 0) {
      out << "track_purity_per_class: []\n";
    } else {
      out << "track_purity_per_class:\n";
      for (auto item : msg.track_purity_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: track_length_per_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track_length_per_class.size() == 0) {
      out << "track_length_per_class: []\n";
    } else {
      out << "track_length_per_class:\n";
      for (auto item : msg.track_length_per_class) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ece_proxy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ece_proxy: ";
    rosidl_generator_traits::value_to_yaml(msg.ece_proxy, out);
    out << "\n";
  }

  // member: unconfirmed_high_conf_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unconfirmed_high_conf_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.unconfirmed_high_conf_rate, out);
    out << "\n";
  }

  // member: critical_inconsistency_per_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "critical_inconsistency_per_s: ";
    rosidl_generator_traits::value_to_yaml(msg.critical_inconsistency_per_s, out);
    out << "\n";
  }

  // member: sync_offset_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_offset_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.sync_offset_ms, out);
    out << "\n";
  }

  // member: sensor_health
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensor_health.size() == 0) {
      out << "sensor_health: []\n";
    } else {
      out << "sensor_health:\n";
      for (auto item : msg.sensor_health) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flight_regime_altitude_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_regime_altitude_m: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_altitude_m, out);
    out << "\n";
  }

  // member: flight_regime_speed_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_regime_speed_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_speed_mps, out);
    out << "\n";
  }

  // member: flight_regime_climb_rate_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_regime_climb_rate_mps: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_regime_climb_rate_mps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExpectedMetricsNoGt & msg, bool use_flow_style = false)
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
  const swarm_interfaces::msg::ExpectedMetricsNoGt & msg,
  std::ostream & out, size_t indentation = 0)
{
  swarm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use swarm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const swarm_interfaces::msg::ExpectedMetricsNoGt & msg)
{
  return swarm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<swarm_interfaces::msg::ExpectedMetricsNoGt>()
{
  return "swarm_interfaces::msg::ExpectedMetricsNoGt";
}

template<>
inline const char * name<swarm_interfaces::msg::ExpectedMetricsNoGt>()
{
  return "swarm_interfaces/msg/ExpectedMetricsNoGt";
}

template<>
struct has_fixed_size<swarm_interfaces::msg::ExpectedMetricsNoGt>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<swarm_interfaces::msg::ExpectedMetricsNoGt>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<swarm_interfaces::msg::ExpectedMetricsNoGt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SWARM_INTERFACES__MSG__DETAIL__EXPECTED_METRICS_NO_GT__TRAITS_HPP_
