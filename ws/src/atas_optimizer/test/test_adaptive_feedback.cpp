// Copyright 2026 ATAS Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>
#include <memory>
#include <vector>

#include "rclcpp/rclcpp.hpp"
#include "atas_optimizer/atas_optimizer_node.hpp"

class AdaptiveFeedbackTest : public ::testing::Test {
protected:
  void SetUp() override
  {
    if (!rclcpp::ok()) {
      rclcpp::init(0, nullptr);
    }
    rclcpp::NodeOptions options;
    options.append_parameter_override("use_sim_time", false);
    options.append_parameter_override("weight_detection", 1.0);
    options.append_parameter_override("weight_latency", 0.5);
    options.append_parameter_override("z_nominal", 15.0);
    options.append_parameter_override("feedback_latency_threshold_ms", 25.0);
    options.append_parameter_override("feedback_target_detections", 4.0);
    options.append_parameter_override("feedback_min_samples", 10);
    node_ = std::make_shared<atas_optimizer::AtasOptimizerNode>(options);
  }

  void TearDown() override
  {
    node_.reset();
    if (rclcpp::ok()) {
      rclcpp::shutdown();
    }
  }

  std::shared_ptr<atas_optimizer::AtasOptimizerNode> node_;
};

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionMinSamplesGuard)
{
  swarm_interfaces::msg::OptimizerFeedback fb;
  fb.samples_in_window = 5;  // Menor que o mínimo de 10 amostras
  fb.latency_mean_60s = 50.0;
  fb.detections_mean_60s = 1.0;

  double initial_w_lat = node_->get_w_lat();
  double initial_w_det = node_->get_w_det();
  double initial_z = node_->get_z_nominal();

  node_->process_optimizer_feedback(fb);

  EXPECT_DOUBLE_EQ(node_->get_w_lat(), initial_w_lat);
  EXPECT_DOUBLE_EQ(node_->get_w_det(), initial_w_det);
  EXPECT_DOUBLE_EQ(node_->get_z_nominal(), initial_z);
}

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionDisabledFlag)
{
  node_->set_adaptive_supervision_enabled(false);

  swarm_interfaces::msg::OptimizerFeedback fb;
  fb.samples_in_window = 20;
  fb.latency_mean_60s = 60.0;
  fb.detections_mean_60s = 0.5;

  double initial_w_lat = node_->get_w_lat();
  double initial_w_det = node_->get_w_det();
  double initial_z = node_->get_z_nominal();

  node_->process_optimizer_feedback(fb);

  EXPECT_DOUBLE_EQ(node_->get_w_lat(), initial_w_lat);
  EXPECT_DOUBLE_EQ(node_->get_w_det(), initial_w_det);
  EXPECT_DOUBLE_EQ(node_->get_z_nominal(), initial_z);
}

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionHighLatencyPullDown)
{
  swarm_interfaces::msg::OptimizerFeedback fb;
  fb.samples_in_window = 15;
  fb.latency_mean_60s = 35.0;     // > 25.0 ms
  fb.detections_mean_60s = 5.0;   // >= 4.0

  double initial_w_lat = node_->get_w_lat();
  double initial_z = node_->get_z_nominal();

  node_->process_optimizer_feedback(fb);

  // w_lat deve ter aumentado em 20%
  EXPECT_NEAR(node_->get_w_lat(), initial_w_lat * 1.20, 1e-4);
  // z_nominal deve ter diminuído em até 15% para aproximar os drones dos UGVs
  EXPECT_NEAR(node_->get_z_nominal(), initial_z * 0.85, 1e-4);
}

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionLowDetectionsElevateFrustum)
{
  swarm_interfaces::msg::OptimizerFeedback fb;
  fb.samples_in_window = 15;
  fb.latency_mean_60s = 15.0;     // <= 25.0 ms
  fb.detections_mean_60s = 2.0;   // < 4.0

  double initial_w_det = node_->get_w_det();
  double initial_z = node_->get_z_nominal();

  node_->process_optimizer_feedback(fb);

  // w_det deve ter aumentado em 20%
  EXPECT_NEAR(node_->get_w_det(), initial_w_det * 1.20, 1e-4);
  // z_nominal deve ter aumentado em até 10% para ampliar a cobertura visual
  EXPECT_NEAR(node_->get_z_nominal(), initial_z * 1.10, 1e-4);
}

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionParetoSaturationLimits)
{
  swarm_interfaces::msg::OptimizerFeedback fb_lat;
  fb_lat.samples_in_window = 50;
  fb_lat.latency_mean_60s = 100.0;
  fb_lat.detections_mean_60s = 10.0;

  // 30 ciclos consecutivos de latência alta
  for (int i = 0; i < 30; ++i) {
    node_->process_optimizer_feedback(fb_lat);
  }

  // w_lat satura em 5.0
  EXPECT_LE(node_->get_w_lat(), 5.0);
  EXPECT_GE(node_->get_w_lat(), 4.9);
  // z_nominal não pode violar z_min (2.5m)
  EXPECT_GE(node_->get_z_nominal(), node_->get_z_min());

  // 30 ciclos consecutivos de detecção insuficiente
  swarm_interfaces::msg::OptimizerFeedback fb_det;
  fb_det.samples_in_window = 50;
  fb_det.latency_mean_60s = 10.0;
  fb_det.detections_mean_60s = 0.5;

  for (int i = 0; i < 30; ++i) {
    node_->process_optimizer_feedback(fb_det);
  }

  // w_det satura em 10.0
  EXPECT_LE(node_->get_w_det(), 10.0);
  EXPECT_GE(node_->get_w_det(), 9.9);
  // z_nominal não pode violar 25.0m
  EXPECT_LE(node_->get_z_nominal(), 25.0);
}

TEST_F(AdaptiveFeedbackTest, AdaptiveSupervisionRelaxationTowardsEquilibrium)
{
  // Forçar pesos elevados primeiro
  swarm_interfaces::msg::OptimizerFeedback fb_high;
  fb_high.samples_in_window = 20;
  fb_high.latency_mean_60s = 40.0;
  fb_high.detections_mean_60s = 1.0;
  node_->process_optimizer_feedback(fb_high);

  double boosted_w_lat = node_->get_w_lat();
  double boosted_w_det = node_->get_w_det();
  EXPECT_GT(boosted_w_lat, 0.5);
  EXPECT_GT(boosted_w_det, 1.0);

  // Agora fornecer feedback no ponto ótimo de operação (latência baixa e detecção alta)
  swarm_interfaces::msg::OptimizerFeedback fb_good;
  fb_good.samples_in_window = 20;
  fb_good.latency_mean_60s = 15.0;    // <= 25 ms
  fb_good.detections_mean_60s = 6.0;  // >= 4.0

  node_->process_optimizer_feedback(fb_good);

  // Os pesos devem ter relaxado ligeiramente em direção aos valores nominais
  EXPECT_LT(node_->get_w_lat(), boosted_w_lat);
  EXPECT_LT(node_->get_w_det(), boosted_w_det);
  EXPECT_GE(node_->get_w_lat(), 0.5);
  EXPECT_GE(node_->get_w_det(), 1.0);
}
