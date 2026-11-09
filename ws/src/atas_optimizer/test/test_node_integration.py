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

"""Integration test for the ATAS Multi-Objective Optimizer node."""

import time
import unittest

import launch
import launch_ros.actions
import launch_testing
import launch_testing.actions
import pytest
import rclpy
from rclpy.node import Node

import swarm_interfaces.msg


@pytest.mark.launch_test
def generate_test_description():
    """Generate launch description for integration test."""
    optimizer_node = launch_ros.actions.Node(
        package='atas_optimizer',
        executable='atas_optimizer_node',
        name='atas_optimizer_node',
        output='screen',
        parameters=[{
            'use_sim_time': False,
            'max_drones': 3,
            'optimization_rate_hz': 10.0,
            'z_min': 2.5,
            'z_max': 35.0,
            'inter_drone_safety_dist': 5.0,
        }]
    )

    return launch.LaunchDescription([
        optimizer_node,
        launch_testing.actions.ReadyToTest(),
    ]), {'optimizer_node': optimizer_node}


class TestOptimizerNodeIntegration(unittest.TestCase):
    """Integration test suite verifying closed-loop publisher/subscriber contract."""

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()

    def setUp(self):
        self.node = Node('test_optimizer_client')

    def tearDown(self):
        self.node.destroy_node()

    def test_active_set_and_references_pipeline(self):
        """Verify that feeding UGVs and latency produces valid references."""
        # 1. Configurar Publishers para alimentar o otimizador
        ugv_pub = self.node.create_publisher(
            swarm_interfaces.msg.UgvStateArray,
            '/ugv_fleet/state',
            10
        )
        latency_pub = self.node.create_publisher(
            swarm_interfaces.msg.UavLinkLatencyArray,
            '/comm/uav_latency',
            10
        )

        # 2. Configurar Subscribers para verificar as saídas do otimizador
        received_active_sets = []
        received_references = []

        self.active_set_sub = self.node.create_subscription(
            swarm_interfaces.msg.DroneActiveSet,
            '/drones/active_set',
            lambda msg: received_active_sets.append(msg),
            rclpy.qos.QoSProfile(
                depth=1,
                durability=rclpy.qos.DurabilityPolicy.TRANSIENT_LOCAL,
                reliability=rclpy.qos.ReliabilityPolicy.RELIABLE
            )
        )

        self.reference_sub = self.node.create_subscription(
            swarm_interfaces.msg.DroneReferenceArray,
            '/drones/references',
            lambda msg: received_references.append(msg),
            10
        )

        # 3. Criar e publicar mensagens de teste
        ugv_msg = swarm_interfaces.msg.UgvStateArray()
        ugv1 = swarm_interfaces.msg.UgvState()
        ugv1.ugv_id = 1
        ugv1.active = True
        ugv1.x = 20.0
        ugv1.y = 15.0
        ugv1.yaw = 0.0
        ugv_msg.states.append(ugv1)

        ugv2 = swarm_interfaces.msg.UgvState()
        ugv2.ugv_id = 2
        ugv2.active = True
        ugv2.x = 45.0
        ugv2.y = 50.0
        ugv2.yaw = 1.57
        ugv_msg.states.append(ugv2)

        lat_msg = swarm_interfaces.msg.UavLinkLatencyArray()
        l0 = swarm_interfaces.msg.UavLinkLatency()
        l0.drone_id = 0
        l0.ugv_id = 1
        l0.latency_ms = 4.5
        lat_msg.links.append(l0)

        # 4. Loop de envio e recepção durante 2 segundos
        start_time = time.time()
        while time.time() - start_time < 2.0:
            ugv_pub.publish(ugv_msg)
            latency_pub.publish(lat_msg)
            rclpy.spin_once(self.node, timeout_sec=0.1)
            if len(received_active_sets) > 0 and len(received_references) > 0:
                if any(len(r.references) > 0 for r in received_references):
                    break

        # 5. Asserções rigorosas de validação do contrato 3.1.0
        self.assertGreater(len(received_active_sets), 0, 'Nenhum active_set recebido!')
        self.assertGreater(len(received_references), 0, 'Nenhuma referência recebida!')

        last_ref_msg = next(r for r in reversed(received_references) if len(r.references) > 0)
        self.assertGreater(len(last_ref_msg.references), 0, 'Lista de referências vazia!')

        for ref in last_ref_msg.references:
            # Contrato Rígido: Referências relativas ao body frame do UGV
            self.assertTrue(ref.frame_relative, 'A referência deve ser frame_relative == True!')
            # Contrato Rígido: Altitude z entre 2.5m e 35.0m
            self.assertGreaterEqual(ref.z, 2.5, f'Altitude {ref.z} abaixo de 2.5m!')
            self.assertLessEqual(ref.z, 35.0, f'Altitude {ref.z} acima de 35.0m!')
            # Validar limites de velocidade e integridade de ID
            self.assertEqual(ref.max_speed, 0.0)
            self.assertIn(ref.ugv_id, [1, 2], 'UGV ID desconhecido na referência!')
