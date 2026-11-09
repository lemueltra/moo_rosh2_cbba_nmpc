# `09_checklists`

Relatórios de verificação e revisão.

| Arquivo | Conteúdo | Quem escreve |
| :--- | :--- | :--- |
| `check_paper.json` | Resultado das 9 verificações de rastreabilidade | `check_paper.py --out` |
| `review_findings.json` | Notas por dimensão e apontamentos com referência | Agente revisor (é a revisão) |
| `review_scores.json` | Notas aceitas, total e veredito | `score_review.py --out` — nunca à mão |

> [!WARNING]
> `review_scores.json` e `check_paper.json` só podem vir dos scripts, com
> `--out`; preenchê-los como se o script tivesse rodado é fabricar evidência.
> `review_findings.json` é a exceção deliberada: ele **é** a revisão, escrita
> pelo agente, e é a entrada que `score_review.py` verifica e soma.
> `export_pandoc.py` converte o manuscrito montado em LaTeX e, com `--pdf`, em
> PDF: rode-o em vez de editar `build/paper.tex` à mão.
