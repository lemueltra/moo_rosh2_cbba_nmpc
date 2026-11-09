# AGENTS.md — Regras Permanentes de Engenharia e Memória do Projeto

## 1. Visão Geral do Projeto

Este repositório contém a implementação do **Sistema de Otimização Multi-Objetivo ATAS (Autonomy Through Aerial Swarms)**, operando em malha fechada sobre ROS 2 Jazzy e integrado ao simulador cooperativo baseado no MIT Drake (`/mnt/storage/drake_ros2_cpp_simulator`).

### O que este sistema faz:
1. **Seleção de Drones Ativos e Alocação de Tarefas:** Determina dinamicamente quais UAVs do enxame (até `MAX_DRONES = 5` na PoC, escalável para 10+) devem operar a cada ciclo, utilizando o algoritmo de leilão distribuído **CBBA** (*Consensus-Based Bundle Algorithm*), baseado na implementação do projeto **CBAAL** (`Jakcrimson/CBAAL`).
2. **Otimização Contínua de Poses de Referência (Viewpoint NLP):** Resolve em tempo real a pose ótima de referência $(\mathbf{p}_i^*, \mathbf{q}_i^*) = (x, y, z, \text{yaw}, \text{pitch}, \text{roll})$ para cada UAV ativo, expressa **relativamente ao UGV mais próximo**, utilizando a biblioteca **PolyMPC** (`PREDICT-EPFL/polympc`) com backend numérico **Ipopt/OSQP**.
3. **Objetivos Concorrentes:**
   - Maximizar detecções visuais corretas dos robôs de solo e alvos/obstáculos (minimizando pontos cegos através de FoV Frustum e oclusão geométrica).
   - Minimizar a latência de comunicação de cada UAV até o UGV de referência.
   - Minimizar o número de UAVs ativos para conservação de energia e recursos do enxame.

### O que este sistema NÃO faz (Fronteira Rígida de Interface):
- O otimizador **NUNCA** calcula trajetórias de transição da pose atual até a pose de referência.
- O otimizador **NUNCA** executa controle dinâmico, anti-colisão local de curto prazo (ORCA/APF) ou comandos de atuação de motores.
- Todo o planejamento de trajetória, controle e movimentação física dos UAVs ativos é executado pelo nó `swarm_planner` (`drone_planner_controller_node`) do simulador Drake.

---

## 2. Resumo da Arquitetura e Contrato ROS 2

A interface entre este otimizador e o simulador obedece estritamente ao contrato estabelecido na release 3.1.0:

```
[ ATAS MOO OPTIMIZER ]
   │
   ├── Publica: /drones/active_set  (swarm_interfaces/msg/DroneActiveSet)
   ├── Publica: /drones/references  (swarm_interfaces/msg/DroneReferenceArray) [Poses RELATIVAS ao UGV]
   │
   ├── Assina:  /clock              (rosgraph_msgs/msg/Clock) [Base de tempo autoritativa]
   ├── Assina:  /drones/state       (swarm_interfaces/msg/DroneStateArray)
   ├── Assina:  /ugv_fleet/state    (swarm_interfaces/msg/UgvStateArray)
   ├── Assina:  /comm/uav_latency   (swarm_interfaces/msg/UavLinkLatencyArray)
   ├── Assina:  /comm/nearest_ugv   (swarm_interfaces/msg/UavLinkLatencyArray)
   └── Assina:  /metrics/optimizer_feedback (swarm_interfaces/msg/OptimizerFeedback) [Médias de 60s @ 5 Hz]
```

---

## 3. Regra Cardinal de Execução: Tudo Roda Dentro do Contêiner

