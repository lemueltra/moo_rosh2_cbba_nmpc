# AGENTS.md — projeto-artigo

Regras para agentes que trabalham **neste projeto-artigo**. Este arquivo existe
porque alguns harnesses não carregam skills; as regras abaixo valem mesmo sem
`code2paper` instalado. Em caso de conflito, ele prevalece sobre a prosa do
manuscrito.

## 1. O que é este diretório

Um artigo acadêmico em construção sobre **um sistema já implementado**. As
pastas numeradas são as etapas de apuração; `05_sections/` é a prosa. A ordem
lexicográfica importa: é a ordem do trabalho.

## 2. Regras invioláveis

1. **Nunca invente** resultado, métrica, teste, configuração, citação ou
   comportamento de código. O que não for comprovado vira
   `[EVIDÊNCIA PENDENTE: ...]` ou `[CITAÇÃO NECESSÁRIA: ...]`. Placeholder é
   entrega aceitável; número inventado não é.
2. **Nenhum número digitado à mão** em `05_sections/`. Use marcadores
   `{{R:MET-xxx}}` e resolva com `backfill_numbers.py`. Número solto no texto é
   defeito bloqueante.
3. **Distinga observado de inferido.** Observado cita `arquivo:linha` ou commit
   do sistema analisado. Inferido recebe a marca `[INFERIDO]`.
4. **`main.md` é derivado.** Editar à mão é erro: o próximo
   `build_manuscript.py` sobrescreve. Corrija a fonte, não o derivado. O mesmo
   vale para `07_tables/` quando o gerador existir; hoje ele não existe.
5. **Pare ao fim de cada fase** e aguarde aprovação explícita. Silêncio não é
   aprovação.
6. **Não modifique o sistema analisado.** Este projeto só lê o código-fonte
   alheio; não execute os testes dele sem confirmação do operador.

## 3. Ordem de escrita

`04_outline/outline.md` aprovado → Metodologia → Resultados → Conclusão →
Introdução (§3 contexto → §1–2 problema e lacuna) → Trabalhos Relacionados →
Discussão → Resumo.
Escrever o resumo antes dos resultados produz promessa que os dados não
sustentam; escrever os relacionados depois da discussão produz uma comparação
com autores que o texto ainda não apresentou.

## 4. Mapa das pastas

| Pasta | Conteúdo | Editável à mão? |
| :--- | :--- | :--- |
| `00_intake/` | escopo, venue, perguntas de pesquisa | sim |
| `01_inventory/` | `inventory.json`, `ros2_graph.json` | não (script) |
| `02_architecture/` | decisões, mapeamento ARCADIA | sim |
| `03_evidence/` | `results_manifest.json`, `evidence_ledger.json` | não (script) |
| `04_outline/` | `outline.md`, mapa claim → seção | sim (com aprovação) |
| `05_sections/` | seções IMRaD | sim |
| `06_figures/` | `.mmd`, `.svg` | não (script) |
| `07_tables/` | tabelas (só marcadores; sem gerador ainda) | sim, via marcadores |
| `08_references/` | `.bib`, fichamentos | sim |
| `09_checklists/` | relatórios de verificação | não (script) |
| `log/` | comandos e decisões | sim (append) |
| `main.md` | manuscrito montado | não (derivado) |

## 5. Estados de evidência

`verificado` · `parcial` · `evidencia-pendente` · `decisao-do-autor`.
Só `verificado` sustenta afirmação factual no texto. `decisao-do-autor` cobre
escolhas de recorte e estilo — nunca dados.

## 6. Antes de dizer que terminou

- [ ] As verificações de rastreabilidade foram aplicadas — por
  `check_paper.py --all` (que existe desde a Fase 7), com a saída real em
  `09_checklists/check_paper.json` via `--out`; nunca preenchido à mão.
- [ ] Nenhum `{{R:...}}` não resolvido em `05_sections/`.
- [ ] Toda figura de `06_figures/` está referenciada no texto.
- [ ] Todo `[EVIDÊNCIA PENDENTE]` listado no relatório da fase.
- [ ] `log/` registra os comandos executados.
- [ ] O relatório final declara o que **não** foi verificado.
