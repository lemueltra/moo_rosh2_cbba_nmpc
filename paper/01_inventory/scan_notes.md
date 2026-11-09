# Notas de Varredura e Limites da Análise (Scan Notes)

## 1. Visão Geral

Este documento registra as limitações conhecidas, itens não resolvidos e fronteiras de observação identificadas durante a varredura estática de código com `scan_inventory.py` e `scan_ros2.py`.

## 2. Limitações Conhecidas da Varredura Estática

1. **Varredura ROS 2 focada em Python:** O scanner determinístico `scan_ros2.py` analisa nativamente árvores Python. Os 5 arquivos C++ que utilizam `rclcpp` (`atas_optimizer_node.hpp`, `atas_optimizer_node.cpp`, `main.cpp`, `cbba_agent.hpp`, `viewpoint_optimizer.hpp`) foram contabilizados no inventário, mas suas publicações/subscrições C++ são registradas formalmente a partir do contrato formal de integração da arquitetura.
2. **Tópicos com extremidade externa ao pacote analisado:** Os 8 tópicos detectados na varredura possuem uma de suas pontas (publisher ou subscriber) no simulador Drake (`swarm_planner`, `drake_world`), que foi deliberadamente excluído do inventário conforme definido no escopo (`00_intake/scope.md`):
   - `/clock` (publicado pelo Drake, assinado pelo otimizador)
   - `/ugv_fleet/state` (publicado pelo Drake, assinado pelo otimizador e monitores)
   - `/drones/state` (publicado pelo Drake, assinado pelo otimizador e monitores)
   - `/comm/uav_latency` (publicado pelo simulador de RF do Drake, assinado pelo otimizador)
   - `/comm/nearest_ugv` (publicado pelo simulador de RF do Drake, assinado pelo otimizador)
   - `/metrics/optimizer_feedback` (publicado pelo Drake, assinado pelo otimizador e monitores)
   - `/drones/active_set` (publicado pelo otimizador, assinado pelo `swarm_planner` do Drake)
   - `/drones/references` (publicado pelo otimizador, assinado pelo `swarm_planner` do Drake)
3. **Mapeamento de Camadas (Layers):** As classes `CbbaAgent` e `ViewpointOptimizer` foram reclassificadas de `application` para `pure_method` após revisão humana da heurística do scanner, pois contêm exclusivamente lógica matemática, algoritmos de consenso e cálculo NLP sem qualquer dependência ou I/O direto com o middleware ROS 2 ou sistema operacional.

## 3. Itens Não Resolvidos (`unresolved[]`)

- `5 C++ file(s) reference rclcpp and were NOT scanned (this scanner parses Python only)`
- `8 topic(s) have no publisher or no subscriber in the scanned tree: the other end is an external node or the name was built at runtime`

Todos os itens não resolvidos decorrem do isolamento estrito entre o nó de otimização em C++ e o simulador Drake, conforme a fronteira de escopo estabelecida no Intake.
