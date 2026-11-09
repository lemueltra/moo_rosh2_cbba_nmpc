/**
 * Gerador de Diagramas SVG Interativos e Vetoriais Nativos
 * Fornece representações gráficas claras e didáticas dos conceitos arquiteturais do ATAS.
 */

window.ATAS_DIAGRAMS = {
  // 1. Arquitetura Comum Drake + ROS 2 (Turno 1 / Turno 2)
  drakeRosArchitecture: `
    <svg viewBox="0 0 850 420" width="100%" height="auto" xmlns="http://www.w3.org/2000/svg" style="font-family: var(--font-sans);">
      <defs>
        <marker id="arrow" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--cyan-primary)" />
        </marker>
        <marker id="arrow-green" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--emerald-primary)" />
        </marker>
      </defs>

      <!-- Fundo do Diagrama -->
      <rect width="850" height="420" rx="12" fill="var(--bg-primary)" stroke="var(--border-subtle)" stroke-width="1"/>

      <!-- Título do Diagrama -->
      <text x="425" y="32" text-anchor="middle" fill="var(--text-primary)" font-size="14" font-weight="700" letter-spacing="0.05em">ARQUITETURA DE SIMULAÇÃO E CONTROLE: DRAKE + ROS 2</text>

      <!-- Bloco Topo: Clock & Drake World Simulator -->
      <g transform="translate(275, 55)">
        <rect width="300" height="65" rx="8" fill="var(--bg-tertiary)" stroke="var(--cyan-primary)" stroke-width="2"/>
        <text x="150" y="26" text-anchor="middle" fill="var(--cyan-primary)" font-size="13" font-weight="700">atas_world_simulator_node</text>
        <text x="150" y="46" text-anchor="middle" fill="var(--text-secondary)" font-size="11">MultibodyPlant + SceneGraph (Drake) [200 Hz]</text>
      </g>

      <!-- Linhas para robôs e geometrias -->
      <line x1="340" y1="120" x2="220" y2="165" stroke="var(--cyan-primary)" stroke-width="2" marker-end="url(#arrow)"/>
      <line x1="510" y1="120" x2="630" y2="165" stroke="var(--cyan-primary)" stroke-width="2" marker-end="url(#arrow)"/>

      <text x="250" y="145" fill="var(--text-muted)" font-size="10">poses / estados</text>
      <text x="590" y="145" fill="var(--text-muted)" font-size="10">snapshot geométrico</text>

      <!-- Bloco Central: Avaliador de FoV -->
      <g transform="translate(250, 170)">
        <rect width="350" height="70" rx="8" fill="var(--bg-secondary)" stroke="var(--emerald-primary)" stroke-width="2"/>
        <text x="175" y="26" text-anchor="middle" fill="var(--emerald-primary)" font-size="13" font-weight="700">atas_fov_evaluator_node</text>
        <text x="175" y="44" text-anchor="middle" fill="var(--text-secondary)" font-size="11">L0 Analítico | L1 Ray-Casting | L2 Label Image</text>
        <text x="175" y="58" text-anchor="middle" fill="var(--text-muted)" font-size="10">Visibilidade, oclusão e qualidade de detecção</text>
      </g>

      <!-- Linhas de Visibilidade para Otimizadores -->
      <line x1="330" y1="240" x2="220" y2="280" stroke="var(--emerald-primary)" stroke-width="2" marker-end="url(#arrow-green)"/>
      <line x1="520" y1="240" x2="630" y2="280" stroke="var(--emerald-primary)" stroke-width="2" marker-end="url(#arrow-green)"/>

      <!-- Otimizador de Ativação / CBBA -->
      <g transform="translate(80, 280)">
        <rect width="280" height="65" rx="8" fill="var(--bg-tertiary)" stroke="var(--purple-primary)" stroke-width="1.5"/>
        <text x="140" y="24" text-anchor="middle" fill="var(--purple-primary)" font-size="12" font-weight="700">Supervisor & Leilão CBBA (1 Hz)</text>
        <text x="140" y="44" text-anchor="middle" fill="var(--text-secondary)" font-size="11">Ativação de drones e tarefas prioritárias</text>
      </g>

      <!-- Otimizador de Trajetória / NMPC -->
      <g transform="translate(490, 280)">
        <rect width="280" height="65" rx="8" fill="var(--bg-tertiary)" stroke="var(--amber-primary)" stroke-width="1.5"/>
        <text x="140" y="24" text-anchor="middle" fill="var(--amber-primary)" font-size="12" font-weight="700">NMPC Local Contínuo (10–20 Hz)</text>
        <text x="140" y="44" text-anchor="middle" fill="var(--text-secondary)" font-size="11">Pose (x,y,z,yaw) e evasão de colisões</text>
      </g>

      <!-- Setpoints para Controladores de Voo -->
      <line x1="220" y1="345" x2="380" y2="375" stroke="var(--border-strong)" stroke-width="1.5"/>
      <line x1="630" y1="345" x2="470" y2="375" stroke="var(--border-strong)" stroke-width="1.5"/>

      <g transform="translate(325, 365)">
        <rect width="200" height="40" rx="6" fill="var(--bg-secondary)" stroke="var(--border-strong)" stroke-width="1"/>
        <text x="100" y="24" text-anchor="middle" fill="var(--text-secondary)" font-size="11" font-weight="600">Drone Controller Nodes (PX4/Drake)</text>
      </g>
    </svg>
  `,

  // 2. Máquina de Estados de Ativação de Drones (Turno 2)
  droneStateMachine: `
    <svg viewBox="0 0 760 220" width="100%" height="auto" xmlns="http://www.w3.org/2000/svg" style="font-family: var(--font-sans);">
      <defs>
        <marker id="state-arrow" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--cyan-primary)" />
        </marker>
        <marker id="state-arrow-red" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--rose-primary)" />
        </marker>
      </defs>

      <rect width="760" height="220" rx="12" fill="var(--bg-primary)" stroke="var(--border-subtle)" stroke-width="1"/>
      <text x="380" y="28" text-anchor="middle" fill="var(--text-primary)" font-size="13" font-weight="700">MÁQUINA DE ESTADOS: ATIVAÇÃO DINÂMICA DE DRONES</text>

      <!-- Estados -->
      <!-- STANDBY -->
      <g transform="translate(30, 80)">
        <rect width="110" height="60" rx="8" fill="var(--bg-tertiary)" stroke="var(--text-muted)" stroke-width="1.5"/>
        <text x="55" y="35" text-anchor="middle" fill="var(--text-secondary)" font-size="12" font-weight="700">STANDBY</text>
      </g>

      <!-- TRANSITION_TO_ACTIVE -->
      <g transform="translate(200, 80)">
        <rect width="140" height="60" rx="8" fill="var(--bg-secondary)" stroke="var(--amber-primary)" stroke-width="1.5"/>
        <text x="70" y="28" text-anchor="middle" fill="var(--amber-primary)" font-size="11" font-weight="700">TRANSITION</text>
        <text x="70" y="44" text-anchor="middle" fill="var(--text-muted)" font-size="10">Decolagem / Rota</text>
      </g>

      <!-- ACTIVE -->
      <g transform="translate(400, 80)">
        <rect width="120" height="60" rx="8" fill="var(--bg-tertiary)" stroke="var(--emerald-primary)" stroke-width="2"/>
        <text x="60" y="28" text-anchor="middle" fill="var(--emerald-primary)" font-size="12" font-weight="700">ACTIVE</text>
        <text x="60" y="46" text-anchor="middle" fill="var(--emerald-primary)" font-size="10">CBBA + NMPC</text>
      </g>

      <!-- RETURNING / CHARGING -->
      <g transform="translate(580, 80)">
        <rect width="150" height="60" rx="8" fill="var(--bg-secondary)" stroke="var(--cyan-primary)" stroke-width="1.5"/>
        <text x="75" y="28" text-anchor="middle" fill="var(--cyan-primary)" font-size="11" font-weight="700">RETURNING</text>
        <text x="75" y="44" text-anchor="middle" fill="var(--text-muted)" font-size="10">Pouso / Recarga</text>
      </g>

      <!-- Transições -->
      <!-- Standby -> Transition -->
      <line x1="140" y1="100" x2="195" y2="100" stroke="var(--cyan-primary)" stroke-width="1.5" marker-end="url(#state-arrow)"/>
      <text x="168" y="92" text-anchor="middle" fill="var(--text-muted)" font-size="9">demanda</text>

      <!-- Transition -> Active -->
      <line x1="340" y1="100" x2="395" y2="100" stroke="var(--cyan-primary)" stroke-width="1.5" marker-end="url(#state-arrow)"/>
      <text x="368" y="92" text-anchor="middle" fill="var(--text-muted)" font-size="9">em posição</text>

      <!-- Active -> Returning -->
      <line x1="520" y1="100" x2="575" y2="100" stroke="var(--rose-primary)" stroke-width="1.5" marker-end="url(#state-arrow-red)"/>
      <text x="548" y="92" text-anchor="middle" fill="var(--rose-primary)" font-size="9">bateria / fim</text>

      <!-- Returning -> Standby (Volta por baixo) -->
      <path d="M 655 140 L 655 180 L 85 180 L 85 145" fill="none" stroke="var(--text-muted)" stroke-width="1.5" stroke-dasharray="4" marker-end="url(#state-arrow)"/>
      <text x="370" y="195" text-anchor="middle" fill="var(--text-muted)" font-size="10">pronto no hangar / bateria 100%</text>
    </svg>
  `,

  // 3. Pipeline Seguro: Laya IA + NMPC + Filtro de Barreira (Turnos 3 e 4)
  safetyPipeline: `
    <svg viewBox="0 0 820 280" width="100%" height="auto" xmlns="http://www.w3.org/2000/svg" style="font-family: var(--font-sans);">
      <defs>
        <marker id="pipe-arrow" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--cyan-primary)" />
        </marker>
        <marker id="pipe-arrow-red" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--rose-primary)" />
        </marker>
      </defs>

      <rect width="820" height="280" rx="12" fill="var(--bg-primary)" stroke="var(--border-subtle)" stroke-width="1"/>
      <text x="410" y="28" text-anchor="middle" fill="var(--text-primary)" font-size="13" font-weight="700">ARQUITETURA HÍBRIDA SEGURA: IA COMO HEURÍSTICA & CONTROLE DETERMINÍSTICO</text>

      <!-- Entrada de Estado -->
      <g transform="translate(20, 90)">
        <rect width="130" height="70" rx="8" fill="var(--bg-tertiary)" stroke="var(--border-strong)" stroke-width="1"/>
        <text x="65" y="30" text-anchor="middle" fill="var(--text-secondary)" font-size="11" font-weight="700">ESTADO ATUAL</text>
        <text x="65" y="48" text-anchor="middle" fill="var(--text-muted)" font-size="10">Poses, V2X, Mapas</text>
      </g>

      <!-- Linhas para Laya e NMPC -->
      <line x1="150" y1="110" x2="205" y2="85" stroke="var(--purple-primary)" stroke-width="1.5" marker-end="url(#pipe-arrow)"/>
      <line x1="150" y1="135" x2="415" y2="175" stroke="var(--cyan-primary)" stroke-width="1.5" marker-end="url(#pipe-arrow)"/>

      <!-- Módulo Laya (Aprendizado) -->
      <g transform="translate(210, 50)">
        <rect width="170" height="70" rx="8" fill="var(--bg-secondary)" stroke="var(--purple-primary)" stroke-width="2"/>
        <text x="85" y="26" text-anchor="middle" fill="var(--purple-primary)" font-size="12" font-weight="700">Laya (ModernBERT)</text>
        <text x="85" y="44" text-anchor="middle" fill="var(--text-secondary)" font-size="10">Classificação Rápida (~33 ms)</text>
        <text x="85" y="58" text-anchor="middle" fill="var(--purple-primary)" font-size="9">Priors / Soft Pruning</text>
      </g>

      <!-- Warm Start do Laya para o NMPC -->
      <line x1="380" y1="85" x2="425" y2="120" stroke="var(--purple-primary)" stroke-width="1.5" stroke-dasharray="4" marker-end="url(#pipe-arrow)"/>
      <text x="415" y="95" text-anchor="middle" fill="var(--purple-primary)" font-size="9">warm start / candidatos</text>

      <!-- Módulo NMPC Local -->
      <g transform="translate(420, 120)">
        <rect width="180" height="85" rx="8" fill="var(--bg-tertiary)" stroke="var(--emerald-primary)" stroke-width="2"/>
        <text x="90" y="24" text-anchor="middle" fill="var(--emerald-primary)" font-size="12" font-weight="700">NMPC Local (Ipopt/acados)</text>
        <text x="90" y="42" text-anchor="middle" fill="var(--text-secondary)" font-size="10">Otimização Contínua Rígida</text>
        <text x="90" y="58" text-anchor="middle" fill="var(--text-muted)" font-size="9">Restrições Cinemáticas</text>
        <text x="90" y="72" text-anchor="middle" fill="var(--emerald-primary)" font-size="9">Garante Viabilidade Recursiva</text>
      </g>

      <!-- Linha para Filtro de Segurança -->
      <line x1="600" y1="162" x2="645" y2="162" stroke="var(--emerald-primary)" stroke-width="2" marker-end="url(#pipe-arrow)"/>

      <!-- Safety Barrier / Supervisor -->
      <g transform="translate(650, 120)">
        <rect width="150" height="85" rx="8" fill="var(--bg-secondary)" stroke="var(--rose-primary)" stroke-width="2"/>
        <text x="75" y="24" text-anchor="middle" fill="var(--rose-primary)" font-size="11" font-weight="700">BARREIRA DE SEGURANÇA</text>
        <text x="75" y="42" text-anchor="middle" fill="var(--text-secondary)" font-size="10">CBF / Geofencing</text>
        <text x="75" y="58" text-anchor="middle" fill="var(--rose-primary)" font-size="9">Intervenção Imediata</text>
        <text x="75" y="72" text-anchor="middle" fill="var(--text-muted)" font-size="9">Se violação detectada</text>
      </g>

      <text x="410" y="250" text-anchor="middle" fill="var(--text-muted)" font-size="11">A IA jamais controla o atuador diretamente sem passar pelo NMPC e pela barreira formal de colisão.</text>
    </svg>
  `,

  // 4. Workflow de Criação de Mapas no Drake (Turno 5)
  mapCreationWorkflow: `
    <svg viewBox="0 0 780 200" width="100%" height="auto" xmlns="http://www.w3.org/2000/svg" style="font-family: var(--font-sans);">
      <defs>
        <marker id="map-arrow" viewBox="0 0 10 10" refX="6" refY="5" markerWidth="6" markerHeight="6" orient="auto-start-reverse">
          <path d="M 0 1 L 8 5 L 0 9 z" fill="var(--cyan-primary)" />
        </marker>
      </defs>

      <rect width="780" height="200" rx="12" fill="var(--bg-primary)" stroke="var(--border-subtle)" stroke-width="1"/>
      <text x="390" y="26" text-anchor="middle" fill="var(--text-primary)" font-size="13" font-weight="700">PIPELINE DE CRIAÇÃO E IMPORTAÇÃO DO MAPA 3D NO DRAKE</text>

      <!-- Passo 1: Blender -->
      <g transform="translate(25, 60)">
        <rect width="150" height="90" rx="8" fill="var(--bg-secondary)" stroke="var(--amber-primary)" stroke-width="1.5"/>
        <text x="75" y="28" text-anchor="middle" fill="var(--amber-primary)" font-size="12" font-weight="700">1. BLENDER</text>
        <text x="75" y="48" text-anchor="middle" fill="var(--text-secondary)" font-size="10">Modelagem do cenário</text>
        <text x="75" y="64" text-anchor="middle" fill="var(--text-muted)" font-size="9">Edificações e vias</text>
        <text x="75" y="78" text-anchor="middle" fill="var(--text-muted)" font-size="9">Separação de malhas</text>
      </g>

      <line x1="175" y1="105" x2="215" y2="105" stroke="var(--cyan-primary)" stroke-width="2" marker-end="url(#map-arrow)"/>

      <!-- Passo 2: Exportação glTF / OBJ -->
      <g transform="translate(220, 60)">
        <rect width="150" height="90" rx="8" fill="var(--bg-tertiary)" stroke="var(--cyan-primary)" stroke-width="1.5"/>
        <text x="75" y="28" text-anchor="middle" fill="var(--cyan-primary)" font-size="12" font-weight="700">2. EXPORTAÇÃO</text>
        <text x="75" y="48" text-anchor="middle" fill="var(--text-secondary)" font-size="10">Arquivos .gltf e .obj</text>
        <text x="75" y="64" text-anchor="middle" fill="var(--text-muted)" font-size="9">Visual: glTF detalhado</text>
        <text x="75" y="78" text-anchor="middle" fill="var(--text-muted)" font-size="9">Colisão: Convex hulls</text>
      </g>

      <line x1="370" y1="105" x2="410" y2="105" stroke="var(--cyan-primary)" stroke-width="2" marker-end="url(#map-arrow)"/>

      <!-- Passo 3: Wrappers SDFormat (SDF) -->
      <g transform="translate(415, 60)">
        <rect width="160" height="90" rx="8" fill="var(--bg-secondary)" stroke="var(--purple-primary)" stroke-width="1.5"/>
        <text x="80" y="28" text-anchor="middle" fill="var(--purple-primary)" font-size="12" font-weight="700">3. SDF WRAPPERS</text>
        <text x="80" y="48" text-anchor="middle" fill="var(--text-secondary)" font-size="10">model.sdf com tags</text>
        <text x="80" y="64" text-anchor="middle" fill="var(--text-muted)" font-size="9">&lt;visual&gt; vs &lt;collision&gt;</text>
        <text x="80" y="78" text-anchor="middle" fill="var(--purple-primary)" font-size="9">Classes Semânticas</text>
      </g>

      <line x1="575" y1="105" x2="615" y2="105" stroke="var(--cyan-primary)" stroke-width="2" marker-end="url(#map-arrow)"/>

      <!-- Passo 4: Drake SceneGraph & Meshcat -->
      <g transform="translate(620, 60)">
        <rect width="140" height="90" rx="8" fill="var(--bg-tertiary)" stroke="var(--emerald-primary)" stroke-width="2"/>
        <text x="70" y="28" text-anchor="middle" fill="var(--emerald-primary)" font-size="12" font-weight="700">4. DRAKE SIM</text>
        <text x="70" y="48" text-anchor="middle" fill="var(--text-secondary)" font-size="10">SceneGraph / AddModels</text>
        <text x="70" y="64" text-anchor="middle" fill="var(--text-muted)" font-size="9">Depuração no Meshcat</text>
        <text x="70" y="78" text-anchor="middle" fill="var(--emerald-primary)" font-size="9">Label Images no FoV</text>
      </g>
    </svg>
  `
};
