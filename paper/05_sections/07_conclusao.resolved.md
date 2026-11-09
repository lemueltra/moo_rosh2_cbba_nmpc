# Conclusão

## 1. Retomada do Objetivo

Este trabalho propôs e validou uma arquitetura hierárquica em malha fechada para otimização multi-objetivo e alocação dinâmica de enxames de UAVs escoltando veículos terrestres em ambientes urbanos densos, assegurando visibilidade contínua sob restrições estritas de tempo real e comunicação.

## 2. Contribuições Realizadas

As principais contribuições demonstradas neste trabalho dividem-se em formulação teórica e entrega de engenharia de software robótico:

| # | Contribuição | Tipo | Sustentada por |
| :--- | :--- | :--- | :--- |
| 1 | Formulação hierárquica desacoplada com vínculo estrito de escolta ($M \ge 1$) e barreira primordial dual-sensor ($\Psi_{\text{FoV}} \ge 10000{,}0$) com *fallback* orbital 3D, eliminando violações de visada | Científica | `MET-096`, `MET-097`, `MET-102`, `CMP-008`, `CMP-013` |
| 2 | Arquitetura modular de nós ROS 2 Jazzy operando com tempo médio de resolução de 1,8 ms (< 20 ms de deadline) em malha fechada sobre simulação física de alta fidelidade Drake | Engenharia | `MET-099`, `MET-091`, `CMP-006`, `CMP-010` |

## 3. Limites Declarados

1. **Dependência de Telemetria de Estado Perfeita:** O otimizador consome estados consolidados dos UGVs e atores via tópicos ROS 2; o processamento bruto de nuvens de pontos ou imagens não foi executado a bordo do nó de otimização.
2. **Escopo Delimitado da Otimização:** O sistema não realiza planejamento cinemático ou anti-colisão local de curtíssimo prazo, dependendo do nó planejador externo (`swarm_planner`) para execução física das trajetórias no simulador.
3. **Escalaridade Avaliada:** A validação em malha fechada foi executada no mapa Town10 com enxame nominal de 5 UAVs e 4 UGVs.

## 4. Trabalhos Futuros

1. **Inclusão de Ruído Sensorial Estocástico:** Incorporar filtros de Kalman estendidos descentralizados para absorver incertezas de localização GPS-denied nos robôs de solo.
2. **Integração com Percepção Concorrente A Bordo:** Avaliar o impacto computacional da extração de alvos diretamente de redes neurais embarcadas nos drones em conjunto com o solver NLP.

# Apêndice A — Formulação Matemática e Algorítmica das Métricas de Otimização

Este apêndice detalha exaustivamente, de forma analítica e algorítmica, cada uma das métricas, termos de custo, penalidades de barreira e restrições que compõem o Sistema de Otimização Multi-Objetivo ATAS v2.0.0. Apresenta-se o equacionamento formal unificado, a decomposição hierárquica do problema, os procedimentos algorítmicos e gradientes passo a passo, a correspondência linha a linha com o código C++20 implementado e a mecânica de utilização pelo simulador físico MIT Drake em malha fechada.

## A.1 Formulação Unificada do Problema Global de Otimização Multi-Objetivo

O objetivo primordial do sistema ATAS consiste em coordenar de forma autônoma e descentralizada um enxame de até $N_{\text{uav}}$ veículos aéreos não tripulados escoltando uma frota de $N_{\text{ugv}}$ robôs terrestres em ambientes urbanos densos. O sistema resolve em tempo de execução um problema de Programação Não Linear Inteira Mista (MINLP — *Mixed-Integer Nonlinear Programming*), expresso genericamente por:

$$\min_{\mathcal{A} \subseteq \{1, \dots, N_{\text{uav}}\}, \; \mathbf{X}^*} \mathcal{J}_{\text{global}}(\mathcal{A}, \mathbf{X}^*)$$

onde:
- $\mathcal{A}$ denota o conjunto discreto de UAVs ativos selecionados para operação ($|\mathcal{A}| \le N_{\text{uav}}$).
- $\mathbf{X}^* = \{(\mathbf{p}_i^*, \mathbf{q}_i^*)\}_{i \in \mathcal{A}}$ representa o conjunto de poses de referência contínuas quasi-estáticas de cada UAV ativo, expressas no referencial local móvel do UGV escoltado.
- $\mathbf{p}_i^* = (\Delta x_i^*, \Delta y_i^*, z_i^*)^T \in \mathbb{R}^3$ e $\mathbf{q}_i^* = (\Delta \psi_i^*, \theta_i^*)^T \in [-\pi, \pi) \times [-\pi/2, \pi/2)$ especificam as coordenadas relativas de translação e atitude (guinada e arfagem).

A função custo global unificada $\mathcal{J}_{\text{global}}$ pondera os três objetivos concorrentes do sistema sob as restrições físicas de segurança e sensoriamento:

$$\mathcal{J}_{\text{global}}(\mathcal{A}, \mathbf{X}^*) = w_{\text{active}} \cdot |\mathcal{A}| + \sum_{i \in \mathcal{A}} \left[ w_{\text{lat}} \cdot \mathcal{L}_{i, \text{ugv}(i)} + w_{\text{det}} \cdot \mathcal{J}_{\text{FoV}}(\mathbf{p}_i^*, \mathbf{q}_i^*) + C_{\text{safe}}(\mathbf{p}_i^*) + \Psi_{\text{FoV}}(\mathbf{p}_i^*, \mathbf{q}_i^*) \right]$$

