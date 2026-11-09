# Escopo do artigo

> Preencher antes de qualquer análise. Sem escopo, o inventário inclui
> diretórios irrelevantes e contamina o artigo.

## 1. Sistema analisado

| Campo | Valor |
| :--- | :--- |
| Nome do sistema | Sistema de Otimização Multi-Objetivo ATAS (Autonomy Through Aerial Swarms) v2.0.0 |
| Repositório | `/mnt/storage/markdown2html5/261013conversa_moo_rosh2_perplexity` |
| Commit de referência | `bc3dedcb8b6443e4b12402e815d73951ca8a847c` |
| Licença do sistema | Apache-2.0 |
| Domínio | Robótica de Enxames Aéreos / Otimização Multi-Objetivo / Percepção Cooperativa UAV-UGV |

## 2. Pergunta de pesquisa

> Como uma arquitetura de otimização desacoplada em duas camadas (leilão CBBA com escolta estrita e programação não linear PolyMPC com penalidade barreira primordial) garante a cobertura visual contínua (dual-sensor LiDAR/Câmera) de robôs terrestres em ambientes urbanos sob restrições de latência de rádio e orçamento de tempo real?

- [x] A pergunta é respondível por medição, não por opinião
- [x] Os dados para respondê-la **existem** (verificados em `docs/CLOSED_LOOP_EVALUATION_V2.json` e suíte de 146 testes)

## 3. Contribuição pretendida

| # | Contribuição | Tipo |
| :--- | :--- | :--- |
| 1 | Formulação hierárquica em malha fechada combinando alocação distribuída com vínculo estrito de escolta ($M \ge 1$) e programação não linear (NLP) com barreira primordial dual-sensor ($\Psi_{\text{FoV}} \ge 10000.0$) e fallback analítico orbital 3D para garantia incondicional de visada | científica |
| 2 | Arquitetura de nós ROS 2 Jazzy desacoplada em tempo real (< 20 ms de tempo de resolução do solver) com conformidade ao Contrato 3.1.0 e simulador Drake 1.57.0 em malha fechada | engenharia |

> [!IMPORTANT]
> Item de tipo "engenharia" não pode ser reivindicado como contribuição
> científica. Ver `../skills/c2p-write/references/style-ptbr.md` §2.

## 4. Venue

| Campo | Valor |
| :--- | :--- |
| Tipo | conferência |
| Nome | Simpósio Brasileiro de Robótica (SBR) / IEEE ICRA / LARS |
| Perfil | SBC |
| Idioma | pt-BR |
| Limite de páginas | 6 |

## 5. Recorte do inventário

Diretórios **incluídos**:

```
ws/src/atas_optimizer/
```

Diretórios **excluídos** (com motivo):

| Diretório | Motivo |
| :--- | :--- |
| `repos/` | Dependências upstream externas clonadas para referência |
| `simulator/` | Simulador Drake e nós externos (fora da fronteira do otimizador) |
| `build/`, `install/`, `ws/build/`, `ws/install/` | Artefatos efêmeros de compilação |
| `docker/` | Infraestrutura de conteinerização de ambiente |
| `paper/` | O próprio artefato do artigo em construção |
| `.agents/` | Configurações de agentes e ferramentas |

- [x] Todo diretório excluído tem motivo registrado
- [x] Nenhum diretório relevante ficou de fora

## 6. Evidências disponíveis

| Tipo | Caminho | Existe? |
| :--- | :--- | :--- |
| CSV de benchmark | `docs/CLOSED_LOOP_EVALUATION_V2.json` (avaliação de 60s @ 5.0 Hz em malha fechada) | Sim |
| Logs de execução | `docs/CLOSED_LOOP_AUDIT_V2.json`, `docs/RELATORIO_V2.md` | Sim |
| JUnit XML | `ws/build/atas_optimizer/test_results/atas_optimizer/*.gtest.xml` (146 testes) | Sim |
| Rosbags | N/A (simulador Drake gera telemetria gravada em JSON/log) | Não |
| Relatório de teste | `docs/RELATORIO_V2.md`, `docs/GUIA_TESTE_E_OPERACAO_V2.md` | Sim |

- [x] Toda evidência declarada foi verificada como existente
- [x] Evidência ausente está registrada como ausente, não presumida

## 7. O que este artigo NÃO faz

Declarar explicitamente o que fica fora, para evitar expansão de escopo durante
a redação.

- O otimizador **NUNCA** calcula trajetórias de transição da pose atual até a pose de referência (apenas poses quasi-estáticas de referência no referencial do UGV).
- O otimizador **NUNCA** executa controle dinâmico, anti-colisão local de curto prazo (ORCA/APF) ou comandos de atuação de motores (responsabilidade exclusiva do nó `swarm_planner` do simulador Drake).
- Não realiza fusão sensorial bruta nem processamento de nuvem de pontos em tempo real no drone (recebe os estados dos atores via tópicos estruturados ROS 2).
