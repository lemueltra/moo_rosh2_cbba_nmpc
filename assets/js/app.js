/**
 * Motor Principal da Aplicação ATAS Visual
 * Renderização dinâmica, busca em tempo real, acordeões, scrollspy, ordenação e persistência local.
 */

document.addEventListener('DOMContentLoaded', () => {
  if (!window.ATAS_DATA) {
    console.error('Dados do ATAS não encontrados em window.ATAS_DATA.');
    return;
  }

  const app = new ATASApplication(window.ATAS_DATA);
  app.init();
});

class ATASApplication {
  constructor(data) {
    this.data = data;
    this.currentTheme = localStorage.getItem('atas_theme') || 'dark';
    this.currentMode = localStorage.getItem('atas_mode') || 'normal';
    this.searchQuery = '';
    this.activeFilter = 'all';
  }

  init() {
    this.applyTheme(this.currentTheme);
    this.setupThemeToggle();
    this.setupModeToggle();
    this.setupProgressBar();
    this.setupKeyboardShortcuts();
    
    this.renderKPIs();
    this.renderSidebar();
    this.renderTurns();
    this.renderGlossaryModal();
    this.setupSearchAndFilters();
    this.setupStudyMode();
    this.setupScrollSpy();
  }

  /* 1. TEMA (Claro / Escuro) */
  applyTheme(theme) {
    document.documentElement.setAttribute('data-theme', theme);
    localStorage.setItem('atas_theme', theme);
    this.currentTheme = theme;
    const themeBtn = document.getElementById('btn-theme-toggle');
    if (themeBtn) {
      themeBtn.innerHTML = theme === 'dark' 
        ? '<svg width="20" height="20" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2"><circle cx="12" cy="12" r="5"/><path d="M12 1v2M12 21v2M4.22 4.22l1.42 1.42M18.36 18.36l1.42 1.42M1 12h2M21 12h2M4.22 19.78l1.42-1.42M18.36 5.64l1.42-1.42"/></svg>'
        : '<svg width="20" height="20" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2"><path d="M21 12.79A9 9 0 1 1 11.21 3 7 7 0 0 0 21 12.79z"/></svg>';
    }
  }

  setupThemeToggle() {
    const themeBtn = document.getElementById('btn-theme-toggle');
    if (themeBtn) {
      themeBtn.addEventListener('click', () => {
        this.applyTheme(this.currentTheme === 'dark' ? 'light' : 'dark');
      });
    }
  }

  /* 2. MODO DE VISUALIZAÇÃO (Normal / Estudo / Apresentação) */
  setupModeToggle() {
    const studyBtn = document.getElementById('btn-study-mode');
    const studyContainer = document.getElementById('study-mode-container');
    
    if (studyBtn && studyContainer) {
      studyBtn.addEventListener('click', () => {
        const isActive = studyContainer.classList.toggle('active');
        studyBtn.classList.toggle('active', isActive);
        if (isActive) {
          studyContainer.scrollIntoView({ behavior: 'smooth' });
        }
      });
    }

    const printBtn = document.getElementById('btn-print-page');
    if (printBtn) {
      printBtn.addEventListener('click', () => {
        // Expandir todos os turnos antes da impressão
        document.querySelectorAll('.turn-container').forEach(el => el.classList.add('open'));
        window.print();
      });
    }
  }

  /* 3. BARRA DE LEITURA SUPERIOR */
  setupProgressBar() {
    const bar = document.getElementById('reading-progress-bar');
    if (!bar) return;
    window.addEventListener('scroll', () => {
      const winScroll = document.documentElement.scrollTop || document.body.scrollTop;
      const height = document.documentElement.scrollHeight - document.documentElement.clientHeight;
      const scrolled = height > 0 ? (winScroll / height) * 100 : 0;
      bar.style.width = `${scrolled}%`;
    });
  }