sujeita às restrições canônicas de operação:
1. **Conservação e Ativação Estrita:** UAV $i \in \mathcal{A} \iff |b_i| \ge 1$ (UAVs sem tarefas de escolta atribuídas permanecem desligados em bases de solo $\mathbf{p}_{\text{base}, i} = (5i, 0{,}0, 0{,}5)\text{ m}$).
2. **Capacidade Máxima de Feixe:** Cada UAV assume no máximo $M_{\text{max}} = 2$ tarefas simultâneas ($|b_i| \le M_{\text{max}}$).
3. **Restrição Primordial Dual-Sensor:** $\operatorname{InDualSensorFoV}(\mathbf{p}_{\text{uav}, i}, \mathbf{q}_i, \mathbf{p}_{\text{ugv}}) \land \operatorname{CheckLoS}(\mathbf{p}_{\text{uav}, i}, \mathbf{p}_{\text{ugv}}) = \text{True}$.
4. **Envoltória de Voo Operacional:** Altitude $z_i \in [z_{\text{min}}, z_{\text{max}}] = [2{,}5, 35{,}0]\text{ m}$ e raio horizontal $r_{\text{horiz}, i} = \sqrt{\Delta x_i^2 + \Delta y_i^2} \le R_{\text{max}} = 30{,}0\text{ m}$.
5. **Separação Espacial Inter-UAV:** $\|\mathbf{p}_i - \mathbf{p}_j\|_2 \ge d_{\text{safe}} = 5{,}0\text{ m}, \; \forall j \ne i, \; j \in \mathcal{A}$.
6. **Continuidade Temporal e Dinâmica ($C^0 / C^1$):** $\|\Delta \mathbf{p}_i(t) - \Delta \mathbf{p}_i(t - \Delta t)\|_2 \le v_{\text{max}} \Delta t$ e $|\Delta \psi_i(t) - \Delta \psi_i(t - \Delta t)| \le \omega_{\text{max}} \Delta t$.

Dado que a resolução conjunta em tempo real do problema MINLP a 5 Hz é computacionalmente proibitiva em plataformas robóticas embarcadas, a arquitetura ATAS decompõe $\mathcal{J}_{\text{global}}$ em três níveis hierárquicos desacoplados:
- **Nível 1 (Discreto — CBBA @ 1–2 Hz):** Resolve a seleção do conjunto ativo $\mathcal{A}$ e a associação drone-UGV através de leilões distribuídos, otimizando o compromisso entre recompensa perceptual e latência de rede.
- **Nível 2 (Contínuo — Viewpoint NLP @ 5 Hz):** Para cada drone $i \in \mathcal{A}$ alocado ao UGV $k$, resolve o problema contínuo de ponto de vista ótimo minimizando a função $\mathcal{J}_{\text{NLP}} = w_{\text{det}} \mathcal{J}_{\text{FoV}} + C_{\text{safe}} + \Psi_{\text{FoV}}$.
- **Nível 3 (Supervisão Adaptativa Pareto @ 5 Hz com janela de 60 s):** Modula os multiplicadores de Lagrange e pesos de Pareto $\{w_{\text{lat}}, w_{\text{det}}, z_{\text{nominal}}\}$ com base na resposta dinâmica observada em malha fechada.

## A.2 Métricas da Camada Discreta de Coordenação (CBBA)

### A.2.1 Métrica de Recompensa Perceptual Espacial Amortecida ($R_{ij}$)

A recompensa perceptual esperada da atribuição de uma tarefa de escolta $j$ ao agente $i$ quantifica o valor operacional da observação, atenuado pelo custo energético do deslocamento até a vizinhança do robô de solo:

$$R_{ij} = V_j \cdot P_j \cdot \exp\left(-\lambda_{\text{dist}} \cdot d_{ij}\right)$$

onde:
- $V_j \in \mathbb{R}^+$ é o valor intrínseco da tarefa (`TaskInfo::base_value`, tipicamente $10{,}0$).
- $P_j \in \mathbb{R}^+$ é a prioridade tática do comboio (`TaskInfo::priority`, nominal $1{,}0$).
- $\lambda_{\text{dist}} = 0{,}02\text{ m}^{-1}$ é a constante de decaimento espacial (`cbba_lambda_dist`).
- $d_{ij}$ denota a distância euclidiana tridimensional em metros entre o ponto de partida do segmento de voo $(x_{\text{from}}, y_{\text{from}}, z_{\text{from}})$ e a posição atual do UGV alvo $\mathbf{p}_j = (x_j, y_j, z_j)$:

$$d_{ij} = \sqrt{(x_{\text{from}} - x_j)^2 + (y_{\text{from}} - y_j)^2 + (z_{\text{from}} - z_j)^2}$$

