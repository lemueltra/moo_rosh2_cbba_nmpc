/**
 * Controlador do Modo de Estudo e Revisão Pedagógica
 * Contém Flashcards interativos e Quiz de autoavaliação com pontuação instantânea.
 * Todos os conteúdos deste módulo são explicitamente marcados como [Síntese do agente].
 */

window.ATAS_STUDY_MODE = {
  flashcards: [
    {
      topic: "Arquitetura Drake vs. ROS 2",
      question: "Por que não é recomendado transformar cada bloco interno do Drake em um nó ROS 2 individual?",
      answer: "Porque o custo de serialização de mensagens e a latência de transporte do middleware DDS dominariam o tempo de execução. Operações em alta taxa (cinemática, derivadas, custos matemáticos) devem permanecer no Diagram acoplado em memória compartilhada do Drake, reservando nós ROS 2 apenas para fronteiras distribuídas (drones e comunicação V2X)."
    },
    {
      topic: "Visibilidade e FoV",
      question: "Quais são os 3 níveis da arquitetura de FoV recomendados para a versão alfa do ATAS?",
      answer: "L0 Analítico: teste geométrico rápido de frustum contra bounding boxes ou pontos (usado dentro do solver). L1 Ray-Casting: emissão de raios para checar oclusões discretas de obstáculos. L2 Label Image: renderização semântica de baixa resolução gerada pelo SceneGraph para validação da fração visível e IDs observados."
    },
    {
      topic: "Coordenação Distribuída",
      question: "Qual o papel do CBBA e como ele se articula com o NMPC local?",
      answer: "O CBBA (Consensus-Based Bundle Algorithm) opera em taxa menor (~1 Hz) para construir feixes de tarefas e chegar a um consenso distribuído de quais drones cobrem quais regiões. O NMPC opera em taxa rápida (10–20 Hz) em cada drone individualmente, calculando os comandos contínuos de trajetória (x,y,z,yaw) e garantindo anti-colisão mútua."
    },
    {
      topic: "Inteligência Artificial (Laya)",
      question: "Como o modelo Laya (ModernBERT) deve ser utilizado com segurança no sistema?",
      answer: "O Laya deve ser usado estritamente como heurística de inicialização (warm start), previsor de ocupação ou podador de espaço de busca (soft pruning). Ele nunca deve atuar como controlador de voo em malha fechada direta, devendo ser sempre filtrado pelo NMPC e por barreiras formais de segurança (CBF)."
    },
    {
      topic: "Teoria de Controle",
      question: "O que é 'Viabilidade Recursiva' e por que modelos de atenção não conseguem garanti-la?",
      answer: "Viabilidade recursiva é a propriedade matemática pela qual a existência de uma solução viável no instante t assegura a existência de ao menos uma solução viável em t+1. Modelos de Transformers geram saídas estatísticas por aproximação e não possuem provas analíticas de viabilidade nem respeito estrito a restrições rígidas dinâmicas."
    },
    {
      topic: "Modelagem 3D",
      question: "Por que se deve separar a malha visual da malha de colisão nos arquivos SDFormat (SDF)?",
      answer: "Malhas visuais no Blender/glTF possuem alta contagem de polígonos para renderização estética. Para simulação física e checagem de colisão no Drake, geometrias complexas causam lentidão extrema no SceneGraph; por isso, usam-se primitivas (boxes, cilindros) ou cascas convexas simplificadas para as tags de colisão."
    }
  ],

  quiz: [
    {
      id: 1,
      question: "Para o cálculo de FoV dentro do ciclo de otimização em tempo real (NMPC), qual abordagem deve ser usada?",
      options: [
        { text: "L0 Analítico com funções diferenciáveis suaves aproximando as bordas do frustum.", correct: true },
        { text: "Renderização completa fotorrealista com sombras e texturas via Unreal Engine.", correct: false },
        { text: "Ray-casting com 10.000 raios por frame em malhas triangulares não simplificadas.", correct: false },
        { text: "Simulação de ruído Gaussiano puro sem verificação de visada geométrica.", correct: false }
      ],
      explanation: "Funções de custo em NLP (Nonlinear Programming) requerem continuidade e derivadas; portanto, usa-se a formulação L0 analítica suave, deixando ray-casting e imagens semânticas para verificação fora da malha do solver."
    },
    {
      id: 2,
      question: "Qual distribuição de Linux e tecnologia de isolamento é recomendada para a versão alfa reproduzível?",
      options: [
        { text: "Container Ubuntu (22.04 para drake-ros ou 24.04 para ROS 2 Jazzy) sobre o host Arch Linux.", correct: true },
        { text: "Instalação direta de pacotes instáveis do AUR sobre o Arch Linux sem container.", correct: false },
        { text: "Máquina virtual Windows 11 com WSL1.", correct: false },
        { text: "Compilação manual com GCC experimental em FreeBSD.", correct: false }
      ],
      explanation: "Manter o Arch Linux como sistema host e encapsular as versões fixadas de ROS 2 e Drake em um container Ubuntu fixado por digest SHA256 garante reprodutibilidade sem conflitos de bibliotecas de sistema."
    },
    {
      id: 3,
      question: "Por que solvers comerciais como SNOPT, Gurobi e Mosek foram excluídos do projeto ATAS?",
      options: [
        { text: "Porque o requisito mandatório do projeto exige apenas softwares e ferramentas 100% open source.", correct: true },
        { text: "Porque esses solvers são incapazes de resolver problemas quadráticos.", correct: false },
        { text: "Porque eles não funcionam em processadores Intel Core de 12ª geração.", correct: false },
        { text: "Porque o Drake não possui nenhuma ligação com solvers matemáticos externos.", correct: false }
      ],
      explanation: "O projeto estabeleceu o uso estrito de software aberto. Solvers como Ipopt, acados e OR-Tools atendem plenamente sob licenças permissivas (EPL, BSD, Apache-2.0)."
    }
  ],

  renderFlashcards: function(containerEl) {
    if (!containerEl) return;
    containerEl.innerHTML = this.flashcards.map((fc, idx) => `
      <div class="flashcard" onclick="this.classList.toggle('flipped')" tabindex="0" role="button" aria-label="Flashcard ${idx+1}">
        <div>
          <div class="flashcard-topic">${fc.topic}</div>
          <div class="flashcard-question">${fc.question}</div>
          <div class="flashcard-answer">${fc.answer}</div>
        </div>
        <div class="flashcard-footer">Toque ou clique para virar o card ↺</div>
      </div>
    `).join('');
  },

  renderQuiz: function(containerEl) {
    if (!containerEl) return;
    containerEl.innerHTML = `
      <div style="margin-top: var(--space-8); background: var(--bg-primary); border: 1px solid var(--border-medium); border-radius: var(--radius-xl); padding: var(--space-6);">
        <div style="display: flex; align-items: center; justify-content: space-between; margin-bottom: var(--space-4);">
          <h3 style="color: var(--purple-primary); font-size: var(--text-lg); font-weight: 700;">Quiz Rápido de Fixação Conceitual</h3>
          <span class="badge-sintese">[Síntese do agente]</span>
        </div>
        <p style="font-size: var(--text-sm); color: var(--text-secondary); margin-bottom: var(--space-6);">
          Teste seu entendimento sobre as decisões arquiteturais, teoria de controle e simulação do ATAS.
        </p>
        <div id="quiz-questions-list">
          ${this.quiz.map((q, qIdx) => `
            <div style="margin-bottom: var(--space-6); padding-bottom: var(--space-4); border-bottom: 1px solid var(--border-subtle);">
              <div style="font-weight: 600; font-size: var(--text-base); margin-bottom: var(--space-3); color: var(--text-primary);">
                ${qIdx + 1}. ${q.question}
              </div>
              <div style="display: flex; flex-direction: column; gap: var(--space-2);">
                ${q.options.map((opt, oIdx) => `
                  <button class="quiz-option-btn" 
                          data-qid="${q.id}" 
                          data-correct="${opt.correct}" 
                          onclick="ATAS_STUDY_MODE.handleQuizAnswer(this, ${q.id})"
                          style="text-align: left; padding: var(--space-3) var(--space-4); border-radius: var(--radius-md); border: 1px solid var(--border-medium); background: var(--bg-secondary); color: var(--text-secondary); cursor: pointer; transition: all var(--transition-fast);">
                    ${opt.text}
                  </button>
                `).join('')}
              </div>
              <div id="quiz-feedback-${q.id}" style="margin-top: var(--space-3); font-size: var(--text-xs); line-height: 1.5; display: none; padding: var(--space-2) var(--space-3); border-radius: var(--radius-sm);"></div>
            </div>
          `).join('')}
        </div>
      </div>
    `;
  },

  handleQuizAnswer: function(buttonEl, qId) {
    const parent = buttonEl.parentElement;
    const allBtns = parent.querySelectorAll('.quiz-option-btn');
    allBtns.forEach(btn => {
      btn.disabled = true;
      btn.style.cursor = 'default';
      if (btn.dataset.correct === 'true') {
        btn.style.borderColor = 'var(--emerald-primary)';
        btn.style.background = 'var(--emerald-surface)';
        btn.style.color = 'var(--emerald-primary)';
        btn.style.fontWeight = '700';
      }
    });

    const feedbackEl = document.getElementById(`quiz-feedback-${qId}`);
    const isCorrect = buttonEl.dataset.correct === 'true';

    if (!isCorrect) {
      buttonEl.style.borderColor = 'var(--rose-primary)';
      buttonEl.style.background = 'var(--rose-surface)';
      buttonEl.style.color = 'var(--rose-primary)';
    }

    const questionObj = this.quiz.find(q => q.id === qId);
    if (feedbackEl && questionObj) {
      feedbackEl.style.display = 'block';
      if (isCorrect) {
        feedbackEl.style.background = 'var(--emerald-surface)';
        feedbackEl.style.color = 'var(--emerald-primary)';
        feedbackEl.style.border = '1px solid var(--emerald-border)';
        feedbackEl.innerHTML = `✓ <strong>Correto!</strong> ${questionObj.explanation}`;
      } else {
        feedbackEl.style.background = 'var(--rose-surface)';
        feedbackEl.style.color = 'var(--rose-primary)';
        feedbackEl.style.border = '1px solid var(--rose-border)';
        feedbackEl.innerHTML = `✗ <strong>Incorreto.</strong> ${questionObj.explanation}`;
      }
    }
  }
};
