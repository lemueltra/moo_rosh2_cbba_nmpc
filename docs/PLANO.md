# Plano de Implementação Detalhado — Aplicação Interativa ATAS

**Projeto:** Visualizador Interativo e Didático do Histórico ATAS (Drake, ROS 2, MOO e Drones)  
**Versão do Plano:** 1.0.0  
**Status do Gate 2:** APROVADO após Revisão Crítica

---

## 1. Arquitetura de Informação e Mapeamento Conteúdo $\to$ Componente

A aplicação é dividida em camadas lógicas para garantir carregamento progressivo, navegação fluida e aprendizado eficaz:

| Seção da Interface | Conteúdo Fonte | Componente / Padrão de Apresentação |
| :--- | :--- | :--- |
| **Header Fixo / Topo** | Metadados do ATAS, status do sistema e controles | Barra de navegação com logotipo, seletor de tema (claro/escuro), alternador de modo (Normal / Estudo / Apresentação), botão de impressão e barra de progresso de leitura. |
| **Sumário Lateral (Sidebar)** | 164 cabeçalhos hierárquicos e 5 turnos de diálogo | Menu retrátil (desktop fixo / mobile gaveta) com scrollspy dinâmico, contagem de tópicos e filtro de navegação rápida. |
| **Hero / Painel Executivo** | Síntese do Turno 1 e Turno 2 (`[Síntese do agente]`) | Cartões de KPIs (5 turnos, 10 drones, 8 tabelas, 91 referências, 100% open source), badge de arquitetura recomendada (Hierárquica / CBBA + NMPC) e resumo dos 4 pilares do ATAS. |
| **Barra de Busca e Filtros** | Todo o conteúdo indexado (126k chars) | Campo de busca instantânea em tempo real com realce em amarelo (`<mark>`), contador de ocorrências e filtros facetados (Turno 1 a 5, Tabelas, Código, Fórmulas, Diagramas). |
| **Linha do Tempo dos Turnos** | 5 Solicitações e 5 Respostas integrais | Acordeões expansíveis com metadados do turno, badges de tecnologias citadas, botões "Expandir Todos" / "Recolher Todos" e controle individual de leitura. |
| **Visualizador de Diagramas** | 26 diagramas ASCII e de fluxo | Diagramas interativos com SVG vetorial rico, controles de zoom/pan e aba alternativa para visualizar o diagrama ASCII original fielmente. |
| **Matrizes e Tabelas Comparativas** | 8 tabelas Markdown do arquivo | Tabelas interativas estilizadas com ordenação por clique no cabeçalho, busca em linhas, rolagem horizontal fluida e fixação do cabeçalho (*sticky header*). |
| **Blocos de Código & Contratos** | Códigos em C++, JSON, XML, Python e Text | Blocos de código estilizados com realce de sintaxe semântico, numeração de linhas, indicação da linguagem e botão de cópia rápida para a área de transferência com feedback visual ("Copiado!"). |
| **Painel de Fórmulas Matemáticas** | Condições de FoV, Projeção, Custo MOO e CBBA | Renderização semântica elegante com visualização geométrica auxiliar do cone de visão (Frustum). |
| **Glossário Técnico Flutuante** | 12 termos essenciais do ATAS (`[Síntese do agente]`) | Tooltips automáticos interativos com termos sublinhados no texto e painel dedicado com busca e filtros alfabéticos. |
| **Central de Referências & URLs** | 91 referências (47 + 44) e 131 URLs | Lista organizada em acordeão com status de validação, link externo seguro (`rel="noopener noreferrer"`) e checklist de próximos passos operacionais. |
| **Modo Estudo e Revisão** | Conceitos-chave extraídos (`[Síntese do agente]`) | Painel de Flashcards interativos (frente e verso com clique) e Quiz de autoavaliação com feedback imediato para fixação didática dos tópicos. |
| **Matriz de Cobertura & Auditoria** | Mapeamento 1:1 de 100% dos trechos do arquivo | Tabela de conferência linha a linha entre arquivo de entrada e elementos renderizados no DOM. |