**Procedimento Algorítmico em Multi-Bundle ($M_{\text{max}} = 2$):**
1. Se o feixe do agente está vazio ($b_i = \emptyset$), a origem corresponde à posição atual do drone: $(x_{\text{from}}, y_{\text{from}}, z_{\text{from}}) = (p_{x,i}, p_{y,i}, p_{z,i})$.
2. Se o feixe já contém uma tarefa primária ($|b_i| = 1$), a origem é atualizada para a coordenada da tarefa já arrematada $b_i[0]$, calculando a distância incremental de roteamento entre os dois UGVs.
3. **Direção no Custo:** Maximização (termo positivo dominante no lance).
4. **Código C++:** `CbbaAgent::compute_bid_score` em `ws/src/atas_optimizer/src/cbba_agent.cpp:108-138`.
5. **Impacto no Simulador Drake:** Concentra os UAVs em missões com alta viabilidade geométrica, eliminando rotas com tempos de trânsito proibitivos e preservando a carga útil da bateria.

### A.2.2 Métrica de Penalidade de Latência de Rede e Contenção RF ($L_{ij}$)

A transmissão confiável de telemetria e fluxos de dados sensoriais exige baixa latência e mitigação de interferências em canais compartilhados. A penalidade de comunicação é modelada por:

$$L_{ij} = w_{\text{lat}} \cdot \mathcal{L}_{ij}^{\text{efetiva}}$$

com

$$\mathcal{L}_{ij}^{\text{efetiva}} = \begin{cases} \mathcal{L}_{ij} \cdot \kappa_{\text{RF}}, & \text{se } z_j \ge 0 \land z_j \ne i \\ \mathcal{L}_{ij}, & \text{caso contrário} \end{cases}$$

onde:
- $\mathcal{L}_{ij}$ é a latência física medida em milissegundos, consumida do tópico `/comm/uav_latency` (valor nominal $10{,}0\text{ ms}$ em caso de interrupção momentânea da telemetria).
- $w_{\text{lat}} = 0{,}5$ representa o peso de penalização da latência de rádio.
- $\kappa_{\text{RF}} = 1{,}5$ (`cbba_rf_contention_penalty`) é o fator multiplicativo de contenção espectral. Se a tarefa $j$ já possui dono provisório atribuído na tabela de consenso ($z_j \ne i$), a latência presumida pelo concorrente é penalizada em $50\%$.
- **Direção no Custo:** Minimização (termo subtrativo no cálculo do lance).
- **Código C++:** `CbbaAgent::compute_bid_score` em `ws/src/atas_optimizer/src/cbba_agent.cpp:126-135`.
- **Impacto no Simulador Drake:** Promove a dispersão natural do enxame sobre os múltiplos UGVs, impedindo conglomerações que saturariam o enlace de radiofrequência simulado.

### A.2.3 Métrica de Pontuação Líquida de Lance ($c_{ij}$)

A atratividade final consolidada para a inserção da tarefa $j$ no feixe do agente $i$ é dada por:

$$c_{ij} = \max\left(0{,}01, \; R_{ij} - L_{ij}\right)$$

A imposição do piso positivo $c_{\text{min}} = 0{,}01$ garante a integridade estrita das tabelas de consenso, prevenindo lances nulos ou negativos que inviabilizariam os critérios formais de convergência do CBBA.

### A.2.4 Métrica de Histerese de Reatribuição Anti-Chattering ($\Delta_{\text{hist}}$)

Para mitigar a comutação rápida e oscilatória de tarefas entre drones decorrente de ruídos estocásticos de medição de latência, o algoritmo impõe uma barreira de histerese estrita:

$$\text{Substituição Válida de Posse} \iff c_{ij} > y_j \cdot (1 + \Delta_{\text{hist}})$$

onde:
- $y_j$ é o lance vencedor vigente registrado na tabela de consenso para a tarefa $j$.
- $\Delta_{\text{hist}} = 0{,}15$ ($15\%$) denota o limiar de histerese (`cbba_hysteresis`).
- Se o agente já é o proprietário vigente da tarefa ($z_j = i$), a condição relaxa para superação estrita simples: $c_{ij} > y_j$.
- **Código C++:** `CbbaAgent::build_bundle` em `ws/src/atas_optimizer/src/cbba_agent.cpp:193-205`.
- **Impacto no Simulador Drake:** Elimina oscilações espúrias de planejamento (*chattering*), estabilizando as trajetórias de voo no simulador e reduzindo a zero reversões repentinas de comando.

### A.2.5 Métrica de Resolução de Conflitos e Consenso Descentralizado

O alinhamento assíncrono entre agentes baseia-se na troca periódica dos vetores de atribuição $\mathbf{z}_i$, lances $\mathbf{y}_i$ e registros temporais $\mathbf{s}_i$. A rotina `resolve_conflict` processa os pacotes recebidos aplicando a matriz canônica de 18 regras do CBBA:
1. Atualização do relógio lógico: $s_{ik} = s_{jk}$, para todos os agentes $k \ne i$.
2. Comparação de lances com precisão de máquina $\epsilon = 10^{-6}$: em caso de superioridade estrita de lance de um agente com informação mais recente, o agente $i$ cede a tarefa e esvazia recursivamente as tarefas subsequentes do seu feixe a partir da posição de corte.
- **Código C++:** `CbbaAgent::resolve_conflict` em `ws/src/atas_optimizer/src/cbba_agent.cpp:233-335`.
- **Impacto no Simulador Drake:** Garante convergência finita do enxame para um escalonamento sem colisões de tarefas em menos de 3 ciclos de consenso.

