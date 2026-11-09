# Guia Completo de Teste, Monitoramento em Tempo Real e Validação (ATAS MOO v1.0.0)

Este guia prático e didático orienta você, passo a passo, em como operar, inspecionar, testar e validar o **Sistema de Otimização Multi-Objetivo ATAS v1.0.0** em malha fechada com o **Simulador MIT Drake** no mapa Town10.

---

## 1. Visão Geral da Arquitetura Operacional

O ecossistema opera com dois contêineres Docker compartilhando a mesma rede do host (`network_mode: host`) e o mesmo domínio DDS (`ROS_DOMAIN_ID=42`), garantindo comunicação nativa sem latência de bridge:

```
┌──────────────────────────────────────────────┐       ┌──────────────────────────────────────────────┐
│  CONTÊINER 1: swarm_unified_dev             │       │  CONTÊINER 2: atas_moo_dev                   │
│  (Simulador MIT Drake v1.57.0 @ 50 Hz)       │       │  (Otimizador Multi-Objetivo v1.0.0 @ 5.0 Hz)  │
│                                              │       │                                              │
│  • Base de Tempo: /clock                     │──────>│  • use_sim_time:=true                        │
│  • Telemetria UGV: /ugv_fleet/state          │──────>│  • CBBA v2 (Histerese + Multi-Bundle M=2)    │
│  • Cinemática UAV: /drones/state             │──────>│  • Otimizador PolyMPC (Desvio de Prédios)    │
│  • Latência RF: /comm/uav_latency            │──────>│  • Supervisão Adaptativa Pareto              │
│  • Feedback 60s: /metrics/optimizer_feedback │──────>│                                              │
│                                              │<──────│  • Conjunto Ativo: /drones/active_set        │
│  • Controle: drone_planner_controller_node   │<──────│  • Poses Relativas: /drones/references       │
└──────────────────────────────────────────────┘       └──────────────────────────────────────────────┘
```

---

## 2. Preparação do Ambiente e Ciclo de Vida dos Contêineres

> [!IMPORTANT]
> **Regra Cardinal:** Toda e qualquer compilação, teste e execução deve ocorrer **estritamente dentro dos contêineres Docker**. Nunca execute comandos ROS 2 diretamente no host Arch Linux.

Abra um terminal no host para inicializar os dois ambientes:

```bash
# 1. Subir o contêiner do Otimizador ATAS
cd /mnt/storage/markdown2html5/261013conversa_moo_rosh2_perplexity
docker compose up -d

# 2. Subir o contêiner do Simulador Drake
cd /mnt/storage/drake_ros2_cpp_simulator
make up
```

Verifique se ambos estão em execução:
```bash
docker ps --format "table {{.Names}}\t{{.Status}}\t{{.Image}}"
```
*Saída esperada:* Devem constar `atas_moo_dev` e `swarm_unified_dev` com status `Up`.

---

## 3. Passo a Passo: Suíte de Testes Automatizados (QA)

Antes de rodar a simulação interativa, valide a integridade do código executando a suíte de 102 testes unitários, testes de integração e linters estáticos:

```bash
# Entrar no contêiner do otimizador e rodar a suíte
docker compose exec atas_moo_dev bash -c "
  source /opt/ros/jazzy/setup.bash &&
  cd /workspace/ws &&
  colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release &&
  source install/setup.bash &&
  colcon test --packages-select atas_optimizer --event-handlers console_direct+ &&
  colcon test-result --all --verbose
"
```

> [!TIP]
> Você deve ver **`102 tests, 0 errors, 0 failures, 0 skipped`**, confirmando a aprovação das 6 suítes unitárias C++, teste de integração de nós ROS 2 e auditorias `cpplint`, `uncrustify` e `xmllint`.

---

## 4. Execução em Malha Fechada (Simulador + Otimizador)

Para visualizar e validar a operação em tempo real, recomendamos abrir **4 terminais** no seu ambiente:

### Terminal 1 — Inicializar o Simulador Drake
No terminal 1 do host:
```bash
docker exec -it swarm_unified_dev bash
source /opt/ros/jazzy/setup.bash
source /opt/underlay_ws/install/setup.bash
source /workspace/ws/install/setup.bash

# Lança o simulador completo no cenário experimental do mapa Town10 (50 Hz)
ros2 launch carla_air_bridge experiment.launch.py record_bag:=false
```
*O que observar:*
- Inicialização do nó `drone_planner_controller_node`.
- Publicação da base autoritativa de tempo `/clock` a 50 Hz.
- UGVs e pedestres gerados e em movimento pelo mapa.

---

### Terminal 2 — Inicializar o Otimizador Multi-Objetivo ATAS
No terminal 2 do host:
```bash
docker compose exec atas_moo_dev bash
source /workspace/ws/install/setup.bash

# Lança o nó otimizador operando sob relógio do simulador Drake
ros2 launch atas_optimizer atas_optimizer.launch.py use_sim_time:=true
```
*O que observar no log:*
- `ATAS Multi-Objective Optimizer v1.0.0 iniciado (Drones: 5, Rate: 5.0 Hz, Hyst: 15.0%).`
- O leilão CBBA calcula os lances e publica a lista de drones ativos.
- O solucionador PolyMPC calcula viewpoints relativos sem colisões com edifícios.

---

### Terminal 3 — Monitoramento em Tempo Real (Dashboard de Tópicos)
No terminal 3 do host, acesse o contêiner do otimizador para inspecionar os fluxos de mensagens:

#### 3.1. Checagem de Frequência dos Tópicos Contratuais:
```bash
docker compose exec atas_moo_dev bash
source /workspace/ws/install/setup.bash

# Verificar taxa do relógio (deve ser 50.0 Hz)
ros2 topic hz /clock

# Verificar taxa de envio de referências (deve ser cravada em 5.0 Hz)
ros2 topic hz /drones/references
```

