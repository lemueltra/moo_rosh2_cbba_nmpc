# Ferramenta de Monitoramento, Visualização e Validação do Otimizador ATAS (v2.0.0)

Esta documentação apresenta a ferramenta oficial **ATAS Optimization Monitor & Visualizer (`atas_monitor`)**, desenvolvida para acompanhar em tempo real, inspecionar a fundo, auditar e validar o funcionamento do **Sistema de Otimização Multi-Objetivo ATAS v2.0.0**.

A ferramenta permite o monitoramento global do processo de otimização, assim como o monitoramento detalhado e **em separado do sistema CBBA** (leilão distribuído) e do **sistema NMPC** (viewpoint NLP de sensor duplo).

---

## 1. Visão Geral da Arquitetura da Ferramenta

A ferramenta conecta-se diretamente à rede DDS nativa (`ROS_DOMAIN_ID=42`), subscrevendo os tópicos contratuais e de diagnóstico do sistema:

```
┌────────────────────────────────────────────────────────┐
│           ATAS OPTIMIZER NODE (/atas_optimizer_node)   │
│  • Publica: /drones/active_set                         │
│  • Publica: /drones/references                         │
│  • Publica: /atas/diagnostics (DiagnosticArray)        │
└──────────┬─────────────────────────┬───────────────────┘
           │                         │
           ▼                         ▼
┌────────────────────────────────────────────────────────┐
│      FERRAMENTA ATAS MONITOR (scripts/atas_monitor.py) │
│                                                        │
│  [1] Visão Global MOO (Pareto, Qualidade & Contratos)  │
│  [2] Monitor Dedicado CBBA (Leilão, Bundles, Lances)   │
│  [3] Monitor Dedicado NMPC (Viewpoints, FoV 3D, Custos)│
│  [4] Auditoria em Tempo Real & Verificação de Regras   │
├────────────────────────────────────────────────────────┤
│  INTERFACES DISPONÍVEIS:                               │
│  • Terminal Interativo (TUI Curses com abas [1..4])   │
│  • Web Dashboard HTML5/Canvas (http://localhost:8088)  │
│  • Modo Auditoria Headless / Batch (--audit [tempo])   │
└────────────────────────────────────────────────────────┘
```

---

## 2. Como Executar a Ferramenta

Você pode executar o monitor de três maneiras, dependendo da sua preferência operacional:

### Modo 1: Terminal TUI Interativo (Recomendado para uso no Shell)

Abra um terminal conectado ao contêiner `atas_moo_dev`:

```bash
docker compose exec atas_moo_dev bash
source /workspace/ws/install/setup.bash

# Executa o painel interativo no terminal
ros2 run atas_optimizer atas_monitor
# ou alternativamente:
python3 /workspace/scripts/atas_monitor.py
```

#### Controles de Navegação do Terminal TUI:
- **`[1]`**: Alterna para a aba **Visão Geral (Global MOO)**.
- **`[2]`**: Alterna para a aba **Sistema CBBA Dedicado**.
- **`[3]`**: Alterna para a aba **Sistema NMPC Dedicado**.
- **`[4]`**: Alterna para a aba **Auditoria & Contratos**.
- **`[Tab]`**: Cicla para a próxima aba.
- **`[P]`**: Pausa / Retoma o fluxo de atualização instantânea.
- **`[S]`**: Salva um snapshot completo em arquivo JSON (`docs/SNAPSHOT_MONITOR_*.json`).
- **`[Q]`**: Encerra a ferramenta.

---

### Modo 2: Web Dashboard Interativo (Navegador com Mapa 2D e Frustums)

Para visualizar os drones, cones de visão e gráficos em tempo real no navegador do seu computador:

```bash
docker compose exec atas_moo_dev bash -c "
  source /workspace/ws/install/setup.bash &&
  python3 /workspace/scripts/atas_monitor.py --web
"
```

Em seguida, abra no seu navegador no host:
👉 **`http://localhost:8088`**

*Recursos da Interface Web:*
- **Canvas 2D Interativo:** Mapa urbano de Town10 com ruas, edificações poligonais, UGVs em rota, drones e frustums de câmera / cones de LiDAR traçados dinamicamente.
- **Cards de Métricas:** Taxa de conformidade de FoV, latência média RF, tempo de solver NLP e conservação do enxame.
- **Abas Dedicadas:** Visão Geral, Sistema CBBA, Sistema NMPC e Auditoria.
- **Streaming de Baixa Latência:** Atualização automática a 5.0 Hz via Server-Sent Events (SSE).

---

### Modo 3: Modo Auditoria Headless / Batch (Geração de Laudo)

Para executar uma auditoria quantitativa por $N$ segundos (ex: 30 segundos) sem interface interativa:

```bash
docker compose exec atas_moo_dev bash -c "
  source /workspace/ws/install/setup.bash &&
  python3 /workspace/scripts/atas_monitor.py --audit 30.0 --export-json docs/CLOSED_LOOP_AUDIT.json
"
```

*Saída:* Emite um relatório sintético e salva o laudo JSON com telemetria detalhada para análise pós-voo.