### A.2.6 Métrica de Vínculo Estrito de Escolta ($M \ge 1$) e Standby de Base

A minimização do consumo energético do enxame é governada pela restrição canônica de ativação:

$$\text{UAV } i \in \mathcal{A} \iff |b_i| \ge 1 \iff \exists j \in \{1, \dots, N_{\text{ugv}}\} \text{ tal que } z_j = i$$

Caso um UAV não retenha nenhuma tarefa após a fase de consenso ($|b_i| = 0$):
- Sua coordenada de referência é fixada na base de solo: $\mathbf{p}_{\text{base}, i} = (5 \cdot i, 0{,}0, 0{,}5)\text{ m}$.
- O drone é expressamente **removido** do vetor `/drones/active_set`.
- Nenhuma referência dinâmica de aproximação é transmitida ao simulador Drake para esta plataforma.
- **Código C++:** `AtasOptimizerNode::optimization_loop` em `ws/src/atas_optimizer/src/atas_optimizer_node.cpp:520-550`.
- **Impacto no Simulador Drake:** Desliga o cálculo de física de rotores para drones ociosos, poupando CPU/GPU do simulador e mantendo no ar estritamente os drones com atribuição ativa.

## A.3 Métricas da Camada Contínua de Viewpoint (NLP / PolyMPC)

### A.3.1 Transformação Cinemática de Coordenadas

Para cada UAV ativo $i$ escoltando o UGV $k$, as variáveis de decisão da otimização contínua representam a pose quasi-estática no referencial local móvel do UGV: $(\Delta x, \Delta y, z, \Delta \psi)$. A projeção cinemática no sistema de coordenadas inercial do mundo (Town10) é computada por:

$$\begin{bmatrix} x_{\text{uav}} \\ y_{\text{uav}} \\ z_{\text{uav}} \end{bmatrix} = \begin{bmatrix} x_{\text{ugv}} \\ y_{\text{ugv}} \\ 0 \end{bmatrix} + \begin{bmatrix} \cos(\psi_{\text{ugv}}) & -\sin(\psi_{\text{ugv}}) & 0 \\ \sin(\psi_{\text{ugv}}) & \cos(\psi_{\text{ugv}}) & 0 \\ 0 & 0 & 1 \end{bmatrix} \begin{bmatrix} \Delta x \\ \Delta y \\ z \end{bmatrix}$$

$$\psi_{\text{uav}} = \operatorname{wrap\_pi}\left(\psi_{\text{ugv}} + \Delta \psi\right)$$

com $\operatorname{wrap\_pi}(\alpha) = \operatorname{atan2}(\sin \alpha, \cos \alpha) \in [-\pi, \pi)$.

### A.3.2 Métrica de Cobertura e Pegada Perceptual Ponderada ($\mathcal{Q}_{\text{percepção}}$)

A qualidade da cobertura visual proporcionada pela referência é quantificada pela soma ponderada da visibilidade dos alvos e atores presentes no cone sensorial:

$$\mathcal{Q}_{\text{percepção}}(\Delta x, \Delta y, z, \Delta \psi) = \sum_{k \in \mathcal{T}_{\text{visíveis}}} \left(\frac{z}{z_{\text{max}}}\right) \cdot \cos(\Delta\psi_k) \cdot w_k$$

onde:
- $\mathcal{T}_{\text{visíveis}}$ é o conjunto de alvos que atendem aos limites geométricos do sensor:
  - Distância euclidiana horizontal: $d_{2\text{D}, k} = \sqrt{(x_k - x_{\text{uav}})^2 + (y_k - y_{\text{uav}})^2} \in [1{,}0, 40{,}0]\text{ m}$.
  - Desvio azimutal horizontal: $|\Delta\psi_k| \le 45^\circ$ ($90^\circ$ de abertura útil), com:

$$\Delta\psi_k = \left|\operatorname{wrap\_pi}\left(\operatorname{atan2}\left(y_k - y_{\text{uav}}, \; x_k - x_{\text{uav}}\right) - \psi_{\text{uav}}\right)\right|$$

- $w_k$ é o peso semântico de relevância operacional:
  - UGV escoltado: $w_k = 1{,}0$.
  - Veículos dinâmicos de tráfego NPC: $w_k = 2{,}0$.
  - Pedestres vulneráveis em travessia: $w_k = 3{,}0$.
