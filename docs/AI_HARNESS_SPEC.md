# Especificação da Ferramenta Harness de Inteligência Artificial para Robótica (C++ & Python)

**Versão da Especificação:** 1.0.0  
**Data:** 23 de outubro de 2026  
**Finalidade:** Padronização do ambiente, contratos, ferramentas e loops autônomos para agentes de IA operando no desenvolvimento, verificação e validação de software robótico crítico.

---

## 1. Escopo e Propósito do AI Harness

O **AI Engineering Harness** é a infraestrutura de apoio e execução controlada que habilita agentes inteligentes de engenharia de software a desenvolver, implementar, compilar, testar, verificar estaticamente e validar em simulação sistemas robóticos híbridos (C++20 e Python 3.12).

### Objetivos Primários:
1. **Zero Degradação do Host:** Todo e qualquer comando de compilação, instalação de dependências e execução ocorre estritamente dentro de contêineres Docker instrumentados com suporte a GPU.
2. **Ciclo de Feedback Autônomo Fechado (Autonomous Loop):** O harness fornece oráculos automatizados de validação (compilação, linters, testes unitários e simulação em malha fechada) permitindo que o agente detecte falhas, trace a causa raiz, aplique a correção e revalide sem intervenção humana.
3. **Observabilidade Total em Tempo Real:** Captura estruturada de saídas de console, métricas de tempo de solve, logs de DDS e arquivos MCAP de simulação.

---

## 2. Requisitos do Sistema

### 2.1 Requisitos Funcionais (RF)
- **RF01 - Multi-Language Build Pipeline:** Suporte nativo à compilação C++20 via `colcon` com GCC 13+ / Clang 18+, gerando `compile_commands.json` para indexação precisa.
- **RF02 - Static Analysis & Style Oracles:** Verificação automática de conformidade de código com `clang-format` (Google/ROS 2 Style), `clang-tidy`, `ruff`, `flake8` e `mypy`.
- **RF03 - Hardware Acceleration Bridge:** Mapeamento transparente dos recursos da GPU NVIDIA RTX A2000 (CUDA, EGL, OpenGL) para computação paralela e renderização geométrica.
- **RF04 - Time Server Compliance:** Forçar sincronização temporal obrigatória via tópico `/clock` (`use_sim_time:=true`), garantindo que o tempo de simulação do Drake dite a cadência dos testes.
- **RF05 - Automated Test Runner & Reporter:** Execução automatizada de testes `colcon test` e `pytest` com geração de relatórios JUnit XML legíveis por agentes.

### 2.2 Requisitos Não-Funcionais (RNF)
- **RNF01 - Reprodutibilidade:** Imagem base pinada (`ubuntu:24.04`), ROS 2 Jazzy e Drake v1.57.0 com downloads verificados.
- **RNF02 - Latência de Execução de Testes:** Suíte de testes unitários executada em $< 30\text{ s}$ via compilação paralela multi-core (`PARALLEL_JOBS=16`).
- **RNF03 - Segurança e Permissões:** Mapeamento 1:1 de `UID:GID` evitando arquivos órfãos com permissão de `root` no host.

---

## 3. Ferramentas e Stack Integrado

| Categoria | Ferramenta | Papel no Harness |
| :--- | :--- | :--- |
| **Contêiner & Virtualização** | Docker 27+ / Docker Compose v2 | Isolamento completo e governança de recursos de GPU. |
| **Middleware Robótico** | ROS 2 Jazzy Jalisco + CycloneDDS | Transporte de mensagens com QoS determinístico (`SWARM_ROS_DOMAIN_ID=42`). |
| **Model-Based Design** | MIT Drake v1.57.0 | Framework físico, geométrico (`SceneGraph`) e cinemático. |
| **Otimização Numérica** | PolyMPC + Ipopt + OSQP | Resolução de NLP de viewpoints e controle preditivo em tempo real. |
| **Coordenação Distribuída** | CBAAL (Adaptado para ROS 2) | Algoritmo CBBA com consenso assíncrono entre agentes. |
| **Linters e Formatadores** | `clang-format`, `clang-tidy`, `ruff`, `mypy` | Garantia de qualidade estática de código C++ e Python. |
| **Automação de Testes** | CTest + GTest + pytest + colcon | Execução e validação de regressões. |
| **Gravação e Telemetria** | `ros2 bag` (MCAP storage plugin) | Registro de telemetria completa dos ensaios em malha fechada. |

---

## 4. Plano de Desenvolvimento do Harness de IA

O desenvolvimento do harness é executado nas seguintes etapas:

```
ETAPA 1: Scaffolding do Contêiner & GPU
   │     - Dockerfile multi-stage com Ubuntu 24.04 + ROS 2 Jazzy + Drake
   │     - Validação de nvidia-smi e CycloneDDS
   ▼
ETAPA 2: Workspace Estruturado e Pacotes Base
   │     - Criação de ws/src/atas_optimizer
   │     - Integração das mensagens swarm_interfaces e swarm_world_interfaces
   ▼
ETAPA 3: Porting e Modularização do CBAAL e PolyMPC
   │     - Módulo C++ CbbaAgent adaptado do CBAAL
   │     - Wrapper de Viewpoint NLP sobre o PolyMPC / Ipopt
   ▼
ETAPA 4: Oráculos de Testes e Simulação Automatizada
   │     - Scripts de teste unitário e de integração
   │     - Validação em malha fechada contra o simulador Drake (/drones/active_set e /drones/references)
   ▼
ETAPA 5: Pipeline Contínuo de Avaliação de Métricas (60s Sliding Window)
         - Verificação automática da convergência de cobertura e latência V2X
```

---

## 5. Protocolo de Ação do Agente Autônomo

Quando o agente de IA estiver desenvolvendo no projeto, ele deve seguir estritamente o seguinte loop operacional:

```
1. RECEBER DEMANDA OU IDENTIFICAR FALHA
2. INSPECIONAR CONTRATOS E ARQUITETURA (docs/ARCHITECTURE.md)
3. IMPLEMENTAR INCREMENTO DE CÓDIGO
4. EXECUTAR LINTER E FORMATAÇÃO (clang-format / ruff)
5. EXECUTAR COMPILAÇÃO NO CONTAINER (colcon build)
6. EXECUTAR TESTES AUTOMATIZADOS (colcon test)
7. SE FALHA:
     - Analisar o log de erro do CTest / colcon
     - Isolar a causa raiz (não o sintoma)
     - Aplicar correção pontual
     - Retornar ao passo 5 (máximo 3 iterações)
8. SE SUCESSO:
     - Executar simulação em malha fechada
     - Verificar métricas de feedback em /metrics/optimizer_feedback
     - Documentar evidências e atualizar docs/ROADMAP.md
```