---

## 2. Pipeline de Dados e Separação de Responsabilidades

1. **Parser e Extrator (`scripts/extract_data.py`):**
   - Lê `conversa_moo_rosh2_perplexity_261013.md`.
   - Normaliza os delimitadores de blocos de código e diagramas.
   - Extrai metadados estruturados, tópicos, turnos, blocos de conteúdo, tabelas, fórmulas e referências bibliográficas.
   - Gera `data/conteudo.json` (formato canônico de intercâmbio) e `data/conteudo.js` (carregável sem bloqueio de CORS em protocolo `file://`).
2. **Camada de Apresentação (`assets/css/`):**
   - `variables.css`: Design tokens, paleta de cores (WCAG AA), tipografia, espaçamentos, elevações e bordas.
   - `main.css`: Estilos gerais, layout responsivo (CSS Grid e Flexbox), tipografia fluida, resets e acessibilidade.
   - `components.css`: Estilização dos acordeões, tabelas, cards, diagramas SVG, flashcards, tooltips e busca.
   - `print.css`: Regras específicas para `@media print` para exportação limpa e diagramada em PDF.
3. **Camada de Comportamento (`assets/js/`):**
   - `data.js`: Ponte para `window.ATAS_DATA`.
   - `app.js`: Inicialização do DOM, gerenciador de estado (tema, progresso de leitura, modo de visualização), busca textual com realce, acordeões inteligentes, ordenação de tabelas e persistência em `localStorage`.
   - `svg-diagrams.js`: Gerador e gerenciador dos diagramas vetoriais SVG interativos.
   - `study-mode.js`: Controlador do carrossel de flashcards e lógica do quiz didático.

---

## 3. Design System e Identidade Visual

- **Conceito Visual:** Engenharia de Alta Tecnologia / Robótica Aeroespacial (tema escuro padrão com azul-marinho profundo, ciano espacial, verde-esmeralda para validações e cinzas neutros de alto contraste).
- **Paleta de Cores (WCAG 2.2 AA Contrast):**
  - Fundo Primário (Dark): `#0a0f1d` | Fundo Secundário: `#131b2e` | Cartão / Superfície: `#1a243c`
  - Texto Primário (Dark): `#f1f5f9` (Contraste 13.8:1) | Texto Secundário: `#94a3b8` (Contraste 5.2:1)
  - Acento Primário: `#38bdf8` (Azul Ciano, 8.4:1) | Acento Secundário: `#34d399` (Verde Esmeralda)
  - Alerta / Destaque: `#fbbf24` (Âmbar) | Erro / Restrição Rígida: `#f87171` (Coral)
  - Modo Claro Suportado: Fundo `#f8fafc`, Superfície `#ffffff`, Texto `#0f172a`, Acentos `#0284c7` e `#059669`.
- **Tipografia:**
  - Fonte do Sistema: Inter, -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Helvetica, Arial, sans-serif.
  - Fonte Monoespaçada: 'JetBrains Mono', 'Fira Code', Menlo, Consolas, Monaco, monospace.
- **Ícones:** Ícones vetoriais SVG inline (zero requisições de rede, escalabilidade perfeita).

---

## 4. Tarefas de Implementação e Estimativa de Esforço