- O termo proporcional $z / z_{\text{max}}$ (com $z_{\text{max}} = 35{,}0\text{ m}$) premia altitudes que ampliam a projeção da pegada sensorial (*footprint*) no solo.
- **Direção no Custo:** Maximização. No problema de minimização, entra com sinal negativo: $-\mathcal{Q}_{\text{percepção}}$.
- **Código C++:** `ViewpointOptimizer::evaluate_fov_cost` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:457-472`.
- **Impacto no Simulador Drake:** Conduz o UAV para quadrantes que maximizam a observação de pedestres e veículos nas imediações do UGV, antecipando perigos para o módulo de percepção do robô terrestre.

### A.3.3 Restrição Primordial Dual-Sensor e Função Barreira Interior ($\Psi_{\text{FoV}}$)

A preservação incondicional da linha de visada do UGV escoltado em pelo menos um dos sensores embarcados ($\text{LiDAR} \lor \text{Câmera}$) é assegurada por uma barreira interior estrita:

$$\Psi_{\text{FoV}}(\mathbf{p}_{\text{uav}}, \psi_{\text{uav}}, \theta^*, \mathbf{p}_{\text{ugv}}) = \begin{cases} 0{,}0, & \text{se } \operatorname{InDualSensorFoV} \land \operatorname{CheckLoS}(\mathbf{p}_{\text{uav}}, \mathbf{p}_{\text{ugv}}) \\ 10000{,}0 + 1000{,}0 \cdot \max\left(0{,}0, \; r_{\text{horiz}} - R_{\text{max}}\right), & \text{caso contrário} \end{cases}$$

com $r_{\text{horiz}} = \sqrt{\Delta x^2 + \Delta y^2}$ e $R_{\text{max}} = 30{,}0\text{ m}$.

**Modelo do Sensor LiDAR 3D:**
O alvo $\mathbf{p}_{\text{tgt}}$ está contido no volume do LiDAR ($\operatorname{InLiDAR} \equiv \text{True}$) se:
1. Alcance esférico tridimensional: $\|\mathbf{p}_{\text{tgt}} - \mathbf{p}_{\text{uav}}\|_2 \le 100{,}0\text{ m}$.
2. Abertura azimutal horizontal: $|\Delta\phi_{\text{lidar}}| \le 60^\circ$ ($120^\circ$ de abertura total), onde $\Delta\phi_{\text{lidar}} = \operatorname{wrap\_pi}(\operatorname{atan2}(y_{\text{tgt}} - y_{\text{uav}}, x_{\text{tgt}} - x_{\text{uav}}) - \psi_{\text{uav}})$.
3. Ângulo de elevação vertical: $\beta_{\text{elev}} \in [-30^\circ, +10^\circ]$, onde:

$$\beta_{\text{elev}} = \operatorname{atan2}\left(z_{\text{tgt}} - z_{\text{uav}}, \; \sqrt{(x_{\text{tgt}} - x_{\text{uav}})^2 + (y_{\text{tgt}} - y_{\text{uav}})^2}\right)$$

**Modelo da Câmera RGB com Pitch Solidário Acoplado:**
O alvo está contido no frustum da câmera ($\operatorname{InCamera} \equiv \text{True}$) se:
1. Alcance tridimensional: $\|\mathbf{p}_{\text{tgt}} - \mathbf{p}_{\text{uav}}\|_2 \le 40{,}0\text{ m}$.
2. Abertura azimutal horizontal: $|\Delta\phi_{\text{cam}}| \le 45^\circ$ ($90^\circ$ de abertura total).
3. Abertura vertical acoplada ao pitch do chassi: $|\beta_{\text{elev}} - \theta_{\text{pitch}}| \le 29{,}36^\circ$ ($58{,}72^\circ$ total), onde a inclinação nominal de arfagem é acoplada analiticamente à distância horizontal e altitude:

$$\theta^* = \arctan\left(\frac{z_{\text{uav}}}{\max(0{,}1, \; r_{\text{horiz}})}\right)$$

- **Código C++:** `ViewpointOptimizer::is_in_lidar_fov`, `is_in_camera_fov`, `evaluate_fov_cost` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:115-235, 434-441`.
- **Impacto no Simulador Drake:** Elimina integralmente pontos cegos e perdas de contato visual com o UGV ao longo de curvas acentuadas e manobras evasivas em Town10.

### A.3.4 Métrica de Oclusão 3D e Ray-Casting LoS ($\mathcal{P}_{\text{oclusão}}$)

A desobstrução da linha de visada direta ($\operatorname{CheckLoS}$) é validada por meio de testes analíticos de interseção de segmento contra as caixas delimitadoras orientadas no eixo (AABB — *Axis-Aligned Bounding Boxes*) dos 30 edifícios mapeados em Town10, utilizando o algoritmo de Slab (*Kay-Kajiya*):

$$\operatorname{CheckLoS}(\mathbf{p}_1, \mathbf{p}_2) = \bigwedge_{b \in \mathcal{B}} \neg \operatorname{RayAABBIntersect}(\mathbf{p}_1, \mathbf{p}_2 - \mathbf{p}_1, \text{box}_b)$$

Para cada edifício $b$ com limites $[x_{\text{min}}, x_{\text{max}}] \times [y_{\text{min}}, y_{\text{max}}] \times [0{,}0, h_b]$, determinam-se os intervalos de interseção paramétrica:

$$t_{x,\text{min}} = \frac{x_{\text{min}} - p_{1,x}}{p_{2,x} - p_{1,x}}, \quad t_{x,\text{max}} = \frac{x_{\text{max}} - p_{1,x}}{p_{2,x} - p_{1,x}}$$

$$t_{\text{enter}} = \max\left(\min(t_{x,\text{min}}, t_{x,\text{max}}), \min(t_{y,\text{min}}, t_{y,\text{max}}), \min(t_{z,\text{min}}, t_{z,\text{max}})\right)$$

$$t_{\text{exit}} = \min\left(\max(t_{x,\text{min}}, t_{x,\text{max}}), \max(t_{y,\text{min}}, t_{y,\text{max}}), \max(t_{z,\text{min}}, t_{z,\text{max}})\right)$$

