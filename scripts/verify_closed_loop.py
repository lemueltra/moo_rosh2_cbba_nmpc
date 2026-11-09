#!/usr/bin/env python3
# Copyright 2026 ATAS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

"""Closed-loop verification script monitoring ATAS optimizer & Drake simulator."""

import json
import math
import sys
import time

import rclpy
import swarm_interfaces.msg
from rclpy.node import Node


def check_dual_sensor_fov(
    rel_x: float, rel_y: float, altitude_z: float, rel_yaw: float
) -> bool:
    """Verifies if target UGV at (0, 0, 0) is inside LiDAR or Camera FoV."""
    dx_world = -rel_x
    dy_world = -rel_y
    dz_world = -altitude_z

    cos_y = math.cos(rel_yaw)
    sin_y = math.sin(rel_yaw)
    dx_body = dx_world * cos_y + dy_world * sin_y
    dy_body = -dx_world * sin_y + dy_world * cos_y

    dist_2d = math.hypot(dx_world, dy_world)
    dist_3d = math.hypot(dist_2d, dz_world)
    if dist_3d < 1e-3:
        return False

    azimuth = math.atan2(dy_body, dx_body)
    while azimuth > math.pi:
        azimuth -= 2.0 * math.pi
    while azimuth < -math.pi:
        azimuth += 2.0 * math.pi

    pitch = math.atan2(altitude_z, max(0.1, dist_2d))
    elev = math.atan2(dz_world, dist_2d)
    delta_pitch = abs(elev - (-pitch))
    while delta_pitch > math.pi:
        delta_pitch -= 2.0 * math.pi
    while delta_pitch < -math.pi:
        delta_pitch += 2.0 * math.pi
    delta_pitch = abs(delta_pitch)

    in_camera = (
        dist_3d <= 40.0
        and abs(azimuth) <= (45.0 * math.pi / 180.0)
        and delta_pitch <= (0.5 * 58.7155 * math.pi / 180.0)
    )

    elev_deg = elev * 180.0 / math.pi
    in_lidar = (
        dist_3d <= 100.0
        and abs(azimuth) <= (60.0 * math.pi / 180.0)
        and (-30.0 <= elev_deg <= 10.0)
    )

    return in_camera or in_lidar