  /* 4. RENDERIZAÇÃO DOS KPIS */
  renderKPIs() {
    const container = document.getElementById('kpi-container');
    if (!container) return;
    container.innerHTML = `
      <div class="kpi-card">
        <div class="kpi-value">${this.data.metadata.total_turns} Turnos</div>
        <div class="kpi-label">Ciclo de Consultoria</div>
        <div class="kpi-subtext">5 solicitações + 5 respostas completas</div>
      </div>
      <div class="kpi-card">
        <div class="kpi-value">10 Drones</div>
        <div class="kpi-label">Escala do Enxame</div>
        <div class="kpi-subtext">2 robôs terrestres + até 10 VANTs</div>
      </div>
      <div class="kpi-card">
        <div class="kpi-value">8 Tabelas</div>
        <div class="kpi-label">Matrizes Comparativas</div>
        <div class="kpi-subtext">Estratégias, QoS, Métricas e Ferramentas</div>
      </div>
      <div class="kpi-card">
        <div class="kpi-value">91 Citações</div>
        <div class="kpi-label">Base Bibliográfica</div>
        <div class="kpi-subtext">Artigos, documentação oficial e repositórios</div>
      </div>
      <div class="kpi-card">
        <div class="kpi-value">100% Open</div>
        <div class="kpi-label">Stack Restrito</div>
        <div class="kpi-subtext">Drake, ROS 2, Ipopt, acados, Blender</div>
      </div>
    `;
  }

  /* 5. SIDEBAR COM SCROLLSPY */
  renderSidebar() {
    const navList = document.getElementById('sidebar-nav-list');
    if (!navList) return;

    let html = `
      <li class="sidebar-nav-item">
        <a href="#hero-section" class="active">
          <span>Visão Executiva</span>
          <span class="nav-badge">KPIs</span>
        </a>
      </li>
      <li class="sidebar-nav-item">
        <a href="#search-section">
          <span>Busca & Filtros</span>
          <span class="nav-badge">Ctrl+/</span>
        </a>
      </li>
    `;

    this.data.turns.forEach(turn => {
      html += `
        <li class="sidebar-nav-item">
          <a href="#turn-${turn.id}">
            <span>T${turn.id}: ${turn.short_title}</span>
            <span class="nav-badge">${turn.tags[0] || 'Turno'}</span>
          </a>
        </li>
      `;
    });

    html += `
      <li class="sidebar-nav-item">
        <a href="#study-mode-container">
          <span>Modo Estudo</span>
          <span class="nav-badge" style="background: var(--purple-surface); color: var(--purple-primary);">Quiz</span>
        </a>
      </li>
      <li class="sidebar-nav-item">
        <a href="#glossary-section">
          <span>Glossário Técnico</span>
          <span class="nav-badge">12 Termos</span>
        </a>
      </li>
    `;

    navList.innerHTML = html;

    // Toggle menu mobile
    const mobileBtn = document.getElementById('mobile-menu-btn');
    const sidebar = document.getElementById('app-sidebar');
    if (mobileBtn && sidebar) {
      mobileBtn.addEventListener('click', () => {
        sidebar.classList.toggle('open');
      });
      // Fecha ao clicar em um link no mobile
      sidebar.querySelectorAll('a').forEach(a => {
        a.addEventListener('click', () => {
          if (window.innerWidth <= 1024) sidebar.classList.remove('open');
        });
      });
    }
  }