Todo desenvolvimento, compilação, teste, linting, benchmark e execução **DEVE OBRIGATORIAMENTE** ocorrer dentro do contêiner Docker oficial do projeto (`atas_moo_dev`).
- **Nunca** instale pacotes no host Arch Linux com `pacman` ou `pip` para este projeto.
- **Nunca** execute `colcon build` diretamente no host.
- O contêiner utiliza a mesma rede DDS (`SWARM_ROS_DOMAIN_ID=42`) e o mesmo middleware (`rmw_cyclonedds_cpp`) que o simulador, permitindo comunicação nativa sem pontes intermediárias.
- O contêiner possui acesso completo e nativo à GPU dedicada NVIDIA do host (NVIDIA RTX A2000 8 GB) via NVIDIA Container Toolkit.
- Todas as montagens de volume (bind mounts) preservam rigorosamente a propriedade de arquivos do usuário do host (`UID:GID = 1000:1000`).

---

## 4. Comandos Padronizados de Engenharia (CLI)

Todos os comandos são padronizados via `docker compose` ou pelo terminal interativo do contêiner:

### 4.1 Ciclo de Vida do Contêiner
```bash
# Subir o ambiente de desenvolvimento em background
docker compose up -d

# Entrar no shell interativo com ambiente ROS 2 e Drake carregados
docker compose exec atas_moo_dev bash

# Parar o contêiner
docker compose down
```

### 4.2 Compilação e Build (Dentro do Contêiner)
```bash
cd /workspace/ws

# Compilação Release com exportação de comandos para clangd
colcon build --symlink-install --cmake-args \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# Source do overlay do workspace
source install/setup.bash
```

### 4.3 Testes e Validação
```bash
# Executar toda a suíte de testes unitários e de integração
colcon test --event-handlers console_direct+

# Visualizar resumo de resultados dos testes
colcon test-result --all --verbose
```

### 4.4 Qualidade de Código e Linter
```bash
# C++ Formatter (Google Style / ROS 2)
find ws/src -name "*.cpp" -o -name "*.hpp" | xargs clang-format -i

# C++ Linter estático
colcon test --packages-select atas_optimizer --ctest-args -R cpplint

# Python Formatter & Linter (CBAAL wrapper / scripts)
ruff check ws/src
ruff format ws/src
mypy ws/src
```

### 4.5 Execução do Nó do Otimizador
```bash
# Lançamento do nó de otimização em malha fechada com sim_time
ros2 launch atas_optimizer atas_optimizer.launch.py use_sim_time:=true
```

---

## 5. Estilo e Padrões de Código

- **Linguagem C++:** Padrão **C++20**. Compilador GCC 13+ ou Clang 18+. Seguir o Guia de Estilo de C++ do Google adaptado para ROS 2. Proibido o uso de ponteiros brutos gerenciando memória (`new`/`delete`); use `std::unique_ptr` e `std::shared_ptr`.
- **Linguagem Python:** Padrão **Python 3.12+**. Tipagem estática com type hints (`typing`), seguindo PEP 8 e validado por `ruff` e `mypy`.
- **Documentação de Código:** Doxygen nos cabeçalhos C++ (`/// @brief`, `/// @param`, `/// @return`) e Docstrings em padrão Google para funções Python.
- **Tratamento de Exceções:** Falhas no solver numérico (ex: não convergência do Ipopt em tempo hábil) devem acionar fallback seguro mantendo a última pose válida ou o modo conservador, **sem abortar o processo**.

---

## 6. Política de Testes e Aceitação

Nenhum código é mesclado ou considerado concluído sem evidência formal de teste executado:
1. **Testes Unitários:** Validação das funções de lance de leilão do CBBA, tabelas de consenso, e restrições de limite de altitude $z \in [2.5, 35.0]\text{ m}$ e raio mínimo inter-drone.
2. **Testes de Integração de Nó:** Verificação de que o nó publica `/drones/active_set` e `/drones/references` na taxa exigida (1 Hz a 5 Hz) após receber `/ugv_fleet/state` e `/comm/uav_latency`.
3. **Testes de Regressão Numérica:** Validação de que o tempo de resolução do problema NLP no PolyMPC permanece abaixo do orçamento estrito de tempo ($< 50\text{ ms}$ por ciclo).