Ocorre colisão ótica com a estrutura se $t_{\text{enter}} \le t_{\text{exit}} \land t_{\text{exit}} \ge 0{,}0 \land t_{\text{enter}} \le 1{,}0$. Para atores prioritários ($w_k > 2{,}0$), a oclusão gera uma penalidade aditiva:

$$\mathcal{P}_{\text{oclusão}} = \sum_{k \in \mathcal{T}_{\text{prioritários}}} 10{,}0 \cdot \mathbb{I}\left(\neg \operatorname{InDualSensorFoV}(k) \lor \neg \operatorname{CheckLoS}(\mathbf{p}_{\text{uav}}, \mathbf{p}_k)\right)$$

- **Código C++:** `ViewpointOptimizer::check_los` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:85-113`.
- **Impacto no Simulador Drake:** Força o reposicionamento do UAV para longe de fachadas e quinas cegas de edifícios, garantindo cobertura persistente de cruzamentos.

### A.3.5 Métrica de Repulsão Anti-Colisão Inter-UAVs ($C_{\text{safe}}$)

Quando múltiplos drones atuam simultaneamente nas imediações do mesmo comboio terrestre, aplica-se uma barreira repulsiva harmônica baseada na distância horizontal mútua $d_{ij}$:

$$C_{\text{safe}} = \sum_{j \ne i, \; \text{ugv}_j = \text{ugv}_i} \frac{w_{\text{safe}} \cdot (d_{\text{safe}} - d_{ij})}{\max(0{,}1, \; d_{ij})}, \quad \forall d_{ij} < d_{\text{safe}}$$

onde $d_{\text{safe}} = 5{,}0\text{ m}$ é o raio de segurança e $w_{\text{safe}} = 10{,}0$ é o peso da barreira.

O gradiente repulsivo analítico aplicado no ajuste de posição $(\Delta x, \Delta y)$ é deduzido por:

$$\nabla_{\Delta \mathbf{p}} C_{\text{safe}} = - \frac{w_{\text{safe}} \cdot d_{\text{safe}}}{d_{ij}^2} \cdot \frac{\Delta \mathbf{p}_i - \Delta \mathbf{p}_j}{d_{ij}}$$

- **Código C++:** `ViewpointOptimizer::solve_viewpoint` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:546-557`.
- **Impacto no Simulador Drake:** Mantém uma zona de amortecimento espacial em torno de cada drone, evitando que o planejador de curto prazo ($A^* + \text{ORCA}$) do simulador precise abortar trajetórias ou desacelerar bruscamente.

### A.3.6 Procedimento Algorítmico de Otimização e Cálculo de Gradientes

A minimização da função $\mathcal{J}_{\text{NLP}} = w_{\text{det}} \mathcal{J}_{\text{FoV}} + C_{\text{safe}} + \Psi_{\text{FoV}}$ ocorre em duas etapas complementares:

1. **Amostragem Global em Octantes ($q \in \{0, \dots, 7\}$):**
   Gera 8 poses candidatas no anel circular de raio nominal $R_{\text{orb}} = 12{,}0\text{ m}$, defasadas pelo identificador do drone:
   $$\phi_q = q \cdot \frac{\pi}{4} + (i \pmod 4) \cdot \frac{\pi}{2}, \quad \Delta x_q = R_{\text{orb}} \cos(\phi_q), \quad \Delta y_q = R_{\text{orb}} \sin(\phi_q)$$
   Avalia-se $\mathcal{J}_{\text{FoV}}$ para cada candidato e seleciona-se a melhor pose inicial $(\Delta x_0, \Delta y_0)$.
2. **Refinamento Local por Descida de Gradiente (10 iterações):**
   Computa os gradientes espaciais numéricos de $\mathcal{J}_{\text{FoV}}$ por diferenças finitas com passo $\delta = 0{,}1\text{ m}$:
   $$\nabla_{\Delta x} \mathcal{J}_{\text{FoV}} = \frac{\mathcal{J}_{\text{FoV}}(\Delta x + \delta, \Delta y) - \mathcal{J}_{\text{FoV}}(\Delta x, \Delta y)}{\delta}$$
   $$\nabla_{\Delta y} \mathcal{J}_{\text{FoV}} = \frac{\mathcal{J}_{\text{FoV}}(\Delta x, \Delta y + \delta) - \mathcal{J}_{\text{FoV}}(\Delta x, \Delta y)}{\delta}$$
   Acopla-se o gradiente analítico repulsivo $\nabla C_{\text{safe}}$ e atualizam-se as coordenadas com taxa de aprendizado $\alpha = 0{,}5$:
   $$\Delta x \leftarrow \Delta x - \alpha \left(w_{\text{det}} \nabla_{\Delta x} \mathcal{J}_{\text{FoV}} + \nabla_{\Delta x} C_{\text{safe}}\right)$$
   $$\Delta y \leftarrow \Delta y - \alpha \left(w_{\text{det}} \nabla_{\Delta y} \mathcal{J}_{\text{FoV}} + \nabla_{\Delta y} C_{\text{safe}}\right)$$
   Aplica-se projeção euclidiana caso $\|\Delta \mathbf{p}\|_2 > R_{\text{max}} = 30{,}0\text{ m}$.