  /* 6. RENDERIZAÇÃO DOS 5 TURNOS (ACORDEÕES) */
  renderTurns() {
    const turnsContainer = document.getElementById('turns-container');
    if (!turnsContainer) return;

    let html = '';
    this.data.turns.forEach(turn => {
      const openClass = turn.id === 1 || turn.id === 2 ? 'open' : '';
      
      // Renderizar tags
      const tagsHtml = turn.tags.map(tag => `<span class="meta-chip">${tag}</span>`).join('');

      // Formatar corpo da resposta com tabelas, códigos e diagramas
      const formattedResponse = this.formatResponseContent(turn);

      html += `
        <article class="turn-container ${openClass}" id="turn-${turn.id}" data-turn-id="${turn.id}">
          <header class="turn-header" onclick="this.parentElement.classList.toggle('open')">
            <div class="turn-header-left">
              <div class="turn-number-tag" style="color: var(--${turn.color}-primary);">
                Turno ${turn.id} de ${this.data.metadata.total_turns}
              </div>
              <h2 class="turn-title">${turn.title}</h2>
              <p class="turn-summary-text">${turn.summary}</p>
              <div class="turn-meta-chips">${tagsHtml}</div>
            </div>
            <div class="turn-header-right">
              <svg class="chevron-icon" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2">
                <polyline points="6 9 12 15 18 9"></polyline>
              </svg>
            </div>
          </header>

          <div class="turn-body">
            <!-- Solicitação do Usuário -->
            <section class="message-bubble solicitacao-bubble" aria-label="Solicitação do Usuário">
              <div class="message-header">
                <div class="message-author">
                  <svg width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" style="color: var(--cyan-primary);">
                    <path d="M20 21v-2a4 4 0 0 0-4-4H8a4 4 0 0 0-4 4v2"></path>
                    <circle cx="12" cy="7" r="4"></circle>
                  </svg>
                  <span>Engenheiro / Pesquisador</span>
                </div>
                <span class="badge-original">Solicitação Original</span>
              </div>
              <div class="message-content">
                ${this.formatSolicitacao(turn.solicitacao.clean)}
              </div>
            </section>

            <!-- Resposta da IA / Consultoria -->
            <section class="message-bubble resposta-bubble" aria-label="Resposta da Consultoria">
              <div class="message-header">
                <div class="message-author">
                  <svg width="18" height="18" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" style="color: var(--emerald-primary);">
                    <polygon points="12 2 15.09 8.26 22 9.27 17 14.14 18.18 21.02 12 17.77 5.82 21.02 7 14.14 2 9.27 8.91 8.26 12 2"></polygon>
                  </svg>
                  <span>IA Consultora em Engenharia & Robótica</span>
                </div>
                <span class="badge-original">Resposta Técnica Completa</span>
              </div>
              <div class="message-content">
                ${formattedResponse}
              </div>
            </section>
          </div>
        </article>
      `;
    });

    turnsContainer.innerHTML = html;
    this.attachCopyHandlers();
    this.setupTableSorting();
  }

  formatSolicitacao(text) {
    // Formatar quebras de linha e destaques da solicitação
    const paragraphs = text.split(/\n\s*\n/);
    return paragraphs.map(p => {
      p = this.escapeHtml(p.trim());
      // Realçar listas numeradas
      p = p.replace(/^(\d+\.\s+.*)$/gm, '<strong>$1</strong>');
      return `<p>${p.replace(/\n/g, '<br>')}</p>`;
    }).join('');
  }