#### 3.2. Inspeção do Conjunto de Drones Ativos:
```bash
# Monitora a lista dinâmica de drones em operação
ros2 topic echo /drones/active_set
```
*Saída típica:*
```yaml
header:
  stamp: {sec: 1793028517, nanosec: 331000000}
active_ids: [0, 3]
```
*(Nota: Drones em repouso [1, 2, 4] são mantidos fora da lista, conservando energia e banda de comunicação).*

#### 3.3. Inspeção das Poses de Referência 6D:
```bash
# Inspeciona as referências relativas (body frame do UGV)
ros2 topic echo /drones/references
```
*Saída típica para cada drone ativo:*
```yaml
references:
- drone_id: 0
  ugv_id: 1
  x: -14.72           # dx relativo ao UGV [m]
  y: 13.07            # dy relativo ao UGV [m]
  z: 25.0             # Altitude absoluta z [m] (dentro de [2.5, 35.0])
  yaw: -0.72          # Ângulo relativo de observação [rad]
  max_speed: 0.0      # Utiliza limite nominal do simulador
  frame_relative: true
```

---

### Terminal 4 — Visualizador Gráfico / Pygame
Para acompanhar visualmente a movimentação dos UGVs, o enxame de drones e o cone de visão (FoV) em tempo real:
```bash
docker exec -it swarm_unified_dev bash
source /workspace/ws/install/setup.bash

# Lança o visualizador 2D top-down
ros2 launch swarm_visualizer pygame_viz.launch.py
```
*(Uma janela gráfica se abrirá exibindo o mapa Town10, os prédios poligonais, as trajetórias dos robôs terrestres e a posição dos drones com seus alvos).*

---

## 5. Script de Verificação Automatizada em Malha Fechada

Para realizar uma auditoria automática e gerar um laudo de conformidade com salvamento em JSON:

```bash
docker compose exec atas_moo_dev bash -c "
  source /workspace/ws/install/setup.bash &&
  python3 /workspace/scripts/verify_closed_loop.py
"
```

O script monitora os tópicos por 10 segundos e emite um relatório com:
- Total de mensagens trocadas por tópico.
- Estado instantâneo do leilão CBBA.
- Matriz de latência e alocações de feixe.
- Arquivo gerado em: `docs/CLOSED_LOOP_EVALUATION.json`.

---

## 6. Procedimentos de Teste de Robustez e Resposta a Falhas

Você pode injetar perturbações e verificar o comportamento resiliente do sistema:

### Teste A: Reconfiguração Dinâmica de Parâmetros
Com o sistema rodando, teste a alteração online de pesos via linha de comando:
```bash
# Alterar peso de latência para forçar aproximação máxima
ros2 param set /atas_optimizer_node weight_latency 3.0

# Reduzir distância de segurança inter-drone
ros2 param set /atas_optimizer_node inter_drone_safety_dist 3.5

# Verificar no log do Terminal 2 a confirmação da alteração instantânea sem reinício
```

### Teste B: Resiliência a Timeout de Telemetria (Watchdog & Failsafe Hold)
1. No **Terminal 1**, pressione `Ctrl+C` para suspender o simulador.
2. Observe o **Terminal 2**:
   - Após 500 ms de ausência de telemetria UGV, o watchdog aciona `FAILSAFE_HOLD`.
   - O otimizador congela a última pose segura e continua publicando em taxa constante sem lançar exceções e sem abortar o processo (`SIGSEGV` / `core dumped`).
3. Relance o simulador no **Terminal 1**; o otimizador retoma a sincronização normal automaticamente.

### Teste C: Supervisão Adaptativa Pareto sob Degradação de Link
Publique manualmente uma mensagem de feedback indicando degradação de comunicação:
```bash
ros2 topic pub --once /metrics/optimizer_feedback swarm_interfaces/msg/OptimizerFeedback "{
  samples_in_window: 60,
  latency_mean_60s: 38.5,
  detections_mean_60s: 5.0
}"
```
*Comportamento esperado:* O log do otimizador acusará imediatamente:
```
[INFO] Supervisao Adaptativa (Alta Latencia 38.5 ms > 25.0 ms): w_lat=0.600, z_nominal=12.8 m
```
Os drones serão puxados para altitudes menores e para mais perto dos seus UGVs atribuídos para restabelecer a qualidade da transmissão RF.

---

## 7. Checklist de Aceitação e Homologação Final

| Item | Critério de Aceitação | Como Verificar | Status |
|:---:|---|---|:---:|
| **1** | Sincronismo estrito de clock | `ros2 topic hz /clock` @ 50 Hz com `use_sim_time:=true` | :white_check_mark: |
| **2** | Taxa de referências | `ros2 topic hz /drones/references` estável em 5.0 Hz | :white_check_mark: |
| **3** | Envelope de altitude | $z \in [2.5, 35.0]\text{ m}$ em todas as referências | :white_check_mark: |
| **4** | Semântica de coordenadas | `frame_relative == true` (body frame do UGV) | :white_check_mark: |
| **5** | Isolamento de atuação | O nó **não** publica em `/drones/cmd` nem `/planner/trajectories` | :white_check_mark: |
| **6** | Desempenho computacional | Tempo do solver PolyMPC $< 20\text{ ms}$ (limite rígido 40 ms) | :white_check_mark: |
| **7** | Continuidade temporal | Ausência de degraus de setpoint graças ao Slew-Rate Limiter | :white_check_mark: |
| **8** | Qualidade de código | 102/102 testes aprovados e 0 avisos em `ament_cpplint` / `uncrustify` | :white_check_mark: |
