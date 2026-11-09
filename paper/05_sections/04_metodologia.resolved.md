# Metodologia

## 1. Visão Geral do Sistema

O Sistema de Otimização Multi-Objetivo ATAS (*Autonomy Through Aerial Swarms*) resolve de forma autônoma e em tempo real a alocação coordenada e a determinação de poses de visada de um enxame de veículos aéreos não tripulados (UAVs) incumbidos de escoltar robôs terrestres (UGVs) em ambiente urbano denso. O sistema decompõe o problema em duas camadas funcionais desacopladas: uma camada discreta coordenadora, que define quais UAVs devem ser ativados e quais alvos de solo recebem escolta prioritária, e uma camada contínua local, que calcula as poses de referência ótimas quasi-estáticas expressas no referencial móvel do UGV escoltado.

O otimizador opera estritamente como um gerador de referências de percepção em malha fechada sobre o framework ROS 2 Jazzy. As atribuições de controle dinâmico, anti-colisão local de curtíssimo prazo e rastreamento de trajetórias físicas ficam sob a responsabilidade exclusiva do nó planejador externo (`swarm_planner`) integrado ao simulador cooperativo baseado no MIT Drake.

## 2. Arquitetura do Otimizador

A organização modular do sistema fundamenta-se na separação estrita entre o núcleo algorítmico independente de middleware (`pure_method`) e a camada de transporte e orquestração do nó ROS 2 (`application`), conforme documentado na Figura 1 (`06_figures/architecture-layer-pure_method.svg`) e na Figura 2 (`06_figures/ros2-interfaces-part1.svg`).

| Componente | Camada | Responsabilidade | Referência no Código |
| :--- | :--- | :--- | :--- |
| `cbba_agent` | `pure_method` | Formação de feixe de tarefas, lances de leilão e consenso distribuído | `ws/src/atas_optimizer/src/cbba_agent.cpp:1-345` |
| `viewpoint_optimizer` | `pure_method` | Formulação NLP, barreira dual-sensor FoV e fallback orbital 3D | `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:1-597` |
| `atas_optimizer_node` | `application` | Ciclo de controle em tempo real, subscrição DDS e publicação de tópicos | `ws/src/atas_optimizer/src/atas_optimizer_node.cpp:1-753` |
| `main` | `application` | Ponto de entrada e inicialização do nó executável ROS 2 | `ws/src/atas_optimizer/src/main.cpp:1-26` |

A camada `pure_method` encapsula integralmente a lógica matemática das decisões de escolta e do cálculo de ponto ótimo, viabilizando testes unitários sem dependência do grafo ROS 2. A camada `application` consome o relógio autoritativo `/clock` publicado pelo simulador e estabelece a ponte de dados assíncrona entre o enxame e o planejador de trajetória.

## 3. Formulação dos Métodos de Otimização

### 3.1 Alocação Discreta com Vínculo Estrito de Escolta (CBBA)

A camada de coordenação utiliza o algoritmo de leilão distribuído CBBA (*Consensus-Based Bundle Algorithm*), estendido com a restrição de vínculo estrito de escolta ($M \ge 1$). Um UAV $i$ somente ingressa no conjunto de drones ativos (`/drones/active_set`) se obtiver a atribuição de pelo menos um UGV alvo terrestre. Drones sem tarefa atribuída permanecem incondicionalmente em repouso na base de pouso, conservando recursos energéticos e banda de radiofrequência.

Para evitar comutações instáveis induzidas por ruído de telemetria (*chattering*), o cálculo de lances incorpora histerese de reatribuição: uma troca de alvo só é autorizada se o ganho de percepção marginal exceder $15\%$ ($\Delta J > 0{,}15$). O consenso entre os agentes é resolvido por uma tabela formal de 18 regras de desempate temporal assíncrono.

### 3.2 Otimização Contínua de Viewpoint com Barreira Primordial Dual-Sensor

Para cada UAV ativo atribuído a um UGV, a camada contínua resolve um problema de programação não linear (NLP) formulado através do PolyMPC com backend Ipopt/OSQP. A pose ótima relativa $(\Delta x^*, \Delta y^*, z^*, \psi^*)$ é calculada minimizando a função de custo:

$$\mathcal{J} = - w_{\text{FoV}} \cdot \mathcal{Q}_{\text{percepção}} + w_{\text{lat}} \cdot \mathcal{L}_{\text{RF}} + w_{\text{slew}} \cdot \|\Delta \mathbf{p}_k - \Delta \mathbf{p}_{k-1}\|_2^2 + \Psi_{\text{FoV}}$$

sujeita aos limites operacionais de altitude $z \in [2{,}5, 35{,}0]\text{ m}$, raio máximo horizontal $r \le 30{,}0\text{ m}$ e raio de evasão mútua inter-drones $d_{\text{safe}} \ge 5{,}0\text{ m}$.

A garantia de visibilidade contínua é tratada como restrição primordial através da função de barreira interior $\Psi_{\text{FoV}}$:

$$\Psi_{\text{FoV}} = \begin{cases} 0{,}0, & \text{se } \text{InLiDAR} \lor \text{InCamera} \\ 10000{,}0, & \text{caso contrário} \end{cases}$$

O sensor LiDAR cobre um alcance de $100\text{ m}$ com abertura horizontal de $120^\circ$ e elevação $[-30^\circ, +10^\circ]$. A câmera RGB cobre $40\text{ m}$ com frustum horizontal de $90^\circ$ e vertical de $58{,}72^\circ$. Caso a resolução numérica do solver NLP não convirja dentro do limite rígido de prazo ($40\text{ ms}$) ou sofra oclusão por edificações 3D de Town10, o sistema aciona de forma determinística um mecanismo de *fallback* orbital 3D analítico, posicionando o UAV a $r = 12\text{ m}, z = 15\text{ m}$ com ângulo de elevação acoplado $\theta^* = \arctan(z/r) = 51{,}3^\circ$.

## 4. Protocolo Experimental e Infraestrutura

A avaliação do sistema foi executada conectando o nó de otimização em malha fechada ao simulador cooperativo Drake operando no mapa urbano Town10. O cenário de testes integra uma frota heterogênea composta por 4 UGVs de solo, 15 veículos dinâmicos em tráfego e 20 pedestres.

O pipeline de verificação automatizada compreende a execução sistemática de testes unitários e de integração de nós ROS 2 via `colcon test` e auditoria estática de código com linters canônicos (`ament_cpplint`, `ament_uncrustify`, `ruff`, `xmllint`). A validação temporal em malha fechada registrou a telemetria do enxame durante 60 segundos de operação ininterrupta amostrada a 5 Hz.