  formatResponseContent(turn) {
    let content = turn.resposta.clean;

    // Inserir diagramas SVG nativos em pontos específicos de cada turno
    if (turn.id === 1 && window.ATAS_DIAGRAMS) {
      content = content.replace("A infraestrutura abaixo deve ser compartilhada pelas três estratégias:", 
        `A infraestrutura abaixo deve ser compartilhada pelas três estratégias:
        <div class="svg-diagram-card">
          <div class="svg-diagram-header">
            <span class="svg-diagram-title">Diagrama Vetorial: Arquitetura Drake + ROS 2</span>
            <span class="badge-sintese">[Síntese do agente]</span>
          </div>
          <div class="svg-container">${window.ATAS_DIAGRAMS.drakeRosArchitecture}</div>
        </div>`
      );
    } else if (turn.id === 2 && window.ATAS_DIAGRAMS) {
      content = content.replace("### Máquina de estados", 
        `### Máquina de estados
        <div class="svg-diagram-card">
          <div class="svg-diagram-header">
            <span class="svg-diagram-title">Diagrama Vetorial: Máquina de Estados de Ativação</span>
            <span class="badge-sintese">[Síntese do agente]</span>
          </div>
          <div class="svg-container">${window.ATAS_DIAGRAMS.droneStateMachine}</div>
        </div>`
      );
    } else if (turn.id === 4 && window.ATAS_DIAGRAMS) {
      content = content.replace("## Arquitetura adequada", 
        `## Arquitetura adequada
        <div class="svg-diagram-card">
          <div class="svg-diagram-header">
            <span class="svg-diagram-title">Diagrama Vetorial: Arquitetura Híbrida Segura (Filtro de Controle)</span>
            <span class="badge-sintese">[Síntese do agente]</span>
          </div>
          <div class="svg-container">${window.ATAS_DIAGRAMS.safetyPipeline}</div>
        </div>`
      );
    } else if (turn.id === 5 && window.ATAS_DIAGRAMS) {
      content = content.replace("## Estratégia recomendada", 
        `## Estratégia recomendada
        <div class="svg-diagram-card">
          <div class="svg-diagram-header">
            <span class="svg-diagram-title">Diagrama Vetorial: Pipeline Blender &rarr; SDFormat &rarr; Drake</span>
            <span class="badge-sintese">[Síntese do agente]</span>
          </div>
          <div class="svg-container">${window.ATAS_DIAGRAMS.mapCreationWorkflow}</div>
        </div>`
      );
    }

    // Processar blocos de código triplos (''' lang ... ''')
    content = content.replace(/'''\s*([a-zA-Z0-9_\-\+]*)\n([\s\S]*?)'''/g, (match, lang, code) => {
      const language = lang.trim() || 'text';
      const escapedCode = this.escapeHtml(code);
      return `
        <div class="code-block-container">
          <div class="code-block-header">
            <span class="code-lang-tag">${language}</span>
            <button class="btn-copy" data-code="${encodeURIComponent(code)}">
              <svg width="14" height="14" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2">
                <rect x="9" y="9" width="13" height="13" rx="2" ry="2"></rect>
                <path d="M5 15H4a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h9a2 2 0 0 1 2 2v1"></path>
              </svg>
              <span>Copiar</span>
            </button>
          </div>
          <div class="code-block-body">
            <pre><code>${escapedCode}</code></pre>
          </div>
        </div>
      `;
    });

    // Processar fórmulas matemáticas em destaque \[ ... \]
    content = content.replace(/\\\[([\s\S]*?)\\\]/g, (match, formula) => {
      return `<div class="math-block" role="math" aria-label="${this.escapeHtml(formula)}">\\[ ${this.escapeHtml(formula)} \\]</div>`;
    });

    // Processar cabeçalhos ## e ###
    content = content.replace(/^###\s+(.*)$/gm, (match, title) => {
      const anchor = 'sec-' + this.slugify(title);
      return `<h3 id="${anchor}">${title}</h3>`;
    });
    content = content.replace(/^##\s+(.*)$/gm, (match, title) => {
      const anchor = 'sec-' + this.slugify(title);
      return `<h2 id="${anchor}">${title}</h2>`;
    });

    // Processar listas não ordenadas e ordenadas
    content = content.replace(/^(?:\s*-\s+(.*))(?:\n(?:\s*-\s+.*))*/gm, (match) => {
      const items = match.split('\n').map(line => {
        const itemText = line.replace(/^\s*-\s+/, '').trim();
        return `<li>${this.formatInlineMarkdown(itemText)}</li>`;
      }).join('');
      return `<ul>${items}</ul>`;
    });

    // Formatar parágrafos comuns
    const rawParagraphs = content.split(/\n\s*\n/);
    const formattedParagraphs = rawParagraphs.map(p => {
      p = p.trim();
      if (p.startsWith('<h2') || p.startsWith('<h3') || p.startsWith('<ul') || p.startsWith('<div') || p.startsWith('|')) {
        return p;
      }
      return `<p>${this.formatInlineMarkdown(p)}</p>`;
    });

    let resultHtml = formattedParagraphs.join('\n');

    // Renderizar tabelas Markdown de forma estilizada
    turn.tables.forEach((tbl, tIdx) => {
      const tableHtml = this.buildInteractiveTable(tbl, turn.id, tIdx);
      // Substituir o bloco markdown bruto da tabela pelo HTML interativo
      resultHtml = resultHtml.replace(tbl.raw, tableHtml);
    });

    return resultHtml;
  }

  formatInlineMarkdown(text) {
    // Negrito
    text = text.replace(/\*\*(.*?)\*\*/g, '<strong>$1</strong>');
    // Código inline
    text = text.replace(/`([^`]+)`/g, '<code style="background: var(--bg-tertiary); padding: 2px 5px; border-radius: 4px; font-family: var(--font-mono); font-size: 0.9em; color: var(--cyan-primary);">$1</code>');
    // Links externos
    text = text.replace(/\[([^\]]+)\]\((https?:\/\/[^\s)]+)\)/g, '<a href="$2" target="_blank" rel="noopener noreferrer">$1 ↗</a>');
    // Notas de rodapé [^1]
    text = text.replace(/\[\^(\d+)\]/g, '<sup style="color: var(--cyan-primary); font-weight: bold; margin-left: 2px;">[$1]</sup>');
    return text;
  }

  buildInteractiveTable(tbl, turnId, tableIdx) {
    const tableId = `table-${turnId}-${tableIdx}`;
    let ths = tbl.headers.map((h, i) => `<th data-col="${i}" onclick="window.ATAS_APP.sortTable('${tableId}', ${i})">${h} ↕</th>`).join('');
    let trs = tbl.rows.map(row => {
      let tds = row.map(c => `<td>${this.formatInlineMarkdown(c)}</td>`).join('');
      return `<tr>${tds}</tr>`;
    }).join('');

    return `
      <div class="table-responsive-wrapper">
        <table class="data-table" id="${tableId}">
          <thead>
            <tr>${ths}</tr>
          </thead>
          <tbody>
            ${trs}
          </tbody>
        </table>
      </div>
    `;
  }

  /* 7. ORDENAÇÃO DE TABELAS */
  setupTableSorting() {
    window.ATAS_APP = window.ATAS_APP || {};
    window.ATAS_APP.sortTable = (tableId, colIndex) => {
      const table = document.getElementById(tableId);
      if (!table) return;
      const tbody = table.querySelector('tbody');
      const rows = Array.from(tbody.querySelectorAll('tr'));
      
      const currentDir = table.getAttribute(`data-dir-${colIndex}`) === 'asc' ? 'desc' : 'asc';
      table.setAttribute(`data-dir-${colIndex}`, currentDir);

      rows.sort((a, b) => {
        const valA = a.children[colIndex].textContent.trim();
        const valB = b.children[colIndex].textContent.trim();
        
        const numA = parseFloat(valA.replace(/[^0-9.-]/g, ''));
        const numB = parseFloat(valB.replace(/[^0-9.-]/g, ''));
        
        if (!isNaN(numA) && !isNaN(numB)) {
          return currentDir === 'asc' ? numA - numB : numB - numA;
        }
        return currentDir === 'asc' ? valA.localeCompare(valB) : valB.localeCompare(valA);
      });

      rows.forEach(r => tbody.appendChild(r));
    };
  }

  /* 8. CÓPIA DE CÓDIGO COM FEEDBACK */
  attachCopyHandlers() {
    document.querySelectorAll('.btn-copy').forEach(btn => {
      btn.addEventListener('click', async (e) => {
        const code = decodeURIComponent(btn.getAttribute('data-code'));
        try {
          await navigator.clipboard.writeText(code);
          const originalText = btn.innerHTML;
          btn.innerHTML = '<span>✓ Copiado!</span>';
          btn.style.color = 'var(--emerald-primary)';
          btn.style.borderColor = 'var(--emerald-primary)';
          setTimeout(() => {
            btn.innerHTML = originalText;
            btn.style.color = '';
            btn.style.borderColor = '';
          }, 2000);
        } catch (err) {
          console.error('Falha ao copiar:', err);
        }
      });
    });
  }

  /* 9. BUSCA E FILTROS EM TEMPO REAL */
  setupSearchAndFilters() {
    const input = document.getElementById('search-input');
    const clearBtn = document.getElementById('search-clear-btn');
    const infoText = document.getElementById('search-results-info');
    const filterPills = document.querySelectorAll('.filter-pill');

    if (!input) return;

    input.addEventListener('input', (e) => {
      this.searchQuery = e.target.value.trim().toLowerCase();
      clearBtn.classList.toggle('visible', this.searchQuery.length > 0);
      this.performSearch();
    });

    if (clearBtn) {
      clearBtn.addEventListener('click', () => {
        input.value = '';
        this.searchQuery = '';
        clearBtn.classList.remove('visible');
        this.performSearch();
        input.focus();
      });
    }

    filterPills.forEach(pill => {
      pill.addEventListener('click', () => {
        filterPills.forEach(p => p.classList.remove('active'));
        pill.classList.add('active');
        this.activeFilter = pill.getAttribute('data-filter');
        this.performSearch();
      });
    });
  }

  performSearch() {
    const turnEls = document.querySelectorAll('.turn-container');
    const infoText = document.getElementById('search-results-info');
    let totalMatches = 0;
    let visibleTurns = 0;

    // Remover highlights anteriores
    document.querySelectorAll('mark.search-highlight').forEach(mark => {
      const parent = mark.parentNode;
      parent.replaceChild(document.createTextNode(mark.textContent), mark);
      parent.normalize();
    });

    turnEls.forEach(el => {
      const turnId = parseInt(el.getAttribute('data-turn-id'));
      const turnData = this.data.turns.find(t => t.id === turnId);
      
      let matchesFilter = true;
      if (this.activeFilter !== 'all') {
        if (this.activeFilter === 'tabelas' && turnData.tables.length === 0) matchesFilter = false;
        if (this.activeFilter === 'codigo' && turnData.code_blocks.length === 0) matchesFilter = false;
        if (this.activeFilter === 'drake' && !turnData.tags.includes('Drake')) matchesFilter = false;
        if (this.activeFilter === 'cbba' && !turnData.tags.includes('CBBA')) matchesFilter = false;
        if (this.activeFilter === 'nmpc' && !turnData.tags.includes('NMPC')) matchesFilter = false;
      }

      if (!matchesFilter) {
        el.style.display = 'none';
        return;
      }

      if (!this.searchQuery) {
        el.style.display = 'block';
        visibleTurns++;
        return;
      }

      const text = el.textContent.toLowerCase();
      if (text.includes(this.searchQuery)) {
        el.style.display = 'block';
        el.classList.add('open');
        visibleTurns++;
        
        // Destacar ocorrências no corpo do turno
        const occurrences = this.highlightTextInElement(el.querySelector('.turn-body'), this.searchQuery);
        totalMatches += occurrences;
      } else {
        el.style.display = 'none';
      }
    });

    if (infoText) {
      if (this.searchQuery) {
        infoText.classList.add('visible');
        infoText.textContent = `Encontradas ${totalMatches} ocorrências em ${visibleTurns} turnos.`;
      } else {
        infoText.classList.remove('visible');
      }
    }
  }

  highlightTextInElement(element, query) {
    if (!element || !query) return 0;
    let count = 0;
    const walker = document.createTreeWalker(element, NodeFilter.SHOW_TEXT, null, false);
    const nodesToReplace = [];

    while (walker.nextNode()) {
      const node = walker.currentNode;
      if (node.parentElement && (node.parentElement.tagName === 'SCRIPT' || node.parentElement.tagName === 'STYLE' || node.parentElement.tagName === 'MARK' || node.parentElement.tagName === 'CODE')) {
        continue;
      }
      if (node.nodeValue.toLowerCase().includes(query)) {
        nodesToReplace.push(node);
      }
    }

    nodesToReplace.forEach(node => {
      const text = node.nodeValue;
      const regex = new RegExp(`(${this.escapeRegex(query)})`, 'gi');
      const parts = text.split(regex);
      const span = document.createElement('span');
      
      parts.forEach(part => {
        if (part.toLowerCase() === query.toLowerCase()) {
          count++;
          const mark = document.createElement('mark');
          mark.className = 'search-highlight';
          mark.textContent = part;
          span.appendChild(mark);
        } else if (part.length > 0) {
          span.appendChild(document.createTextNode(part));
        }
      });
      node.parentNode.replaceChild(span, node);
    });

    return count;
  }

  /* 10. GLOSSÁRIO E MODAL */
  renderGlossaryModal() {
    const container = document.getElementById('glossary-cards-container');
    if (!container) return;
    container.innerHTML = this.data.glossary.map(item => `
      <div style="background: var(--bg-secondary); border: 1px solid var(--border-medium); border-radius: var(--radius-lg); padding: var(--space-4);">
        <div style="display: flex; align-items: center; justify-content: space-between; margin-bottom: var(--space-2);">
          <strong style="color: var(--cyan-primary); font-size: var(--text-base);">${item.term}</strong>
          <span style="font-size: 10px; padding: 2px 6px; border-radius: 4px; background: var(--bg-tertiary); color: var(--text-muted);">${item.tag}</span>
        </div>
        <p style="font-size: var(--text-sm); color: var(--text-secondary); line-height: 1.5;">${item.definition}</p>
      </div>
    `).join('');
  }

  /* 11. MODO ESTUDO */
  setupStudyMode() {
    if (window.ATAS_STUDY_MODE) {
      window.ATAS_STUDY_MODE.renderFlashcards(document.getElementById('flashcards-container'));
      window.ATAS_STUDY_MODE.renderQuiz(document.getElementById('quiz-container'));
    }
  }

  /* 12. SCROLLSPY */
  setupScrollSpy() {
    const sections = document.querySelectorAll('article.turn-container, #hero-section, #study-mode-container, #glossary-section');
    const navLinks = document.querySelectorAll('.sidebar-nav-item a');

    window.addEventListener('scroll', () => {
      let currentId = '';
      sections.forEach(sec => {
        const secTop = sec.offsetTop - 150;
        if (window.scrollY >= secTop) {
          currentId = sec.getAttribute('id');
        }
      });

      navLinks.forEach(link => {
        link.classList.remove('active');
        if (link.getAttribute('href') === `#${currentId}`) {
          link.classList.add('active');
        }
      });
    });
  }

  /* 13. ATALHOS DE TECLADO */
  setupKeyboardShortcuts() {
    window.addEventListener('keydown', (e) => {
      // '/' para focar na busca
      if (e.key === '/' && document.activeElement.tagName !== 'INPUT') {
        e.preventDefault();
        const searchInput = document.getElementById('search-input');
        if (searchInput) searchInput.focus();
      }
      // 'Esc' para limpar busca
      if (e.key === 'Escape') {
        const searchInput = document.getElementById('search-input');
        if (searchInput && document.activeElement === searchInput) {
          searchInput.value = '';
          this.searchQuery = '';
          this.performSearch();
          searchInput.blur();
        }
      }
    });
  }

  /* UTILITÁRIOS */
  escapeHtml(str) {
    if (!str) return '';
    return str.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;').replace(/"/g, '&quot;');
  }

  escapeRegex(str) {
    return str.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
  }

  slugify(text) {
    return text.toString().toLowerCase().trim()
      .replace(/\s+/g, '-')
      .replace(/[^\w\-]+/g, '')
      .replace(/\-\-+/g, '-');
  }
}
