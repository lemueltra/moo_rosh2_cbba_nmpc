# Roadmap de Implementação — Sistema de Otimização Multi-Objetivo ATAS

**Data de Elaboração:** 23 de outubro de 2026  
**Status:** Planejado e Estruturado  
**Ambiente Alvo:** Contêiner Docker Oficial (`atas_moo_dev`), ROS 2 Jazzy, Drake 1.57.0, GPU NVIDIA RTX A2000

---

## Fases de Implementação e Marcos (M0 a M5)

```mermaid
flowchart LR
    M0["M0: Harness Docker & GPU"] --> M1["M1: Interfaces ROS 2 & Pacote Base"]
    M1 --> M2["M2: Módulo CBBA (Base CBAAL)"]
    M2 --> M3["M3: Solver PolyMPC / NLP"]
    M3 --> M4["M4: Integração em Malha Fechada"]
    M4 --> M5["M5: Validação de Métricas 60s & PoC"]
```

---

### Marco M0 — Infraestrutura Docker, NVIDIA GPU e AI Harness
- **Objetivo:** Estabelecer o ambiente contêinerizado reproduzível com suporte completo à aceleração por hardware GPU e compilação do Drake e ROS 2 Jazzy.
- **Entregas:**
  - `docker/Dockerfile`: Multi-stage build baseado em Ubuntu 24.04 LTS, ROS 2 Jazzy, dependências de compilação (C++20, Python 3.12, Ipopt, OSQP, Eigen3).
  - `docker-compose.yml` e `docker/entrypoint.sh`: Configuração de GPU NVIDIA (`--gpus all`), variáveis de ambiente de display e rede DDS (`SWARM_ROS_DOMAIN_ID=42`).
  - `.env` e `.env.example`: Mapeamento de UID/GID e permissões.
  - Harness de IA: Scripts e Makefile para automação de build, teste e verificação estática.
- **Critério de Aceite:**
  - `docker compose build` e `docker compose up -d` executam sem erros.
  - `nvidia-smi` dentro do contêiner reconhece a placa NVIDIA RTX A2000.
  - Comandos ROS 2 (`ros2 topic list`) no contêiner enxergam o domínio do simulador.

---

### Marco M1 — Contratos de Mensagens e Estrutura de Pacotes ROS 2
- **Objetivo:** Configurar o workspace ROS 2 (`ws/src/atas_optimizer`) com as definições de interfaces e mensagens compatíveis com o simulador.
- **Entregas:**
  - Pacote `atas_interfaces` ou vinculação direta com as mensagens do simulador (`swarm_interfaces` e `swarm_world_interfaces`).
  - Esqueleto do nó C++ `atas_optimizer_node` e estrutura de callbacks de assinantes (`/clock`, `/ugv_fleet/state`, `/drones/state`, `/comm/uav_latency`).
  - Publicadores dos tópicos `/drones/active_set` e `/drones/references`.
- **Critério de Aceite:**
  - O nó compila com `colcon build --symlink-install` sem warnings em C++20.
  - O nó é capaz de assinar os tópicos do simulador e imprimir os estados recebidos.

---

### Marco M2 — Camada Discreta: Alocação CBBA Adaptada do CBAAL
- **Objetivo:** Integrar a mecânica de leilão e consenso distribuído inspirada no repositório `Jakcrimson/CBAAL`.
- **Entregas:**
  - Classe `CbbaAgent` em C++ encapsulando os vetores de lances $y_i$, vencedores $z_i$ e timestamps $s_i$.
  - Função de lance personalizada considerando a proximidade de UGVs e atores de risco.
  - Tabela canônica de 18 regras de resolução de conflito de consenso.
  - Lógica de decisão de ativação do enxame: ativação gradual de drones (1 a 5) conforme a demanda de cobertura.
- **Critério de Aceite:**
  - Testes unitários comprovam a convergência do algoritmo de consenso em topologias completas e em anel sem impasses (*deadlocks*).
  - Publicação de `/drones/active_set` reflete o número e os IDs corretos de UAVs ativos.

---

### Marco M3 — Camada Contínua: Solver de Viewpoint com PolyMPC
- **Objetivo:** Integrar a biblioteca `PREDICT-EPFL/polympc` com o backend Ipopt para calcular as poses de referência ideais $(\Delta x^*, \Delta y^*, z^*, \psi^*)$.
- **Entregas:**
  - Vinculação da biblioteca PolyMPC no `CMakeLists.txt` do pacote.
  - Modelagem da função de custo não linear de visibilidade de FoV Frustum e oclusão de obstáculos.
  - Configuração das restrições rígidas: altitude $z \in [2.5, 35.0]\text{ m}$, raio de cobertura do UGV e separação inter-drone.
  - Solver SQP configurado com deadline de resolução $< 50\text{ ms}$.
- **Critério de Aceite:**
  - O solver calcula poses válidas satisfazendo todas as restrições em mais de 99% das iterações de teste.
  - Em cenários com múltiplos drones ativos, nenhuma pose calculada colide no plano horizontal com outro drone.

---

### Marco M4 — Integração em Malha Fechada com o Simulador Drake
- **Objetivo:** Executar o nó do otimizador em conjunto com o simulador `/mnt/storage/drake_ros2_cpp_simulator`.
- **Entregas:**
  - Launch file integrado `atas_optimizer.launch.py` operando com `use_sim_time:=true`.
  - Envio contínuo das referências relativas para o `swarm_planner`.
  - Verificação visual e funcional da movimentação dos UAVs acompanhando os UGVs em rotas Lanelet2 no mapa Town10.
- **Critério de Aceite:**
  - O simulador recebe e aceita as referências sem erros de conversão de coordenadas ou estouro de limites de velocidade.
  - O `swarm_planner` move os UAVs para as posições calculadas sem colisão.

---

### Marco M5 — Validação das Métricas Multi-Objetivo (Janela Deslizante de 60s)
- **Objetivo:** Avaliar o desempenho global do sistema com base nas métricas de realimentação em `/metrics/optimizer_feedback`.
- **Entregas:**
  - Gravação de dados em formato MCAP para análise estatística pós-ensaio.
  - Medição do compromisso de Pareto:
    - Média de detecções de alvos em 60s (`detections_mean_60s`).
    - Média e pior caso de latência V2X em 60s (`latency_mean_60s`, `latency_max_60s`).
    - Número médio de UAVs ativos na operação.
  - Relatório final de desempenho e validação da Prova de Conceito (PoC).
- **Critério de Aceite:**
  - O sistema opera estavelmente por mais de 5 minutos contínuos de simulação sem falhas.
  - Aumento estatisticamente comprovado na contagem de alvos detectados em comparação com uma linha de base estática.