| ID | Tarefa | Dependências | Critério de Aceite | Esforço Estimado |
| :---: | :--- | :---: | :--- | :---: |
| **T01** | Script de extração de dados e conversor de Markdown | Nenhuma | Gerar `data/conteudo.json` e `data/conteudo.js` com 100% dos dados originais e metadados. | 25 min |
| **T02** | Estruturação do Design System em CSS (`assets/css/`) | T01 | Variáveis CSS completas, contraste WCAG AA validado, suporte a modo claro/escuro e print. | 25 min |
| **T03** | Estruturação da carcaça semântica de `index.html` | T02 | HTML5 semântico com header, sidebar, main, seções acessíveis, ARIA tags e semântica estrita. | 20 min |
| **T04** | Mecanismo de Renderização Progressiva e Acordeões | T01, T03 | 5 turnos renderizados sem omissões, com botões expandir/recolher tudo e estado persistido. | 30 min |
| **T05** | Motor de Busca em Tempo Real e Filtros Facetados | T04 | Busca instantânea em 126k chars, highlight visual com `<mark>`, contagem de hits e filtros por tag. | 25 min |
| **T06** | Componente de Tabelas Ordenáveis e Responsivas | T04 | As 8 tabelas ordenáveis por coluna, com busca interna, cabeçalho sticky e scroll suave. | 20 min |
| **T07** | Gerador de Diagramas SVG Interativos e Código | T04 | Diagramas arquiteturais cruciais gerados em SVG inline com alternador para ASCII original. | 35 min |
| **T08** | Renderizador de Fórmulas Matemáticas Semânticas | T04 | Equações de FoV, custos e normas renderizadas com formatação matemática limpa e acessível. | 20 min |
| **T09** | Glossário Interativo e Tooltips de Termos Técnicos | T04 | Tooltips com posicionamento automático e painel dedicado com 12 termos essenciais (`[Síntese]`). | 20 min |
| **T10** | Painel de Referências, Links e Próximos Passos | T04 | Todas as 91 referências com links auditados e checklist operacional persistido. | 15 min |
| **T11** | Modo Estudo (Flashcards Interativos e Quiz de Fixação) | T04 | Flashcards interativos e Quiz de autoavaliação com pontuação dinâmica (`[Síntese do agente]`). | 25 min |
| **T12** | Matriz de Cobertura Automatizada (`docs/COBERTURA.md`) | T04 | Script de verificação DOM vs. Markdown garantindo 100% de presença e gerando relatório. | 20 min |
| **T13** | Suíte de Testes Automatizados e Relatório de QA | Todas | Testes de integridade, validação HTML/CSS, verificação de links, WCAG e `docs/RELATORIO_QA.md`. | 30 min |
| **T14** | Elaboração do Manual de Uso e Documentação (`README.md`) | Todas | Instruções completas de uso offline, atalhos de teclado, regeneração de dados e arquitetura. | 15 min |

---

## 5. Plano de Riscos e Mitigações

1. **Risco: Bloqueio de CORS ao abrir `index.html` via protocolo `file://`.**
   - *Mitigação:* Exportar os dados também como `data/conteudo.js` carregado via tag `<script>` normal, atribuindo `window.ATAS_DATA`. Assim funciona 100% sem servidor web.
2. **Risco: Perda ou truncamento de caracteres em equações ou blocos de código com formatações mistas.**
   - *Mitigação:* Usar script automatizado em Python que valida a equivalência de strings e contagem exata de linhas e caracteres no DOM final.
3. **Risco: Lentidão de renderização ou travamento de DOM devido ao volume de dados (126 KB de texto denso).**
   - *Mitigação:* Renderização sob demanda em acordeões e templates otimizados sem reflows desnecessários.
4. **Risco: Falha de contraste em modo escuro ou claro.**
   - *Mitigação:* Paleta testada previamente com fórmula WCAG 2.2 AA (taxa de contraste $\ge 4.5:1$ para texto regular e $\ge 3:1$ para texto grande e componentes interativos).

---

## 6. Gate 2 — Revisão Crítica do Plano

- **Lacunas encontradas na revisão:** Verificou-se a necessidade de incluir atalhos de teclado (ex: `Alt+S` para alternar modo estudo, `/` para focar na busca, `Esc` para limpar filtros) para reforçar a acessibilidade WCAG. Adicionado à especificação da tarefa T05 e T11.
- **Ambiguidades resolvidas:** Delimitou-se claramente a fronteira do que é "Conteúdo original do diálogo" e o que é "Síntese do agente", com indicadores visuais no DOM.
- **Resultado do Gate 2:** APROVADO. O plano atende a todos os princípios inegociáveis e exigências do projeto. Autorizado o início imediato da Fase 3 (Implementação).
