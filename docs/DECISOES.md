# Registro de Decisões de Arquitetura e Engenharia (ADR) — Projeto ATAS Visual

Este documento registra as decisões técnicas, escolhas de design, premissas de implementação e compromissos adotados durante o desenvolvimento da aplicação web do histórico ATAS.

---

## ADR 01: Modelo de Operação 100% Offline e Suporte a `file://`

- **Contexto:** O princípio inegociável 5 exige funcionamento offline abrindo `index.html` direto no navegador (protocolo `file://`), sem necessidade de servidor local HTTP (`http://localhost`), sem build obrigatório (sem Webpack/Vite em runtime) e sem dependência de CDNs externas.
- **Decisão:** Os dados estruturados extraídos do arquivo Markdown serão disponibilizados como um módulo JavaScript puro atribuído a uma variável global encapsulada em namespace (`window.ATAS_DATA = { ... }`) salvo em `data/conteudo.js`, além de um arquivo JSON espelho `data/conteudo.json`. Dessa forma, o navegador pode carregar o script via `<script src="data/conteudo.js"></script>` sem ser bloqueado pela política de CORS que impede `fetch('data/conteudo.json')` no protocolo `file://` em navegadores como Chrome e Firefox.
- **Consequências:** Funciona imediatamente com duplo-clique em qualquer sistema operacional, mantendo total separação entre dados estruturados, apresentação (CSS) e lógica/comportamento (JS).

---

## ADR 02: Renderização de Fórmulas Matemáticas sem CDNs Externas (KaTeX / MathJax Offline)

- **Contexto:** O texto contém formulações matemáticas cruciais (equações de FoV com $\operatorname{atan2}$, coordenadas $z_C$, funções de custo multi-objetivo, formulações de CBBA e NMPC). O uso de CDNs externas é proibido.
- **Decisão:** Implementar um motor de renderização matemática semântico em HTML5/CSS3 próprio (com suporte a tags `<math>`, flexbox math layouts, subscritos/sobrescritos e estilização tipográfica matemática em SVG/CSS), com fallback visual limpo e legível. Para expressões chave como o FoV e normas euclidianas, fornecer cards analíticos visuais com explicação dos termos.
- **Consequências:** Zero dependência externa, carregamento instantâneo, compatibilidade total com leitores de tela e suporte offline nativo em qualquer navegador.

---

## ADR 03: Diagramas Arquiteturais e de Fluxo com SVGs Nativos Vetoriais

- **Contexto:** O documento possui 26 blocos de código e diagramas ASCII fundamentais (arquitetura Drake–ROS 2, pipeline em camadas, máquina de estados de ativação de drones, fluxo CBBA e arquitetura segura com filtro NMPC/CBF).
- **Decisão:** Converter todos os diagramas conceituais em gráficos vetoriais SVG interativos embutidos (inline SVG) com cores estilizadas pelo Design System, animações suaves e legendas didáticas, preservando simultaneamente a versão em texto puro original num botão "Ver ASCII Original".
- **Consequências:** Máxima clareza instrucional para o usuário, visualização de dados de alta precisão em qualquer densidade de pixels (Retina/4K), fidelidade total aos dados do texto original e zero dependência de bibliotecas de renderização pesadas.

---

## ADR 04: Estratégia de Parseamento e Extração de Conteúdo (100% Cobertura)

- **Contexto:** O arquivo possui 2.521 linhas organizadas em 5 turnos de diálogo, com blocos internos delimitados por aspas triplas (`''' [lang]`) e crases triplas (` ``` [lang]`).
- **Decisão:** Construir um script de extração rigoroso em Python que processa o arquivo Markdown linha a linha, desfazendo o envelopamento externo do Perplexity sem perder um único caractere, estruturando cada mensagem em blocos semânticos tipados (`paragraph`, `heading`, `table`, `code_block`, `diagram`, `quote`, `reference_list`, `math`).
- **Consequências:** Cobertura verificável matematicamente contra o arquivo original, facilitando a auditoria da matriz de rastreabilidade (`docs/COBERTURA.md`).

---

## ADR 05: Acessibilidade WCAG 2.2 AA e Design System com Modo Escuro/Claro

- **Contexto:** A interface deve ser ergonômica para leitura técnica de longa duração, com suporte a modo claro e escuro, acessível via teclado e leitores de tela.
- **Decisão:** Implementação de CSS moderno com variáveis (`--bg-primary`, `--text-primary`, `--accent-color`, etc.), contraste calculado para exceder a razão mínima de 4.5:1 (WCAG AA), foco visível com anéis destacados, suporte a `prefers-color-scheme`, botão manual de alternância de tema persistido no `localStorage`, e `prefers-reduced-motion` respeitado em todas as transições e animações.
- **Consequências:** Experiência de leitura de padrão profissional, sem fadiga visual e totalmente inclusiva.

---

## ADR 06: Tratamento de Sintetizações e Conteúdos Didáticos Adicionados

- **Contexto:** O Princípio Inegociável 1 exige: "não invente, não omita e não distorça informações. Todo conteúdo exibido deve ser rastreável a um trecho do arquivo-fonte. Se acrescentar algo (um resumo, um glossário ou uma conexão entre tópicos), marque como 'Síntese do agente'".
- **Decisão:** Todas as sínteses didáticas (resumos visuais executivos, flashcards de estudo, quiz de revisão e tooltips do glossário) recebem explicitamente uma insígnia/tag visual `[Síntese do agente]` no cabeçalho e na documentação. O conteúdo original das mensagens permanece intocado e destacado com a tag `[Conteúdo original do diálogo]`.
- **Consequências:** Clareza ética e técnica indiscutível entre os dados brutos e os recursos instrucionais adicionados.