- **Código C++:** `ViewpointOptimizer::solve_viewpoint` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:498-570`.

### A.3.7 Métrica de Continuidade Temporal e Limitação de Slew-Rate ($C^0 / C^1$)

Para preservar a rastreabilidade dinâmica das referências e impedir saturações mecânicas nos controladores de atitude do Drake, aplica-se um filtro cinemático de taxa de variação (*slew-rate*):

$$\|\Delta \mathbf{p}(t) - \Delta \mathbf{p}(t - \Delta t)\|_2 \le v_{\text{max}} \cdot \Delta t$$

$$|\Delta \psi(t) - \Delta \psi(t - \Delta t)| \le \omega_{\text{max}} \cdot \Delta t$$

com $v_{\text{max}} = 5{,}0\text{ m/s}$, $\omega_{\text{max}} = 3{,}5\text{ rad/s}$ (~$200^\circ\text{/s}$) e período de amostragem $\Delta t = 0{,}2\text{ s}$ (5 Hz).

**Garantia Primordial de Guinada com Margem de Segurança:**
Para que o atraso de transição na rotação não cause a perda do UGV pelo cone da câmera ($\pm 45^\circ$), o limitador calcula o desvio azimutal $\Delta_{\text{az}} = \operatorname{wrap\_pi}(\operatorname{atan2}(-\Delta y, -\Delta x) - \Delta \psi)$ e satura rigidamente o erro em uma margem de segurança conservadora:

$$|\Delta_{\text{az}}| \le 35^\circ \cdot \frac{\pi}{180^\circ}$$

- **Código C++:** `ViewpointOptimizer::apply_slew_rate_limiter` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:296-356`.
- **Impacto no Simulador Drake:** Produz referências de classe $C^0$ suaves e sem descontinuidades, permitindo convergência estável dos controladores PID e MPC do simulador Drake.

### A.3.8 Métrica de Contingência Determinística (Fallback Orbital 3D)

Caso o tempo de execução do solver contínuo exceda o prazo limite rígido de tempo real ($\tau_{\text{exec}} \ge \text{deadline} = 40\text{ ms}$) ou a pose ótima calculada não passe no teste estrito de FoV do UGV (`is_target_ugv_in_fov`), aciona-se instantaneamente a rotina determinística orbital:

$$\mathbf{p}_{\text{rel}}^* = \begin{bmatrix} R_{\text{orb}} \cos\left(\frac{q \pi}{2} + \frac{\pi}{4}\right) \\ R_{\text{orb}} \sin\left(\frac{q \pi}{2} + \frac{\pi}{4}\right) \\ z_{\text{nominal}} \end{bmatrix}, \quad \Delta\psi^* = \operatorname{atan2}\left(-y_{\text{rel}}^*, \; -x_{\text{rel}}^*\right), \quad \theta^* = \arctan\left(\frac{z_{\text{nominal}}}{R_{\text{orb}}}\right)$$

onde $R_{\text{orb}} = 12{,}0\text{ m}$, $z_{\text{nominal}} = 15{,}0\text{ m}$, $q = \text{drone\_id} \pmod 4$ e $\theta^* = 51{,}34^\circ$.
- **Código C++:** `ViewpointOptimizer::compute_orbital_fallback` em `ws/src/atas_optimizer/src/viewpoint_optimizer.cpp:275-294`.
- **Impacto no Simulador Drake:** Confere tolerância a falhas estrita com complexidade temporal $O(1)$, eliminando travamentos de nós ROS 2 e assegurando cadência ininterrupta a 5 Hz.

### A.3.9 Métrica de Supervisão Adaptativa Pareto em Malha Fechada

A modulação adaptativa dos pesos de custo e da altitude operacional nominal decorre da observação contínua de métricas agregadas em janelas móveis de 60 segundos (300 amostras @ 5 Hz, recebidas via `/metrics/optimizer_feedback`):

1. **Condição de Degradação de Rádio ($\bar{\mathcal{L}}_{60\text{s}} > 25{,}0\text{ ms}$):**
   $$w_{\text{lat}} \leftarrow \min\left(5{,}0, \; w_{\text{lat}} \cdot 1{,}20\right), \quad z_{\text{nominal}} \leftarrow \max\left(z_{\text{min}}, \; z_{\text{nominal}} \cdot 0{,}85\right)$$
2. **Condição de Perda de Cobertura Visual ($\bar{\mathcal{D}}_{60\text{s}} < 4{,}0\text{ alvos}$):**
   $$w_{\text{det}} \leftarrow \min\left(10{,}0, \; w_{\text{det}} \cdot 1{,}20\right), \quad z_{\text{nominal}} \leftarrow \min\left(25{,}0, \; z_{\text{nominal}} \cdot 1{,}10\right)$$
3. **Condição de Relaxamento Gradual para Equilíbrio Pareto ($\bar{\mathcal{L}}_{60\text{s}} \le 25{,}0\text{ ms} \land \bar{\mathcal{D}}_{60\text{s}} \ge 4{,}0$):**
   $$w_{\text{lat}} \leftarrow \max\left(0{,}5, \; w_{\text{lat}} \cdot 0{,}98\right), \quad w_{\text{det}} \leftarrow \max\left(1{,}0, \; w_{\text{det}} \cdot 0{,}98\right)$$