---

## 7. Política Estrita de Relógio e Tempo

- O nó do simulador (`swarm_simulator`) é o **servidor autoritativo de tempo**, publicando no tópico `/clock`.
- O nó do otimizador deve operar com `use_sim_time:=true`.
- **É expressamente proibido** utilizar `std::chrono::system_clock`, `std::this_thread::sleep_for` ou funções de relógio do sistema operacional para cadenciar o algoritmo; use exclusivamente `node->now()` e timers do `rclcpp` atrelados ao clock do ROS 2.

---

## 8. Regra de Fixação de Versões e Dependências

Para assegurar reprodutibilidade científica e industrial de longo prazo, todas as dependências são fixadas:
- **Sistema Operacional Base:** Ubuntu 24.04 LTS (Noble Numbat).
- **ROS 2:** Jazzy Jalisco (Release Oficial Tier 1).
- **Drake:** v1.57.0 (binário pré-compilado oficial para Ubuntu 24.04).
- **PolyMPC:** Commit pinado do repositório `PREDICT-EPFL/polympc`, integrado com Ipopt e OSQP.
- **CBAAL:** Módulo CBBA desacoplado baseado em `Jakcrimson/CBAAL` adaptado para mensagens ROS 2.
- **Solvers Numéricos:** Ipopt 3.14+, OSQP 0.6.3+, Eigen 3.4+.

---

## 9. Regras de Segurança e Isolamento

- O agente de IA e os desenvolvedores nunca devem tentar contornar limites de permissão no host.
- A comunicação com a GPU é restrita aos drivers e bibliotecas do contêiner via NVIDIA Container Runtime.
- O isolamento entre o simulador e o otimizador é garantido pela semântica de tópicos ROS 2; o otimizador trata o simulador como uma caixa-preta acessível apenas via mensagens formais.

---

## 10. Histórico de Releases e Estado Atual do Sistema

- **Versão Atual: v2.0.0 (Homologada em 27/10/2026)**
  - Suíte de 146 testes unitários e de integração aprovada com 100% de sucesso (`146 tests, 0 errors, 0 failures, 14 skipped`).
  - Implementação completa da restrição primordial de Visada de Sensor Duplo (LiDAR $100\text{ m}, 120^\circ\text{ H} \times 40^\circ\text{ V}$ e Câmera $40\text{ m}, 90^\circ\text{ H} \times 58.72^\circ\text{ V}$) com penalidade barreira $\Psi_{\text{FoV}} \ge 10000.0$ e fallback analítico orbital 3D com pitch acoplado.
  - Vínculo estrito de escolta CBBA ($M \ge 1$): ativação condicionada à atribuição de UGV alvo, mantendo drones ociosos na base e fora de `/drones/active_set`.
  - Conformidade estrita com o Contrato 3.1.0 e simulador Drake em malha fechada @ 5.0 Hz em Town10: **600 referências avaliadas com 0 violações de FoV (100.0% de conformidade)**.
  - Documentação consolidada em `docs/RELATORIO_V2.md`, `docs/PLANO_IMPLEMENTACAO_V2.md` e `docs/CLOSED_LOOP_EVALUATION_V2.json`.

- **Versão Anterior: v1.0.0 (Homologada em 26/10/2026)**
  - Suíte de 102 testes unitários e de integração aprovada com 100% de sucesso.
  - Conformidade estrita com o Contrato 3.1.0 e simulador Drake em malha fechada @ 5.0 Hz.
  - Implementação completa dos 8 módulos planejados (CBBA avançado com histerese $\Delta J > 15\%$, multi-bundle $M=2$, desvio de oclusões 3D Town10, atração ativa a pedestres, pitch acoplado, slew-rate limiter 3D, watchdog com fallback orbital e supervisão adaptativa Pareto).
  - Documentação consolidada em `docs/RELATORIO_V1.md` e `docs/PLANO_IMPLEMENTACAO_V1.md`.