class ClosedLoopMonitor(Node):
    """Monitors closed loop contract topics between ATAS MOO and Drake simulator."""

    def __init__(self):
        super().__init__("closed_loop_monitor")
        self.active_set_count = 0
        self.references_count = 0
        self.ugv_state_count = 0
        self.feedback_count = 0
        self.latency_count = 0

        self.total_references_evaluated = 0
        self.fov_violations_count = 0
        self.unassigned_active_count = 0

        self.last_active_set = []
        self.last_references = []
        self.last_ugvs = []
        self.last_latencies = []

        # Subscriptions
        self.sub_active_set = self.create_subscription(
            swarm_interfaces.msg.DroneActiveSet,
            "/drones/active_set",
            self.on_active_set,
            rclpy.qos.QoSProfile(
                depth=1,
                durability=rclpy.qos.DurabilityPolicy.TRANSIENT_LOCAL,
                reliability=rclpy.qos.ReliabilityPolicy.RELIABLE,
            ),
        )

        self.sub_references = self.create_subscription(
            swarm_interfaces.msg.DroneReferenceArray,
            "/drones/references",
            self.on_references,
            10,
        )

        self.sub_ugv = self.create_subscription(
            swarm_interfaces.msg.UgvStateArray,
            "/ugv_fleet/state",
            self.on_ugv,
            10,
        )

        self.sub_feedback = self.create_subscription(
            swarm_interfaces.msg.OptimizerFeedback,
            "/metrics/optimizer_feedback",
            self.on_feedback,
            10,
        )

        self.sub_latency = self.create_subscription(
            swarm_interfaces.msg.UavLinkLatencyArray,
            "/comm/uav_latency",
            self.on_latency,
            10,
        )

    def on_active_set(self, msg):
        self.active_set_count += 1
        self.last_active_set = list(msg.active_ids)

    def on_references(self, msg):
        self.references_count += 1
        current_refs = []
        for ref in msg.references:
            in_fov = check_dual_sensor_fov(ref.x, ref.y, ref.z, ref.yaw)
            self.total_references_evaluated += 1
            if not in_fov:
                self.fov_violations_count += 1
                dx_w = -ref.x
                dy_w = -ref.y
                d2 = math.hypot(dx_w, dy_w)
                d3 = math.hypot(d2, ref.z)
                el = math.atan2(-ref.z, d2) * 180 / math.pi
                cos_y = math.cos(ref.yaw)
                sin_y = math.sin(ref.yaw)
                dx_b = dx_w * cos_y + dy_w * sin_y
                dy_b = -dx_w * sin_y + dy_w * cos_y
                az = math.atan2(dy_b, dx_b) * 180 / math.pi
                pitch = math.atan2(ref.z, max(0.1, d2)) * 180 / math.pi
                print(
                    f"[DEBUG FOV FAIL] drone={ref.drone_id} ugv={ref.ugv_id}: "
                    f"pos=({ref.x:.2f}, {ref.y:.2f}, {ref.z:.2f}), yaw={ref.yaw:.2f}, "
                    f"d3d={d3:.1f}m, az={az:.1f}°, elev={el:.1f}°, pitch={pitch:.1f}°"
                )

            current_refs.append(
                {
                    "drone_id": ref.drone_id,
                    "ugv_id": ref.ugv_id,
                    "x": ref.x,
                    "y": ref.y,
                    "z": ref.z,
                    "yaw": ref.yaw,
                    "frame_relative": ref.frame_relative,
                    "in_dual_sensor_fov": in_fov,
                }
            )
        self.last_references = current_refs

    def on_ugv(self, msg):
        self.ugv_state_count += 1
        self.last_ugvs = [
            {"id": u.ugv_id, "x": u.x, "y": u.y, "yaw": u.yaw} for u in msg.states
        ]

    def on_feedback(self, msg):
        self.feedback_count += 1

    def on_latency(self, msg):
        self.latency_count += 1
        self.last_latencies = [
            {"drone_id": l.drone_id, "ugv_id": l.ugv_id, "latency_ms": l.latency_ms}
            for l in msg.links
        ]


def main():
    rclpy.init()
    monitor = ClosedLoopMonitor()

    duration = 60.0 if "--full" in sys.argv else 10.0
    print(f"[INFO] Monitor v2.0.0 iniciado. Coletando métricas por {duration} segundos...")
    start_time = time.time()
    while time.time() - start_time < duration:
        rclpy.spin_once(monitor, timeout_sec=0.1)

    fov_compliance = (
        100.0
        if monitor.total_references_evaluated == 0
        else (
            1.0
            - monitor.fov_violations_count / monitor.total_references_evaluated
        )
        * 100.0
    )

    results = {
        "timestamp": time.time(),
        "version": "v2.0.0",
        "monitoring_duration_sec": duration,
        "counts": {
            "active_set_msgs": monitor.active_set_count,
            "references_msgs": monitor.references_count,
            "ugv_state_msgs": monitor.ugv_state_count,
            "latency_msgs": monitor.latency_count,
            "feedback_msgs": monitor.feedback_count,
        },
        "v2_primordial_metrics": {
            "total_references_evaluated": monitor.total_references_evaluated,
            "fov_violations_count": monitor.fov_violations_count,
            "fov_compliance_percent": fov_compliance,
            "primordial_constraint_status": "PASSED" if monitor.fov_violations_count == 0 else "FAILED",
        },
        "latest_state": {
            "active_ids": monitor.last_active_set,
            "references": monitor.last_references,
            "ugvs_count": len(monitor.last_ugvs),
            "latencies": monitor.last_latencies,
        },
    }

    print("\n=== RESULTADOS DA VALIDAÇÃO EM MALHA FECHADA v2.0.0 ===")
    print(json.dumps(results, indent=2))

    for path in [
        "/workspace/docs/CLOSED_LOOP_EVALUATION.json",
        "/workspace/docs/CLOSED_LOOP_EVALUATION_V2.json",
    ]:
        with open(path, "w", encoding="utf-8") as f:
            json.dump(results, f, indent=2)

    monitor.destroy_node()
    if rclpy.ok():
        rclpy.shutdown()


if __name__ == "__main__":
    main()