- **Código C++:** `AtasOptimizerNode::process_optimizer_feedback` em `ws/src/atas_optimizer/src/atas_optimizer_node.cpp:383-449`.
- **Impacto no Simulador Drake:** Concede capacidade de autorregulação resiliente: ao adentrar corredores estreitos de prédios com sinal atenuado, o enxame reduz a altitude para restaurar o enlace de rádio; em praças abertas, expande a altitude para maximizar a cobertura situacional.

## A.4 Matriz Consolidada de Métricas de Otimização

A Tabela A.1 sintetiza a totalidade das métricas do sistema, detalhando suas expressões matemáticas, parâmetros nominais, localização exata no código-fonte e efeito prático no simulador Drake.

| Métrica / Termo | Expressão Matemática | Parâmetros e Valores Nominais | Arquivo e Linha | Efeito no Simulador Drake |
| :--- | :--- | :--- | :--- | :--- |
| **Recompensa Perceptual CBBA** | $R_{ij} = V_j P_j e^{-\lambda_{\text{dist}} d_{ij}}$ | $\lambda_{\text{dist}} = 0{,}02\text{ m}^{-1}; V_j = 10{,}0; P_j = 1{,}0$ | `cbba_agent.cpp:133` | Atrai o UAV para UGVs prioritários e próximos |
| **Contenção RF CBBA** | $L_{ij} = w_{\text{lat}} (\mathcal{L}_{ij} \cdot \kappa_{\text{RF}})$ | $w_{\text{lat}} = 0{,}5; \kappa_{\text{RF}} = 1{,}5$ | `cbba_agent.cpp:130` | Penaliza monopólio de enlace e dispersa drones |
| **Pontuação Líquida CBBA** | $c_{ij} = \max(0{,}01, R_{ij} - L_{ij})$ | $c_{\text{min}} = 0{,}01$ | `cbba_agent.cpp:137` | Garante lances positivos e convergência de consenso |
| **Histerese Anti-Chattering** | $c_{ij} > y_j (1 + \Delta_{\text{hist}})$ | $\Delta_{\text{hist}} = 0{,}15$ ($15\%$) | `cbba_agent.cpp:197` | Suprime comutação oscilatória de escoltas |
| **Vínculo Estrito de Escolta** | UAV $i \in \mathcal{A} \iff \|b_i\| \ge 1$ | $M \in [1, 2]$; Standby: $(5i, 0, 0{,}5)\text{ m}$ | `atas_optimizer_node.cpp:525` | Pousa drones ociosos e reduz carga de simulação |
| **Pegada Visual Ponderada** | $\mathcal{Q} = \sum \frac{z}{z_{\text{max}}} \cos(\Delta\psi_k) w_k$ | $w_{\text{ped}} = 3{,}0; w_{\text{npc}} = 2{,}0; w_{\text{ugv}} = 1{,}0$ | `viewpoint_optimizer.cpp:469` | Direciona o FoV para alvos dinâmicos vulneráveis |
| **Barreira Primordial FoV** | $\Psi_{\text{FoV}} \ge 10000{,}0$ | InDualSensor $\land$ CheckLoS; $R_{\text{max}} = 30\text{ m}$ | `viewpoint_optimizer.cpp:437` | Garante zero violações de visada do UGV alvo |
| **Oclusão 3D (Ray-Casting)** | Teste Slab AABB Kay-Kajiya | 30 edifícios urbanos Town10 | `viewpoint_optimizer.cpp:90` | Evita bloqueio visual causado por edificações |
| **Barreira Anti-Colisão** | $C_{\text{safe}} = w_{\text{safe}} \frac{d_{\text{safe}} - d_{ij}}{d_{ij}}$ | $d_{\text{safe}} = 5{,}0\text{ m}; w_{\text{safe}} = 10{,}0$ | `viewpoint_optimizer.cpp:553` | Previne conflitos espaciais entre drones do comboio |
| **Slew-Rate Limiter 3D** | $\|\Delta \mathbf{p}\| \le v_{\text{max}} \Delta t; |\Delta \psi| \le \omega_{\text{max}} \Delta t$ | $v_{\text{max}} = 5\text{ m/s}; \omega_{\text{max}} = 3{,}5\text{ rad/s}; \|\Delta_{\text{az}}\| \le 35^\circ$ | `viewpoint_optimizer.cpp:314` | Garante continuidade $C^0 / C^1$ rastreável no Drake |
| **Fallback Orbital 3D** | Anel paramétrico $R_{\text{orb}} = 12\text{ m}, z = 15\text{ m}$ | $\text{Deadline } \tau = 40\text{ ms}; \theta^* = 51{,}34^\circ$ | `viewpoint_optimizer.cpp:284` | Contingência determinística ultra-rápida ($O(1)$) |
| **Supervisão Adaptativa** | Modulação de $w_{\text{lat}}, w_{\text{det}}, z_{\text{nom}}$ | $\bar{\mathcal{L}} > 25\text{ ms}; \bar{\mathcal{D}} < 4{,}0$; janela 60s @ 5 Hz | `atas_optimizer_node.cpp:400` | Regulação contínua do compromisso Pareto |
