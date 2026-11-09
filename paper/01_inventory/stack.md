# Stack Tecnológica do Sistema Analisado

## 1. Visão Geral

O sistema **ATAS MOO Optimizer v2.0.0** é implementado como um pacote ROS 2 híbrido C++20 e Python, projetado para operar em malha fechada sobre o Ubuntu 24.04 LTS em tempo real.

## 2. Linguagens e Compiladores

| Componente | Linguagem / Padrão | Compilador / Runtime | Linters / Formatação |
| :--- | :--- | :--- | :--- |
| Núcleo Algorítmico e Nó ROS 2 | C++20 | GCC 13.2.0 / Clang 18 | `clang-format` (Google Style), `ament_cpplint`, `uncrustify` |
| Scripts, Testes e Ferramentas | Python 3.12+ | CPython 3.12 | `ruff`, `mypy`, `flake8`, `pep257` |

## 3. Build System e Middleware

| Item | Especificação | Função |
| :--- | :--- | :--- |
| Build Tool | `colcon` | Orquestração de compilação multi-pacote |
| Build System | `ament_cmake` | Gerenciamento de dependências e targets C++20 |
| Distribuição ROS 2 | Jazzy Jalisco | Framework robótico com tempo de simulação (`use_sim_time:=true`) |
| Middleware DDS | `rmw_cyclonedds_cpp` | Camada de transporte determinística de baixa latência (`ROS_DOMAIN_ID=42`) |

## 4. Bibliotecas Numéricas e Algorítmicas

| Biblioteca / Módulo | Origem / Versão | Função no Sistema |
| :--- | :--- | :--- |
| **PolyMPC** | Commit pinado de `PREDICT-EPFL/polympc` | Formulação do problema NLP de pose ótima relativa e SQP |
| **Ipopt** | 3.14+ | Solver numérico de ponto interior para programação não linear |
| **OSQP** | 0.6.3+ | Solver de programação quadrática |
| **Eigen** | 3.4+ | Álgebra linear densa e geometria 3D |
| **CBAAL Core** | Adaptado de `Jakcrimson/CBAAL` | Algoritmo CBBA de leilão e consenso distribuído de 18 regras |

## 5. Simulador Cooperativo Externo

| Plataforma | Versão | Papel na Arquitetura |
| :--- | :--- | :--- |
| **MIT Drake** | v1.57.0 | Servidor autoritativo de física e relógio (`/clock` @ 200 Hz), controle dinâmico dos UAVs e UGVs |
| **Contrato de Interface** | Release 3.1.0 | Tipos de mensagens em `swarm_interfaces` e `swarm_world_interfaces` |
