# Outline do artigo

> Preencher após o inventário, as figuras e as evidências. **Aprovação
> obrigatória antes da redação.** Este arquivo é o contrato entre apuração e
> prosa.

## 1. Mapa claim → seção

Toda afirmação planejada, com a seção onde aparece e a evidência que a sustenta.

| ID | Claim | Seção | Evidência | Estado |
| :--- | :--- | :--- | :--- | :--- |
| `CLM-001` | A restrição primordial dual-sensor garantiu 100% de conformidade de visada sobre 600 referências avaliadas com zero violações de FoV. | 05_resultados | `MET-096`, `MET-097`, `MET-102` | `verificado` |
| `CLM-002` | O tempo médio de resolução do solver de ponto interior permaneceu em 1.8 ms, cumprindo com folga o orçamento de tempo real. | 05_resultados | `MET-099` | `verificado` |
| `CLM-003` | A suíte automatizada de testes registrou 128 testes executados com 100% de sucesso (zero falhas e zero erros). | 05_resultados | `MET-091`, `MET-092`, `MET-093` | `verificado` |
| `CLM-004` | Durante 60 segundos de telemetria contínua a 5 Hz foram geradas 301 mensagens de active set, 300 mensagens de referências e 3001 amostras de estado dos UGVs. | 05_resultados | `MET-100`, `MET-094`, `MET-101`, `MET-103` | `verificado` |

- [x] Todo claim tem ID único
- [x] Todo claim tem evidência associada ou estado `evidencia-pendente`
- [x] Nenhum claim sem seção de destino

## 2. Estrutura de seções

| # | Seção | Páginas previstas | Figuras | Tabelas |
| :--- | :--- | :--- | :--- | :--- |
| 1 | Resumo | 0,3 | — | — |
| 2 | Introdução | 1,0 | — | — |
| 3 | Trabalhos relacionados | 0,8 | — | — |
| 4 | Metodologia | 1,8 | `architecture-layer-pure_method.svg`, `ros2-interfaces-part1.svg` | Tabela de formulação dos sensores e custos |
| 5 | Resultados | 1,2 | — | Tabela de conformidade de malha fechada e testes unitários |
| 6 | Discussão | 0,6 | — | — |
| 7 | Conclusão | 0,3 | — | — |

- [x] Soma das páginas cabe no limite do venue (6,0 páginas no total)
- [x] Toda figura listada existe em `06_figures/`
- [x] Toda tabela listada está planejada com marcadores de backfill

## 3. Ordem de escrita

Registrar aqui a ordem efetivamente seguida. A sequência canônica tem **oito
etapas** (`WRITING_ORDER` em `scripts/c2p_writing.py`); `build_manuscript.py`
recusa a montagem se `log/writing_order.json` divergir dela.

| # | Etapa (`STAGE_IDS`) | Seção produzida | Depende de |
| :--- | :--- | :--- | :--- |
| 1 | `04_metodologia` | Metodologia | Inventário + figuras |
| 2 | `05_resultados` | Resultados | Manifesto + ledger |
| 3 | `07_conclusao` | Conclusão | Resultados |
| 4 | `02_introducao:3` | Introdução §3 (contribuições) | Conclusão |
| 5 | `02_introducao:1-2` | Introdução §1–2 (contexto, lacuna) | Contribuições |
| 6 | `03_relacionados` | Trabalhos relacionados | Resultados + contribuições |
| 7 | `06_discussao` | Discussão | Resultados + trabalhos relacionados |
| 8 | `01_resumo` | Resumo | Tudo |

- [x] A ordem registrada corresponde à sequência canônica de oito etapas
- [x] `02_introducao` aparece **duas vezes**: primeiro §3, depois §1–2

## 4. Pendências conhecidas

| Item | Tipo | Resolver com |
| :--- | :--- | :--- |
| Ausência de gravação nativa de Rosbag (.mcap) | `decisao-do-autor` | Declarar uso de telemetria estruturada ROS 2 gravada via logger JSON síncrono |
| Classificação de pacotes ROS 2 externos (Drake/Upstream) | `decisao-do-autor` | Fronteira formal do Contrato 3.1.0 e simulador tratado como caixa-preta |

- [x] Toda pendência tem plano de resolução
- [x] Nenhuma pendência será resolvida "escrevendo por cima"

## 5. Aprovação

| Campo | Valor |
| :--- | :--- |
| Aprovado por | Operador do Sistema / Usuário |
| Data | 08/11/2026 |
| Observações | Submetido para aprovação formal no Portão 5 |