---

## 3. Monitoramento em Separado do Sistema CBBA

Na **Aba `[2]`** (ou na seção CBBA da Web), o sistema de leilão distribuído é inspecionado detalhadamente:

1. **Estado do Agente:** Identifica se o drone está **ATIVO** (em escolta) ou em **STANDBY (BASE)**.
2. **Feixe de Tarefas (Bundle):** Exibe o UGV primário atribuído e, caso habilitado o modo multi-bundle ($M=2$), o UGV secundário acompanhado.
3. **Vínculo Estrito de Escolta ($M \ge 1$):**
   - Indicador visual verde `[GARANTIDO]` quando drones ativos possuem UGV atribuído e drones ociosos estão em base.
   - Alerta visual imediato `[VIOLAÇÃO]` se qualquer drone estiver ativo sem alvo.
4. **Histerese Anti-Chattering ($\Delta J > 15\%$):**
   - Monitora o número acumulado de trocas de tarefas no tempo.
   - Detecta e previne oscilações indesejadas de atribuição provocadas por variações transitórias de RF.
5. **Penalidade de Contenção de Canal RF:**
   - Exibe a penalidade incremental calculada a cada novo drone ativado, garantindo a conservação dos recursos do enxame.
6. **Estado de Consenso:**
   - Acompanha o status de convergência do leilão descentralizado entre os drones.

---

## 4. Monitoramento em Separado do Sistema NMPC / Viewpoint NLP

Na **Aba `[3]`** (ou na seção NMPC da Web), o solucionador contínuo de viewpoints e a visada geométrica são inspecionados:

1. **Inspeção Analítica do Sensor Duplo:**
   - **LiDAR 3D:**
     - Distância 3D até o UGV ($\le 100.0\text{ m}$).
     - Azimute horizontal $\Delta\psi$ (deve estar dentro de $[-60^\circ, +60^\circ]$).
     - Ângulo de elevação vertical $\phi_{\text{elev}}$ (deve estar dentro de $[-30^\circ, +10^\circ]$).
     - Status: `[OK]` ou `[FORA]`.
   - **Câmera Solidária:**
     - Distância 3D até o UGV ($\le 40.0\text{ m}$).
     - Azimute horizontal $\Delta\psi$ (deve estar dentro de $[-45^\circ, +45^\circ]$).
     - Ângulo de pitch acoplado $\theta^* = \arctan(z/r)$.
     - Defasagem de pitch $\Delta\theta$ (deve estar dentro de $[-29.36^\circ, +29.36^\circ]$).
     - Status: `[OK]` ou `[FORA]`.
   - **Requisito Primordial:**
     - Validação booleana: $\text{InLiDAR} \lor \text{InCamera} \equiv \text{True}$.
     - Status: `[CONFORME - 100% VISADA]` ou `[VIOLAÇÃO CRÍTICA]`.
2. **Oclusão por Edificações em Town10:**
   - Ray-casting 3D contra todos os 20 edifícios urbanos cadastrados.
   - Status: `[LIVRE]` (linha de visada direta desobstruída) ou `[OCLUÍDO]`.
3. **Dinâmica e Slew-Rate Limiter 3D:**
   - Velocidade linear de transição ($\|\mathbf{v}\| \le 5.0\text{ m/s}$).
   - Velocidade angular de rotação ($|\omega| \le 3.5\text{ rad/s}$).
   - Trava de segurança angular para curvas fechadas de esquina ($\Delta\psi \le 35^\circ$).
4. **Desempenho Numérico do Solver:**
   - Tempo de ciclo por resolução ($T_{\text{solve}}$ em ms).
   - Margem de segurança até o watchdog timeout rígido ($40.0\text{ ms}$).

---

## 5. Auditoria de Qualidade e Conformidade Contratual

Na **Aba `[4]`**, a ferramenta audita ininterruptamente as 8 cláusulas do contrato operacional 3.1.0 e os requisitos de v2.0.0:

| # | Requisito Contratual | Verificação em Tempo Real | Critério |
|:---:|---|---|---|
| **1** | Sincronismo de Relógio | `/clock` autoritativo @ 50 Hz com `use_sim_time:=true` | `clock_hz >= 40.0 Hz` |
| **2** | Taxa de Referências | Publicação de `/drones/references` estável @ 5.0 Hz | $\Delta t \approx 200\text{ ms}$ |
| **3** | Envelope de Altitude | Altitude absoluta $z \in [2.5, 35.0]\text{ m}$ | 0 violações |
| **4** | Semântica Relativa | Poses expressas no body-frame do UGV | `frame_relative == true` |
| **5** | FoV de Sensor Duplo | UGV alvo ininterruptamente visível | $100.0\%$ de conformidade |
| **6** | Vínculo Estrito CBBA | Drones sem alvo mantidos em base | Sem drones ativos órfãos |
| **7** | Tempo de Solver NLP | Solução rápida sem atraso de controle | $T_{\text{solve}} < 40.0\text{ ms}$ |
| **8** | Isolamento de Atuação | Não publica em `/drones/cmd` nem trajetórias | Apenas referências relativas |
