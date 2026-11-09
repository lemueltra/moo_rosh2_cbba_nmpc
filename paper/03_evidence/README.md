# `03_evidence`

Manifesto de resultados, registro de identidade e ledger de evidências, gerados
por `c2p-evidence`.

- `results_manifest.json` — todo número citável, com procedência e `sha256`.
- `identity_registry.json` — chave → identificador (`SRC-`, `MET-`, `AGG-`).
  Append-only, sem carimbo de tempo; é o que mantém os identificadores estáveis
  quando a lista de fontes chega em outra ordem. **Não edite à mão.** Se ele
  divergir do manifesto, apague-o: a próxima coleta o semeia do manifesto.
- `evidence_ledger.json` — cada afirmação do texto ligada à sua base factual.
- `raw/` — cópia imutável de cada fonte no instante da coleta.

Para uma coleta em diretório vazio, semeie os identificadores do manifesto:

```bash
python3 ../../scripts/collect_results.py <fontes> --out 03_evidence \
    --seed-registry 03_evidence/results_manifest.json --deterministic
```
