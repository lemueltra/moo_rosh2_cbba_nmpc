/* Base de Conhecimento Estruturada ATAS - Compatível com file:// */
window.ATAS_DATA = {
  "metadata": {
    "title": "ATAS — Autonomy Through Aerial Swarms: Base de Conhecimento e Consultoria Técnica",
    "subtitle": "Simulação Model-Based em Drake, Integração ROS 2, Otimização Multi-Objetivo e Visão Computacional Cooperativa",
    "source_file": "conversa_moo_rosh2_perplexity_261013.md",
    "total_turns": 5,
    "total_lines": 2521,
    "total_chars": 126663,
    "generated_at": "2026-10-23T12:20:00-03:00",
    "principles": [
      "100% de Fidelidade ao conteúdo original",
      "Completude total verificável por matriz de cobertura",
      "Operação 100% offline via file:// (Zero CDNs, Zero dependências externas de rede)",
      "Design instrucional com clara distinção de [Síntese do agente]"
    ]
  },
  "turns": [
    {
      "id": 1,
      "title": "Resposta solicitação 1 - Estratégias para otimização multiobjetivo de pose, cobertura visual e número de drones",
      "short_title": "Estratégias de Otimização Multi-Objetivo (MOO)",
      "summary": "Definição do escopo matemático, formulação de FoV (Frustum + ray casting) e comparação de 3 estratégias: Hierárquica Centralizada, Viewpoints Discretos Combinatórios e CBBA + NMPC Local. Stack Drake + ROS 2 + Ipopt.",
      "tags": [
        "Drake",
        "ROS 2",
        "MOO",
        "FoV",
        "Ipopt",
        "Arch Linux",
        "Ubuntu"
      ],
      "color": "cyan",
      "solicitacao": {
        "title": "Solicitação 1",
        "raw": "# Solicitação 1\n``` markdown\nConsiderando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.\n\nConsiderando que, nesse projeto que estou desenvolvendo, o que eu preciso fazer no meu projeto é:  \n1. Desenvolver um sistema model-based design, utilizando Drake, onde cada \"bloco\" do modelo é um nó ROS2.  \n2. Um requisito importante nesse projeto é que estamos utilizando apenas softwares e ferramentas open source para o desenvolvimento.\n3. Esse sistema precisa de uma simulação de dois robôs terrestres interagindo e cooperando, via tópicos e mensagens ROS2, com múltiplos robôs aéreos (drones).  \n4. O sistema depende de simular com precisão o Field of View (FoV) de sensores de visão instalados em cada drone (não precisaria simular os sensores, somente simular e obter o que está e o que não está no FoV de cada sensor, em cada drone, em tempo real).  \n5. O sistema que estou desenvolvendo é um sistema denominado \"ATAS\" (Autonomy Through Aerial Swarms) que consiste em um sistema de percepção e visão computacional, operado com os sensores instalados em enxames de aeronaves não tripuladas (drones), e comunicação V2X, onde a inteligência de percepção sai do veículo terrestre (que possui apenas sensores inerciais e GNSS para a operação) e passa a residir nos agentes de percepção móvel aérea (enxames de drones em operação cooperativa).\n6. A feature do sistema ATAS que devo desenvolver agora é um sistema de otimização multi-objetivo que realiza a otimização em tempo real da posição (x, y, z), orientação (yaw, pitch e rool) e quantidade de robôs móveis aéreos em operação (número de drones ativos na operação do sistema) considerando obter os melhores resultados dessas variáveis, para cada drone em operação, minimizando os pontos cegos de visão do ambiente de operação e maximizando as detecções corretas do sistema de percepção/visão computacional para a melhor, mais adequada e mais segura operação dos robôs que operam no solo. \n7. O desenvolvimento e simulações serão realizados, inicialmente, em um computador com recursos de hardware limitados para simulações com gráficos avançados (como seria se utilizasse simuladores como o Carla ou AirSim), minha ideia é desenvolver o sistema utilizando simulações no próprio Drake (que é a plataforma onde eu já irei desenvolver todo o sistema model-based design).\n- O computador que irá ser utilizado para o desenvolvimento da versão alfa desse projeto é um computador laptop workstation rodando Arch Linux, com interface GNOME, equipado com um processador Intel Core i9-12900H de 12ª geração, 32 GB de RAM e uma placa de vídeo dedicada NVIDIA RTX A2000 de 8 GB, operando em conjunto com gráficos integrados Intel Iris Xe, operando com terminal `tmux`, shell `zsh` e pacotes gerenciados via Pacman.\n\nConsiderando essas informações e dados apresentados, principalmente as informações e descrição da feature que estou devo desenvolver agora para esse sistema, faça uma nova pesquisa e busca completa e apresente ao menos 3 estratégias de desenvolvimento otimizadas, revisadas, completas, detalhadas, descritas de maneira didática e passo a passo, incluindo um comparativo técnico entre essas 3 novas estratégias que você irá propor (com vantagens, limitações, prós e contras de cada uma dessas técnicas).\nConsidere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).\nConsidere o foco atual específico na feature de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.\n\nConsidere:\n1. Qual fidelidade geométrica do FoV é necessária na versão alfa?\nFrustum + oclusão por ray casting (Recommended)\n2. Quantos drones devem ser simulados simultaneamente na versão alfa?\nAté 10 (Recommended)\n3. Qual ambiente ROS 2 você aceita para maior compatibilidade?\nContainer Ubuntu 24.04/Jazzy sobre Arch (Recommended)\n4. Como prefere receber o resultado?\nReport (Recommended)\n```",
        "clean": "Considerando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.\n\nConsiderando que, nesse projeto que estou desenvolvendo, o que eu preciso fazer no meu projeto é:  \n1. Desenvolver um sistema model-based design, utilizando Drake, onde cada \"bloco\" do modelo é um nó ROS2.  \n2. Um requisito importante nesse projeto é que estamos utilizando apenas softwares e ferramentas open source para o desenvolvimento.\n3. Esse sistema precisa de uma simulação de dois robôs terrestres interagindo e cooperando, via tópicos e mensagens ROS2, com múltiplos robôs aéreos (drones).  \n4. O sistema depende de simular com precisão o Field of View (FoV) de sensores de visão instalados em cada drone (não precisaria simular os sensores, somente simular e obter o que está e o que não está no FoV de cada sensor, em cada drone, em tempo real).  \n5. O sistema que estou desenvolvendo é um sistema denominado \"ATAS\" (Autonomy Through Aerial Swarms) que consiste em um sistema de percepção e visão computacional, operado com os sensores instalados em enxames de aeronaves não tripuladas (drones), e comunicação V2X, onde a inteligência de percepção sai do veículo terrestre (que possui apenas sensores inerciais e GNSS para a operação) e passa a residir nos agentes de percepção móvel aérea (enxames de drones em operação cooperativa).\n6. A feature do sistema ATAS que devo desenvolver agora é um sistema de otimização multi-objetivo que realiza a otimização em tempo real da posição (x, y, z), orientação (yaw, pitch e rool) e quantidade de robôs móveis aéreos em operação (número de drones ativos na operação do sistema) considerando obter os melhores resultados dessas variáveis, para cada drone em operação, minimizando os pontos cegos de visão do ambiente de operação e maximizando as detecções corretas do sistema de percepção/visão computacional para a melhor, mais adequada e mais segura operação dos robôs que operam no solo. \n7. O desenvolvimento e simulações serão realizados, inicialmente, em um computador com recursos de hardware limitados para simulações com gráficos avançados (como seria se utilizasse simuladores como o Carla ou AirSim), minha ideia é desenvolver o sistema utilizando simulações no próprio Drake (que é a plataforma onde eu já irei desenvolver todo o sistema model-based design).\n- O computador que irá ser utilizado para o desenvolvimento da versão alfa desse projeto é um computador laptop workstation rodando Arch Linux, com interface GNOME, equipado com um processador Intel Core i9-12900H de 12ª geração, 32 GB de RAM e uma placa de vídeo dedicada NVIDIA RTX A2000 de 8 GB, operando em conjunto com gráficos integrados Intel Iris Xe, operando com terminal `tmux`, shell `zsh` e pacotes gerenciados via Pacman.\n\nConsiderando essas informações e dados apresentados, principalmente as informações e descrição da feature que estou devo desenvolver agora para esse sistema, faça uma nova pesquisa e busca completa e apresente ao menos 3 estratégias de desenvolvimento otimizadas, revisadas, completas, detalhadas, descritas de maneira didática e passo a passo, incluindo um comparativo técnico entre essas 3 novas estratégias que você irá propor (com vantagens, limitações, prós e contras de cada uma dessas técnicas).\nConsidere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).\nConsidere o foco atual específico na feature de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.\n\nConsidere:\n1. Qual fidelidade geométrica do FoV é necessária na versão alfa?\nFrustum + oclusão por ray casting (Recommended)\n2. Quantos drones devem ser simulados simultaneamente na versão alfa?\nAté 10 (Recommended)\n3. Qual ambiente ROS 2 você aceita para maior compatibilidade?\nContainer Ubuntu 24.04/Jazzy sobre Arch (Recommended)\n4. Como prefere receber o resultado?\nReport (Recommended)",
        "chars_count": 4213,
        "lines_count": 25
      },
      "resposta": {
        "title": "Resposta solicitação 1 - Estratégias para otimização multiobjetivo de pose, cobertura visual e número de drones",
        "raw": "# Resposta solicitação 1 - Estratégias para otimização multiobjetivo de pose, cobertura visual e número de drones\n\n## Resumo\n``` markdown\nA recomendação principal para a feature atual do ATAS é uma **arquitetura híbrida e hierárquica**:\n\n- Um supervisor discreto, executado em frequência baixa, seleciona drones ativos, reservas e atribuições.\n- Um otimizador contínuo em horizonte móvel refina posição, orientação e trajetória dos drones ativos.\n- Um avaliador geométrico calcula FoV, oclusão e qualidade perceptiva.\n- Um supervisor independente garante separação, geofence, bateria e fallback seguro.\n\nAs três estratégias detalhadas no relatório são:\n\n1. **Otimização hierárquica centralizada:** recomendada como núcleo da versão alfa.\n2. **Viewpoints discretos e otimização combinatória:** recomendada como supervisor discreto, fallback e benchmark determinístico.\n3. **CBBA distribuído com NMPC local:** recomendada para a evolução do ATAS em direção a enxames maiores e operação V2X distribuída.\n\nO relatório apresenta formulação matemática, variáveis de decisão, objetivos, restrições, modelo probabilístico de detecção, arquitetura Drake–ROS 2, mensagens, QoS, FoV em três níveis, ferramentas open source, comparação técnica e plano incremental de implementação.\n\nUma alteração importante é proposta: **nem todo bloco elementar do modelo deve se tornar um processo ROS 2 separado**. Blocos funcionalmente implantáveis devem ser nós ou componentes ROS 2, enquanto operações internas, funções de custo, filtros e conversores devem permanecer dentro de um `Diagram` Drake ou componente composto, evitando que serialização e DDS dominem a latência. [github](https://github.com/anyoptimization/pymoo)\n\nPara a versão alfa, o stack recomendado é Drake + ROS 2 + Ipopt + OR-Tools + Open3D/Embree, mantendo `pymoo` e NSGA-II para exploração de Pareto e calibração offline. Essas ferramentas possuem licenças open source permissivas ou aprovadas, mas o Drake deve ser compilado e auditado cuidadosamente caso o requisito exclua qualquer componente proprietário presente em distribuições binárias. [pymoo](https://pymoo.org/customization/mixed.html)\n\nO ambiente reproduzível deve ser executado em container Ubuntu sobre o Arch Linux, mantendo o Arch como host de desenvolvimento. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1, enquanto `drake-ros` documenta uma configuração recomendada associada ao Ubuntu 22.04 e ROS 2 Humble; convém selecionar apenas uma baseline, fixá-la por digest e registrar os commits usados. [drake.mit](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)\n```\n## Resposta executiva\n```\nA estratégia tecnicamente mais adequada para a versão alfa do ATAS é uma **otimização hierárquica centralizada em horizonte móvel**: um nível discreto e lento escolhe quantos drones permanecem ativos e suas responsabilidades; um nível contínuo e rápido otimiza as poses e trajetórias curtas; e um avaliador geométrico leve calcula FoV, oclusão e qualidade perceptiva. Essa decomposição evita colocar, no mesmo problema online, variáveis binárias, dinâmica não linear, orientação 3D, oclusões descontínuas e métricas reais de detecção — combinação que seria difícil de resolver com latência previsível no hardware informado.\n\nDuas alternativas devem ser mantidas como caminhos de evolução. A primeira discretiza o espaço em viewpoints e resolve cobertura/alocação como set cover, assignment e roteamento, oferecendo grande robustez computacional. A segunda distribui a decisão entre drones usando leilão/CBBA e NMPC local, oferecendo maior escalabilidade e tolerância a falhas de comunicação. Métodos evolucionários como NSGA-II são muito úteis **offline** para explorar a frente de Pareto, calibrar pesos e produzir baselines, mas não devem ser o único controlador online de segurança crítica; o `pymoo` disponibiliza NSGA-II, D-NSGA-II e variáveis mistas sob licença Apache-2.0.[^1][^2][^3][^4]\n\nA arquitetura também deve ser corrigida em um ponto: **cada bloco funcional implantável deve ser um nó ROS 2, não cada operação elementar do diagrama Drake**. Sistemas pequenos, conversores, funções de custo e filtros devem permanecer dentro de um componente ROS 2/`Diagram` Drake; caso contrário, serialização, DDS, escalonamento e cópias passam a dominar o tempo de processamento. ROS 2 suporta composição e comunicação intra-processo em C++, permitindo preservar modularidade sem transformar toda aresta interna em tráfego DDS.[^5][^6]\n\n## Escopo matemático\n\n### Variáveis de decisão\n\nPara um máximo de `Nmax` drones e horizonte discreto `k = 0,...,H`, use:\n\n- `a_i ∈ {0,1}`: drone `i` ativo ou inativo;\n- `p_i,k = [x,y,z]`: posição;\n- `q_i,k` ou `R_i,k`: orientação; internamente, quaternion ou matriz de rotação;\n- `u_i,k`: velocidade, aceleração ou comando de referência;\n- `g_i,k`: orientação do gimbal, quando a câmera não for rigidamente fixada;\n- `y_i,r`: atribuição do drone `i` à região, alvo ou tarefa `r`;\n- variáveis auxiliares de cobertura, conectividade, redundância e slack.\n\nEmbora a interface possa expor yaw, pitch e roll, a otimização não deve usar Euler como representação interna global: há descontinuidades angulares e singularidades. Para a versão alfa, a simplificação mais eficiente é otimizar posição, yaw e pitch da linha de visada, mantendo roll próximo de zero por restrição suave; posteriormente, um gimbal pode separar orientação do veículo e orientação da câmera.\n\n### Estado de cobertura\n\nDiscretize o espaço relevante em células, voxels, amostras de superfície ou pontos ponderados `r ∈ R`. Cada elemento deve conter:\n\n- posição e, quando aplicável, normal da superfície;\n- peso de risco `w_r`;\n- idade desde a última observação;\n- associação a corredores dos robôs terrestres;\n- classe semântica ou prioridade;\n- incerteza de ocupação/percepção;\n- exigência de redundância mínima.\n\nA cobertura binária ideal de uma célula pelo drone `i` é:\n\n`v_i,r = in_frustum_i,r × in_range_i,r × line_of_sight_i,r × resolution_ok_i,r`.\n\nPara otimização contínua, substitua os degraus por aproximações suaves durante a solução e reavalie a solução final com o teste geométrico exato. O FoV do Drake segue um modelo pinhole configurável por intrínsecos ou ângulo de visão; `RgbdSensor` também fornece imagem de rótulos alinhada à câmera, na qual cada pixel contém um `RenderLabel`.[^7][^8]\n\n### Qualidade perceptiva\n\nEstar no FoV não implica detecção correta. A probabilidade de detecção deve ser modelada separadamente, por exemplo:\n\n`Pdet(i,r) = sigmoid(β0 + β1 log(pixel_area) + β2 cos(incidence) + β3 visibility_fraction - β4 range - β5 blur - β6 uncertainty)`.\n\nNa fase inicial, `Pdet` pode ser uma função analítica calibrável. Depois, seus parâmetros devem ser ajustados com experimentos do detector real ou simulado. Evidências de planejamento ativo mostram que distância, aspecto, oclusão e custo de movimento devem ser ponderados na seleção de viewpoints; outros trabalhos maximizam ganho de informação semântica para selecionar o próximo viewpoint.[^9][^10][^11]\n\nPara fusão de observações aproximadamente independentes, pode-se usar `Pcombined(r) = 1 - product_i(1 - a_i Pdet(i,r))`. A hipótese de independência deve ser documentada, pois erros de vários drones podem ser correlacionados pelo mesmo clima, iluminação, oclusor ou modelo de percepção.\n\n### Objetivos recomendados\n\nEvite começar com dez objetivos independentes. Na versão alfa, use quatro grupos normalizados:\n\n1. **Risco não observado:** minimizar células críticas não cobertas e sua idade.\n2. **Qualidade perceptiva:** maximizar probabilidade de detecção e redundância útil.\n3. **Custo operacional:** minimizar drones ativos, energia, deslocamento e esforço de controle.\n4. **Robustez:** maximizar conectividade V2X e margens de segurança.\n\nUma formulação escalar online pode ser:\n\n`J = wc Jblind + wd Jdetect + wa Jactive + we Jenergy + wm Jmotion + wr Jredundancy + wcom Jcommunication + ws Jslack`.\n\nOs objetivos devem ser normalizados por faixas físicas ou valores de referência. Segurança, separação, geofence, bateria mínima e limites de movimento devem ser **restrições**, não apenas termos de custo. Pesos não devem ser tratados como verdades fixas: uma exploração offline da frente de Pareto pode identificar regiões úteis, e R-NSGA-II permite direcionar a busca para regiões preferidas.[^12]\n\n### Restrições mínimas\n\n- Cinemática ou dinâmica de cada drone.\n- Altitude, velocidade, aceleração e inclinação.\n- Separação drone–drone e drone–obstáculo.\n- Geofence e no-fly zones.\n- Bateria e retorno seguro.\n- Alcance e qualidade mínima de comunicação.\n- Continuidade de cobertura durante handover.\n- Limite de ativações/desativações por unidade de tempo.\n- Tempo mínimo ligado/desligado para impedir chattering.\n- Pelo menos uma configuração de fallback segura.\n\n## Arquitetura comum\n\nA infraestrutura abaixo deve ser compartilhada pelas três estratégias:\n\n''' text\n                 /clock + estado verdadeiro Drake\n                              |\n                  atas_world_simulator_node\n                    MultibodyPlant + SceneGraph\n                              |\n             +----------------+----------------+\n             |                                 |\n      robot/drones states               geometry snapshot\n             |                                 |\n       atas_fov_evaluator_node <---- ROI/risk map/occluders\n             |\n   VisibilityMatrix + DetectionQuality + CoverageState\n             |\n   +---------+--------------------------+\n   |                                    |\nmission/activation optimizer      pose/trajectory optimizer\n   |                                    |\n   +----------- setpoints --------------+\n                    |\n          drone controller nodes\n                    |\n         plant commands / trajectories\n'''\n\nO `SceneGraph` deve ser a fonte comum das geometrias e poses; ele centraliza registro, atualização e consultas geométricas. Para validação de visibilidade, o Drake possui renderizadores VTK e OpenGL; `RenderEngineGl` prioriza desempenho, enquanto `RenderEngineVtk` é mais flexível. As imagens de label são suficientes para obter o ID visível e a fração projetada sem renderizar RGB fotorealista.[^13][^14][^15]\n\nO avaliador de FoV deve ter três níveis com a mesma interface:\n\n- **L0 analítico:** frustum contra pontos, bounding spheres ou AABBs; usado dentro do otimizador.\n- **L1 ray casting:** raios para centros, corners ou amostras; usado para oclusão seletiva.\n- **L2 label image:** rasterização semântica de baixa resolução; usada para validação e estimativa de fração visível.\n\nOpen3D oferece `RaycastingScene` e licença MIT; Embree fornece kernels de ray tracing de alto desempenho sob Apache-2.0. Ambos são opções open source para L1, se a API pública de geometria do Drake não atender ao padrão de raios necessário.[^16][^17][^18]\n\n## Estratégia 1 — Otimização hierárquica centralizada\n\n### Conceito\n\nSeparar a decisão em três escalas:\n\n- **Supervisor discreto, 0,2–1 Hz:** escolhe drones ativos, reservas e atribuições.\n- **Otimizador de pose em horizonte móvel, 2–10 Hz:** calcula referências de posição e orientação.\n- **Controle de voo, 50–200 Hz:** acompanha referências; não resolve cobertura global.\n\nO Drake fornece `MathematicalProgram`, `DirectTranscription`, `DirectCollocation` e `MultipleShooting` para formular otimização de trajetórias. Para cumprir o requisito open source, use Ipopt para NLP contínuo; Ipopt é C++ e EPL-2.0. Não use SNOPT, Gurobi ou Mosek, mesmo que alguma distribuição do Drake os exponha; releases binários do Drake incorporam SNOPT pré-compilado, portanto um requisito rigoroso pode exigir build do Drake a partir do código-fonte e auditoria da árvore de dependências.[^19][^20][^21][^22][^23]\n\n### Passo a passo\n\n1. **Definir a grade de risco.** Comece com o corredor previsto dos dois robôs terrestres, não com todo o mundo 3D. Gere pontos no chão, laterais dos obstáculos e regiões de possível colisão; atribua pesos maiores à trajetória futura dos UGVs.\n2. **Implementar `atas_fov_core`.** Biblioteca C++ sem ROS contendo transformações, frustum, projeção pinhole, matriz de visibilidade, qualidade e fusão. Testes unitários devem cobrir bordas do FoV, ângulos, near/far plane e oclusores conhecidos.\n3. **Implementar L0.** Para cada pose candidata, teste se cada amostra está dentro do frustum e compute range, ângulo, GSD/pixels estimados e incidência.\n4. **Adicionar L1 seletivo.** Faça ray casting apenas para células importantes e candidatas que passaram no frustum. Cache a geometria estática; atualize apenas transforms de objetos móveis.\n5. **Implementar o supervisor discreto.** A cada período lento, estime o benefício marginal de cada drone. Use CP-SAT/OR-Tools para ativação, reserva e assignment discretos; OR-Tools é Apache-2.0 e inclui CP-SAT e interfaces de programação inteira.[^24]\n6. **Impor histerese.** Só desative um drone se a economia superar um limiar por vários ciclos; imponha `minimum_on_time`, `minimum_off_time` e custo de troca.\n7. **Implementar o NMPC de pose.** Use horizonte curto, modelo cinemático ou point-mass inicialmente, warm start da solução anterior e limites de tempo do solver. Otimize apenas drones ativos.\n8. **Suavizar visibilidade.** Dentro do NLP, use margens suaves do frustum e uma aproximação de oclusão. Depois, reavalie a pose com L1/L2; se falhar, aplique repair ou mantenha o último comando seguro.\n9. **Separar planejamento de controle.** A saída deve ser uma trajetória curta ou setpoint; cada drone possui controlador local independente e watchdog.\n10. **Validar com L2.** Periodicamente produza label images de baixa resolução. O `RgbdSensor` é contínuo; versões discretas e assíncronas existem para aquisição amostrada, e a documentação alerta que renderizar modalidades não consumidas desperdiça computação.[^25][^7]\n11. **Medir deadline.** Registre tempo de avaliação, tempo do solver, atraso DDS, violações e taxa de fallback.\n12. **Escalonar complexidade.** Aumente horizonte, número de drones, células e fidelidade somente depois de cumprir o budget temporal.\n\n### Vantagens\n\n- Melhor coerência global entre cobertura, número ativo, energia e segurança.\n- Fácil impor regras operacionais e prioridades dos dois UGVs.\n- Warm start eficiente para cenas que mudam gradualmente.\n- Integração direta com ferramentas de otimização do Drake.\n- Melhor estratégia para uma versão alfa com poucos drones.\n\n### Limitações\n\n- Ponto central de falha.\n- Crescimento combinatório no nível discreto.\n- NLP não convexo pode convergir para mínimos locais ou falhar; a própria documentação do Drake observa que solvers gradiente em problemas não convexos podem parar em pontos inviáveis e dependem da inicialização.[^26]\n- Oclusão exata é descontínua e inadequada para derivação direta.\n- Requer fallback explícito quando o solver excede o deadline.\n\n### Melhor uso\n\nVersão alfa e experimentos com aproximadamente 2–8 drones, mapa conhecido ou parcialmente conhecido e computador único. É a estratégia recomendada como arquitetura principal.\n\n## Estratégia 2 — Viewpoints discretos e cobertura combinatória\n\n### Conceito\n\nEm vez de otimizar diretamente seis graus de liberdade contínuos para cada drone, gere um conjunto finito de poses admissíveis. Para cada viewpoint, pré-calcule quais células ele cobre, a qualidade esperada, custo de chegada e conectividade. O problema online passa a selecionar viewpoints, número de drones e rotas.\n\nA literatura de cobertura multi-UAV frequentemente decompõe o problema em geração de viewpoints, avaliação de visibilidade, alocação e roteamento; há formulações por set cover/vehicle routing, clustering e MTSP. Essa decomposição troca refinamento contínuo por previsibilidade e torna o número de drones uma consequência natural da seleção de rotas e limites de energia.[^27][^28][^29]\n\n### Passo a passo\n\n1. **Gerar amostras de interesse.** Use a mesma grade de risco da estratégia 1.\n2. **Gerar viewpoints candidatos.** Amostre camadas de altitude, posições laterais ao corredor e orientações `look-at`; descarte poses fora de geofence, em colisão ou dinamicamente inalcançáveis.\n3. **Reduzir orientação.** Para cada posição, compute yaw/pitch apontando para um cluster de interesse; mantenha somente algumas variações angulares.\n4. **Calcular matriz de cobertura.** Para cada viewpoint `j` e célula `r`, obtenha `C[j,r]`, qualidade, oclusão e redundância. Use L0 em lote e L1 apenas nos sobreviventes.\n5. **Comprimir viewpoints.** Remova candidatos dominados: se `j1` cobre subconjunto de `j2` com maior custo e menor qualidade, descarte `j1`.\n6. **Construir grafo de transição.** Nós são viewpoints; arestas possuem tempo, energia, risco e verificação de colisão. Arestas inviáveis são removidas.\n7. **Resolver seleção/ativação.** Formule set cover máximo ponderado com variáveis binárias para viewpoint, drone e célula coberta. Adicione penalidade por drone ativo e exigência de cobertura mínima.\n8. **Resolver assignment e rota.** Use CP-SAT para instâncias pequenas/médias ou heurísticas de clustering + rota. OR-Tools permite modelar CP-SAT e problemas de programação inteira sob Apache-2.0.[^24]\n9. **Aplicar rolling horizon.** Execute somente o primeiro segmento, atualize UGVs, mapa, bateria e comunicação, e resolva novamente.\n10. **Refinar localmente.** Após selecionar um viewpoint discreto, execute uma pequena otimização contínua em torno dele para ajustar `x,y,z,yaw,pitch` sem alterar a decisão global.\n11. **Atualizar incrementalmente.** Recalcule somente colunas da matriz afetadas por objetos móveis ou mudança da região de interesse.\n12. **Manter reserva.** Se o solver não retornar a tempo, continue para o último viewpoint seguro ou entre em loiter.\n\n### Formulação típica\n\nCom `s_j` indicando viewpoint selecionado e `c_r` indicando célula coberta:\n\n- minimizar número/custo de viewpoints e drones;\n- maximizar `sum_r w_r c_r`;\n- maximizar qualidade e redundância;\n- restringir `c_r <= sum_j C[j,r] s_j`;\n- restringir continuidade de rota e orçamento de energia;\n- impor que cada viewpoint seja atribuído a no máximo um drone no instante relevante.\n\nPara múltiplos objetivos, há três opções práticas:\n\n- soma ponderada para execução online;\n- método `epsilon-constraint`, fixando cobertura mínima e minimizando custo;\n- gerar poucas soluções Pareto e escolher pela política de missão.\n\n### Vantagens\n\n- Latência mais previsível do que otimização contínua 6-DoF completa.\n- Trata naturalmente variáveis binárias e quantidade de drones.\n- Fácil auditar por que determinada área ficou coberta.\n- Reutiliza resultados geométricos via cache.\n- Fallback simples e determinístico.\n- Excelente para hardware limitado e mapas conhecidos.\n\n### Limitações\n\n- Qualidade depende da densidade e inteligência da amostragem.\n- Matriz de cobertura pode crescer muito.\n- Mudanças rápidas exigem atualização incremental.\n- Trajetórias podem parecer discretizadas sem refinamento local.\n- CP-SAT oferece boas soluções práticas, mas a combinação set cover + roteamento continua combinatória.\n\n### Melhor uso\n\nMissões estruturadas, corredores, mapas estáticos ou semi-estáticos e necessidade de previsibilidade. É a alternativa mais segura se o NMPC centralizado não cumprir o deadline.\n\n## Estratégia 3 — CBBA distribuído e NMPC local\n\n### Conceito\n\nTransformar regiões cegas, setores do corredor e necessidades de redundância em tarefas. Cada drone calcula localmente o benefício de atender tarefas e participa de um leilão por consenso; depois executa um NMPC local para alcançar o viewpoint e manter percepção, separação e conectividade. O número ativo emerge das tarefas e dos lances: agentes sem benefício marginal suficiente permanecem em standby.\n\nCBBA alterna construção gananciosa de bundles e consenso para resolver conflitos. Implementações open source incluem `TrajAllocPy` sob MIT e repositórios Python de CBBA; estudos também disponibilizam comparações entre Hungarian, auction e CBBA para multi-UAV. Para missões dinâmicas, CBBA com partial replanning reduz o custo de realocar toda a missão.[^30][^31][^32][^33]\n\n### Passo a passo\n\n1. **Definir tarefas perceptivas.** Cada tarefa deve especificar região, prioridade, janela temporal, qualidade mínima, redundância, energia estimada e viewpoint/corredor admissível.\n2. **Criar tarefa de ponto cego.** Quando a idade ou risco de uma célula exceder o limite, agregue células vizinhas em uma tarefa.\n3. **Calcular lance local.** O lance inclui ganho de cobertura/detecção, distância, bateria, risco, comunicação e custo de retirar o drone de sua tarefa atual.\n4. **Executar bundle building.** Cada drone adiciona tarefas de maior ganho marginal compatíveis com sua capacidade.\n5. **Executar consenso.** Drones trocam vencedores, bids e timestamps por ROS 2; empates usam IDs determinísticos.\n6. **Aplicar partial replanning.** Quando UGV, oclusor ou link muda, libere apenas parte final do bundle.\n7. **Derivar ativação.** Um drone standby ativa se vencer tarefa cujo benefício exceda custo de ativação; desativa apenas após perder tarefas e cumprir tempo mínimo ligado.\n8. **Executar NMPC local.** Cada agente recebe o viewpoint ou região e resolve trajetória curta respeitando dinâmica e vizinhos.\n9. **Compartilhar intenção.** Publique trajetória prevista compacta, não estados em alta frequência para todos os pares.\n10. **Manter supervisor de segurança.** Mesmo em arquitetura distribuída, um nó independente monitora separação, geofence, bateria e colisão iminente; ele pode vetar setpoints.\n11. **Simular falhas V2X.** Introduza atraso, perda, partição e stale data. ROS 2 oferece políticas de reliability, deadline, lifespan e liveliness para modelar e detectar esses eventos.[^34][^35]\n12. **Validar convergência e degradação.** Meça tempo para consenso, conflitos, mensagens, cobertura durante partições e recuperação após falha de drone.\n\n### Vantagens\n\n- Escala melhor com o número de drones.\n- Mais coerente com a visão ATAS de inteligência distribuída aérea.\n- Tolerante a perda do otimizador central e a comunicação parcial.\n- Alocação pode operar somente com vizinhos.\n- Permite adicionar/remover drones dinamicamente.\n\n### Limitações\n\n- Não garante ótimo global.\n- Pode haver cobertura temporariamente inconsistente durante consenso.\n- Ajustar bids multiobjetivo é difícil.\n- Verificação e depuração distribuídas são mais complexas.\n- NMPCs locais ainda podem conflitar sem reservas de trajetória ou barreiras.\n- Não é a melhor primeira implementação para uma equipe pequena e hardware único.\n\n### Melhor uso\n\nEvolução posterior, enxames maiores, execução distribuída real e comunicação intermitente. Deve ser implementada depois que métricas de FoV, detecção e segurança estiverem estáveis na estratégia centralizada.\n\n## Comparativo técnico\n\n| Critério | Estratégia 1: hierárquica central | Estratégia 2: viewpoints discretos | Estratégia 3: CBBA + NMPC local |\n|---|---|---|---|\n| Decisão de pose | Contínua em horizonte curto | Discreta, com refinamento local | Contínua local após alocação |\n| Número de drones | Supervisor binário lento | Variáveis binárias de seleção/rota | Emerge de tarefas e bids |\n| Otimalidade global | Boa localmente; depende do warm start | Boa no conjunto amostrado | Aproximada/distribuída |\n| Previsibilidade temporal | Média | Alta | Média, dependente de consenso |\n| Escalabilidade | Média | Média | Alta |\n| Comunicação | Centralizada | Centralizada | Distribuída |\n| Robustez a falha do planner | Média com fallback | Média/alta com plano cacheado | Alta |\n| Oclusão | Surrogate + validação | Pré-calculada/atualizada | Avaliada localmente |\n| Adequação ao laptop | Alta com horizonte curto | Muito alta | Alta, mas complexa de testar |\n| Complexidade de implementação | Média/alta | Média | Alta |\n| Melhor fase | Alfa principal | Alfa alternativa/benchmark | Beta e implantação distribuída |\n\n## Recomendação combinada\n\nA solução mais eficiente não é escolher apenas uma estratégia. Recomenda-se:\n\n- **Núcleo da alfa:** estratégia 1.\n- **Supervisor discreto e fallback:** componentes da estratégia 2.\n- **Benchmark de Pareto offline:** NSGA-II/R-NSGA-II em `pymoo`.\n- **Evolução distribuída:** estratégia 3.\n\nNa prática, o supervisor da estratégia 1 pode selecionar drones e viewpoints aproximados com CP-SAT; o NMPC refina as poses; o NSGA-II explora pesos e trade-offs offline; e, mais tarde, o supervisor central é substituído progressivamente por CBBA sem alterar `atas_fov_core` ou os controladores locais.\n\n## ROS 2 e Drake\n\n### Granularidade dos nós\n\nNós recomendados:\n\n- `atas_world_simulator`: único dono do `Simulator`, `MultibodyPlant`, `SceneGraph` e `/clock`.\n- `atas_ground_truth_bridge`: publica estados e TF necessários.\n- `atas_fov_evaluator`: calcula visibilidade e qualidade.\n- `atas_coverage_map`: mantém risco, idade e regiões cegas.\n- `atas_activation_optimizer`: nível discreto.\n- `atas_pose_optimizer`: NMPC ou refinamento.\n- `atas_task_allocator`: usado na estratégia 3.\n- `atas_safety_supervisor`: veto independente.\n- `atas_drone_controller_i`: controlador por drone ou componentes compostos.\n- `atas_metrics`: logging, deadlines, rosbag e indicadores.\n\nNão execute múltiplos simuladores Drake independentes como fonte de verdade. Cada nó que necessite de dinâmica para predição pode possuir um modelo local reduzido, mas o estado verdadeiro deve vir do simulador central.\n\nO repositório `RobotLocomotion/drake-ros` fornece APIs e exemplos para Drake com ROS 2, mas ainda se apresenta como prototipagem experimental; sua README documenta exemplos com `colcon` e configurações suportadas específicas, portanto a integração deve ser fixada por commit e testada no container escolhido.[^36][^37]\n\n### Tempo e execução\n\nO Drake deve dirigir `/clock`, e todos os nós devem usar `use_sim_time`. ROS 2 define tempo simulado por uma fonte abstrata ativada por esse parâmetro. Para testes determinísticos, prefira execução stepped/lockstep: avançar o Drake, publicar estado, aguardar decisões com deadline conhecido e então avançar novamente. Em execução em tempo real, nunca bloqueie o thread de simulação esperando indefinidamente pelo solver.[^38]\n\nSepare callback groups para estado, solver, watchdog e publicação. Executors ROS 2 utilizam threads para callbacks, mas a documentação ressalta que os executors padrão não garantem, por si só, determinismo hard real-time. Portanto, a meta da alfa deve ser **soft real-time com deadline medido e fallback**, não hard real-time.[^39]\n\n### Mensagens\n\nCrie `atas_msgs` com:\n\n- `VisibilityMatrix` ou formato esparso por drone;\n- `CoverageCellArray`;\n- `DetectionQualityArray`;\n- `DroneActivationPlan`;\n- `PerceptionTask` e `TaskBundle`;\n- `TimedPoseTrajectory`;\n- `OptimizationStatus`;\n- `SafetyOverride`.\n\nCada mensagem deve conter `stamp`, `frame_id`, `sequence`, validade temporal, versão do mapa e `solution_age`. Estados volumosos podem ser publicados best-effort; planos, overrides e ativação devem ser reliable. Use `lifespan` para descartar plano vencido, `deadline` para detectar falha e `liveliness` para monitorar agentes.[^34]\n\n## FoV eficiente\n\n### Geometria analítica\n\nPara um ponto mundial `P_W`, transforme para o frame óptico:\n\n`P_C = X_CW P_W = [x_C,y_C,z_C]`.\n\nO ponto está no frustum quando:\n\n- `z_near <= z_C <= z_far`;\n- `abs(atan2(x_C,z_C)) <= HFOV/2`;\n- `abs(atan2(y_C,z_C)) <= VFOV/2`.\n\nOu projete com intrínsecos e verifique limites de pixel. Isso é barato, vetorizável e diferenciável após suavização.\n\n### Oclusão\n\nUse uma cascata:\n\n1. Frustum analítico.\n2. Broad phase por AABB/BVH.\n3. Um raio ao centro.\n4. Raios para corners/superfície somente se a célula for crítica.\n5. Label image somente para auditoria periódica ou empates.\n\nEssa cascata reduz o número de raios e renderizações. Cenas estáticas devem ser carregadas uma vez no raycaster; atualize transforms de UGVs e drones.\n\n### Label images\n\nUm `RgbdSensor` pode produzir label image sem depender de um detector neural; cada pixel carrega um identificador de renderização. Conte pixels por ID para obter:[^40][^7]\n\n- presença visível;\n- fração da imagem;\n- bounding box projetada;\n- fração visível aproximada, comparada com render sem oclusores ou área projetada esperada.\n\nUse resolução baixa para o otimizador/validador e resolução nominal apenas em testes. Compartilhe o mesmo `RenderEngine` entre câmeras quando suportado pela configuração.[^41]\n\n## Open source e ambiente\n\n### Plataforma\n\nArch Linux pode continuar como host, mas não deve ser o ambiente de referência do workspace. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1; a documentação recomenda plataforma Tier 1 porque outros sistemas podem exigir trabalho significativo. Use Podman rootless para executar um ambiente Ubuntu fixado; Podman é daemonless e suporta execução sem privilégios.[^42][^43][^44]\n\nDuas imagens devem ser avaliadas:\n\n- **Ubuntu 22.04 + ROS 2 Humble:** melhor alinhamento com a configuração recomendada documentada pelo `drake-ros`.[^36]\n- **Ubuntu 24.04 + ROS 2 Jazzy:** melhor alinhamento com a plataforma ROS 2 LTS atual e Drake recente.[^43][^45]\n\nEscolha uma e fixe digest, commit do Drake, commit do `drake-ros`, compiler e middleware. Não mantenha ambos como ambientes de produção da alfa.\n\n### Licenças\n\n- Drake: BSD-3-Clause.[^22]\n- ROS 2: predominantemente Apache-2.0 e código portado BSD-3-Clause.[^46]\n- Cyclone DDS: EPL-2.0 e middleware Tier 1 do ROS 2.[^47]\n- Ipopt: EPL-2.0.[^20]\n- OR-Tools: Apache-2.0.[^24]\n- pymoo: Apache-2.0.[^1]\n- Open3D: MIT.[^16]\n- Embree: Apache-2.0.[^17]\n\nSe “apenas open source” for literal, não use CUDA/OptiX nem dependa do driver proprietário NVIDIA. Rode o pipeline principal em CPU e, para rasterização, teste Mesa/Intel Iris Xe ou um stack gráfico aberto compatível. A RTX A2000 pode permanecer opcional e fora da baseline auditável. Mantenha SBOM, `LICENSES/`, versões fixadas e CI que bloqueie dependências não aprovadas.\n\n## Plano de implementação\n\n### Fase 0 — Especificação\n\n1. Fixar `Nmax`, área, taxa de atualização e budget de latência.\n2. Definir o que é ponto cego e detecção correta.\n3. Definir requisitos de cobertura, redundância e disponibilidade.\n4. Separar restrições duras de objetivos.\n5. Definir cenários e seeds reproduzíveis.\n\n### Fase 1 — Gêmeo geométrico\n\n1. Modelar dois UGVs e drones no Drake.\n2. Implementar frames ópticos e intrínsecos.\n3. Implementar L0 sem oclusão.\n4. Publicar `VisibilityMatrix`.\n5. Validar contra casos analíticos.\n\n### Fase 2 — Oclusão e qualidade\n\n1. Integrar Open3D/Embree ou label images.\n2. Implementar fração visível.\n3. Implementar modelo inicial de `Pdet`.\n4. Criar mapa de risco e idade.\n5. Validar com cenas contendo oclusores móveis.\n\n### Fase 3 — Baselines\n\n1. Heurística look-at + drones fixos.\n2. Greedy de ganho marginal para ativação.\n3. Viewpoints discretos + CP-SAT.\n4. NSGA-II offline para Pareto.\n5. Registrar hypervolume, cobertura, custo e latência.\n\n### Fase 4 — Estratégia 1\n\n1. Supervisor CP-SAT lento.\n2. NMPC cinemático curto.\n3. Warm start e deadline.\n4. Reavaliação geométrica exata.\n5. Fallback e watchdog.\n\n### Fase 5 — Robustez\n\n1. Atraso/perda ROS 2.\n2. Falha de drone.\n3. Bateria crítica.\n4. Entrada/saída de drones.\n5. Obstáculo não previsto.\n6. Monte Carlo com seeds registradas.\n\n### Fase 6 — Distribuição\n\n1. Transformar regiões cegas em tarefas.\n2. Implementar CBBA.\n3. Adicionar partial replanning.\n4. Migrar um subconjunto das decisões.\n5. Comparar com o planner central usando os mesmos cenários.\n\n## Métricas de aceitação\n\n### Percepção\n\n- Percentual ponderado coberto.\n- Maior duração contínua de ponto cego.\n- Fração visível dos dois UGVs e obstáculos críticos.\n- Probabilidade combinada de detecção.\n- Redundância útil por célula.\n- Frescor das observações.\n\n### Otimização\n\n- Tempo mediano, p95 e máximo.\n- Taxa de deadline perdido.\n- Taxa de solução inviável.\n- Gap ou qualidade relativa ao baseline offline.\n- Número de mudanças de ativação.\n- Distância entre comando sucessivo e estabilidade.\n\n### Operação\n\n- Número médio e máximo de drones ativos.\n- Energia estimada.\n- Distância e esforço de controle.\n- Margem mínima de separação.\n- Tempo em comunicação degradada.\n- Taxa de fallback e duração.\n\n### Multiobjetivo\n\nPara os experimentos offline, use frente Pareto, hypervolume, IGD quando houver referência e estabilidade entre seeds. Online, escolha uma única política operacional ou uma pequena coleção de modos (`economy`, `balanced`, `safety`); não tente apresentar uma frente Pareto completa a cada ciclo.\n\n## Decisões recomendadas\n\n1. Adotar a estratégia 1 como principal.\n2. Usar estratégia 2 como supervisor discreto, fallback e benchmark.\n3. Reservar estratégia 3 para a evolução distribuída.\n4. Otimizar internamente quaternion/rotação, não Euler completo.\n5. Começar com `x,y,z,yaw,pitch` e roll restrito.\n6. Usar FoV analítico no loop, ray casting seletivo para oclusão e label images para validação.\n7. Tratar “detecção correta” como modelo probabilístico calibrado, não sinônimo de presença no FoV.\n8. Executar o ambiente de referência em Ubuntu containerizado e manter Arch apenas como host.\n9. Usar somente Ipopt, OR-Tools, pymoo, Open3D/Embree e middleware de licença aprovada.\n10. Definir soft real-time com deadline, última solução válida e comportamento seguro.\n11. Fixar commits e manter SBOM para demonstrar conformidade open source.\n12. Projetar interfaces para trocar o otimizador sem alterar simulador, FoV, mensagens ou controladores.\n\n---\n\n## References\n\n1. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...\n\n2. [NSGA-II: Non-dominated Sorting Genetic Algorithm - pymoo](https://pymoo.org/algorithms/moo/nsga2.html) - An implementation of the famous NSGA-II (also known as NSGA2) algorithm to solve multi-objective opt...\n\n3. [pymoo.org › customization › mixedMixed Variable Problem — pymoo: Multi-objective Optimization ...](https://pymoo.org/customization/mixed.html)\n\n4. [D-nsga-ii](https://pymoo.org/algorithms/moo/dnsga2.html) - An implementation of D-NSGA-II (Dynamic NSGA-II), a modified NSGA-II for dynamic multi-objective opt...\n\n5. [Composing multiple nodes in a single process - ROS documentation](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Composition.html) - Table of Contents: Background, Prerequisites, Run the demos- Discover available components, Run-time...\n\n6. [Features Status — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/The-ROS2-Project/Features.html) - The features listed below are available in the current ROS 2 release. Unless otherwise specified, th...\n\n7. [RgbdSensor Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor.html)\n\n8. [pydrake.systems.sensors](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)\n\n9. [[PDF] Planning to Perceive: Exploiting Mobility for Robust Object Detection](https://dspace.mit.edu/bitstream/handle/1721.1/81259/Roy_Planning%20to%20perceive.pdf;sequence=1)\n\n10. [Semantics-Aware Next-best-view Planning for Efficient Search and Detection of Task-relevant Plant Parts](https://arxiv.org/html/2306.09801)\n\n11. [Nonmyopic View Planning for Active Object Detection](https://arxiv.org/html/1309.5401v1)\n\n12. [R-NSGA-II — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/algorithms/moo/rnsga2.html) - An implementation of R-NSGA-II, a reference-point-based variant of NSGA-II that guides the search to...\n\n13. [Rendering Engines - Drake](https://drake.mit.edu/doxygen_cxx/group__render__engines.html)\n\n14. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\n15. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\n16. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n17. [GitHub - conda-forge/embree-feedstock: A conda-smithy repository for embree.](https://github.com/conda-forge/embree-feedstock) - A conda-smithy repository for embree. Contribute to conda-forge/embree-feedstock development by crea...\n\n18. [Open3D (C++ API)](https://www.open3d.org/html/cpp_api/_raycasting_scene_8h_source.html)\n\n19. [drake.mit.edu › group__planning__trajectoryDrake: Trajectories](https://drake.mit.edu/doxygen_cxx/group__planning__trajectory.html)\n\n20. [GitHub - coin-or/Ipopt: COIN-OR Interior Point Optimizer IPOPT](https://github.com/coin-or/IPOPT) - COIN-OR Interior Point Optimizer IPOPT. Contribute to coin-or/Ipopt development by creating an accou...\n\n21. [drake/solvers/mathematical_program.h at master - GitHub](https://github.com/RobotLocomotion/drake/blob/master/solvers/mathematical_program.h) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n22. [drake/LICENSE.TXT at master · RobotLocomotion/drake](https://github.com/RobotLocomotion/drake/blob/master/LICENSE.TXT) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n23. [Drake v1.35.0](https://drake.mit.edu/release_notes/v1.35.0.html) - Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...\n\n24. [ortools](https://pypi.org/project/ortools/9.15.6755/) - Google OR-Tools python libraries and modules\n\n25. [RgbdSensorDiscrete Class Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor_discrete.html)\n\n26. [MathematicalProgram debugging tips](https://drake.mit.edu/tutorials/debug_mathematical_program.html)\n\n27. [Model-based analysis of multi-UAV path planning for surveying postdisaster building damage - Scientific Reports](https://www.nature.com/articles/s41598-021-97804-4) - Emergency responders require accurate and comprehensive data to make informed decisions. Moreover, t...\n\n28. [[2007.13065] Multi-UAV Coverage Path Planning for the Inspection ...](https://ar5iv.labs.arxiv.org/html/2007.13065) - We present a multi-UAV Coverage Path Planning (CPP) framework for the inspection of large-scale, com...\n\n29. [Occlusion-Aware UAV Path Planning for Reconnaissance and Surveillance](https://ira.lib.polyu.edu.hk/bitstream/10397/91621/1/Zhang_Occlusion-aware_uav.pdf)\n\n30. [github.com › kasperg3 › TrajAllocPyGitHub - kasperg3/trajallocpy: Decentralized multi-robot ...](https://github.com/kasperg3/TrajAllocPy) - Decentralized multi-robot/agent task allocation for area coverage problems - kasperg3/trajallocpy\n\n31. [www.mdpi.com › 2504-446X › 9/8/530Comparative Analysis of Centralized and Distributed Multi-UAV ...](https://www.mdpi.com/2504-446X/9/8/530) - Unmanned aerial vehicles (UAVs), commonly known as drones, offer unprecedented flexibility for compl...\n\n32. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)\n\n33. [keep9oing/consensus-based-bundle-algorithm - GitHub](https://github.com/keep9oing/consensus-based-bundle-algorithm) - Implementation of Consensus Based Bundle Algorithm (CBBA) with python - keep9oing/consensus-based-bu...\n\n34. [Quality of Service settings — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Quality-of-Service-Settings.html) - Table of Contents: Overview, QoS policies- Comparison to ROS 1., QoS profiles, QoS compatibilities- ...\n\n35. [ROS QoS - Deadline, Liveliness, and Lifespan](https://design.ros2.org/articles/qos_deadline_liveliness_lifespan.html) - Distilled design documents related to the ROS 2 effort\n\n36. [drake-ros/README.md at main · RobotLocomotion/drake-ros](https://github.com/RobotLocomotion/drake-ros/blob/main/README.md) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...\n\n37. [RobotLocomotion/drake-ros: Experimental prototyping (for ...](https://github.com/RobotLocomotion/drake-ros) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...\n\n38. [Clock and Time - ROS 2 Design](https://design.ros2.org/articles/clock_and_time.html) - Distilled design documents related to the ROS 2 effort\n\n39. [Executors — ROS 2 Documentation: Iron documentation](https://docs.ros.org/en/iron/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...\n\n40. [Ch. 9 - Object Detection and Segmentation](https://manipulation.csail.mit.edu/segmentation.html)\n\n41. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)\n\n42. [containers.conf](https://docs.podman.io/en/stable/markdown/podman.1.html)\n\n43. [Jazzy Jalisco (jazzy) — ROS 2 Documentation: Rolling documentation](https://docs.ros.org/en/rolling/Releases/Release-Jazzy-Jalisco.html) - Table of Contents: Supported Platforms, Installation, Changes to how ROS 2 and Gazebo integrate, New...\n\n44. [Getting Started - ROS (Robot Operating System)](https://www.ros.org/blog/getting-started/)\n\n45. [Installation Guide | RobotLocomotion/drake | DeepWiki](https://deepwiki.com/RobotLocomotion/drake/1.1-installation-guide) - This guide details the different methods to install Drake, the specific platforms supported, and the...\n\n46. [Why ROS 2?](https://docs.ros.org/en/crystal/_downloads/8e25980591e39eda300136ddebc9e97b/ros2-brochure-ltr-web.pdf)\n\n47. [cyclonedds - ROS Package Overview](https://index.ros.org/p/cyclonedds/) - a community-maintained index of robotics software\n```\n\n---",
        "clean": "## Resumo\nA recomendação principal para a feature atual do ATAS é uma **arquitetura híbrida e hierárquica**:\n\n- Um supervisor discreto, executado em frequência baixa, seleciona drones ativos, reservas e atribuições.\n- Um otimizador contínuo em horizonte móvel refina posição, orientação e trajetória dos drones ativos.\n- Um avaliador geométrico calcula FoV, oclusão e qualidade perceptiva.\n- Um supervisor independente garante separação, geofence, bateria e fallback seguro.\n\nAs três estratégias detalhadas no relatório são:\n\n1. **Otimização hierárquica centralizada:** recomendada como núcleo da versão alfa.\n2. **Viewpoints discretos e otimização combinatória:** recomendada como supervisor discreto, fallback e benchmark determinístico.\n3. **CBBA distribuído com NMPC local:** recomendada para a evolução do ATAS em direção a enxames maiores e operação V2X distribuída.\n\nO relatório apresenta formulação matemática, variáveis de decisão, objetivos, restrições, modelo probabilístico de detecção, arquitetura Drake–ROS 2, mensagens, QoS, FoV em três níveis, ferramentas open source, comparação técnica e plano incremental de implementação.\n\nUma alteração importante é proposta: **nem todo bloco elementar do modelo deve se tornar um processo ROS 2 separado**. Blocos funcionalmente implantáveis devem ser nós ou componentes ROS 2, enquanto operações internas, funções de custo, filtros e conversores devem permanecer dentro de um `Diagram` Drake ou componente composto, evitando que serialização e DDS dominem a latência. [github](https://github.com/anyoptimization/pymoo)\n\nPara a versão alfa, o stack recomendado é Drake + ROS 2 + Ipopt + OR-Tools + Open3D/Embree, mantendo `pymoo` e NSGA-II para exploração de Pareto e calibração offline. Essas ferramentas possuem licenças open source permissivas ou aprovadas, mas o Drake deve ser compilado e auditado cuidadosamente caso o requisito exclua qualquer componente proprietário presente em distribuições binárias. [pymoo](https://pymoo.org/customization/mixed.html)\n\nO ambiente reproduzível deve ser executado em container Ubuntu sobre o Arch Linux, mantendo o Arch como host de desenvolvimento. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1, enquanto `drake-ros` documenta uma configuração recomendada associada ao Ubuntu 22.04 e ROS 2 Humble; convém selecionar apenas uma baseline, fixá-la por digest e registrar os commits usados. [drake.mit](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)\n## Resposta executiva\nA estratégia tecnicamente mais adequada para a versão alfa do ATAS é uma **otimização hierárquica centralizada em horizonte móvel**: um nível discreto e lento escolhe quantos drones permanecem ativos e suas responsabilidades; um nível contínuo e rápido otimiza as poses e trajetórias curtas; e um avaliador geométrico leve calcula FoV, oclusão e qualidade perceptiva. Essa decomposição evita colocar, no mesmo problema online, variáveis binárias, dinâmica não linear, orientação 3D, oclusões descontínuas e métricas reais de detecção — combinação que seria difícil de resolver com latência previsível no hardware informado.\n\nDuas alternativas devem ser mantidas como caminhos de evolução. A primeira discretiza o espaço em viewpoints e resolve cobertura/alocação como set cover, assignment e roteamento, oferecendo grande robustez computacional. A segunda distribui a decisão entre drones usando leilão/CBBA e NMPC local, oferecendo maior escalabilidade e tolerância a falhas de comunicação. Métodos evolucionários como NSGA-II são muito úteis **offline** para explorar a frente de Pareto, calibrar pesos e produzir baselines, mas não devem ser o único controlador online de segurança crítica; o `pymoo` disponibiliza NSGA-II, D-NSGA-II e variáveis mistas sob licença Apache-2.0.[^1][^2][^3][^4]\n\nA arquitetura também deve ser corrigida em um ponto: **cada bloco funcional implantável deve ser um nó ROS 2, não cada operação elementar do diagrama Drake**. Sistemas pequenos, conversores, funções de custo e filtros devem permanecer dentro de um componente ROS 2/`Diagram` Drake; caso contrário, serialização, DDS, escalonamento e cópias passam a dominar o tempo de processamento. ROS 2 suporta composição e comunicação intra-processo em C++, permitindo preservar modularidade sem transformar toda aresta interna em tráfego DDS.[^5][^6]\n\n## Escopo matemático\n\n### Variáveis de decisão\n\nPara um máximo de `Nmax` drones e horizonte discreto `k = 0,...,H`, use:\n\n- `a_i ∈ {0,1}`: drone `i` ativo ou inativo;\n- `p_i,k = [x,y,z]`: posição;\n- `q_i,k` ou `R_i,k`: orientação; internamente, quaternion ou matriz de rotação;\n- `u_i,k`: velocidade, aceleração ou comando de referência;\n- `g_i,k`: orientação do gimbal, quando a câmera não for rigidamente fixada;\n- `y_i,r`: atribuição do drone `i` à região, alvo ou tarefa `r`;\n- variáveis auxiliares de cobertura, conectividade, redundância e slack.\n\nEmbora a interface possa expor yaw, pitch e roll, a otimização não deve usar Euler como representação interna global: há descontinuidades angulares e singularidades. Para a versão alfa, a simplificação mais eficiente é otimizar posição, yaw e pitch da linha de visada, mantendo roll próximo de zero por restrição suave; posteriormente, um gimbal pode separar orientação do veículo e orientação da câmera.\n\n### Estado de cobertura\n\nDiscretize o espaço relevante em células, voxels, amostras de superfície ou pontos ponderados `r ∈ R`. Cada elemento deve conter:\n\n- posição e, quando aplicável, normal da superfície;\n- peso de risco `w_r`;\n- idade desde a última observação;\n- associação a corredores dos robôs terrestres;\n- classe semântica ou prioridade;\n- incerteza de ocupação/percepção;\n- exigência de redundância mínima.\n\nA cobertura binária ideal de uma célula pelo drone `i` é:\n\n`v_i,r = in_frustum_i,r × in_range_i,r × line_of_sight_i,r × resolution_ok_i,r`.\n\nPara otimização contínua, substitua os degraus por aproximações suaves durante a solução e reavalie a solução final com o teste geométrico exato. O FoV do Drake segue um modelo pinhole configurável por intrínsecos ou ângulo de visão; `RgbdSensor` também fornece imagem de rótulos alinhada à câmera, na qual cada pixel contém um `RenderLabel`.[^7][^8]\n\n### Qualidade perceptiva\n\nEstar no FoV não implica detecção correta. A probabilidade de detecção deve ser modelada separadamente, por exemplo:\n\n`Pdet(i,r) = sigmoid(β0 + β1 log(pixel_area) + β2 cos(incidence) + β3 visibility_fraction - β4 range - β5 blur - β6 uncertainty)`.\n\nNa fase inicial, `Pdet` pode ser uma função analítica calibrável. Depois, seus parâmetros devem ser ajustados com experimentos do detector real ou simulado. Evidências de planejamento ativo mostram que distância, aspecto, oclusão e custo de movimento devem ser ponderados na seleção de viewpoints; outros trabalhos maximizam ganho de informação semântica para selecionar o próximo viewpoint.[^9][^10][^11]\n\nPara fusão de observações aproximadamente independentes, pode-se usar `Pcombined(r) = 1 - product_i(1 - a_i Pdet(i,r))`. A hipótese de independência deve ser documentada, pois erros de vários drones podem ser correlacionados pelo mesmo clima, iluminação, oclusor ou modelo de percepção.\n\n### Objetivos recomendados\n\nEvite começar com dez objetivos independentes. Na versão alfa, use quatro grupos normalizados:\n\n1. **Risco não observado:** minimizar células críticas não cobertas e sua idade.\n2. **Qualidade perceptiva:** maximizar probabilidade de detecção e redundância útil.\n3. **Custo operacional:** minimizar drones ativos, energia, deslocamento e esforço de controle.\n4. **Robustez:** maximizar conectividade V2X e margens de segurança.\n\nUma formulação escalar online pode ser:\n\n`J = wc Jblind + wd Jdetect + wa Jactive + we Jenergy + wm Jmotion + wr Jredundancy + wcom Jcommunication + ws Jslack`.\n\nOs objetivos devem ser normalizados por faixas físicas ou valores de referência. Segurança, separação, geofence, bateria mínima e limites de movimento devem ser **restrições**, não apenas termos de custo. Pesos não devem ser tratados como verdades fixas: uma exploração offline da frente de Pareto pode identificar regiões úteis, e R-NSGA-II permite direcionar a busca para regiões preferidas.[^12]\n\n### Restrições mínimas\n\n- Cinemática ou dinâmica de cada drone.\n- Altitude, velocidade, aceleração e inclinação.\n- Separação drone–drone e drone–obstáculo.\n- Geofence e no-fly zones.\n- Bateria e retorno seguro.\n- Alcance e qualidade mínima de comunicação.\n- Continuidade de cobertura durante handover.\n- Limite de ativações/desativações por unidade de tempo.\n- Tempo mínimo ligado/desligado para impedir chattering.\n- Pelo menos uma configuração de fallback segura.\n\n## Arquitetura comum\n\nA infraestrutura abaixo deve ser compartilhada pelas três estratégias:\n\n''' text\n                 /clock + estado verdadeiro Drake\n                              |\n                  atas_world_simulator_node\n                    MultibodyPlant + SceneGraph\n                              |\n             +----------------+----------------+\n             |                                 |\n      robot/drones states               geometry snapshot\n             |                                 |\n       atas_fov_evaluator_node <---- ROI/risk map/occluders\n             |\n   VisibilityMatrix + DetectionQuality + CoverageState\n             |\n   +---------+--------------------------+\n   |                                    |\nmission/activation optimizer      pose/trajectory optimizer\n   |                                    |\n   +----------- setpoints --------------+\n                    |\n          drone controller nodes\n                    |\n         plant commands / trajectories\n'''\n\nO `SceneGraph` deve ser a fonte comum das geometrias e poses; ele centraliza registro, atualização e consultas geométricas. Para validação de visibilidade, o Drake possui renderizadores VTK e OpenGL; `RenderEngineGl` prioriza desempenho, enquanto `RenderEngineVtk` é mais flexível. As imagens de label são suficientes para obter o ID visível e a fração projetada sem renderizar RGB fotorealista.[^13][^14][^15]\n\nO avaliador de FoV deve ter três níveis com a mesma interface:\n\n- **L0 analítico:** frustum contra pontos, bounding spheres ou AABBs; usado dentro do otimizador.\n- **L1 ray casting:** raios para centros, corners ou amostras; usado para oclusão seletiva.\n- **L2 label image:** rasterização semântica de baixa resolução; usada para validação e estimativa de fração visível.\n\nOpen3D oferece `RaycastingScene` e licença MIT; Embree fornece kernels de ray tracing de alto desempenho sob Apache-2.0. Ambos são opções open source para L1, se a API pública de geometria do Drake não atender ao padrão de raios necessário.[^16][^17][^18]\n\n## Estratégia 1 — Otimização hierárquica centralizada\n\n### Conceito\n\nSeparar a decisão em três escalas:\n\n- **Supervisor discreto, 0,2–1 Hz:** escolhe drones ativos, reservas e atribuições.\n- **Otimizador de pose em horizonte móvel, 2–10 Hz:** calcula referências de posição e orientação.\n- **Controle de voo, 50–200 Hz:** acompanha referências; não resolve cobertura global.\n\nO Drake fornece `MathematicalProgram`, `DirectTranscription`, `DirectCollocation` e `MultipleShooting` para formular otimização de trajetórias. Para cumprir o requisito open source, use Ipopt para NLP contínuo; Ipopt é C++ e EPL-2.0. Não use SNOPT, Gurobi ou Mosek, mesmo que alguma distribuição do Drake os exponha; releases binários do Drake incorporam SNOPT pré-compilado, portanto um requisito rigoroso pode exigir build do Drake a partir do código-fonte e auditoria da árvore de dependências.[^19][^20][^21][^22][^23]\n\n### Passo a passo\n\n1. **Definir a grade de risco.** Comece com o corredor previsto dos dois robôs terrestres, não com todo o mundo 3D. Gere pontos no chão, laterais dos obstáculos e regiões de possível colisão; atribua pesos maiores à trajetória futura dos UGVs.\n2. **Implementar `atas_fov_core`.** Biblioteca C++ sem ROS contendo transformações, frustum, projeção pinhole, matriz de visibilidade, qualidade e fusão. Testes unitários devem cobrir bordas do FoV, ângulos, near/far plane e oclusores conhecidos.\n3. **Implementar L0.** Para cada pose candidata, teste se cada amostra está dentro do frustum e compute range, ângulo, GSD/pixels estimados e incidência.\n4. **Adicionar L1 seletivo.** Faça ray casting apenas para células importantes e candidatas que passaram no frustum. Cache a geometria estática; atualize apenas transforms de objetos móveis.\n5. **Implementar o supervisor discreto.** A cada período lento, estime o benefício marginal de cada drone. Use CP-SAT/OR-Tools para ativação, reserva e assignment discretos; OR-Tools é Apache-2.0 e inclui CP-SAT e interfaces de programação inteira.[^24]\n6. **Impor histerese.** Só desative um drone se a economia superar um limiar por vários ciclos; imponha `minimum_on_time`, `minimum_off_time` e custo de troca.\n7. **Implementar o NMPC de pose.** Use horizonte curto, modelo cinemático ou point-mass inicialmente, warm start da solução anterior e limites de tempo do solver. Otimize apenas drones ativos.\n8. **Suavizar visibilidade.** Dentro do NLP, use margens suaves do frustum e uma aproximação de oclusão. Depois, reavalie a pose com L1/L2; se falhar, aplique repair ou mantenha o último comando seguro.\n9. **Separar planejamento de controle.** A saída deve ser uma trajetória curta ou setpoint; cada drone possui controlador local independente e watchdog.\n10. **Validar com L2.** Periodicamente produza label images de baixa resolução. O `RgbdSensor` é contínuo; versões discretas e assíncronas existem para aquisição amostrada, e a documentação alerta que renderizar modalidades não consumidas desperdiça computação.[^25][^7]\n11. **Medir deadline.** Registre tempo de avaliação, tempo do solver, atraso DDS, violações e taxa de fallback.\n12. **Escalonar complexidade.** Aumente horizonte, número de drones, células e fidelidade somente depois de cumprir o budget temporal.\n\n### Vantagens\n\n- Melhor coerência global entre cobertura, número ativo, energia e segurança.\n- Fácil impor regras operacionais e prioridades dos dois UGVs.\n- Warm start eficiente para cenas que mudam gradualmente.\n- Integração direta com ferramentas de otimização do Drake.\n- Melhor estratégia para uma versão alfa com poucos drones.\n\n### Limitações\n\n- Ponto central de falha.\n- Crescimento combinatório no nível discreto.\n- NLP não convexo pode convergir para mínimos locais ou falhar; a própria documentação do Drake observa que solvers gradiente em problemas não convexos podem parar em pontos inviáveis e dependem da inicialização.[^26]\n- Oclusão exata é descontínua e inadequada para derivação direta.\n- Requer fallback explícito quando o solver excede o deadline.\n\n### Melhor uso\n\nVersão alfa e experimentos com aproximadamente 2–8 drones, mapa conhecido ou parcialmente conhecido e computador único. É a estratégia recomendada como arquitetura principal.\n\n## Estratégia 2 — Viewpoints discretos e cobertura combinatória\n\n### Conceito\n\nEm vez de otimizar diretamente seis graus de liberdade contínuos para cada drone, gere um conjunto finito de poses admissíveis. Para cada viewpoint, pré-calcule quais células ele cobre, a qualidade esperada, custo de chegada e conectividade. O problema online passa a selecionar viewpoints, número de drones e rotas.\n\nA literatura de cobertura multi-UAV frequentemente decompõe o problema em geração de viewpoints, avaliação de visibilidade, alocação e roteamento; há formulações por set cover/vehicle routing, clustering e MTSP. Essa decomposição troca refinamento contínuo por previsibilidade e torna o número de drones uma consequência natural da seleção de rotas e limites de energia.[^27][^28][^29]\n\n### Passo a passo\n\n1. **Gerar amostras de interesse.** Use a mesma grade de risco da estratégia 1.\n2. **Gerar viewpoints candidatos.** Amostre camadas de altitude, posições laterais ao corredor e orientações `look-at`; descarte poses fora de geofence, em colisão ou dinamicamente inalcançáveis.\n3. **Reduzir orientação.** Para cada posição, compute yaw/pitch apontando para um cluster de interesse; mantenha somente algumas variações angulares.\n4. **Calcular matriz de cobertura.** Para cada viewpoint `j` e célula `r`, obtenha `C[j,r]`, qualidade, oclusão e redundância. Use L0 em lote e L1 apenas nos sobreviventes.\n5. **Comprimir viewpoints.** Remova candidatos dominados: se `j1` cobre subconjunto de `j2` com maior custo e menor qualidade, descarte `j1`.\n6. **Construir grafo de transição.** Nós são viewpoints; arestas possuem tempo, energia, risco e verificação de colisão. Arestas inviáveis são removidas.\n7. **Resolver seleção/ativação.** Formule set cover máximo ponderado com variáveis binárias para viewpoint, drone e célula coberta. Adicione penalidade por drone ativo e exigência de cobertura mínima.\n8. **Resolver assignment e rota.** Use CP-SAT para instâncias pequenas/médias ou heurísticas de clustering + rota. OR-Tools permite modelar CP-SAT e problemas de programação inteira sob Apache-2.0.[^24]\n9. **Aplicar rolling horizon.** Execute somente o primeiro segmento, atualize UGVs, mapa, bateria e comunicação, e resolva novamente.\n10. **Refinar localmente.** Após selecionar um viewpoint discreto, execute uma pequena otimização contínua em torno dele para ajustar `x,y,z,yaw,pitch` sem alterar a decisão global.\n11. **Atualizar incrementalmente.** Recalcule somente colunas da matriz afetadas por objetos móveis ou mudança da região de interesse.\n12. **Manter reserva.** Se o solver não retornar a tempo, continue para o último viewpoint seguro ou entre em loiter.\n\n### Formulação típica\n\nCom `s_j` indicando viewpoint selecionado e `c_r` indicando célula coberta:\n\n- minimizar número/custo de viewpoints e drones;\n- maximizar `sum_r w_r c_r`;\n- maximizar qualidade e redundância;\n- restringir `c_r <= sum_j C[j,r] s_j`;\n- restringir continuidade de rota e orçamento de energia;\n- impor que cada viewpoint seja atribuído a no máximo um drone no instante relevante.\n\nPara múltiplos objetivos, há três opções práticas:\n\n- soma ponderada para execução online;\n- método `epsilon-constraint`, fixando cobertura mínima e minimizando custo;\n- gerar poucas soluções Pareto e escolher pela política de missão.\n\n### Vantagens\n\n- Latência mais previsível do que otimização contínua 6-DoF completa.\n- Trata naturalmente variáveis binárias e quantidade de drones.\n- Fácil auditar por que determinada área ficou coberta.\n- Reutiliza resultados geométricos via cache.\n- Fallback simples e determinístico.\n- Excelente para hardware limitado e mapas conhecidos.\n\n### Limitações\n\n- Qualidade depende da densidade e inteligência da amostragem.\n- Matriz de cobertura pode crescer muito.\n- Mudanças rápidas exigem atualização incremental.\n- Trajetórias podem parecer discretizadas sem refinamento local.\n- CP-SAT oferece boas soluções práticas, mas a combinação set cover + roteamento continua combinatória.\n\n### Melhor uso\n\nMissões estruturadas, corredores, mapas estáticos ou semi-estáticos e necessidade de previsibilidade. É a alternativa mais segura se o NMPC centralizado não cumprir o deadline.\n\n## Estratégia 3 — CBBA distribuído e NMPC local\n\n### Conceito\n\nTransformar regiões cegas, setores do corredor e necessidades de redundância em tarefas. Cada drone calcula localmente o benefício de atender tarefas e participa de um leilão por consenso; depois executa um NMPC local para alcançar o viewpoint e manter percepção, separação e conectividade. O número ativo emerge das tarefas e dos lances: agentes sem benefício marginal suficiente permanecem em standby.\n\nCBBA alterna construção gananciosa de bundles e consenso para resolver conflitos. Implementações open source incluem `TrajAllocPy` sob MIT e repositórios Python de CBBA; estudos também disponibilizam comparações entre Hungarian, auction e CBBA para multi-UAV. Para missões dinâmicas, CBBA com partial replanning reduz o custo de realocar toda a missão.[^30][^31][^32][^33]\n\n### Passo a passo\n\n1. **Definir tarefas perceptivas.** Cada tarefa deve especificar região, prioridade, janela temporal, qualidade mínima, redundância, energia estimada e viewpoint/corredor admissível.\n2. **Criar tarefa de ponto cego.** Quando a idade ou risco de uma célula exceder o limite, agregue células vizinhas em uma tarefa.\n3. **Calcular lance local.** O lance inclui ganho de cobertura/detecção, distância, bateria, risco, comunicação e custo de retirar o drone de sua tarefa atual.\n4. **Executar bundle building.** Cada drone adiciona tarefas de maior ganho marginal compatíveis com sua capacidade.\n5. **Executar consenso.** Drones trocam vencedores, bids e timestamps por ROS 2; empates usam IDs determinísticos.\n6. **Aplicar partial replanning.** Quando UGV, oclusor ou link muda, libere apenas parte final do bundle.\n7. **Derivar ativação.** Um drone standby ativa se vencer tarefa cujo benefício exceda custo de ativação; desativa apenas após perder tarefas e cumprir tempo mínimo ligado.\n8. **Executar NMPC local.** Cada agente recebe o viewpoint ou região e resolve trajetória curta respeitando dinâmica e vizinhos.\n9. **Compartilhar intenção.** Publique trajetória prevista compacta, não estados em alta frequência para todos os pares.\n10. **Manter supervisor de segurança.** Mesmo em arquitetura distribuída, um nó independente monitora separação, geofence, bateria e colisão iminente; ele pode vetar setpoints.\n11. **Simular falhas V2X.** Introduza atraso, perda, partição e stale data. ROS 2 oferece políticas de reliability, deadline, lifespan e liveliness para modelar e detectar esses eventos.[^34][^35]\n12. **Validar convergência e degradação.** Meça tempo para consenso, conflitos, mensagens, cobertura durante partições e recuperação após falha de drone.\n\n### Vantagens\n\n- Escala melhor com o número de drones.\n- Mais coerente com a visão ATAS de inteligência distribuída aérea.\n- Tolerante a perda do otimizador central e a comunicação parcial.\n- Alocação pode operar somente com vizinhos.\n- Permite adicionar/remover drones dinamicamente.\n\n### Limitações\n\n- Não garante ótimo global.\n- Pode haver cobertura temporariamente inconsistente durante consenso.\n- Ajustar bids multiobjetivo é difícil.\n- Verificação e depuração distribuídas são mais complexas.\n- NMPCs locais ainda podem conflitar sem reservas de trajetória ou barreiras.\n- Não é a melhor primeira implementação para uma equipe pequena e hardware único.\n\n### Melhor uso\n\nEvolução posterior, enxames maiores, execução distribuída real e comunicação intermitente. Deve ser implementada depois que métricas de FoV, detecção e segurança estiverem estáveis na estratégia centralizada.\n\n## Comparativo técnico\n\n| Critério | Estratégia 1: hierárquica central | Estratégia 2: viewpoints discretos | Estratégia 3: CBBA + NMPC local |\n|---|---|---|---|\n| Decisão de pose | Contínua em horizonte curto | Discreta, com refinamento local | Contínua local após alocação |\n| Número de drones | Supervisor binário lento | Variáveis binárias de seleção/rota | Emerge de tarefas e bids |\n| Otimalidade global | Boa localmente; depende do warm start | Boa no conjunto amostrado | Aproximada/distribuída |\n| Previsibilidade temporal | Média | Alta | Média, dependente de consenso |\n| Escalabilidade | Média | Média | Alta |\n| Comunicação | Centralizada | Centralizada | Distribuída |\n| Robustez a falha do planner | Média com fallback | Média/alta com plano cacheado | Alta |\n| Oclusão | Surrogate + validação | Pré-calculada/atualizada | Avaliada localmente |\n| Adequação ao laptop | Alta com horizonte curto | Muito alta | Alta, mas complexa de testar |\n| Complexidade de implementação | Média/alta | Média | Alta |\n| Melhor fase | Alfa principal | Alfa alternativa/benchmark | Beta e implantação distribuída |\n\n## Recomendação combinada\n\nA solução mais eficiente não é escolher apenas uma estratégia. Recomenda-se:\n\n- **Núcleo da alfa:** estratégia 1.\n- **Supervisor discreto e fallback:** componentes da estratégia 2.\n- **Benchmark de Pareto offline:** NSGA-II/R-NSGA-II em `pymoo`.\n- **Evolução distribuída:** estratégia 3.\n\nNa prática, o supervisor da estratégia 1 pode selecionar drones e viewpoints aproximados com CP-SAT; o NMPC refina as poses; o NSGA-II explora pesos e trade-offs offline; e, mais tarde, o supervisor central é substituído progressivamente por CBBA sem alterar `atas_fov_core` ou os controladores locais.\n\n## ROS 2 e Drake\n\n### Granularidade dos nós\n\nNós recomendados:\n\n- `atas_world_simulator`: único dono do `Simulator`, `MultibodyPlant`, `SceneGraph` e `/clock`.\n- `atas_ground_truth_bridge`: publica estados e TF necessários.\n- `atas_fov_evaluator`: calcula visibilidade e qualidade.\n- `atas_coverage_map`: mantém risco, idade e regiões cegas.\n- `atas_activation_optimizer`: nível discreto.\n- `atas_pose_optimizer`: NMPC ou refinamento.\n- `atas_task_allocator`: usado na estratégia 3.\n- `atas_safety_supervisor`: veto independente.\n- `atas_drone_controller_i`: controlador por drone ou componentes compostos.\n- `atas_metrics`: logging, deadlines, rosbag e indicadores.\n\nNão execute múltiplos simuladores Drake independentes como fonte de verdade. Cada nó que necessite de dinâmica para predição pode possuir um modelo local reduzido, mas o estado verdadeiro deve vir do simulador central.\n\nO repositório `RobotLocomotion/drake-ros` fornece APIs e exemplos para Drake com ROS 2, mas ainda se apresenta como prototipagem experimental; sua README documenta exemplos com `colcon` e configurações suportadas específicas, portanto a integração deve ser fixada por commit e testada no container escolhido.[^36][^37]\n\n### Tempo e execução\n\nO Drake deve dirigir `/clock`, e todos os nós devem usar `use_sim_time`. ROS 2 define tempo simulado por uma fonte abstrata ativada por esse parâmetro. Para testes determinísticos, prefira execução stepped/lockstep: avançar o Drake, publicar estado, aguardar decisões com deadline conhecido e então avançar novamente. Em execução em tempo real, nunca bloqueie o thread de simulação esperando indefinidamente pelo solver.[^38]\n\nSepare callback groups para estado, solver, watchdog e publicação. Executors ROS 2 utilizam threads para callbacks, mas a documentação ressalta que os executors padrão não garantem, por si só, determinismo hard real-time. Portanto, a meta da alfa deve ser **soft real-time com deadline medido e fallback**, não hard real-time.[^39]\n\n### Mensagens\n\nCrie `atas_msgs` com:\n\n- `VisibilityMatrix` ou formato esparso por drone;\n- `CoverageCellArray`;\n- `DetectionQualityArray`;\n- `DroneActivationPlan`;\n- `PerceptionTask` e `TaskBundle`;\n- `TimedPoseTrajectory`;\n- `OptimizationStatus`;\n- `SafetyOverride`.\n\nCada mensagem deve conter `stamp`, `frame_id`, `sequence`, validade temporal, versão do mapa e `solution_age`. Estados volumosos podem ser publicados best-effort; planos, overrides e ativação devem ser reliable. Use `lifespan` para descartar plano vencido, `deadline` para detectar falha e `liveliness` para monitorar agentes.[^34]\n\n## FoV eficiente\n\n### Geometria analítica\n\nPara um ponto mundial `P_W`, transforme para o frame óptico:\n\n`P_C = X_CW P_W = [x_C,y_C,z_C]`.\n\nO ponto está no frustum quando:\n\n- `z_near <= z_C <= z_far`;\n- `abs(atan2(x_C,z_C)) <= HFOV/2`;\n- `abs(atan2(y_C,z_C)) <= VFOV/2`.\n\nOu projete com intrínsecos e verifique limites de pixel. Isso é barato, vetorizável e diferenciável após suavização.\n\n### Oclusão\n\nUse uma cascata:\n\n1. Frustum analítico.\n2. Broad phase por AABB/BVH.\n3. Um raio ao centro.\n4. Raios para corners/superfície somente se a célula for crítica.\n5. Label image somente para auditoria periódica ou empates.\n\nEssa cascata reduz o número de raios e renderizações. Cenas estáticas devem ser carregadas uma vez no raycaster; atualize transforms de UGVs e drones.\n\n### Label images\n\nUm `RgbdSensor` pode produzir label image sem depender de um detector neural; cada pixel carrega um identificador de renderização. Conte pixels por ID para obter:[^40][^7]\n\n- presença visível;\n- fração da imagem;\n- bounding box projetada;\n- fração visível aproximada, comparada com render sem oclusores ou área projetada esperada.\n\nUse resolução baixa para o otimizador/validador e resolução nominal apenas em testes. Compartilhe o mesmo `RenderEngine` entre câmeras quando suportado pela configuração.[^41]\n\n## Open source e ambiente\n\n### Plataforma\n\nArch Linux pode continuar como host, mas não deve ser o ambiente de referência do workspace. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1; a documentação recomenda plataforma Tier 1 porque outros sistemas podem exigir trabalho significativo. Use Podman rootless para executar um ambiente Ubuntu fixado; Podman é daemonless e suporta execução sem privilégios.[^42][^43][^44]\n\nDuas imagens devem ser avaliadas:\n\n- **Ubuntu 22.04 + ROS 2 Humble:** melhor alinhamento com a configuração recomendada documentada pelo `drake-ros`.[^36]\n- **Ubuntu 24.04 + ROS 2 Jazzy:** melhor alinhamento com a plataforma ROS 2 LTS atual e Drake recente.[^43][^45]\n\nEscolha uma e fixe digest, commit do Drake, commit do `drake-ros`, compiler e middleware. Não mantenha ambos como ambientes de produção da alfa.\n\n### Licenças\n\n- Drake: BSD-3-Clause.[^22]\n- ROS 2: predominantemente Apache-2.0 e código portado BSD-3-Clause.[^46]\n- Cyclone DDS: EPL-2.0 e middleware Tier 1 do ROS 2.[^47]\n- Ipopt: EPL-2.0.[^20]\n- OR-Tools: Apache-2.0.[^24]\n- pymoo: Apache-2.0.[^1]\n- Open3D: MIT.[^16]\n- Embree: Apache-2.0.[^17]\n\nSe “apenas open source” for literal, não use CUDA/OptiX nem dependa do driver proprietário NVIDIA. Rode o pipeline principal em CPU e, para rasterização, teste Mesa/Intel Iris Xe ou um stack gráfico aberto compatível. A RTX A2000 pode permanecer opcional e fora da baseline auditável. Mantenha SBOM, `LICENSES/`, versões fixadas e CI que bloqueie dependências não aprovadas.\n\n## Plano de implementação\n\n### Fase 0 — Especificação\n\n1. Fixar `Nmax`, área, taxa de atualização e budget de latência.\n2. Definir o que é ponto cego e detecção correta.\n3. Definir requisitos de cobertura, redundância e disponibilidade.\n4. Separar restrições duras de objetivos.\n5. Definir cenários e seeds reproduzíveis.\n\n### Fase 1 — Gêmeo geométrico\n\n1. Modelar dois UGVs e drones no Drake.\n2. Implementar frames ópticos e intrínsecos.\n3. Implementar L0 sem oclusão.\n4. Publicar `VisibilityMatrix`.\n5. Validar contra casos analíticos.\n\n### Fase 2 — Oclusão e qualidade\n\n1. Integrar Open3D/Embree ou label images.\n2. Implementar fração visível.\n3. Implementar modelo inicial de `Pdet`.\n4. Criar mapa de risco e idade.\n5. Validar com cenas contendo oclusores móveis.\n\n### Fase 3 — Baselines\n\n1. Heurística look-at + drones fixos.\n2. Greedy de ganho marginal para ativação.\n3. Viewpoints discretos + CP-SAT.\n4. NSGA-II offline para Pareto.\n5. Registrar hypervolume, cobertura, custo e latência.\n\n### Fase 4 — Estratégia 1\n\n1. Supervisor CP-SAT lento.\n2. NMPC cinemático curto.\n3. Warm start e deadline.\n4. Reavaliação geométrica exata.\n5. Fallback e watchdog.\n\n### Fase 5 — Robustez\n\n1. Atraso/perda ROS 2.\n2. Falha de drone.\n3. Bateria crítica.\n4. Entrada/saída de drones.\n5. Obstáculo não previsto.\n6. Monte Carlo com seeds registradas.\n\n### Fase 6 — Distribuição\n\n1. Transformar regiões cegas em tarefas.\n2. Implementar CBBA.\n3. Adicionar partial replanning.\n4. Migrar um subconjunto das decisões.\n5. Comparar com o planner central usando os mesmos cenários.\n\n## Métricas de aceitação\n\n### Percepção\n\n- Percentual ponderado coberto.\n- Maior duração contínua de ponto cego.\n- Fração visível dos dois UGVs e obstáculos críticos.\n- Probabilidade combinada de detecção.\n- Redundância útil por célula.\n- Frescor das observações.\n\n### Otimização\n\n- Tempo mediano, p95 e máximo.\n- Taxa de deadline perdido.\n- Taxa de solução inviável.\n- Gap ou qualidade relativa ao baseline offline.\n- Número de mudanças de ativação.\n- Distância entre comando sucessivo e estabilidade.\n\n### Operação\n\n- Número médio e máximo de drones ativos.\n- Energia estimada.\n- Distância e esforço de controle.\n- Margem mínima de separação.\n- Tempo em comunicação degradada.\n- Taxa de fallback e duração.\n\n### Multiobjetivo\n\nPara os experimentos offline, use frente Pareto, hypervolume, IGD quando houver referência e estabilidade entre seeds. Online, escolha uma única política operacional ou uma pequena coleção de modos (`economy`, `balanced`, `safety`); não tente apresentar uma frente Pareto completa a cada ciclo.\n\n## Decisões recomendadas\n\n1. Adotar a estratégia 1 como principal.\n2. Usar estratégia 2 como supervisor discreto, fallback e benchmark.\n3. Reservar estratégia 3 para a evolução distribuída.\n4. Otimizar internamente quaternion/rotação, não Euler completo.\n5. Começar com `x,y,z,yaw,pitch` e roll restrito.\n6. Usar FoV analítico no loop, ray casting seletivo para oclusão e label images para validação.\n7. Tratar “detecção correta” como modelo probabilístico calibrado, não sinônimo de presença no FoV.\n8. Executar o ambiente de referência em Ubuntu containerizado e manter Arch apenas como host.\n9. Usar somente Ipopt, OR-Tools, pymoo, Open3D/Embree e middleware de licença aprovada.\n10. Definir soft real-time com deadline, última solução válida e comportamento seguro.\n11. Fixar commits e manter SBOM para demonstrar conformidade open source.\n12. Projetar interfaces para trocar o otimizador sem alterar simulador, FoV, mensagens ou controladores.\n\n---\n\n## References\n\n1. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...\n\n2. [NSGA-II: Non-dominated Sorting Genetic Algorithm - pymoo](https://pymoo.org/algorithms/moo/nsga2.html) - An implementation of the famous NSGA-II (also known as NSGA2) algorithm to solve multi-objective opt...\n\n3. [pymoo.org › customization › mixedMixed Variable Problem — pymoo: Multi-objective Optimization ...](https://pymoo.org/customization/mixed.html)\n\n4. [D-nsga-ii](https://pymoo.org/algorithms/moo/dnsga2.html) - An implementation of D-NSGA-II (Dynamic NSGA-II), a modified NSGA-II for dynamic multi-objective opt...\n\n5. [Composing multiple nodes in a single process - ROS documentation](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Composition.html) - Table of Contents: Background, Prerequisites, Run the demos- Discover available components, Run-time...\n\n6. [Features Status — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/The-ROS2-Project/Features.html) - The features listed below are available in the current ROS 2 release. Unless otherwise specified, th...\n\n7. [RgbdSensor Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor.html)\n\n8. [pydrake.systems.sensors](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)\n\n9. [[PDF] Planning to Perceive: Exploiting Mobility for Robust Object Detection](https://dspace.mit.edu/bitstream/handle/1721.1/81259/Roy_Planning%20to%20perceive.pdf;sequence=1)\n\n10. [Semantics-Aware Next-best-view Planning for Efficient Search and Detection of Task-relevant Plant Parts](https://arxiv.org/html/2306.09801)\n\n11. [Nonmyopic View Planning for Active Object Detection](https://arxiv.org/html/1309.5401v1)\n\n12. [R-NSGA-II — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/algorithms/moo/rnsga2.html) - An implementation of R-NSGA-II, a reference-point-based variant of NSGA-II that guides the search to...\n\n13. [Rendering Engines - Drake](https://drake.mit.edu/doxygen_cxx/group__render__engines.html)\n\n14. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\n15. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\n16. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n17. [GitHub - conda-forge/embree-feedstock: A conda-smithy repository for embree.](https://github.com/conda-forge/embree-feedstock) - A conda-smithy repository for embree. Contribute to conda-forge/embree-feedstock development by crea...\n\n18. [Open3D (C++ API)](https://www.open3d.org/html/cpp_api/_raycasting_scene_8h_source.html)\n\n19. [drake.mit.edu › group__planning__trajectoryDrake: Trajectories](https://drake.mit.edu/doxygen_cxx/group__planning__trajectory.html)\n\n20. [GitHub - coin-or/Ipopt: COIN-OR Interior Point Optimizer IPOPT](https://github.com/coin-or/IPOPT) - COIN-OR Interior Point Optimizer IPOPT. Contribute to coin-or/Ipopt development by creating an accou...\n\n21. [drake/solvers/mathematical_program.h at master - GitHub](https://github.com/RobotLocomotion/drake/blob/master/solvers/mathematical_program.h) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n22. [drake/LICENSE.TXT at master · RobotLocomotion/drake](https://github.com/RobotLocomotion/drake/blob/master/LICENSE.TXT) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n23. [Drake v1.35.0](https://drake.mit.edu/release_notes/v1.35.0.html) - Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...\n\n24. [ortools](https://pypi.org/project/ortools/9.15.6755/) - Google OR-Tools python libraries and modules\n\n25. [RgbdSensorDiscrete Class Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor_discrete.html)\n\n26. [MathematicalProgram debugging tips](https://drake.mit.edu/tutorials/debug_mathematical_program.html)\n\n27. [Model-based analysis of multi-UAV path planning for surveying postdisaster building damage - Scientific Reports](https://www.nature.com/articles/s41598-021-97804-4) - Emergency responders require accurate and comprehensive data to make informed decisions. Moreover, t...\n\n28. [[2007.13065] Multi-UAV Coverage Path Planning for the Inspection ...](https://ar5iv.labs.arxiv.org/html/2007.13065) - We present a multi-UAV Coverage Path Planning (CPP) framework for the inspection of large-scale, com...\n\n29. [Occlusion-Aware UAV Path Planning for Reconnaissance and Surveillance](https://ira.lib.polyu.edu.hk/bitstream/10397/91621/1/Zhang_Occlusion-aware_uav.pdf)\n\n30. [github.com › kasperg3 › TrajAllocPyGitHub - kasperg3/trajallocpy: Decentralized multi-robot ...](https://github.com/kasperg3/TrajAllocPy) - Decentralized multi-robot/agent task allocation for area coverage problems - kasperg3/trajallocpy\n\n31. [www.mdpi.com › 2504-446X › 9/8/530Comparative Analysis of Centralized and Distributed Multi-UAV ...](https://www.mdpi.com/2504-446X/9/8/530) - Unmanned aerial vehicles (UAVs), commonly known as drones, offer unprecedented flexibility for compl...\n\n32. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)\n\n33. [keep9oing/consensus-based-bundle-algorithm - GitHub](https://github.com/keep9oing/consensus-based-bundle-algorithm) - Implementation of Consensus Based Bundle Algorithm (CBBA) with python - keep9oing/consensus-based-bu...\n\n34. [Quality of Service settings — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Quality-of-Service-Settings.html) - Table of Contents: Overview, QoS policies- Comparison to ROS 1., QoS profiles, QoS compatibilities- ...\n\n35. [ROS QoS - Deadline, Liveliness, and Lifespan](https://design.ros2.org/articles/qos_deadline_liveliness_lifespan.html) - Distilled design documents related to the ROS 2 effort\n\n36. [drake-ros/README.md at main · RobotLocomotion/drake-ros](https://github.com/RobotLocomotion/drake-ros/blob/main/README.md) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...\n\n37. [RobotLocomotion/drake-ros: Experimental prototyping (for ...](https://github.com/RobotLocomotion/drake-ros) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...\n\n38. [Clock and Time - ROS 2 Design](https://design.ros2.org/articles/clock_and_time.html) - Distilled design documents related to the ROS 2 effort\n\n39. [Executors — ROS 2 Documentation: Iron documentation](https://docs.ros.org/en/iron/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...\n\n40. [Ch. 9 - Object Detection and Segmentation](https://manipulation.csail.mit.edu/segmentation.html)\n\n41. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)\n\n42. [containers.conf](https://docs.podman.io/en/stable/markdown/podman.1.html)\n\n43. [Jazzy Jalisco (jazzy) — ROS 2 Documentation: Rolling documentation](https://docs.ros.org/en/rolling/Releases/Release-Jazzy-Jalisco.html) - Table of Contents: Supported Platforms, Installation, Changes to how ROS 2 and Gazebo integrate, New...\n\n44. [Getting Started - ROS (Robot Operating System)](https://www.ros.org/blog/getting-started/)\n\n45. [Installation Guide | RobotLocomotion/drake | DeepWiki](https://deepwiki.com/RobotLocomotion/drake/1.1-installation-guide) - This guide details the different methods to install Drake, the specific platforms supported, and the...\n\n46. [Why ROS 2?](https://docs.ros.org/en/crystal/_downloads/8e25980591e39eda300136ddebc9e97b/ros2-brochure-ltr-web.pdf)\n\n47. [cyclonedds - ROS Package Overview](https://index.ros.org/p/cyclonedds/) - a community-maintained index of robotics software\n\n---",
        "chars_count": 41625,
        "lines_count": 631,
        "sections": [
          {
            "level": 2,
            "title": "Resumo",
            "anchor": "t1-resumo"
          },
          {
            "level": 2,
            "title": "Resposta executiva",
            "anchor": "t1-resposta-executiva"
          },
          {
            "level": 2,
            "title": "Escopo matemático",
            "anchor": "t1-escopo-matem-tico"
          },
          {
            "level": 3,
            "title": "Variáveis de decisão",
            "anchor": "t1-vari-veis-de-decis-o"
          },
          {
            "level": 3,
            "title": "Estado de cobertura",
            "anchor": "t1-estado-de-cobertura"
          },
          {
            "level": 3,
            "title": "Qualidade perceptiva",
            "anchor": "t1-qualidade-perceptiva"
          },
          {
            "level": 3,
            "title": "Objetivos recomendados",
            "anchor": "t1-objetivos-recomendados"
          },
          {
            "level": 3,
            "title": "Restrições mínimas",
            "anchor": "t1-restri-es-m-nimas"
          },
          {
            "level": 2,
            "title": "Arquitetura comum",
            "anchor": "t1-arquitetura-comum"
          },
          {
            "level": 2,
            "title": "Estratégia 1 — Otimização hierárquica centralizada",
            "anchor": "t1-estrat-gia-1-otimiza-o-hier-rquica-centralizada"
          },
          {
            "level": 3,
            "title": "Conceito",
            "anchor": "t1-conceito"
          },
          {
            "level": 3,
            "title": "Passo a passo",
            "anchor": "t1-passo-a-passo"
          },
          {
            "level": 3,
            "title": "Vantagens",
            "anchor": "t1-vantagens"
          },
          {
            "level": 3,
            "title": "Limitações",
            "anchor": "t1-limita-es"
          },
          {
            "level": 3,
            "title": "Melhor uso",
            "anchor": "t1-melhor-uso"
          },
          {
            "level": 2,
            "title": "Estratégia 2 — Viewpoints discretos e cobertura combinatória",
            "anchor": "t1-estrat-gia-2-viewpoints-discretos-e-cobertura-combinat-ria"
          },
          {
            "level": 3,
            "title": "Conceito",
            "anchor": "t1-conceito"
          },
          {
            "level": 3,
            "title": "Passo a passo",
            "anchor": "t1-passo-a-passo"
          },
          {
            "level": 3,
            "title": "Formulação típica",
            "anchor": "t1-formula-o-t-pica"
          },
          {
            "level": 3,
            "title": "Vantagens",
            "anchor": "t1-vantagens"
          },
          {
            "level": 3,
            "title": "Limitações",
            "anchor": "t1-limita-es"
          },
          {
            "level": 3,
            "title": "Melhor uso",
            "anchor": "t1-melhor-uso"
          },
          {
            "level": 2,
            "title": "Estratégia 3 — CBBA distribuído e NMPC local",
            "anchor": "t1-estrat-gia-3-cbba-distribu-do-e-nmpc-local"
          },
          {
            "level": 3,
            "title": "Conceito",
            "anchor": "t1-conceito"
          },
          {
            "level": 3,
            "title": "Passo a passo",
            "anchor": "t1-passo-a-passo"
          },
          {
            "level": 3,
            "title": "Vantagens",
            "anchor": "t1-vantagens"
          },
          {
            "level": 3,
            "title": "Limitações",
            "anchor": "t1-limita-es"
          },
          {
            "level": 3,
            "title": "Melhor uso",
            "anchor": "t1-melhor-uso"
          },
          {
            "level": 2,
            "title": "Comparativo técnico",
            "anchor": "t1-comparativo-t-cnico"
          },
          {
            "level": 2,
            "title": "Recomendação combinada",
            "anchor": "t1-recomenda-o-combinada"
          },
          {
            "level": 2,
            "title": "ROS 2 e Drake",
            "anchor": "t1-ros-2-e-drake"
          },
          {
            "level": 3,
            "title": "Granularidade dos nós",
            "anchor": "t1-granularidade-dos-n-s"
          },
          {
            "level": 3,
            "title": "Tempo e execução",
            "anchor": "t1-tempo-e-execu-o"
          },
          {
            "level": 3,
            "title": "Mensagens",
            "anchor": "t1-mensagens"
          },
          {
            "level": 2,
            "title": "FoV eficiente",
            "anchor": "t1-fov-eficiente"
          },
          {
            "level": 3,
            "title": "Geometria analítica",
            "anchor": "t1-geometria-anal-tica"
          },
          {
            "level": 3,
            "title": "Oclusão",
            "anchor": "t1-oclus-o"
          },
          {
            "level": 3,
            "title": "Label images",
            "anchor": "t1-label-images"
          },
          {
            "level": 2,
            "title": "Open source e ambiente",
            "anchor": "t1-open-source-e-ambiente"
          },
          {
            "level": 3,
            "title": "Plataforma",
            "anchor": "t1-plataforma"
          },
          {
            "level": 3,
            "title": "Licenças",
            "anchor": "t1-licen-as"
          },
          {
            "level": 2,
            "title": "Plano de implementação",
            "anchor": "t1-plano-de-implementa-o"
          },
          {
            "level": 3,
            "title": "Fase 0 — Especificação",
            "anchor": "t1-fase-0-especifica-o"
          },
          {
            "level": 3,
            "title": "Fase 1 — Gêmeo geométrico",
            "anchor": "t1-fase-1-g-meo-geom-trico"
          },
          {
            "level": 3,
            "title": "Fase 2 — Oclusão e qualidade",
            "anchor": "t1-fase-2-oclus-o-e-qualidade"
          },
          {
            "level": 3,
            "title": "Fase 3 — Baselines",
            "anchor": "t1-fase-3-baselines"
          },
          {
            "level": 3,
            "title": "Fase 4 — Estratégia 1",
            "anchor": "t1-fase-4-estrat-gia-1"
          },
          {
            "level": 3,
            "title": "Fase 5 — Robustez",
            "anchor": "t1-fase-5-robustez"
          },
          {
            "level": 3,
            "title": "Fase 6 — Distribuição",
            "anchor": "t1-fase-6-distribui-o"
          },
          {
            "level": 2,
            "title": "Métricas de aceitação",
            "anchor": "t1-m-tricas-de-aceita-o"
          },
          {
            "level": 3,
            "title": "Percepção",
            "anchor": "t1-percep-o"
          },
          {
            "level": 3,
            "title": "Otimização",
            "anchor": "t1-otimiza-o"
          },
          {
            "level": 3,
            "title": "Operação",
            "anchor": "t1-opera-o"
          },
          {
            "level": 3,
            "title": "Multiobjetivo",
            "anchor": "t1-multiobjetivo"
          },
          {
            "level": 2,
            "title": "Decisões recomendadas",
            "anchor": "t1-decis-es-recomendadas"
          },
          {
            "level": 2,
            "title": "References",
            "anchor": "t1-references"
          }
        ],
        "tables_count": 1,
        "code_blocks_count": 1,
        "references_count": 47
      },
      "tables": [
        {
          "headers": [
            "Critério",
            "Estratégia 1: hierárquica central",
            "Estratégia 2: viewpoints discretos",
            "Estratégia 3: CBBA + NMPC local"
          ],
          "rows": [
            [
              "Decisão de pose",
              "Contínua em horizonte curto",
              "Discreta, com refinamento local",
              "Contínua local após alocação"
            ],
            [
              "Número de drones",
              "Supervisor binário lento",
              "Variáveis binárias de seleção/rota",
              "Emerge de tarefas e bids"
            ],
            [
              "Otimalidade global",
              "Boa localmente; depende do warm start",
              "Boa no conjunto amostrado",
              "Aproximada/distribuída"
            ],
            [
              "Previsibilidade temporal",
              "Média",
              "Alta",
              "Média, dependente de consenso"
            ],
            [
              "Escalabilidade",
              "Média",
              "Média",
              "Alta"
            ],
            [
              "Comunicação",
              "Centralizada",
              "Centralizada",
              "Distribuída"
            ],
            [
              "Robustez a falha do planner",
              "Média com fallback",
              "Média/alta com plano cacheado",
              "Alta"
            ],
            [
              "Oclusão",
              "Surrogate + validação",
              "Pré-calculada/atualizada",
              "Avaliada localmente"
            ],
            [
              "Adequação ao laptop",
              "Alta com horizonte curto",
              "Muito alta",
              "Alta, mas complexa de testar"
            ],
            [
              "Complexidade de implementação",
              "Média/alta",
              "Média",
              "Alta"
            ],
            [
              "Melhor fase",
              "Alfa principal",
              "Alfa alternativa/benchmark",
              "Beta e implantação distribuída"
            ]
          ],
          "raw": "| Critério | Estratégia 1: hierárquica central | Estratégia 2: viewpoints discretos | Estratégia 3: CBBA + NMPC local |\n|---|---|---|---|\n| Decisão de pose | Contínua em horizonte curto | Discreta, com refinamento local | Contínua local após alocação |\n| Número de drones | Supervisor binário lento | Variáveis binárias de seleção/rota | Emerge de tarefas e bids |\n| Otimalidade global | Boa localmente; depende do warm start | Boa no conjunto amostrado | Aproximada/distribuída |\n| Previsibilidade temporal | Média | Alta | Média, dependente de consenso |\n| Escalabilidade | Média | Média | Alta |\n| Comunicação | Centralizada | Centralizada | Distribuída |\n| Robustez a falha do planner | Média com fallback | Média/alta com plano cacheado | Alta |\n| Oclusão | Surrogate + validação | Pré-calculada/atualizada | Avaliada localmente |\n| Adequação ao laptop | Alta com horizonte curto | Muito alta | Alta, mas complexa de testar |\n| Complexidade de implementação | Média/alta | Média | Alta |\n| Melhor fase | Alfa principal | Alfa alternativa/benchmark | Beta e implantação distribuída |"
        }
      ],
      "code_blocks": [
        {
          "lang": "text",
          "content": "                 /clock + estado verdadeiro Drake\n                              |\n                  atas_world_simulator_node\n                    MultibodyPlant + SceneGraph\n                              |\n             +----------------+----------------+\n             |                                 |\n      robot/drones states               geometry snapshot\n             |                                 |\n       atas_fov_evaluator_node <---- ROI/risk map/occluders\n             |\n   VisibilityMatrix + DetectionQuality + CoverageState\n             |\n   +---------+--------------------------+\n   |                                    |\nmission/activation optimizer      pose/trajectory optimizer\n   |                                    |\n   +----------- setpoints --------------+\n                    |\n          drone controller nodes\n                    |\n         plant commands / trajectories\n",
          "delimiter": "'''",
          "is_diagram": true
        }
      ],
      "references": [
        {
          "num": 1,
          "title": "github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...",
          "url": "https://github.com/anyoptimization/pymoo",
          "desc": "NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any..."
        },
        {
          "num": 2,
          "title": "NSGA-II: Non-dominated Sorting Genetic Algorithm - pymoo",
          "url": "https://pymoo.org/algorithms/moo/nsga2.html",
          "desc": "An implementation of the famous NSGA-II (also known as NSGA2) algorithm to solve multi-objective opt..."
        },
        {
          "num": 3,
          "title": "pymoo.org › customization › mixedMixed Variable Problem — pymoo: Multi-objective Optimization ...",
          "url": "https://pymoo.org/customization/mixed.html",
          "desc": ""
        },
        {
          "num": 4,
          "title": "D-nsga-ii",
          "url": "https://pymoo.org/algorithms/moo/dnsga2.html",
          "desc": "An implementation of D-NSGA-II (Dynamic NSGA-II), a modified NSGA-II for dynamic multi-objective opt..."
        },
        {
          "num": 5,
          "title": "Composing multiple nodes in a single process - ROS documentation",
          "url": "https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Composition.html",
          "desc": "Table of Contents: Background, Prerequisites, Run the demos- Discover available components, Run-time..."
        },
        {
          "num": 6,
          "title": "Features Status — ROS 2 Documentation: Jazzy documentation",
          "url": "https://docs.ros.org/en/jazzy/The-ROS2-Project/Features.html",
          "desc": "The features listed below are available in the current ROS 2 release. Unless otherwise specified, th..."
        },
        {
          "num": 7,
          "title": "RgbdSensor Class Reference - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor.html",
          "desc": ""
        },
        {
          "num": 8,
          "title": "pydrake.systems.sensors",
          "url": "https://drake.mit.edu/pydrake/pydrake.systems.sensors.html",
          "desc": ""
        },
        {
          "num": 9,
          "title": "[PDF] Planning to Perceive: Exploiting Mobility for Robust Object Detection",
          "url": "https://dspace.mit.edu/bitstream/handle/1721.1/81259/Roy_Planning%20to%20perceive.pdf;sequence=1",
          "desc": ""
        },
        {
          "num": 10,
          "title": "Semantics-Aware Next-best-view Planning for Efficient Search and Detection of Task-relevant Plant Parts",
          "url": "https://arxiv.org/html/2306.09801",
          "desc": ""
        },
        {
          "num": 11,
          "title": "Nonmyopic View Planning for Active Object Detection",
          "url": "https://arxiv.org/html/1309.5401v1",
          "desc": ""
        },
        {
          "num": 12,
          "title": "R-NSGA-II — pymoo: Multi-objective Optimization in Python 0.6.2 ...",
          "url": "https://pymoo.org/algorithms/moo/rnsga2.html",
          "desc": "An implementation of R-NSGA-II, a reference-point-based variant of NSGA-II that guides the search to..."
        },
        {
          "num": 13,
          "title": "Rendering Engines - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/group__render__engines.html",
          "desc": ""
        },
        {
          "num": 14,
          "title": "drake::geometry Namespace Reference",
          "url": "https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html",
          "desc": ""
        },
        {
          "num": 15,
          "title": "SceneGraph< T > Class Template Reference",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html",
          "desc": ""
        },
        {
          "num": 16,
          "title": "Open3D/LICENSE at main · isl-org/Open3D · GitHub",
          "url": "https://github.com/isl-org/Open3D/blob/main/LICENSE",
          "desc": "Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin..."
        },
        {
          "num": 17,
          "title": "GitHub - conda-forge/embree-feedstock: A conda-smithy repository for embree.",
          "url": "https://github.com/conda-forge/embree-feedstock",
          "desc": "A conda-smithy repository for embree. Contribute to conda-forge/embree-feedstock development by crea..."
        },
        {
          "num": 18,
          "title": "Open3D (C++ API)",
          "url": "https://www.open3d.org/html/cpp_api/_raycasting_scene_8h_source.html",
          "desc": ""
        },
        {
          "num": 19,
          "title": "drake.mit.edu › group__planning__trajectoryDrake: Trajectories",
          "url": "https://drake.mit.edu/doxygen_cxx/group__planning__trajectory.html",
          "desc": ""
        },
        {
          "num": 20,
          "title": "GitHub - coin-or/Ipopt: COIN-OR Interior Point Optimizer IPOPT",
          "url": "https://github.com/coin-or/IPOPT",
          "desc": "COIN-OR Interior Point Optimizer IPOPT. Contribute to coin-or/Ipopt development by creating an accou..."
        },
        {
          "num": 21,
          "title": "drake/solvers/mathematical_program.h at master - GitHub",
          "url": "https://github.com/RobotLocomotion/drake/blob/master/solvers/mathematical_program.h",
          "desc": "Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by..."
        },
        {
          "num": 22,
          "title": "drake/LICENSE.TXT at master · RobotLocomotion/drake",
          "url": "https://github.com/RobotLocomotion/drake/blob/master/LICENSE.TXT",
          "desc": "Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by..."
        },
        {
          "num": 23,
          "title": "Drake v1.35.0",
          "url": "https://drake.mit.edu/release_notes/v1.35.0.html",
          "desc": "Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT..."
        },
        {
          "num": 24,
          "title": "ortools",
          "url": "https://pypi.org/project/ortools/9.15.6755/",
          "desc": "Google OR-Tools python libraries and modules"
        },
        {
          "num": 25,
          "title": "RgbdSensorDiscrete Class Reference",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor_discrete.html",
          "desc": ""
        },
        {
          "num": 26,
          "title": "MathematicalProgram debugging tips",
          "url": "https://drake.mit.edu/tutorials/debug_mathematical_program.html",
          "desc": ""
        },
        {
          "num": 27,
          "title": "Model-based analysis of multi-UAV path planning for surveying postdisaster building damage - Scientific Reports",
          "url": "https://www.nature.com/articles/s41598-021-97804-4",
          "desc": "Emergency responders require accurate and comprehensive data to make informed decisions. Moreover, t..."
        },
        {
          "num": 28,
          "title": "[2007.13065] Multi-UAV Coverage Path Planning for the Inspection ...",
          "url": "https://ar5iv.labs.arxiv.org/html/2007.13065",
          "desc": "We present a multi-UAV Coverage Path Planning (CPP) framework for the inspection of large-scale, com..."
        },
        {
          "num": 29,
          "title": "Occlusion-Aware UAV Path Planning for Reconnaissance and Surveillance",
          "url": "https://ira.lib.polyu.edu.hk/bitstream/10397/91621/1/Zhang_Occlusion-aware_uav.pdf",
          "desc": ""
        },
        {
          "num": 30,
          "title": "github.com › kasperg3 › TrajAllocPyGitHub - kasperg3/trajallocpy: Decentralized multi-robot ...",
          "url": "https://github.com/kasperg3/TrajAllocPy",
          "desc": "Decentralized multi-robot/agent task allocation for area coverage problems - kasperg3/trajallocpy"
        },
        {
          "num": 31,
          "title": "www.mdpi.com › 2504-446X › 9/8/530Comparative Analysis of Centralized and Distributed Multi-UAV ...",
          "url": "https://www.mdpi.com/2504-446X/9/8/530",
          "desc": "Unmanned aerial vehicles (UAVs), commonly known as drones, offer unprecedented flexibility for compl..."
        },
        {
          "num": 32,
          "title": "Partial Replanning for Decentralized Dynamic Task Allocation - arXiv",
          "url": "https://arxiv.org/html/1806.04836v2",
          "desc": ""
        },
        {
          "num": 33,
          "title": "keep9oing/consensus-based-bundle-algorithm - GitHub",
          "url": "https://github.com/keep9oing/consensus-based-bundle-algorithm",
          "desc": "Implementation of Consensus Based Bundle Algorithm (CBBA) with python - keep9oing/consensus-based-bu..."
        },
        {
          "num": 34,
          "title": "Quality of Service settings — ROS 2 Documentation: Jazzy ...",
          "url": "https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Quality-of-Service-Settings.html",
          "desc": "Table of Contents: Overview, QoS policies- Comparison to ROS 1., QoS profiles, QoS compatibilities- ..."
        },
        {
          "num": 35,
          "title": "ROS QoS - Deadline, Liveliness, and Lifespan",
          "url": "https://design.ros2.org/articles/qos_deadline_liveliness_lifespan.html",
          "desc": "Distilled design documents related to the ROS 2 effort"
        },
        {
          "num": 36,
          "title": "drake-ros/README.md at main · RobotLocomotion/drake-ros",
          "url": "https://github.com/RobotLocomotion/drake-ros/blob/main/README.md",
          "desc": "Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ..."
        },
        {
          "num": 37,
          "title": "RobotLocomotion/drake-ros: Experimental prototyping (for ...",
          "url": "https://github.com/RobotLocomotion/drake-ros",
          "desc": "Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ..."
        },
        {
          "num": 38,
          "title": "Clock and Time - ROS 2 Design",
          "url": "https://design.ros2.org/articles/clock_and_time.html",
          "desc": "Distilled design documents related to the ROS 2 effort"
        },
        {
          "num": 39,
          "title": "Executors — ROS 2 Documentation: Iron documentation",
          "url": "https://docs.ros.org/en/iron/Concepts/Intermediate/About-Executors.html",
          "desc": "Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O..."
        },
        {
          "num": 40,
          "title": "Ch. 9 - Object Detection and Segmentation",
          "url": "https://manipulation.csail.mit.edu/segmentation.html",
          "desc": ""
        },
        {
          "num": 41,
          "title": "CameraConfig Struct Reference - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html",
          "desc": ""
        },
        {
          "num": 42,
          "title": "containers.conf",
          "url": "https://docs.podman.io/en/stable/markdown/podman.1.html",
          "desc": ""
        },
        {
          "num": 43,
          "title": "Jazzy Jalisco (jazzy) — ROS 2 Documentation: Rolling documentation",
          "url": "https://docs.ros.org/en/rolling/Releases/Release-Jazzy-Jalisco.html",
          "desc": "Table of Contents: Supported Platforms, Installation, Changes to how ROS 2 and Gazebo integrate, New..."
        },
        {
          "num": 44,
          "title": "Getting Started - ROS (Robot Operating System)",
          "url": "https://www.ros.org/blog/getting-started/",
          "desc": ""
        },
        {
          "num": 45,
          "title": "Installation Guide | RobotLocomotion/drake | DeepWiki",
          "url": "https://deepwiki.com/RobotLocomotion/drake/1.1-installation-guide",
          "desc": "This guide details the different methods to install Drake, the specific platforms supported, and the..."
        },
        {
          "num": 46,
          "title": "Why ROS 2?",
          "url": "https://docs.ros.org/en/crystal/_downloads/8e25980591e39eda300136ddebc9e97b/ros2-brochure-ltr-web.pdf",
          "desc": ""
        },
        {
          "num": 47,
          "title": "cyclonedds - ROS Package Overview",
          "url": "https://index.ros.org/p/cyclonedds/",
          "desc": "a community-maintained index of robotics software"
        }
      ]
    },
    {
      "id": 2,
      "title": "Resposta solicitação 2 - Guia de implementação do otimizador distribuído ATAS com CBBA, NMPC, ROS 2 e Drake",
      "short_title": "Guia de Implementação Distribuída: CBBA + NMPC",
      "summary": "Detalhamento da arquitetura em camadas para a Estratégia 3. Algoritmo de leilão CBBA para alocação distribuída de tarefas, NMPC local com Ipopt/acados, máquina de estados para ativação dinâmica de drones e contratos ROS 2.",
      "tags": [
        "CBBA",
        "NMPC",
        "C++",
        "ROS 2 Interfaces",
        "QoS",
        "Drake SceneGraph"
      ],
      "color": "emerald",
      "solicitacao": {
        "title": "Solicitação 2",
        "raw": "# Solicitação 2\n``` markdown\nConsiderando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.\n\nConsidere que vou seguir com a estratégia de implementação 3, com CBBA (Consensus-Based Bundle Algorithm) + NMPC local + ROS2 + Drake + código c++ .\n\nFaça uma pesquisa ampla, técnica, completa e detalhada sobre as técnicas, ferramentas, escopo, contexto de aplicação e requisitos do meu projeto, principalmente da feature de otimização multi-objetivo que estamos planejando agora (e que devemos implementar inicialmente) e, considerando os resultados e sua análise dessa pesquisa, faça um guia completo, didático, adequado e passo a passo de como a implementação desse sistema deve ser feita, definindo e detalhando cada uma das etapas de implementação, testes, verificações e validações desse sistema de otimização multi-objetivo do projeto ATAS.\n\nConsidere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).\n\nConsidere como nosso foco atual e total no desenvolvimento do sistema de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.\n```",
        "clean": "Considerando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.\n\nConsidere que vou seguir com a estratégia de implementação 3, com CBBA (Consensus-Based Bundle Algorithm) + NMPC local + ROS2 + Drake + código c++ .\n\nFaça uma pesquisa ampla, técnica, completa e detalhada sobre as técnicas, ferramentas, escopo, contexto de aplicação e requisitos do meu projeto, principalmente da feature de otimização multi-objetivo que estamos planejando agora (e que devemos implementar inicialmente) e, considerando os resultados e sua análise dessa pesquisa, faça um guia completo, didático, adequado e passo a passo de como a implementação desse sistema deve ser feita, definindo e detalhando cada uma das etapas de implementação, testes, verificações e validações desse sistema de otimização multi-objetivo do projeto ATAS.\n\nConsidere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).\n\nConsidere como nosso foco atual e total no desenvolvimento do sistema de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.",
        "chars_count": 1431,
        "lines_count": 9
      },
      "resposta": {
        "title": "Resposta solicitação 2 - Guia de implementação do otimizador distribuído ATAS com CBBA, NMPC, ROS 2 e Drake",
        "raw": "# Resposta solicitação 2 - Guia de implementação do otimizador distribuído ATAS com CBBA, NMPC, ROS 2 e Drake\n## Resumo\n``` markdown\nA estratégia **CBBA + NMPC local + ROS 2 + Drake + C++** é adequada para o ATAS, desde que exista uma separação explícita entre:\n\n- **CBBA:** alocação discreta e distribuída das tarefas de percepção.\n- **NMPC:** otimização contínua da trajetória, posição e orientação de cada drone.\n- **Drake:** dinâmica, geometria, FoV, tempo e simulação.\n- **ROS 2:** comunicação, composição e implantação dos subsistemas.\n\nO guia técnico foi preparado com a arquitetura, formulação matemática, interfaces ROS 2, etapas de implementação, testes e critérios de validação.\n\n## Decisões fundamentais\n\nTrês ajustes são especialmente importantes:\n\n1. **Não otimizar diretamente \\(x,y,z,\\text{yaw},\\text{pitch},\\text{roll}\\) pelo CBBA.** O CBBA deve atribuir tarefas como observar uma ROI, acompanhar um veículo terrestre ou cobrir determinado setor. O NMPC transforma a tarefa atribuída em trajetória e atitude executáveis.\n2. **Não transformar segurança em objetivo ponderado.** Separação, geofence, reserva energética, limites de voo e prevenção de colisões devem ser restrições rígidas e verificadas também por um supervisor independente.\n3. **Não começar pela versão assíncrona completa.** Primeiro deve ser implementado um CBBA síncrono determinístico, seguido de replanejamento parcial e, somente então, comunicação assíncrona. O CBBA clássico usa construção gulosa de bundles e consenso distribuído, com garantias dependentes da estrutura da função de pontuação. [koasas.kaist.ac](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)\n\n## Sequência recomendada\n\nA implementação deve avançar nestas fases:\n\n1. Congelar requisitos quantitativos e critérios de aceitação.\n2. Criar ambiente Ubuntu 24.04 reproduzível sobre o host Arch Linux; ROS 2 Jazzy considera Ubuntu 24.04 amd64 plataforma Tier 1. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)\n3. Definir mensagens, frames, timestamps, namespaces e QoS.\n4. Construir a simulação determinística no Drake.\n5. Implementar o avaliador analítico de FoV.\n6. Gerar tarefas discretas de percepção e viewpoints candidatos.\n7. Implementar e testar o S-CBBA sem ROS 2.\n8. Transportar o consenso pelo ROS 2 e testar rede degradada.\n9. Implementar o NMPC local inicialmente com modelo cinemático simplificado.\n10. Integrar CBBA e NMPC através de um contrato de tarefa estável.\n11. Adicionar gerenciamento de drones ativos e reservas.\n12. Incorporar filtro de segurança e fallback.\n13. Implementar replanejamento parcial e tratamento de falhas.\n14. Evoluir para A-CBBA somente após validação da versão síncrona.\n15. Executar campanhas Monte Carlo, testes de escalabilidade e validação cruzada do FoV.\n\n## Stack recomendado\n\n- **ROS 2 Jazzy** em Ubuntu 24.04 containerizado.\n- **Drake compilado a partir do código-fonte**, com solvers proprietários explicitamente desabilitados.\n- **Ipopt via Drake** como implementação inicial de referência do NMPC.\n- **acados/HPIPM** como evolução caso o tempo de solução do protótipo não atenda ao deadline.\n- **Open3D ou Embree** para oclusão por ray casting, se o teste analítico de frustum for insuficiente; Open3D usa licença MIT e Embree está disponível sob Apache-2.0. [people.csail.mit](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)\n- **OR-Tools**, opcionalmente, para benchmarks centralizados, geração de tarefas ou validação combinatória offline; a biblioteca é implementada em C++ e usa Apache-2.0. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\nOs componentes ROS 2 de um mesmo drone devem, inicialmente, ser compostos no mesmo processo para reduzir serialização. ROS 2 permite comunicação intraprocesso sem cópias em configurações compatíveis, e seus executores e callback groups permitem separar recepção de mensagens, consenso e resolução do NMPC. [drake.mit](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\nO ponto de partida recomendado é, portanto, um **MVP com dois robôs terrestres, três drones, FoV analítico, tarefas estáticas, CBBA síncrono, NMPC cinemático e rede ideal**. Falhas, perda de pacotes, oclusão detalhada, ativação dinâmica e CBBA assíncrono devem entrar incrementalmente, cada um acompanhado de testes de regressão e critérios mensuráveis.\n```\n\n## Resposta\n\n``` markdown\nA arquitetura escolhida é tecnicamente adequada, desde que cada técnica seja aplicada ao nível correto do problema. **CBBA deve alocar tarefas discretas de percepção entre drones; NMPC deve otimizar a trajetória, posição e atitude contínuas de cada drone; ROS 2 deve transportar estado, lances, planos e diagnósticos; Drake deve manter o modelo físico, geométrico e temporal de referência.** O CBBA original combina construção gulosa de bundles e consenso distribuído para produzir atribuições sem conflito; suas garantias dependem, entre outras hipóteses, de uma função de pontuação com ganhos marginais decrescentes (DMG).[^1][^2][^3]\n\nHá três correções essenciais ao plano inicial:\n\n1. **Não colocar diretamente `x, y, z, yaw, pitch, roll` dentro do CBBA.** Esses valores são variáveis contínuas do NMPC. O CBBA deve escolher tarefas como “observar ROI 17 a partir do setor nordeste”, “manter cobertura do robô terrestre 2” ou “assumir redundância da área crítica 4”.\n2. **Não representar ativação/desativação como uma variável contínua instantânea.** Usar estados operacionais (`RESERVE`, `ACTIVATING`, `ACTIVE`, `RETURNING`, `FAILED`), custos de ativação, tempo mínimo ligado/desligado e histerese. O número de drones ativos emerge da atribuição de tarefas, sob supervisão de um gerenciador de frota.\n3. **Não tratar segurança como mais um objetivo ponderado.** Separação entre veículos, geofence, limites dinâmicos, reserva de bateria e estados inválidos devem ser restrições rígidas ou protegidas por um filtro de segurança. Trabalhos de NMPC descentralizado para múltiplos MAVs tratam colisão mediante predição de vizinhos, restrições de distância e incerteza; abordagens recentes também integram CBF/ECBF ao NMPC.[^4][^5][^6]\n\nPara a versão alfa, recomenda-se começar com **CBBA síncrono e determinístico + NMPC local simplificado + FoV geométrico analítico**, evoluindo somente depois para CBBA assíncrono/CBBA-PR, oclusão por ray casting e um solver de NMPC especializado. Essa sequência reduz simultaneamente risco algorítmico, custo computacional e dificuldade de depuração.\n\n## Arquitetura funcional\n\n### Decomposição em camadas\n\n''' text\n                   +----------------------------------+\n                   | Ground mission / V2X information |\n                   +----------------+-----------------+\n                                    |\n                                    v\n+------------------+       +----------------------+       +------------------+\n| World model      | ----> | Task / viewpoint     | ----> | Local CBBA agent |\n| targets, map,    |       | generation           |       | one per drone    |\n| uncertainty      |       +----------------------+       +--------+---------+\n+--------+---------+                                                |\n         |                                                          v\n         |                                                assigned task/path\n         |                                                          |\n         v                                                          v\n+------------------+       neighbor trajectories          +------------------+\n| FoV / visibility | <----------------------------------- | Local NMPC       |\n| oracle           |                                      | one per drone    |\n+--------+---------+                                      +--------+---------+\n         |                                                          |\n         | coverage quality                                         v\n         |                                                 nominal command\n         |                                                          |\n         v                                                          v\n+------------------+                                      +------------------+\n| Metrics and      |                                      | Safety filter /  |\n| experiment log   |                                      | supervisor       |\n+------------------+                                      +--------+---------+\n                                                                  |\n                                                                  v\n                                                        Drake plant / drone\n'''\n\nO Drake deve conter uma única fonte de verdade para poses, velocidades, geometrias, colisões e tempo de simulação. `SceneGraph` é o nexo geométrico do `Diagram` e fornece o `QueryObject` utilizado pelas consultas geométricas; o framework também oferece eventos de publicação, atualização discreta e atualização irrestrita. Dado um `Context`, os cálculos de um `System` devem ser determinísticos e repetíveis, característica importante para testes e regressões.[^7][^8][^9][^10]\n\n### Limite entre blocos e nós\n\nO requisito “cada bloco é um nó ROS 2” deve ser interpretado como **cada subsistema funcional implantável é um nó ou componente**, não cada soma, custo, transformação ou restrição matemática. ROS 2 permite definir nós separadamente e compô-los no mesmo processo, inclusive com transporte intraprocesso sem cópia em pipelines compatíveis.[^11]\n\nUma divisão adequada é:\n\n| Componente | Instâncias | Responsabilidade |\n|---|---:|---|\n| `atas_drake_sim` | 1 | Mundo, dinâmica, geometrias, relógio e estados verdadeiros |\n| `atas_world_model` | 1 ou distribuída | Fusão do estado dos robôs, mapa e incertezas |\n| `atas_task_generator` | 1 lógico | Criar tarefas/ROIs/viewpoints e expiração |\n| `atas_fov_evaluator` | 1 compartilhada ou 1 por drone | FoV, LoS, oclusão e qualidade esperada |\n| `atas_cbba_agent` | 1 por drone | Bundle, lances, consenso e caminho discreto |\n| `atas_nmpc_controller` | 1 por drone | Otimização contínua em horizonte móvel |\n| `atas_safety_filter` | 1 por drone | Limites, separação, geofence e fallback |\n| `atas_fleet_manager` | 1 lógico replicável | Estados ativo/reserva, energia e falhas |\n| `atas_metrics` | 1 | KPIs, eventos, logs e relatório de execução |\n\nNos experimentos locais, componentes do mesmo drone podem residir em um container ROS 2, reduzindo serialização e cópias. Os executores ROS 2 usam threads para invocar callbacks; grupos mutuamente exclusivos ou reentrantes controlam quais callbacks podem executar em paralelo. O solver de NMPC deve ficar em grupo mutuamente exclusivo próprio, enquanto recepção de telemetria e lances pode usar grupos separados.[^12]\n\n## Formulação do problema\n\n### Estados e variáveis\n\nPara cada drone `i`, usar inicialmente um modelo cinemático de aceleração limitada:\n\n\\[\n\\mathbf{x}_i = [x_i,y_i,z_i,v_{x,i},v_{y,i},v_{z,i},\\psi_i,\\theta_i,\\phi_i]^T\n\\]\n\n\\[\n\\mathbf{u}_i = [a_{x,i},a_{y,i},a_{z,i},\\dot{\\psi}_i,\\dot{\\theta}_i,\\dot{\\phi}_i]^T.\n\\]\n\nNa primeira versão, é preferível usar `position + velocity + yaw + câmera/gimbal` e não comandar livremente pitch e roll do corpo. Em um multirrotor real, pitch e roll participam da geração de aceleração e não são graus de liberdade independentes de posicionamento. Caso o sensor tenha gimbal, separar `X_WB` (corpo) e `X_BC` (câmera); caso seja fixo, o NMPC deve respeitar a dinâmica que acopla atitude e translação.\n\n### Elementos de cobertura\n\nDiscretizar a região operacional em elementos `r`:\n\n- células do solo;\n- amostras nas superfícies dos dois robôs terrestres;\n- objetos ou pistas de interesse;\n- corredores de movimento previstos;\n- zonas críticas com pesos maiores.\n\nCada elemento recebe peso `w_r`, criticidade, prazo, classe, posição prevista e incerteza. Planejamento visual multi-UAV costuma avaliar visibilidade sobre amostras e combinar cobertura com distância/rota; oclusões precisam ser consideradas quando o ambiente é obstruído.[^13][^14]\n\n### Modelo de FoV\n\nPara um ponto mundial `p_W`, calcular:\n\n\\[\np_C = X_{CW}p_W = [x_C,y_C,z_C]^T.\n\\]\n\nO ponto satisfaz o frustum da câmera se:\n\n\\[\nz_{near} < z_C < z_{far},\\qquad\n|\\operatorname{atan2}(x_C,z_C)| \\leq \\alpha_h/2,\\qquad\n|\\operatorname{atan2}(y_C,z_C)| \\leq \\alpha_v/2.\n\\]\n\nOs parâmetros devem vir dos intrínsecos reais ou previstos do sensor. No Drake, `CameraConfig` aceita resolução e propriedades focais expressas por comprimentos focais ou ângulos de FoV. Na versão alfa, a visibilidade pode ter três níveis selecionáveis:[^15]\n\n1. `FRUSTUM_ONLY`: teste analítico rápido.\n2. `FRUSTUM_LOS`: frustum mais linha de visada contra geometria simplificada.\n3. `SEMANTIC_RENDER`: imagem de rótulos/depth para validação de oclusão; o `RgbdSensor` do Drake produz imagens RGB, depth e label a partir do `SceneGraph`.[^16]\n\nPara ray casting estritamente open source, Open3D possui `RaycastingScene` sob licença MIT, e Embree fornece kernels de ray tracing sob Apache-2.0. O backend deve ser intercambiável por interface, para que o CBBA e o NMPC não dependam do método de visibilidade.[^17][^18][^19]\n\n### Qualidade perceptiva\n\nDefinir qualidade individual limitada a `[0,1]`:\n\n\\[\nq_{ir} = v_{ir}\\,q_d(d_{ir})\\,q_a(\\gamma_{ir})\\,q_{res}(\\rho_{ir})\\,q_{occ}(o_{ir})\\,q_{comm}(l_i),\n\\]\n\nonde `v` indica pertença ao FoV, `d` é distância, `gamma` é incidência, `rho` é densidade projetada/pixels por metro, `o` é oclusão e `l` representa qualidade ou latência de comunicação. Esses fatores não devem ser apresentados como “probabilidade de detecção calibrada” enquanto não forem ajustados contra um detector real.\n\nPara fusão de observações aproximadamente independentes:\n\n\\[\nP_r = 1-\\prod_{i\\in A}(1-q_{ir}).\n\\]\n\nTambém registrar separadamente cobertura binária, cobertura ponderada, cobertura mínima, redundância e qualidade. Misturar tudo em um único KPI esconderia falhas importantes.\n\n### Objetivos globais\n\nA otimização do ATAS deve acompanhar um vetor de objetivos:\n\n\\[\n\\mathbf{J}=\\left[\n-J_{det},\n-J_{cov},\n-J_{min},\nJ_{energy},\nJ_{active},\nJ_{comm},\nJ_{motion},\nJ_{redundancy}\n\\right].\n\\]\n\n- `J_det`: detecção esperada ponderada nos robôs e ROIs.\n- `J_cov`: cobertura espaço-temporal ponderada.\n- `J_min`: pior cobertura entre regiões críticas.\n- `J_energy`: propulsão e deslocamento estimados.\n- `J_active`: custo por drone ativo.\n- `J_comm`: carga, latência prevista e perda de conectividade.\n- `J_motion`: esforço e variação de comando.\n- `J_redundancy`: excesso de sobreposição; redundância mínima requerida não é penalizada.\n\nEm execução online, CBBA e NMPC precisam de decisões únicas, portanto os objetivos devem ser normalizados e convertidos em utilidades escalares. A fronteira de Pareto deve ser estudada **offline** para selecionar pesos, limiares e políticas operacionais. `pymoo` disponibiliza NSGA-II/III e outros métodos multiobjetivo sob Apache-2.0, mas é Python; pode ser usado somente no laboratório de calibração sem entrar no caminho C++ de produção. `pagmo2` oferece NSGA-II em C++, mas usa licenças GPL/LGPL; continua open source, porém exige uma decisão explícita de compatibilidade e distribuição.[^20][^21][^22][^23]\n\n### Restrições rígidas\n\nO NMPC deve impor:\n\n- dinâmica discreta do drone;\n- limites de velocidade, aceleração, atitude e taxa angular;\n- altitude mínima e máxima;\n- geofence;\n- distância mínima a obstáculos;\n- separação entre drones ao longo do horizonte;\n- reserva energética para retorno;\n- limites de gimbal, quando aplicável;\n- visibilidade mínima apenas para tarefas críticas contratadas;\n- conectividade mínima ou disponibilidade de rota V2X, se necessária à missão.\n\nAs trajetórias previstas dos vizinhos devem ser transmitidas, carimbadas no tempo e infladas com margem que cresce com idade, atraso e incerteza. NMPC descentralizado robusto para MAVs já foi formulado incorporando incerteza de estado e atraso de comunicação na distância aceitável.[^4]\n\n## CBBA aplicado ao ATAS\n\n### Definição das tarefas\n\nCBBA resolve atribuição discreta. Para o ATAS, uma tarefa deve representar um contrato perceptivo executável:\n\n''' text\nTask\n  id\n  roi_id / ground_robot_id\n  type: TRACK | COVER_CELL | MULTIVIEW | RELAY | RESERVE\n  candidate_viewpoint or admissible_view_region\n  earliest_start, deadline, duration, expiry\n  priority and criticality\n  min_quality\n  required_capabilities\n  min_agents, max_agents\n  predecessor_ids\n  version\n'''\n\nTarefas cooperativas com `min_agents > 1` devem inicialmente ser decompostas em “slots” complementares, por exemplo `roi42/north_view` e `roi42/south_view`. Literatura de CBBA dinâmico também emprega divisão de tarefas cooperativas em subtarefas atribuíveis individualmente. O gerador deve evitar produzir milhares de tarefas quase idênticas: use clustering espacial, horizonte curto e somente os pontos cegos ou regiões relevantes ao movimento previsto dos robôs terrestres.[^24]\n\n### Dados de cada agente\n\nCada drone mantém:\n\n- `bundle b_i`: ordem em que tarefas foram ganhas;\n- `path p_i`: ordem planejada de execução;\n- `y_i[j]`: maior lance conhecido para tarefa `j`;\n- `z_i[j]`: vencedor conhecido;\n- `s_i[k]`: timestamp/contador da informação recebida do agente `k`;\n- versões de tarefas e epoch de consenso;\n- capacidade, energia e estado operacional.\n\n### Função de lance\n\nO lance deve ser o ganho marginal de inserir a tarefa `j` na melhor posição do caminho atual:\n\n\\[\nb_{ij}=\\max_n\\left(S_i(p_i\\oplus_n j)-S_i(p_i)\\right).\n\\]\n\nUma utilidade inicial adequada é:\n\n\\[\nS_i(p)=\\sum_{j\\in p}\n\\lambda_q\\hat Q_{ij}\n+\\lambda_c\\hat C_{ij}\n+\\lambda_t\\hat T_{ij}\n-\\lambda_d\\hat D_{ij}\n-\\lambda_e\\hat E_{ij}\n-\\lambda_r\\hat R_{ij}\n-\\lambda_a A_{ij}.\n\\]\n\nTodos os termos devem ser normalizados em intervalos documentados. `A_ij` é custo de despertar/ativar um drone em reserva. A função precisa preservar ganhos marginais decrescentes para manter a garantia clássica de convergência; o CBBA exige que o valor de uma tarefa não aumente quando outras tarefas são acrescentadas antes dela.[^25][^1]\n\nNão incorporar dentro do lance o resultado completo de dezenas de resoluções NMPC. Na alfa, usar uma estimativa barata de viagem e viabilidade, seguida por validação NMPC da atribuição vencedora. Caso a validação falhe, publicar `TASK_REJECTED_INFEASIBLE`, aumentar a penalidade local e reabrir a tarefa.\n\n### Algoritmo incremental\n\n1. Receber catálogo de tarefas e remover versões expiradas.\n2. Atualizar custos locais de viagem, visibilidade, energia e comunicação.\n3. Construir bundle escolhendo repetidamente o maior lance marginal que supera o lance vencedor conhecido.\n4. Inserir a tarefa na melhor posição de `path`.\n5. Publicar winners, bids, epoch e timestamps.\n6. Receber estados de consenso dos vizinhos.\n7. Resolver conflitos por maior lance; usar `agent_id` como desempate determinístico.\n8. Quando perder uma tarefa, remover essa tarefa e todas as posteriores no bundle.\n9. Repetir até não haver alterações durante uma janela ligada ao diâmetro da rede.\n10. Emitir caminho atribuído e estado de convergência.\n\nO CBBA original alterna construção gulosa e consenso para resolver reivindicações conflitantes. Sob pontuação DMG e rede estática síncrona de diâmetro `D`, existe um limite de convergência relacionado ao número de tarefas e ao diâmetro; isso deve ser testado, não presumido, na rede ROS 2.[^3][^26][^1]\n\n### Evolução dinâmica\n\nImplementar em três estágios:\n\n- **S-CBBA:** relógio discreto comum, topologia fixa e tarefas estáticas. Serve como oráculo de regressão.\n- **CBBA-PR:** tarefas novas, falhas e replanejamento parcial. Liberar somente a cauda de menor valor do bundle preserva a estrutura necessária à convergência e oferece compromisso entre tempo e qualidade.[^27][^25]\n- **A-CBBA:** mensagens assíncronas, timestamps, descarte de informação velha e convergência local/global. Extensões assíncronas foram criadas para canais e ambientes dinâmicos e validadas em implementações distribuídas.[^28]\n\nNão iniciar pela variante assíncrona. Sem um S-CBBA de referência, torna-se difícil distinguir erro algorítmico de reordenação, perda de pacote ou relógio.\n\n## NMPC local\n\n### Modelo por estágios\n\n1. **Alfa:** point-mass 3D com aceleração e yaw; horizonte curto.\n2. **Beta:** jerk limitado e gimbal.\n3. **SIL avançado:** dinâmica de quadrotor com atitude, thrust e taxas.\n4. **HIL:** autopiloto real ou modelo compatível, com NMPC produzindo setpoints, não comandos de motor.\n\nO NMPC recebe estado atual, tarefa do CBBA, previsão dos robôs terrestres, trajetórias vizinhas, mapa e métricas de FoV. Produz sequência de estados/controles, publica a trajetória inteira aos vizinhos e aplica apenas o primeiro comando.\n\n### Custo local\n\n\\[\nJ_i=\\sum_{k=0}^{N-1}\n\\left(\n\\|p_{i,k}-p^{ref}_{i,k}\\|_{Q_p}^2+\n\\|u_{i,k}\\|_{R}^2+\n\\|u_{i,k}-u_{i,k-1}\\|_{R_\\Delta}^2+\n\\lambda_v\\ell_{view}+\n\\lambda_c\\ell_{comm}+\n\\lambda_s\\xi_k^2\n\\right)+\\ell_f.\n\\]\n\n`ell_view` deve ser suave. Não colocar diretamente um indicador binário “dentro/fora do FoV” no NLP. Usar distância suave às bordas do frustum, erro de apontamento, distância desejada e qualidade diferenciável aproximada. A oclusão exata por mesh não é diferenciável; avaliar oclusão fora do solver e fornecer regiões/corredores ou custos locais aproximados.\n\n### Solver\n\nPara a primeira implementação, usar `drake::solvers::MathematicalProgram` com Ipopt e derivadas por `AutoDiff`. Drake usa `MathematicalProgram` para variáveis, custos e restrições e pode chamar Ipopt para programas não lineares. Construções do Drake a partir do fonte habilitam bibliotecas open source e desabilitam proprietárias por padrão; ainda assim, verificar `SolverInterface::available()` e bloquear explicitamente SNOPT, Gurobi e Mosek no CI.[^29][^30][^31]\n\nSe o deadline não for satisfeito, migrar **somente o núcleo NMPC** para acados/HPIPM. O acados oferece solvers de controle ótimo/NMPC em C, e a distribuição identificada é BSD-2-Clause; HPIPM também usa BSD-2-Clause. Manter uma interface:[^32][^33]\n\n''' cpp\nclass NmpcBackend {\n public:\n  virtual SolveResult Solve(const NmpcProblemData&) = 0;\n  virtual void WarmStart(const PredictedTrajectory&) = 0;\n};\n'''\n\nAssim, `DrakeIpoptBackend` permanece como referência de correção e `AcadosBackend` pode ser otimizado para tempo real.\n\n### Política de execução\n\n- deslocar a solução anterior um passo para warm start;\n- estabelecer orçamento de tempo por solve;\n- aceitar apenas soluções com status e violações dentro de tolerâncias;\n- se atingir timeout com solução utilizável, aplicar comando validado;\n- se falhar, manter último plano seguro por janela curta;\n- depois, acionar hover/loiter ou retorno seguro;\n- publicar iterações, tempo, custo, violação máxima e razão do fallback.\n\n## Ativação de drones\n\n### Máquina de estados\n\n''' text\nOFF/UNAVAILABLE -> RESERVE -> ACTIVATING -> ACTIVE\nACTIVE -> RETURNING -> RESERVE\nqualquer estado -> FAILED\n'''\n\nOs nós críticos devem ser `LifecycleNode`s. ROS 2 define estados gerenciados como `unconfigured`, `inactive`, `active` e `shutdown`, com transições de configuração, ativação, desativação e limpeza. Isso permite iniciar o sistema somente quando mapa, tarefas, solver e simulação estiverem prontos, além de reiniciar componentes online.[^34][^35]\n\n### Política\n\n- Drones `ACTIVE` participam normalmente do CBBA.\n- Drones `RESERVE` podem calcular lances com custo de ativação e atraso de disponibilidade.\n- Ativar somente se o ganho esperado superar limiar por várias épocas.\n- Desativar somente se a cobertura permanecer acima do requisito sem o drone e após tempo mínimo ativo.\n- Nunca desligar em voo; transitar para retorno/pouso.\n- Manter reserva suficiente para cobrir falha de um agente em cenários críticos.\n\nEssa política resolve a “otimização do número de drones” sem introduzir variáveis binárias dentro de cada NMPC local.\n\n## Interfaces ROS 2\n\n### Pacotes\n\n''' text\natas_ws/src/\n  atas_interfaces/\n  atas_common/\n  atas_models/\n  atas_drake_sim/\n  atas_world_model/\n  atas_visibility/\n  atas_tasking/\n  atas_cbba/\n  atas_nmpc/\n  atas_safety/\n  atas_fleet_manager/\n  atas_metrics/\n  atas_bringup/\n  atas_tests/\n'''\n\nROS 2 recomenda criar pacotes novos com licença Apache-2.0 e registrar a licença SPDX no `package.xml`.[^36][^37]\n\n### Namespaces\n\n''' text\n/atas/world/...\n/atas/tasks/...\n/atas/ground_1/...\n/atas/ground_2/...\n/atas/drone_01/state\n/atas/drone_01/cbba/consensus\n/atas/drone_01/cbba/assignment\n/atas/drone_01/nmpc/prediction\n/atas/drone_01/safety/status\n'''\n\nNamespaces separam tópicos de robôs no mesmo domínio DDS; diferentes `ROS_DOMAIN_ID` isolam completamente processos e, portanto, não devem ser usados para agentes que precisam negociar entre si.[^38]\n\n### Mensagens mínimas\n\n- `Task.msg`: ID, versão, ROI, tipo, janela temporal, prioridade, capacidades, parâmetros do viewpoint.\n- `BidVector.msg`: agent, epoch, sequência, arrays de task IDs, winners, bids e timestamps.\n- `BundleState.msg`: bundle, path, utilidade e estado de convergência.\n- `Assignment.msg`: tarefas contratadas, validade e fallback.\n- `PredictedTrajectory.msg`: `Header`, frame, `dt`, poses, twists, covariâncias e validade.\n- `VisibilityReport.msg`: cobertura por ROI, qualidade, oclusão e idade.\n- `SolverStatus.msg`: backend, status, duração, iterações, custo e violação.\n- `FleetState.msg`: modo operacional, energia, disponibilidade e health.\n\nMensagens CBBA devem transportar inteiros/IDs e vetores compactos, não nuvens de pontos ou imagens. Cada mensagem precisa de `stamp`, `frame_id`, `sequence`, `epoch`, `schema_version` e `valid_until`.\n\n### QoS\n\n| Fluxo | QoS inicial |\n|---|---|\n| Estado e trajetória frequentes | `BEST_EFFORT`, `KEEP_LAST(1-5)`, lifespan curto |\n| Catálogo de tarefas | `RELIABLE`, durabilidade adequada, histórico limitado |\n| Lances/consenso CBBA | `RELIABLE`, `KEEP_LAST`, deadline e liveliness |\n| Comandos e eventos críticos | `RELIABLE`, lifespan curto, deadline |\n| Diagnóstico | `RELIABLE`, frequência baixa |\n\nROS 2 oferece políticas de reliability, deadline, lifespan e liveliness; o perfil de sensor usa best effort porque atualidade costuma valer mais que retransmissão. Testar QoS na rede degradada: `RELIABLE` pode elevar latência por retransmissões.[^39][^40]\n\n### Tempo\n\n`atas_drake_sim` deve publicar `/clock`; todos os nós de simulação usam `use_sim_time=true`. `rosbag2` também entende simulação como tempo publicado em `/clock` e alerta que mensagens antes do primeiro clock recebem tempo zero. Usar tempo ROS para timestamps da missão e `steady_clock` apenas para medir duração computacional/timeout.[^41]\n\n## Roteiro passo a passo\n\n### Etapa 0 — Congelar requisitos\n\nProduzir `requirements.md`, ADRs e matriz requisito-teste. Fixar:\n\n- número máximo inicial de drones;\n- sensor e extrínsecos;\n- volume operacional;\n- tipos de obstáculos;\n- dinâmica dos robôs terrestres;\n- definição quantitativa de “ponto cego” e “detecção correta”;\n- tempos máximos de consenso, NMPC e reação à falha;\n- política de energia e retorno;\n- modelo de comunicação.\n\n**Saída:** requisitos identificados (`REQ-COV-*`, `REQ-SAFE-*`, `REQ-CBBA-*`) e critérios verificáveis.\n\n### Etapa 1 — Ambiente reproduzível\n\nUsar Ubuntu 24.04 em container ou VM sobre Arch Linux, porque ROS 2 Jazzy tem Ubuntu Noble 24.04 amd64 como Tier 1 até maio de 2029. Drake pretende suportar as duas versões LTS recentes do Ubuntu.[^42][^43]\n\n1. Criar Containerfile versionado.\n2. Fixar imagem por digest.\n3. Fixar commits/releases de ROS 2, Drake e dependências.\n4. Compilar Drake sem backends proprietários.\n5. Gerar SBOM e relatório de licenças.\n6. Compilar com `-Wall -Wextra -Wpedantic`, sanitizers no perfil de teste.\n7. Configurar `colcon test` e CI.\n\n`drake-ros` pode fornecer referências, mas o repositório se descreve como prototipagem experimental; não deve ser uma dependência arquitetural sem revisão.[^44]\n\n**Gate:** build limpo em máquina nova e lista de licenças aprovada.\n\n### Etapa 2 — Contratos e modelos\n\n1. Criar `atas_interfaces`.\n2. Definir convenções ENU, frames `world`, `base_link`, `camera_link`.\n3. Definir IDs imutáveis\n\n---\n\n## References\n\n1. [[PDF] Consensus-Based Auction Approaches for Decentralized Task ...](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)\n\n2. [Decentralized Task Allocation Using Local Information Consistency Assumptions](https://arc.aiaa.org/doi/pdf/10.2514/1.I010461)\n\n3. [[PDF] Consensus-Based Decentralized Auctions for Robust Task Allocation | Semantic Scholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9) - This paper addresses task allocation to coordinate a fleet of autonomous vehicles by presenting two ...\n\n4. [Robust Collision Avoidance for Multiple Micro Aerial ...](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)\n\n5. [Decentralized Nonlinear Model Predictive Control for Safe ...](https://arxiv.org/html/2409.17379v1)\n\n6. [A Comparative Study of NMPC Strategies for Prioritized ...](https://hal.science/hal-04784633v1/document)\n\n7. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\n8. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\n9. [Modeling Dynamical Systems - Drake](https://drake.mit.edu/tutorials/dynamical_systems.html)\n\n10. [Event< T > Class Template Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1_event.html)\n\n11. [Setting up efficient intra-process communication](https://docs.ros.org/en/jazzy/Tutorials/Demos/Intra-Process-Communication.html) - Table of Contents: Background, Installing the demos, Running and understanding the demos- The two no...\n\n12. [Executors — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...\n\n13. [Multi-Drone View Planning for Collaborative Coverage in Cluttered ...](https://arxiv.org/html/2310.10863v1)\n\n14. [Multi-UAV Coverage Path Planning for the Inspection of ...](https://arxiv.org/html/2007.13065v1)\n\n15. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)\n\n16. [Sensors](https://drake.mit.edu/doxygen_cxx/group__sensor__systems.html) - Drake provides a variety of capabilities for sensor modeling. Some sensors are offered as Systems in...\n\n17. [Open3D/examples/python/geometry/ray_casting_to_image.py at ...](https://github.com/isl-org/Open3D/blob/main/examples/python/geometry/ray_casting_to_image.py) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n18. [Intel® Rendering Toolkit Libraries Open to the Broader ...](https://www.intel.com/content/www/us/en/developer/articles/technical/open-development-of-render-kit-libraries.html) - These libraries are now open to community contributions, bringing community-funded features, functio...\n\n19. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n20. [esa/pagmo2: A C++ platform to perform parallel ...](https://github.com/esa/pagmo2) - A C++ platform to perform parallel computations of optimisation tasks (global and local) via the asy...\n\n21. [Non dominated sorting genetic algorithm (NSGA-II)](https://esa.github.io/pagmo2/docs/cpp/algorithms/nsga2.html)\n\n22. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...\n\n23. [pymoo.org › licenseLicense — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/license.html)\n\n24. [UAV Swarm Mission Planning in Dynamic Environment Using Consensus-Based Bundle Algorithm](https://www.mdpi.com/1424-8220/20/8/2307) - To solve the real-time complex mission-planning problem for Multiple heterogeneous Unmanned Aerial V...\n\n25. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)\n\n26. [untitled](https://pdfs.semanticscholar.org/b5ba/62e298fb4ca5a321ddcf3029036ce8a6e091.pdf)\n\n27. [Decentralized task allocation for dynamic, time-sensitive tasks](https://dspace.mit.edu/entities/publication/03841de1-7a48-4d21-a8b7-1450fcbb43f6) - In time-sensitive and dynamic missions, autonomous vehicles must respond quickly to new information ...\n\n28. [Asynchronous Decentralized Task Allocation for Dynamic ...](https://dspace.mit.edu/entities/publication/8027006a-fddf-44a7-b5b9-3475099d7e6c) - This work builds on a decentralized task allocation algorithm for networked agents communicating thr...\n\n29. [Formulating and Solving Optimization Problems - Drake](https://drake.mit.edu/doxygen_cxx/group__solvers.html)\n\n30. [drake/tools/flags/BUILD.bazel at master](https://github.com/RobotLocomotion/drake/blob/master/tools/flags/BUILD.bazel) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n31. [MathematicalProgram Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1solvers_1_1_mathematical_program.html)\n\n32. [hpipm/include/hpipm_d_ocp_qp.h at master](https://github.com/giaf/hpipm/blob/master/include/hpipm_d_ocp_qp.h) - High-performance interior-point-method QP and QCQP solvers - giaf/hpipm\n\n33. [FreshPorts -- science/acados: Fast and embedded solvers for ...](https://www.freshports.org/science/acados/) - acados provides fast and embedded solvers for nonlinear optimal control. It is written in C and offe...\n\n34. [lifecycle: Jazzy 0.33.7 documentation](https://docs.ros.org/en/jazzy/p/lifecycle/)\n\n35. [nav2_lifecycle_manager](https://docs.ros.org/en/jazzy/p/nav2_lifecycle_manager/)\n\n36. [Developing a ROS 2 package — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/How-To-Guides/Developing-a-ROS-2-Package.html)\n\n37. [Index Your Packages](https://docs.ros.org/en/jazzy/How-To-Guides/Releasing/Index-Your-Packages.html) - Are you releasing a new ROS package into a ROS distribution? Make the process faster by indexing you...\n\n38. [Using multiple Create® 3 robots](https://ros.ncnynl.com/en/create3/setup/multi-robot/) - Documentation for the iRobot® Create® 3 robot\n\n39. [Quality of Service settings](https://docs.ros.org/en/lyrical/Concepts/Intermediate/About-Quality-of-Service-Settings.html)\n\n40. [topic_monitor](https://docs.ros.org/en/jazzy/p/topic_monitor/)\n\n41. [ros2/rosbag2 - GitHub](https://github.com/ros2/rosbag2) - Contribute to ros2/rosbag2 development by creating an account on GitHub.\n\n42. [REP 2000 -- ROS 2 Releases and Target Platforms (ROS.org)](https://www.ros.org/reps/rep-2000.html)\n\n43. [Drake Stability Guidelines](https://drake.mit.edu/stable.html) - Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...\n\n44. [RobotLocomotion - GitHub](https://github.com/robotlocomotion) - RobotLocomotion has 58 repositories available. Follow their code on GitHub.\n\n\n```\n\n---",
        "clean": "## Resumo\nA estratégia **CBBA + NMPC local + ROS 2 + Drake + C++** é adequada para o ATAS, desde que exista uma separação explícita entre:\n\n- **CBBA:** alocação discreta e distribuída das tarefas de percepção.\n- **NMPC:** otimização contínua da trajetória, posição e orientação de cada drone.\n- **Drake:** dinâmica, geometria, FoV, tempo e simulação.\n- **ROS 2:** comunicação, composição e implantação dos subsistemas.\n\nO guia técnico foi preparado com a arquitetura, formulação matemática, interfaces ROS 2, etapas de implementação, testes e critérios de validação.\n\n## Decisões fundamentais\n\nTrês ajustes são especialmente importantes:\n\n1. **Não otimizar diretamente \\(x,y,z,\\text{yaw},\\text{pitch},\\text{roll}\\) pelo CBBA.** O CBBA deve atribuir tarefas como observar uma ROI, acompanhar um veículo terrestre ou cobrir determinado setor. O NMPC transforma a tarefa atribuída em trajetória e atitude executáveis.\n2. **Não transformar segurança em objetivo ponderado.** Separação, geofence, reserva energética, limites de voo e prevenção de colisões devem ser restrições rígidas e verificadas também por um supervisor independente.\n3. **Não começar pela versão assíncrona completa.** Primeiro deve ser implementado um CBBA síncrono determinístico, seguido de replanejamento parcial e, somente então, comunicação assíncrona. O CBBA clássico usa construção gulosa de bundles e consenso distribuído, com garantias dependentes da estrutura da função de pontuação. [koasas.kaist.ac](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)\n\n## Sequência recomendada\n\nA implementação deve avançar nestas fases:\n\n1. Congelar requisitos quantitativos e critérios de aceitação.\n2. Criar ambiente Ubuntu 24.04 reproduzível sobre o host Arch Linux; ROS 2 Jazzy considera Ubuntu 24.04 amd64 plataforma Tier 1. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)\n3. Definir mensagens, frames, timestamps, namespaces e QoS.\n4. Construir a simulação determinística no Drake.\n5. Implementar o avaliador analítico de FoV.\n6. Gerar tarefas discretas de percepção e viewpoints candidatos.\n7. Implementar e testar o S-CBBA sem ROS 2.\n8. Transportar o consenso pelo ROS 2 e testar rede degradada.\n9. Implementar o NMPC local inicialmente com modelo cinemático simplificado.\n10. Integrar CBBA e NMPC através de um contrato de tarefa estável.\n11. Adicionar gerenciamento de drones ativos e reservas.\n12. Incorporar filtro de segurança e fallback.\n13. Implementar replanejamento parcial e tratamento de falhas.\n14. Evoluir para A-CBBA somente após validação da versão síncrona.\n15. Executar campanhas Monte Carlo, testes de escalabilidade e validação cruzada do FoV.\n\n## Stack recomendado\n\n- **ROS 2 Jazzy** em Ubuntu 24.04 containerizado.\n- **Drake compilado a partir do código-fonte**, com solvers proprietários explicitamente desabilitados.\n- **Ipopt via Drake** como implementação inicial de referência do NMPC.\n- **acados/HPIPM** como evolução caso o tempo de solução do protótipo não atenda ao deadline.\n- **Open3D ou Embree** para oclusão por ray casting, se o teste analítico de frustum for insuficiente; Open3D usa licença MIT e Embree está disponível sob Apache-2.0. [people.csail.mit](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)\n- **OR-Tools**, opcionalmente, para benchmarks centralizados, geração de tarefas ou validação combinatória offline; a biblioteca é implementada em C++ e usa Apache-2.0. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\nOs componentes ROS 2 de um mesmo drone devem, inicialmente, ser compostos no mesmo processo para reduzir serialização. ROS 2 permite comunicação intraprocesso sem cópias em configurações compatíveis, e seus executores e callback groups permitem separar recepção de mensagens, consenso e resolução do NMPC. [drake.mit](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\nO ponto de partida recomendado é, portanto, um **MVP com dois robôs terrestres, três drones, FoV analítico, tarefas estáticas, CBBA síncrono, NMPC cinemático e rede ideal**. Falhas, perda de pacotes, oclusão detalhada, ativação dinâmica e CBBA assíncrono devem entrar incrementalmente, cada um acompanhado de testes de regressão e critérios mensuráveis.\n\n## Resposta\n\nA arquitetura escolhida é tecnicamente adequada, desde que cada técnica seja aplicada ao nível correto do problema. **CBBA deve alocar tarefas discretas de percepção entre drones; NMPC deve otimizar a trajetória, posição e atitude contínuas de cada drone; ROS 2 deve transportar estado, lances, planos e diagnósticos; Drake deve manter o modelo físico, geométrico e temporal de referência.** O CBBA original combina construção gulosa de bundles e consenso distribuído para produzir atribuições sem conflito; suas garantias dependem, entre outras hipóteses, de uma função de pontuação com ganhos marginais decrescentes (DMG).[^1][^2][^3]\n\nHá três correções essenciais ao plano inicial:\n\n1. **Não colocar diretamente `x, y, z, yaw, pitch, roll` dentro do CBBA.** Esses valores são variáveis contínuas do NMPC. O CBBA deve escolher tarefas como “observar ROI 17 a partir do setor nordeste”, “manter cobertura do robô terrestre 2” ou “assumir redundância da área crítica 4”.\n2. **Não representar ativação/desativação como uma variável contínua instantânea.** Usar estados operacionais (`RESERVE`, `ACTIVATING`, `ACTIVE`, `RETURNING`, `FAILED`), custos de ativação, tempo mínimo ligado/desligado e histerese. O número de drones ativos emerge da atribuição de tarefas, sob supervisão de um gerenciador de frota.\n3. **Não tratar segurança como mais um objetivo ponderado.** Separação entre veículos, geofence, limites dinâmicos, reserva de bateria e estados inválidos devem ser restrições rígidas ou protegidas por um filtro de segurança. Trabalhos de NMPC descentralizado para múltiplos MAVs tratam colisão mediante predição de vizinhos, restrições de distância e incerteza; abordagens recentes também integram CBF/ECBF ao NMPC.[^4][^5][^6]\n\nPara a versão alfa, recomenda-se começar com **CBBA síncrono e determinístico + NMPC local simplificado + FoV geométrico analítico**, evoluindo somente depois para CBBA assíncrono/CBBA-PR, oclusão por ray casting e um solver de NMPC especializado. Essa sequência reduz simultaneamente risco algorítmico, custo computacional e dificuldade de depuração.\n\n## Arquitetura funcional\n\n### Decomposição em camadas\n\n''' text\n                   +----------------------------------+\n                   | Ground mission / V2X information |\n                   +----------------+-----------------+\n                                    |\n                                    v\n+------------------+       +----------------------+       +------------------+\n| World model      | ----> | Task / viewpoint     | ----> | Local CBBA agent |\n| targets, map,    |       | generation           |       | one per drone    |\n| uncertainty      |       +----------------------+       +--------+---------+\n+--------+---------+                                                |\n         |                                                          v\n         |                                                assigned task/path\n         |                                                          |\n         v                                                          v\n+------------------+       neighbor trajectories          +------------------+\n| FoV / visibility | <----------------------------------- | Local NMPC       |\n| oracle           |                                      | one per drone    |\n+--------+---------+                                      +--------+---------+\n         |                                                          |\n         | coverage quality                                         v\n         |                                                 nominal command\n         |                                                          |\n         v                                                          v\n+------------------+                                      +------------------+\n| Metrics and      |                                      | Safety filter /  |\n| experiment log   |                                      | supervisor       |\n+------------------+                                      +--------+---------+\n                                                                  |\n                                                                  v\n                                                        Drake plant / drone\n'''\n\nO Drake deve conter uma única fonte de verdade para poses, velocidades, geometrias, colisões e tempo de simulação. `SceneGraph` é o nexo geométrico do `Diagram` e fornece o `QueryObject` utilizado pelas consultas geométricas; o framework também oferece eventos de publicação, atualização discreta e atualização irrestrita. Dado um `Context`, os cálculos de um `System` devem ser determinísticos e repetíveis, característica importante para testes e regressões.[^7][^8][^9][^10]\n\n### Limite entre blocos e nós\n\nO requisito “cada bloco é um nó ROS 2” deve ser interpretado como **cada subsistema funcional implantável é um nó ou componente**, não cada soma, custo, transformação ou restrição matemática. ROS 2 permite definir nós separadamente e compô-los no mesmo processo, inclusive com transporte intraprocesso sem cópia em pipelines compatíveis.[^11]\n\nUma divisão adequada é:\n\n| Componente | Instâncias | Responsabilidade |\n|---|---:|---|\n| `atas_drake_sim` | 1 | Mundo, dinâmica, geometrias, relógio e estados verdadeiros |\n| `atas_world_model` | 1 ou distribuída | Fusão do estado dos robôs, mapa e incertezas |\n| `atas_task_generator` | 1 lógico | Criar tarefas/ROIs/viewpoints e expiração |\n| `atas_fov_evaluator` | 1 compartilhada ou 1 por drone | FoV, LoS, oclusão e qualidade esperada |\n| `atas_cbba_agent` | 1 por drone | Bundle, lances, consenso e caminho discreto |\n| `atas_nmpc_controller` | 1 por drone | Otimização contínua em horizonte móvel |\n| `atas_safety_filter` | 1 por drone | Limites, separação, geofence e fallback |\n| `atas_fleet_manager` | 1 lógico replicável | Estados ativo/reserva, energia e falhas |\n| `atas_metrics` | 1 | KPIs, eventos, logs e relatório de execução |\n\nNos experimentos locais, componentes do mesmo drone podem residir em um container ROS 2, reduzindo serialização e cópias. Os executores ROS 2 usam threads para invocar callbacks; grupos mutuamente exclusivos ou reentrantes controlam quais callbacks podem executar em paralelo. O solver de NMPC deve ficar em grupo mutuamente exclusivo próprio, enquanto recepção de telemetria e lances pode usar grupos separados.[^12]\n\n## Formulação do problema\n\n### Estados e variáveis\n\nPara cada drone `i`, usar inicialmente um modelo cinemático de aceleração limitada:\n\n\\[\n\\mathbf{x}_i = [x_i,y_i,z_i,v_{x,i},v_{y,i},v_{z,i},\\psi_i,\\theta_i,\\phi_i]^T\n\\]\n\n\\[\n\\mathbf{u}_i = [a_{x,i},a_{y,i},a_{z,i},\\dot{\\psi}_i,\\dot{\\theta}_i,\\dot{\\phi}_i]^T.\n\\]\n\nNa primeira versão, é preferível usar `position + velocity + yaw + câmera/gimbal` e não comandar livremente pitch e roll do corpo. Em um multirrotor real, pitch e roll participam da geração de aceleração e não são graus de liberdade independentes de posicionamento. Caso o sensor tenha gimbal, separar `X_WB` (corpo) e `X_BC` (câmera); caso seja fixo, o NMPC deve respeitar a dinâmica que acopla atitude e translação.\n\n### Elementos de cobertura\n\nDiscretizar a região operacional em elementos `r`:\n\n- células do solo;\n- amostras nas superfícies dos dois robôs terrestres;\n- objetos ou pistas de interesse;\n- corredores de movimento previstos;\n- zonas críticas com pesos maiores.\n\nCada elemento recebe peso `w_r`, criticidade, prazo, classe, posição prevista e incerteza. Planejamento visual multi-UAV costuma avaliar visibilidade sobre amostras e combinar cobertura com distância/rota; oclusões precisam ser consideradas quando o ambiente é obstruído.[^13][^14]\n\n### Modelo de FoV\n\nPara um ponto mundial `p_W`, calcular:\n\n\\[\np_C = X_{CW}p_W = [x_C,y_C,z_C]^T.\n\\]\n\nO ponto satisfaz o frustum da câmera se:\n\n\\[\nz_{near} < z_C < z_{far},\\qquad\n|\\operatorname{atan2}(x_C,z_C)| \\leq \\alpha_h/2,\\qquad\n|\\operatorname{atan2}(y_C,z_C)| \\leq \\alpha_v/2.\n\\]\n\nOs parâmetros devem vir dos intrínsecos reais ou previstos do sensor. No Drake, `CameraConfig` aceita resolução e propriedades focais expressas por comprimentos focais ou ângulos de FoV. Na versão alfa, a visibilidade pode ter três níveis selecionáveis:[^15]\n\n1. `FRUSTUM_ONLY`: teste analítico rápido.\n2. `FRUSTUM_LOS`: frustum mais linha de visada contra geometria simplificada.\n3. `SEMANTIC_RENDER`: imagem de rótulos/depth para validação de oclusão; o `RgbdSensor` do Drake produz imagens RGB, depth e label a partir do `SceneGraph`.[^16]\n\nPara ray casting estritamente open source, Open3D possui `RaycastingScene` sob licença MIT, e Embree fornece kernels de ray tracing sob Apache-2.0. O backend deve ser intercambiável por interface, para que o CBBA e o NMPC não dependam do método de visibilidade.[^17][^18][^19]\n\n### Qualidade perceptiva\n\nDefinir qualidade individual limitada a `[0,1]`:\n\n\\[\nq_{ir} = v_{ir}\\,q_d(d_{ir})\\,q_a(\\gamma_{ir})\\,q_{res}(\\rho_{ir})\\,q_{occ}(o_{ir})\\,q_{comm}(l_i),\n\\]\n\nonde `v` indica pertença ao FoV, `d` é distância, `gamma` é incidência, `rho` é densidade projetada/pixels por metro, `o` é oclusão e `l` representa qualidade ou latência de comunicação. Esses fatores não devem ser apresentados como “probabilidade de detecção calibrada” enquanto não forem ajustados contra um detector real.\n\nPara fusão de observações aproximadamente independentes:\n\n\\[\nP_r = 1-\\prod_{i\\in A}(1-q_{ir}).\n\\]\n\nTambém registrar separadamente cobertura binária, cobertura ponderada, cobertura mínima, redundância e qualidade. Misturar tudo em um único KPI esconderia falhas importantes.\n\n### Objetivos globais\n\nA otimização do ATAS deve acompanhar um vetor de objetivos:\n\n\\[\n\\mathbf{J}=\\left[\n-J_{det},\n-J_{cov},\n-J_{min},\nJ_{energy},\nJ_{active},\nJ_{comm},\nJ_{motion},\nJ_{redundancy}\n\\right].\n\\]\n\n- `J_det`: detecção esperada ponderada nos robôs e ROIs.\n- `J_cov`: cobertura espaço-temporal ponderada.\n- `J_min`: pior cobertura entre regiões críticas.\n- `J_energy`: propulsão e deslocamento estimados.\n- `J_active`: custo por drone ativo.\n- `J_comm`: carga, latência prevista e perda de conectividade.\n- `J_motion`: esforço e variação de comando.\n- `J_redundancy`: excesso de sobreposição; redundância mínima requerida não é penalizada.\n\nEm execução online, CBBA e NMPC precisam de decisões únicas, portanto os objetivos devem ser normalizados e convertidos em utilidades escalares. A fronteira de Pareto deve ser estudada **offline** para selecionar pesos, limiares e políticas operacionais. `pymoo` disponibiliza NSGA-II/III e outros métodos multiobjetivo sob Apache-2.0, mas é Python; pode ser usado somente no laboratório de calibração sem entrar no caminho C++ de produção. `pagmo2` oferece NSGA-II em C++, mas usa licenças GPL/LGPL; continua open source, porém exige uma decisão explícita de compatibilidade e distribuição.[^20][^21][^22][^23]\n\n### Restrições rígidas\n\nO NMPC deve impor:\n\n- dinâmica discreta do drone;\n- limites de velocidade, aceleração, atitude e taxa angular;\n- altitude mínima e máxima;\n- geofence;\n- distância mínima a obstáculos;\n- separação entre drones ao longo do horizonte;\n- reserva energética para retorno;\n- limites de gimbal, quando aplicável;\n- visibilidade mínima apenas para tarefas críticas contratadas;\n- conectividade mínima ou disponibilidade de rota V2X, se necessária à missão.\n\nAs trajetórias previstas dos vizinhos devem ser transmitidas, carimbadas no tempo e infladas com margem que cresce com idade, atraso e incerteza. NMPC descentralizado robusto para MAVs já foi formulado incorporando incerteza de estado e atraso de comunicação na distância aceitável.[^4]\n\n## CBBA aplicado ao ATAS\n\n### Definição das tarefas\n\nCBBA resolve atribuição discreta. Para o ATAS, uma tarefa deve representar um contrato perceptivo executável:\n\n''' text\nTask\n  id\n  roi_id / ground_robot_id\n  type: TRACK | COVER_CELL | MULTIVIEW | RELAY | RESERVE\n  candidate_viewpoint or admissible_view_region\n  earliest_start, deadline, duration, expiry\n  priority and criticality\n  min_quality\n  required_capabilities\n  min_agents, max_agents\n  predecessor_ids\n  version\n'''\n\nTarefas cooperativas com `min_agents > 1` devem inicialmente ser decompostas em “slots” complementares, por exemplo `roi42/north_view` e `roi42/south_view`. Literatura de CBBA dinâmico também emprega divisão de tarefas cooperativas em subtarefas atribuíveis individualmente. O gerador deve evitar produzir milhares de tarefas quase idênticas: use clustering espacial, horizonte curto e somente os pontos cegos ou regiões relevantes ao movimento previsto dos robôs terrestres.[^24]\n\n### Dados de cada agente\n\nCada drone mantém:\n\n- `bundle b_i`: ordem em que tarefas foram ganhas;\n- `path p_i`: ordem planejada de execução;\n- `y_i[j]`: maior lance conhecido para tarefa `j`;\n- `z_i[j]`: vencedor conhecido;\n- `s_i[k]`: timestamp/contador da informação recebida do agente `k`;\n- versões de tarefas e epoch de consenso;\n- capacidade, energia e estado operacional.\n\n### Função de lance\n\nO lance deve ser o ganho marginal de inserir a tarefa `j` na melhor posição do caminho atual:\n\n\\[\nb_{ij}=\\max_n\\left(S_i(p_i\\oplus_n j)-S_i(p_i)\\right).\n\\]\n\nUma utilidade inicial adequada é:\n\n\\[\nS_i(p)=\\sum_{j\\in p}\n\\lambda_q\\hat Q_{ij}\n+\\lambda_c\\hat C_{ij}\n+\\lambda_t\\hat T_{ij}\n-\\lambda_d\\hat D_{ij}\n-\\lambda_e\\hat E_{ij}\n-\\lambda_r\\hat R_{ij}\n-\\lambda_a A_{ij}.\n\\]\n\nTodos os termos devem ser normalizados em intervalos documentados. `A_ij` é custo de despertar/ativar um drone em reserva. A função precisa preservar ganhos marginais decrescentes para manter a garantia clássica de convergência; o CBBA exige que o valor de uma tarefa não aumente quando outras tarefas são acrescentadas antes dela.[^25][^1]\n\nNão incorporar dentro do lance o resultado completo de dezenas de resoluções NMPC. Na alfa, usar uma estimativa barata de viagem e viabilidade, seguida por validação NMPC da atribuição vencedora. Caso a validação falhe, publicar `TASK_REJECTED_INFEASIBLE`, aumentar a penalidade local e reabrir a tarefa.\n\n### Algoritmo incremental\n\n1. Receber catálogo de tarefas e remover versões expiradas.\n2. Atualizar custos locais de viagem, visibilidade, energia e comunicação.\n3. Construir bundle escolhendo repetidamente o maior lance marginal que supera o lance vencedor conhecido.\n4. Inserir a tarefa na melhor posição de `path`.\n5. Publicar winners, bids, epoch e timestamps.\n6. Receber estados de consenso dos vizinhos.\n7. Resolver conflitos por maior lance; usar `agent_id` como desempate determinístico.\n8. Quando perder uma tarefa, remover essa tarefa e todas as posteriores no bundle.\n9. Repetir até não haver alterações durante uma janela ligada ao diâmetro da rede.\n10. Emitir caminho atribuído e estado de convergência.\n\nO CBBA original alterna construção gulosa e consenso para resolver reivindicações conflitantes. Sob pontuação DMG e rede estática síncrona de diâmetro `D`, existe um limite de convergência relacionado ao número de tarefas e ao diâmetro; isso deve ser testado, não presumido, na rede ROS 2.[^3][^26][^1]\n\n### Evolução dinâmica\n\nImplementar em três estágios:\n\n- **S-CBBA:** relógio discreto comum, topologia fixa e tarefas estáticas. Serve como oráculo de regressão.\n- **CBBA-PR:** tarefas novas, falhas e replanejamento parcial. Liberar somente a cauda de menor valor do bundle preserva a estrutura necessária à convergência e oferece compromisso entre tempo e qualidade.[^27][^25]\n- **A-CBBA:** mensagens assíncronas, timestamps, descarte de informação velha e convergência local/global. Extensões assíncronas foram criadas para canais e ambientes dinâmicos e validadas em implementações distribuídas.[^28]\n\nNão iniciar pela variante assíncrona. Sem um S-CBBA de referência, torna-se difícil distinguir erro algorítmico de reordenação, perda de pacote ou relógio.\n\n## NMPC local\n\n### Modelo por estágios\n\n1. **Alfa:** point-mass 3D com aceleração e yaw; horizonte curto.\n2. **Beta:** jerk limitado e gimbal.\n3. **SIL avançado:** dinâmica de quadrotor com atitude, thrust e taxas.\n4. **HIL:** autopiloto real ou modelo compatível, com NMPC produzindo setpoints, não comandos de motor.\n\nO NMPC recebe estado atual, tarefa do CBBA, previsão dos robôs terrestres, trajetórias vizinhas, mapa e métricas de FoV. Produz sequência de estados/controles, publica a trajetória inteira aos vizinhos e aplica apenas o primeiro comando.\n\n### Custo local\n\n\\[\nJ_i=\\sum_{k=0}^{N-1}\n\\left(\n\\|p_{i,k}-p^{ref}_{i,k}\\|_{Q_p}^2+\n\\|u_{i,k}\\|_{R}^2+\n\\|u_{i,k}-u_{i,k-1}\\|_{R_\\Delta}^2+\n\\lambda_v\\ell_{view}+\n\\lambda_c\\ell_{comm}+\n\\lambda_s\\xi_k^2\n\\right)+\\ell_f.\n\\]\n\n`ell_view` deve ser suave. Não colocar diretamente um indicador binário “dentro/fora do FoV” no NLP. Usar distância suave às bordas do frustum, erro de apontamento, distância desejada e qualidade diferenciável aproximada. A oclusão exata por mesh não é diferenciável; avaliar oclusão fora do solver e fornecer regiões/corredores ou custos locais aproximados.\n\n### Solver\n\nPara a primeira implementação, usar `drake::solvers::MathematicalProgram` com Ipopt e derivadas por `AutoDiff`. Drake usa `MathematicalProgram` para variáveis, custos e restrições e pode chamar Ipopt para programas não lineares. Construções do Drake a partir do fonte habilitam bibliotecas open source e desabilitam proprietárias por padrão; ainda assim, verificar `SolverInterface::available()` e bloquear explicitamente SNOPT, Gurobi e Mosek no CI.[^29][^30][^31]\n\nSe o deadline não for satisfeito, migrar **somente o núcleo NMPC** para acados/HPIPM. O acados oferece solvers de controle ótimo/NMPC em C, e a distribuição identificada é BSD-2-Clause; HPIPM também usa BSD-2-Clause. Manter uma interface:[^32][^33]\n\n''' cpp\nclass NmpcBackend {\n public:\n  virtual SolveResult Solve(const NmpcProblemData&) = 0;\n  virtual void WarmStart(const PredictedTrajectory&) = 0;\n};\n'''\n\nAssim, `DrakeIpoptBackend` permanece como referência de correção e `AcadosBackend` pode ser otimizado para tempo real.\n\n### Política de execução\n\n- deslocar a solução anterior um passo para warm start;\n- estabelecer orçamento de tempo por solve;\n- aceitar apenas soluções com status e violações dentro de tolerâncias;\n- se atingir timeout com solução utilizável, aplicar comando validado;\n- se falhar, manter último plano seguro por janela curta;\n- depois, acionar hover/loiter ou retorno seguro;\n- publicar iterações, tempo, custo, violação máxima e razão do fallback.\n\n## Ativação de drones\n\n### Máquina de estados\n\n''' text\nOFF/UNAVAILABLE -> RESERVE -> ACTIVATING -> ACTIVE\nACTIVE -> RETURNING -> RESERVE\nqualquer estado -> FAILED\n'''\n\nOs nós críticos devem ser `LifecycleNode`s. ROS 2 define estados gerenciados como `unconfigured`, `inactive`, `active` e `shutdown`, com transições de configuração, ativação, desativação e limpeza. Isso permite iniciar o sistema somente quando mapa, tarefas, solver e simulação estiverem prontos, além de reiniciar componentes online.[^34][^35]\n\n### Política\n\n- Drones `ACTIVE` participam normalmente do CBBA.\n- Drones `RESERVE` podem calcular lances com custo de ativação e atraso de disponibilidade.\n- Ativar somente se o ganho esperado superar limiar por várias épocas.\n- Desativar somente se a cobertura permanecer acima do requisito sem o drone e após tempo mínimo ativo.\n- Nunca desligar em voo; transitar para retorno/pouso.\n- Manter reserva suficiente para cobrir falha de um agente em cenários críticos.\n\nEssa política resolve a “otimização do número de drones” sem introduzir variáveis binárias dentro de cada NMPC local.\n\n## Interfaces ROS 2\n\n### Pacotes\n\n''' text\natas_ws/src/\n  atas_interfaces/\n  atas_common/\n  atas_models/\n  atas_drake_sim/\n  atas_world_model/\n  atas_visibility/\n  atas_tasking/\n  atas_cbba/\n  atas_nmpc/\n  atas_safety/\n  atas_fleet_manager/\n  atas_metrics/\n  atas_bringup/\n  atas_tests/\n'''\n\nROS 2 recomenda criar pacotes novos com licença Apache-2.0 e registrar a licença SPDX no `package.xml`.[^36][^37]\n\n### Namespaces\n\n''' text\n/atas/world/...\n/atas/tasks/...\n/atas/ground_1/...\n/atas/ground_2/...\n/atas/drone_01/state\n/atas/drone_01/cbba/consensus\n/atas/drone_01/cbba/assignment\n/atas/drone_01/nmpc/prediction\n/atas/drone_01/safety/status\n'''\n\nNamespaces separam tópicos de robôs no mesmo domínio DDS; diferentes `ROS_DOMAIN_ID` isolam completamente processos e, portanto, não devem ser usados para agentes que precisam negociar entre si.[^38]\n\n### Mensagens mínimas\n\n- `Task.msg`: ID, versão, ROI, tipo, janela temporal, prioridade, capacidades, parâmetros do viewpoint.\n- `BidVector.msg`: agent, epoch, sequência, arrays de task IDs, winners, bids e timestamps.\n- `BundleState.msg`: bundle, path, utilidade e estado de convergência.\n- `Assignment.msg`: tarefas contratadas, validade e fallback.\n- `PredictedTrajectory.msg`: `Header`, frame, `dt`, poses, twists, covariâncias e validade.\n- `VisibilityReport.msg`: cobertura por ROI, qualidade, oclusão e idade.\n- `SolverStatus.msg`: backend, status, duração, iterações, custo e violação.\n- `FleetState.msg`: modo operacional, energia, disponibilidade e health.\n\nMensagens CBBA devem transportar inteiros/IDs e vetores compactos, não nuvens de pontos ou imagens. Cada mensagem precisa de `stamp`, `frame_id`, `sequence`, `epoch`, `schema_version` e `valid_until`.\n\n### QoS\n\n| Fluxo | QoS inicial |\n|---|---|\n| Estado e trajetória frequentes | `BEST_EFFORT`, `KEEP_LAST(1-5)`, lifespan curto |\n| Catálogo de tarefas | `RELIABLE`, durabilidade adequada, histórico limitado |\n| Lances/consenso CBBA | `RELIABLE`, `KEEP_LAST`, deadline e liveliness |\n| Comandos e eventos críticos | `RELIABLE`, lifespan curto, deadline |\n| Diagnóstico | `RELIABLE`, frequência baixa |\n\nROS 2 oferece políticas de reliability, deadline, lifespan e liveliness; o perfil de sensor usa best effort porque atualidade costuma valer mais que retransmissão. Testar QoS na rede degradada: `RELIABLE` pode elevar latência por retransmissões.[^39][^40]\n\n### Tempo\n\n`atas_drake_sim` deve publicar `/clock`; todos os nós de simulação usam `use_sim_time=true`. `rosbag2` também entende simulação como tempo publicado em `/clock` e alerta que mensagens antes do primeiro clock recebem tempo zero. Usar tempo ROS para timestamps da missão e `steady_clock` apenas para medir duração computacional/timeout.[^41]\n\n## Roteiro passo a passo\n\n### Etapa 0 — Congelar requisitos\n\nProduzir `requirements.md`, ADRs e matriz requisito-teste. Fixar:\n\n- número máximo inicial de drones;\n- sensor e extrínsecos;\n- volume operacional;\n- tipos de obstáculos;\n- dinâmica dos robôs terrestres;\n- definição quantitativa de “ponto cego” e “detecção correta”;\n- tempos máximos de consenso, NMPC e reação à falha;\n- política de energia e retorno;\n- modelo de comunicação.\n\n**Saída:** requisitos identificados (`REQ-COV-*`, `REQ-SAFE-*`, `REQ-CBBA-*`) e critérios verificáveis.\n\n### Etapa 1 — Ambiente reproduzível\n\nUsar Ubuntu 24.04 em container ou VM sobre Arch Linux, porque ROS 2 Jazzy tem Ubuntu Noble 24.04 amd64 como Tier 1 até maio de 2029. Drake pretende suportar as duas versões LTS recentes do Ubuntu.[^42][^43]\n\n1. Criar Containerfile versionado.\n2. Fixar imagem por digest.\n3. Fixar commits/releases de ROS 2, Drake e dependências.\n4. Compilar Drake sem backends proprietários.\n5. Gerar SBOM e relatório de licenças.\n6. Compilar com `-Wall -Wextra -Wpedantic`, sanitizers no perfil de teste.\n7. Configurar `colcon test` e CI.\n\n`drake-ros` pode fornecer referências, mas o repositório se descreve como prototipagem experimental; não deve ser uma dependência arquitetural sem revisão.[^44]\n\n**Gate:** build limpo em máquina nova e lista de licenças aprovada.\n\n### Etapa 2 — Contratos e modelos\n\n1. Criar `atas_interfaces`.\n2. Definir convenções ENU, frames `world`, `base_link`, `camera_link`.\n3. Definir IDs imutáveis\n\n---\n\n## References\n\n1. [[PDF] Consensus-Based Auction Approaches for Decentralized Task ...](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)\n\n2. [Decentralized Task Allocation Using Local Information Consistency Assumptions](https://arc.aiaa.org/doi/pdf/10.2514/1.I010461)\n\n3. [[PDF] Consensus-Based Decentralized Auctions for Robust Task Allocation | Semantic Scholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9) - This paper addresses task allocation to coordinate a fleet of autonomous vehicles by presenting two ...\n\n4. [Robust Collision Avoidance for Multiple Micro Aerial ...](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)\n\n5. [Decentralized Nonlinear Model Predictive Control for Safe ...](https://arxiv.org/html/2409.17379v1)\n\n6. [A Comparative Study of NMPC Strategies for Prioritized ...](https://hal.science/hal-04784633v1/document)\n\n7. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)\n\n8. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)\n\n9. [Modeling Dynamical Systems - Drake](https://drake.mit.edu/tutorials/dynamical_systems.html)\n\n10. [Event< T > Class Template Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1_event.html)\n\n11. [Setting up efficient intra-process communication](https://docs.ros.org/en/jazzy/Tutorials/Demos/Intra-Process-Communication.html) - Table of Contents: Background, Installing the demos, Running and understanding the demos- The two no...\n\n12. [Executors — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...\n\n13. [Multi-Drone View Planning for Collaborative Coverage in Cluttered ...](https://arxiv.org/html/2310.10863v1)\n\n14. [Multi-UAV Coverage Path Planning for the Inspection of ...](https://arxiv.org/html/2007.13065v1)\n\n15. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)\n\n16. [Sensors](https://drake.mit.edu/doxygen_cxx/group__sensor__systems.html) - Drake provides a variety of capabilities for sensor modeling. Some sensors are offered as Systems in...\n\n17. [Open3D/examples/python/geometry/ray_casting_to_image.py at ...](https://github.com/isl-org/Open3D/blob/main/examples/python/geometry/ray_casting_to_image.py) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n18. [Intel® Rendering Toolkit Libraries Open to the Broader ...](https://www.intel.com/content/www/us/en/developer/articles/technical/open-development-of-render-kit-libraries.html) - These libraries are now open to community contributions, bringing community-funded features, functio...\n\n19. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...\n\n20. [esa/pagmo2: A C++ platform to perform parallel ...](https://github.com/esa/pagmo2) - A C++ platform to perform parallel computations of optimisation tasks (global and local) via the asy...\n\n21. [Non dominated sorting genetic algorithm (NSGA-II)](https://esa.github.io/pagmo2/docs/cpp/algorithms/nsga2.html)\n\n22. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...\n\n23. [pymoo.org › licenseLicense — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/license.html)\n\n24. [UAV Swarm Mission Planning in Dynamic Environment Using Consensus-Based Bundle Algorithm](https://www.mdpi.com/1424-8220/20/8/2307) - To solve the real-time complex mission-planning problem for Multiple heterogeneous Unmanned Aerial V...\n\n25. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)\n\n26. [untitled](https://pdfs.semanticscholar.org/b5ba/62e298fb4ca5a321ddcf3029036ce8a6e091.pdf)\n\n27. [Decentralized task allocation for dynamic, time-sensitive tasks](https://dspace.mit.edu/entities/publication/03841de1-7a48-4d21-a8b7-1450fcbb43f6) - In time-sensitive and dynamic missions, autonomous vehicles must respond quickly to new information ...\n\n28. [Asynchronous Decentralized Task Allocation for Dynamic ...](https://dspace.mit.edu/entities/publication/8027006a-fddf-44a7-b5b9-3475099d7e6c) - This work builds on a decentralized task allocation algorithm for networked agents communicating thr...\n\n29. [Formulating and Solving Optimization Problems - Drake](https://drake.mit.edu/doxygen_cxx/group__solvers.html)\n\n30. [drake/tools/flags/BUILD.bazel at master](https://github.com/RobotLocomotion/drake/blob/master/tools/flags/BUILD.bazel) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...\n\n31. [MathematicalProgram Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1solvers_1_1_mathematical_program.html)\n\n32. [hpipm/include/hpipm_d_ocp_qp.h at master](https://github.com/giaf/hpipm/blob/master/include/hpipm_d_ocp_qp.h) - High-performance interior-point-method QP and QCQP solvers - giaf/hpipm\n\n33. [FreshPorts -- science/acados: Fast and embedded solvers for ...](https://www.freshports.org/science/acados/) - acados provides fast and embedded solvers for nonlinear optimal control. It is written in C and offe...\n\n34. [lifecycle: Jazzy 0.33.7 documentation](https://docs.ros.org/en/jazzy/p/lifecycle/)\n\n35. [nav2_lifecycle_manager](https://docs.ros.org/en/jazzy/p/nav2_lifecycle_manager/)\n\n36. [Developing a ROS 2 package — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/How-To-Guides/Developing-a-ROS-2-Package.html)\n\n37. [Index Your Packages](https://docs.ros.org/en/jazzy/How-To-Guides/Releasing/Index-Your-Packages.html) - Are you releasing a new ROS package into a ROS distribution? Make the process faster by indexing you...\n\n38. [Using multiple Create® 3 robots](https://ros.ncnynl.com/en/create3/setup/multi-robot/) - Documentation for the iRobot® Create® 3 robot\n\n39. [Quality of Service settings](https://docs.ros.org/en/lyrical/Concepts/Intermediate/About-Quality-of-Service-Settings.html)\n\n40. [topic_monitor](https://docs.ros.org/en/jazzy/p/topic_monitor/)\n\n41. [ros2/rosbag2 - GitHub](https://github.com/ros2/rosbag2) - Contribute to ros2/rosbag2 development by creating an account on GitHub.\n\n42. [REP 2000 -- ROS 2 Releases and Target Platforms (ROS.org)](https://www.ros.org/reps/rep-2000.html)\n\n43. [Drake Stability Guidelines](https://drake.mit.edu/stable.html) - Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...\n\n44. [RobotLocomotion - GitHub](https://github.com/robotlocomotion) - RobotLocomotion has 58 repositories available. Follow their code on GitHub.\n\n\n\n---",
        "chars_count": 35287,
        "lines_count": 602,
        "sections": [
          {
            "level": 2,
            "title": "Resumo",
            "anchor": "t2-resumo"
          },
          {
            "level": 2,
            "title": "Decisões fundamentais",
            "anchor": "t2-decis-es-fundamentais"
          },
          {
            "level": 2,
            "title": "Sequência recomendada",
            "anchor": "t2-sequ-ncia-recomendada"
          },
          {
            "level": 2,
            "title": "Stack recomendado",
            "anchor": "t2-stack-recomendado"
          },
          {
            "level": 2,
            "title": "Resposta",
            "anchor": "t2-resposta"
          },
          {
            "level": 2,
            "title": "Arquitetura funcional",
            "anchor": "t2-arquitetura-funcional"
          },
          {
            "level": 3,
            "title": "Decomposição em camadas",
            "anchor": "t2-decomposi-o-em-camadas"
          },
          {
            "level": 3,
            "title": "Limite entre blocos e nós",
            "anchor": "t2-limite-entre-blocos-e-n-s"
          },
          {
            "level": 2,
            "title": "Formulação do problema",
            "anchor": "t2-formula-o-do-problema"
          },
          {
            "level": 3,
            "title": "Estados e variáveis",
            "anchor": "t2-estados-e-vari-veis"
          },
          {
            "level": 3,
            "title": "Elementos de cobertura",
            "anchor": "t2-elementos-de-cobertura"
          },
          {
            "level": 3,
            "title": "Modelo de FoV",
            "anchor": "t2-modelo-de-fov"
          },
          {
            "level": 3,
            "title": "Qualidade perceptiva",
            "anchor": "t2-qualidade-perceptiva"
          },
          {
            "level": 3,
            "title": "Objetivos globais",
            "anchor": "t2-objetivos-globais"
          },
          {
            "level": 3,
            "title": "Restrições rígidas",
            "anchor": "t2-restri-es-r-gidas"
          },
          {
            "level": 2,
            "title": "CBBA aplicado ao ATAS",
            "anchor": "t2-cbba-aplicado-ao-atas"
          },
          {
            "level": 3,
            "title": "Definição das tarefas",
            "anchor": "t2-defini-o-das-tarefas"
          },
          {
            "level": 3,
            "title": "Dados de cada agente",
            "anchor": "t2-dados-de-cada-agente"
          },
          {
            "level": 3,
            "title": "Função de lance",
            "anchor": "t2-fun-o-de-lance"
          },
          {
            "level": 3,
            "title": "Algoritmo incremental",
            "anchor": "t2-algoritmo-incremental"
          },
          {
            "level": 3,
            "title": "Evolução dinâmica",
            "anchor": "t2-evolu-o-din-mica"
          },
          {
            "level": 2,
            "title": "NMPC local",
            "anchor": "t2-nmpc-local"
          },
          {
            "level": 3,
            "title": "Modelo por estágios",
            "anchor": "t2-modelo-por-est-gios"
          },
          {
            "level": 3,
            "title": "Custo local",
            "anchor": "t2-custo-local"
          },
          {
            "level": 3,
            "title": "Solver",
            "anchor": "t2-solver"
          },
          {
            "level": 3,
            "title": "Política de execução",
            "anchor": "t2-pol-tica-de-execu-o"
          },
          {
            "level": 2,
            "title": "Ativação de drones",
            "anchor": "t2-ativa-o-de-drones"
          },
          {
            "level": 3,
            "title": "Máquina de estados",
            "anchor": "t2-m-quina-de-estados"
          },
          {
            "level": 3,
            "title": "Política",
            "anchor": "t2-pol-tica"
          },
          {
            "level": 2,
            "title": "Interfaces ROS 2",
            "anchor": "t2-interfaces-ros-2"
          },
          {
            "level": 3,
            "title": "Pacotes",
            "anchor": "t2-pacotes"
          },
          {
            "level": 3,
            "title": "Namespaces",
            "anchor": "t2-namespaces"
          },
          {
            "level": 3,
            "title": "Mensagens mínimas",
            "anchor": "t2-mensagens-m-nimas"
          },
          {
            "level": 3,
            "title": "QoS",
            "anchor": "t2-qos"
          },
          {
            "level": 3,
            "title": "Tempo",
            "anchor": "t2-tempo"
          },
          {
            "level": 2,
            "title": "Roteiro passo a passo",
            "anchor": "t2-roteiro-passo-a-passo"
          },
          {
            "level": 3,
            "title": "Etapa 0 — Congelar requisitos",
            "anchor": "t2-etapa-0-congelar-requisitos"
          },
          {
            "level": 3,
            "title": "Etapa 1 — Ambiente reproduzível",
            "anchor": "t2-etapa-1-ambiente-reproduz-vel"
          },
          {
            "level": 3,
            "title": "Etapa 2 — Contratos e modelos",
            "anchor": "t2-etapa-2-contratos-e-modelos"
          },
          {
            "level": 2,
            "title": "References",
            "anchor": "t2-references"
          }
        ],
        "tables_count": 2,
        "code_blocks_count": 6,
        "references_count": 44
      },
      "tables": [
        {
          "headers": [
            "Componente",
            "Instâncias",
            "Responsabilidade"
          ],
          "rows": [
            [
              "`atas_drake_sim`",
              "1",
              "Mundo, dinâmica, geometrias, relógio e estados verdadeiros"
            ],
            [
              "`atas_world_model`",
              "1 ou distribuída",
              "Fusão do estado dos robôs, mapa e incertezas"
            ],
            [
              "`atas_task_generator`",
              "1 lógico",
              "Criar tarefas/ROIs/viewpoints e expiração"
            ],
            [
              "`atas_fov_evaluator`",
              "1 compartilhada ou 1 por drone",
              "FoV, LoS, oclusão e qualidade esperada"
            ],
            [
              "`atas_cbba_agent`",
              "1 por drone",
              "Bundle, lances, consenso e caminho discreto"
            ],
            [
              "`atas_nmpc_controller`",
              "1 por drone",
              "Otimização contínua em horizonte móvel"
            ],
            [
              "`atas_safety_filter`",
              "1 por drone",
              "Limites, separação, geofence e fallback"
            ],
            [
              "`atas_fleet_manager`",
              "1 lógico replicável",
              "Estados ativo/reserva, energia e falhas"
            ],
            [
              "`atas_metrics`",
              "1",
              "KPIs, eventos, logs e relatório de execução"
            ]
          ],
          "raw": "| Componente | Instâncias | Responsabilidade |\n|---|---:|---|\n| `atas_drake_sim` | 1 | Mundo, dinâmica, geometrias, relógio e estados verdadeiros |\n| `atas_world_model` | 1 ou distribuída | Fusão do estado dos robôs, mapa e incertezas |\n| `atas_task_generator` | 1 lógico | Criar tarefas/ROIs/viewpoints e expiração |\n| `atas_fov_evaluator` | 1 compartilhada ou 1 por drone | FoV, LoS, oclusão e qualidade esperada |\n| `atas_cbba_agent` | 1 por drone | Bundle, lances, consenso e caminho discreto |\n| `atas_nmpc_controller` | 1 por drone | Otimização contínua em horizonte móvel |\n| `atas_safety_filter` | 1 por drone | Limites, separação, geofence e fallback |\n| `atas_fleet_manager` | 1 lógico replicável | Estados ativo/reserva, energia e falhas |\n| `atas_metrics` | 1 | KPIs, eventos, logs e relatório de execução |"
        },
        {
          "headers": [
            "Fluxo",
            "QoS inicial"
          ],
          "rows": [
            [
              "Estado e trajetória frequentes",
              "`BEST_EFFORT`, `KEEP_LAST(1-5)`, lifespan curto"
            ],
            [
              "Catálogo de tarefas",
              "`RELIABLE`, durabilidade adequada, histórico limitado"
            ],
            [
              "Lances/consenso CBBA",
              "`RELIABLE`, `KEEP_LAST`, deadline e liveliness"
            ],
            [
              "Comandos e eventos críticos",
              "`RELIABLE`, lifespan curto, deadline"
            ],
            [
              "Diagnóstico",
              "`RELIABLE`, frequência baixa"
            ]
          ],
          "raw": "| Fluxo | QoS inicial |\n|---|---|\n| Estado e trajetória frequentes | `BEST_EFFORT`, `KEEP_LAST(1-5)`, lifespan curto |\n| Catálogo de tarefas | `RELIABLE`, durabilidade adequada, histórico limitado |\n| Lances/consenso CBBA | `RELIABLE`, `KEEP_LAST`, deadline e liveliness |\n| Comandos e eventos críticos | `RELIABLE`, lifespan curto, deadline |\n| Diagnóstico | `RELIABLE`, frequência baixa |"
        }
      ],
      "code_blocks": [
        {
          "lang": "text",
          "content": "                   +----------------------------------+\n                   | Ground mission / V2X information |\n                   +----------------+-----------------+\n                                    |\n                                    v\n+------------------+       +----------------------+       +------------------+\n| World model      | ----> | Task / viewpoint     | ----> | Local CBBA agent |\n| targets, map,    |       | generation           |       | one per drone    |\n| uncertainty      |       +----------------------+       +--------+---------+\n+--------+---------+                                                |\n         |                                                          v\n         |                                                assigned task/path\n         |                                                          |\n         v                                                          v\n+------------------+       neighbor trajectories          +------------------+\n| FoV / visibility | <----------------------------------- | Local NMPC       |\n| oracle           |                                      | one per drone    |\n+--------+---------+                                      +--------+---------+\n         |                                                          |\n         | coverage quality                                         v\n         |                                                 nominal command\n         |                                                          |\n         v                                                          v\n+------------------+                                      +------------------+\n| Metrics and      |                                      | Safety filter /  |\n| experiment log   |                                      | supervisor       |\n+------------------+                                      +--------+---------+\n                                                                  |\n                                                                  v\n                                                        Drake plant / drone\n",
          "delimiter": "'''",
          "is_diagram": true
        },
        {
          "lang": "text",
          "content": "Task\n  id\n  roi_id / ground_robot_id\n  type: TRACK | COVER_CELL | MULTIVIEW | RELAY | RESERVE\n  candidate_viewpoint or admissible_view_region\n  earliest_start, deadline, duration, expiry\n  priority and criticality\n  min_quality\n  required_capabilities\n  min_agents, max_agents\n  predecessor_ids\n  version\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "cpp",
          "content": "class NmpcBackend {\n public:\n  virtual SolveResult Solve(const NmpcProblemData&) = 0;\n  virtual void WarmStart(const PredictedTrajectory&) = 0;\n};\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "OFF/UNAVAILABLE -> RESERVE -> ACTIVATING -> ACTIVE\nACTIVE -> RETURNING -> RESERVE\nqualquer estado -> FAILED\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "atas_ws/src/\n  atas_interfaces/\n  atas_common/\n  atas_models/\n  atas_drake_sim/\n  atas_world_model/\n  atas_visibility/\n  atas_tasking/\n  atas_cbba/\n  atas_nmpc/\n  atas_safety/\n  atas_fleet_manager/\n  atas_metrics/\n  atas_bringup/\n  atas_tests/\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "/atas/world/...\n/atas/tasks/...\n/atas/ground_1/...\n/atas/ground_2/...\n/atas/drone_01/state\n/atas/drone_01/cbba/consensus\n/atas/drone_01/cbba/assignment\n/atas/drone_01/nmpc/prediction\n/atas/drone_01/safety/status\n",
          "delimiter": "'''",
          "is_diagram": false
        }
      ],
      "references": [
        {
          "num": 1,
          "title": "[PDF] Consensus-Based Auction Approaches for Decentralized Task ...",
          "url": "https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf",
          "desc": ""
        },
        {
          "num": 2,
          "title": "Decentralized Task Allocation Using Local Information Consistency Assumptions",
          "url": "https://arc.aiaa.org/doi/pdf/10.2514/1.I010461",
          "desc": ""
        },
        {
          "num": 3,
          "title": "[PDF] Consensus-Based Decentralized Auctions for Robust Task Allocation | Semantic Scholar",
          "url": "https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9",
          "desc": "This paper addresses task allocation to coordinate a fleet of autonomous vehicles by presenting two ..."
        },
        {
          "num": 4,
          "title": "Robust Collision Avoidance for Multiple Micro Aerial ...",
          "url": "https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf",
          "desc": ""
        },
        {
          "num": 5,
          "title": "Decentralized Nonlinear Model Predictive Control for Safe ...",
          "url": "https://arxiv.org/html/2409.17379v1",
          "desc": ""
        },
        {
          "num": 6,
          "title": "A Comparative Study of NMPC Strategies for Prioritized ...",
          "url": "https://hal.science/hal-04784633v1/document",
          "desc": ""
        },
        {
          "num": 7,
          "title": "SceneGraph< T > Class Template Reference",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html",
          "desc": ""
        },
        {
          "num": 8,
          "title": "drake::geometry Namespace Reference",
          "url": "https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html",
          "desc": ""
        },
        {
          "num": 9,
          "title": "Modeling Dynamical Systems - Drake",
          "url": "https://drake.mit.edu/tutorials/dynamical_systems.html",
          "desc": ""
        },
        {
          "num": 10,
          "title": "Event< T > Class Template Reference - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1_event.html",
          "desc": ""
        },
        {
          "num": 11,
          "title": "Setting up efficient intra-process communication",
          "url": "https://docs.ros.org/en/jazzy/Tutorials/Demos/Intra-Process-Communication.html",
          "desc": "Table of Contents: Background, Installing the demos, Running and understanding the demos- The two no..."
        },
        {
          "num": 12,
          "title": "Executors — ROS 2 Documentation: Jazzy documentation",
          "url": "https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html",
          "desc": "Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O..."
        },
        {
          "num": 13,
          "title": "Multi-Drone View Planning for Collaborative Coverage in Cluttered ...",
          "url": "https://arxiv.org/html/2310.10863v1",
          "desc": ""
        },
        {
          "num": 14,
          "title": "Multi-UAV Coverage Path Planning for the Inspection of ...",
          "url": "https://arxiv.org/html/2007.13065v1",
          "desc": ""
        },
        {
          "num": 15,
          "title": "CameraConfig Struct Reference - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html",
          "desc": ""
        },
        {
          "num": 16,
          "title": "Sensors",
          "url": "https://drake.mit.edu/doxygen_cxx/group__sensor__systems.html",
          "desc": "Drake provides a variety of capabilities for sensor modeling. Some sensors are offered as Systems in..."
        },
        {
          "num": 17,
          "title": "Open3D/examples/python/geometry/ray_casting_to_image.py at ...",
          "url": "https://github.com/isl-org/Open3D/blob/main/examples/python/geometry/ray_casting_to_image.py",
          "desc": "Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin..."
        },
        {
          "num": 18,
          "title": "Intel® Rendering Toolkit Libraries Open to the Broader ...",
          "url": "https://www.intel.com/content/www/us/en/developer/articles/technical/open-development-of-render-kit-libraries.html",
          "desc": "These libraries are now open to community contributions, bringing community-funded features, functio..."
        },
        {
          "num": 19,
          "title": "Open3D/LICENSE at main · isl-org/Open3D · GitHub",
          "url": "https://github.com/isl-org/Open3D/blob/main/LICENSE",
          "desc": "Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin..."
        },
        {
          "num": 20,
          "title": "esa/pagmo2: A C++ platform to perform parallel ...",
          "url": "https://github.com/esa/pagmo2",
          "desc": "A C++ platform to perform parallel computations of optimisation tasks (global and local) via the asy..."
        },
        {
          "num": 21,
          "title": "Non dominated sorting genetic algorithm (NSGA-II)",
          "url": "https://esa.github.io/pagmo2/docs/cpp/algorithms/nsga2.html",
          "desc": ""
        },
        {
          "num": 22,
          "title": "github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...",
          "url": "https://github.com/anyoptimization/pymoo",
          "desc": "NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any..."
        },
        {
          "num": 23,
          "title": "pymoo.org › licenseLicense — pymoo: Multi-objective Optimization in Python 0.6.2 ...",
          "url": "https://pymoo.org/license.html",
          "desc": ""
        },
        {
          "num": 24,
          "title": "UAV Swarm Mission Planning in Dynamic Environment Using Consensus-Based Bundle Algorithm",
          "url": "https://www.mdpi.com/1424-8220/20/8/2307",
          "desc": "To solve the real-time complex mission-planning problem for Multiple heterogeneous Unmanned Aerial V..."
        },
        {
          "num": 25,
          "title": "Partial Replanning for Decentralized Dynamic Task Allocation - arXiv",
          "url": "https://arxiv.org/html/1806.04836v2",
          "desc": ""
        },
        {
          "num": 26,
          "title": "untitled",
          "url": "https://pdfs.semanticscholar.org/b5ba/62e298fb4ca5a321ddcf3029036ce8a6e091.pdf",
          "desc": ""
        },
        {
          "num": 27,
          "title": "Decentralized task allocation for dynamic, time-sensitive tasks",
          "url": "https://dspace.mit.edu/entities/publication/03841de1-7a48-4d21-a8b7-1450fcbb43f6",
          "desc": "In time-sensitive and dynamic missions, autonomous vehicles must respond quickly to new information ..."
        },
        {
          "num": 28,
          "title": "Asynchronous Decentralized Task Allocation for Dynamic ...",
          "url": "https://dspace.mit.edu/entities/publication/8027006a-fddf-44a7-b5b9-3475099d7e6c",
          "desc": "This work builds on a decentralized task allocation algorithm for networked agents communicating thr..."
        },
        {
          "num": 29,
          "title": "Formulating and Solving Optimization Problems - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/group__solvers.html",
          "desc": ""
        },
        {
          "num": 30,
          "title": "drake/tools/flags/BUILD.bazel at master",
          "url": "https://github.com/RobotLocomotion/drake/blob/master/tools/flags/BUILD.bazel",
          "desc": "Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by..."
        },
        {
          "num": 31,
          "title": "MathematicalProgram Class Reference - Drake",
          "url": "https://drake.mit.edu/doxygen_cxx/classdrake_1_1solvers_1_1_mathematical_program.html",
          "desc": ""
        },
        {
          "num": 32,
          "title": "hpipm/include/hpipm_d_ocp_qp.h at master",
          "url": "https://github.com/giaf/hpipm/blob/master/include/hpipm_d_ocp_qp.h",
          "desc": "High-performance interior-point-method QP and QCQP solvers - giaf/hpipm"
        },
        {
          "num": 33,
          "title": "FreshPorts -- science/acados: Fast and embedded solvers for ...",
          "url": "https://www.freshports.org/science/acados/",
          "desc": "acados provides fast and embedded solvers for nonlinear optimal control. It is written in C and offe..."
        },
        {
          "num": 34,
          "title": "lifecycle: Jazzy 0.33.7 documentation",
          "url": "https://docs.ros.org/en/jazzy/p/lifecycle/",
          "desc": ""
        },
        {
          "num": 35,
          "title": "nav2_lifecycle_manager",
          "url": "https://docs.ros.org/en/jazzy/p/nav2_lifecycle_manager/",
          "desc": ""
        },
        {
          "num": 36,
          "title": "Developing a ROS 2 package — ROS 2 Documentation: Jazzy ...",
          "url": "https://docs.ros.org/en/jazzy/How-To-Guides/Developing-a-ROS-2-Package.html",
          "desc": ""
        },
        {
          "num": 37,
          "title": "Index Your Packages",
          "url": "https://docs.ros.org/en/jazzy/How-To-Guides/Releasing/Index-Your-Packages.html",
          "desc": "Are you releasing a new ROS package into a ROS distribution? Make the process faster by indexing you..."
        },
        {
          "num": 38,
          "title": "Using multiple Create® 3 robots",
          "url": "https://ros.ncnynl.com/en/create3/setup/multi-robot/",
          "desc": "Documentation for the iRobot® Create® 3 robot"
        },
        {
          "num": 39,
          "title": "Quality of Service settings",
          "url": "https://docs.ros.org/en/lyrical/Concepts/Intermediate/About-Quality-of-Service-Settings.html",
          "desc": ""
        },
        {
          "num": 40,
          "title": "topic_monitor",
          "url": "https://docs.ros.org/en/jazzy/p/topic_monitor/",
          "desc": ""
        },
        {
          "num": 41,
          "title": "ros2/rosbag2 - GitHub",
          "url": "https://github.com/ros2/rosbag2",
          "desc": "Contribute to ros2/rosbag2 development by creating an account on GitHub."
        },
        {
          "num": 42,
          "title": "REP 2000 -- ROS 2 Releases and Target Platforms (ROS.org)",
          "url": "https://www.ros.org/reps/rep-2000.html",
          "desc": ""
        },
        {
          "num": 43,
          "title": "Drake Stability Guidelines",
          "url": "https://drake.mit.edu/stable.html",
          "desc": "Drake (\"dragon\" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT..."
        },
        {
          "num": 44,
          "title": "RobotLocomotion - GitHub",
          "url": "https://github.com/robotlocomotion",
          "desc": "RobotLocomotion has 58 repositories available. Follow their code on GitHub."
        }
      ]
    },
    {
      "id": 3,
      "title": "Resposta solicitação 3",
      "short_title": "Inteligência Artificial & Redução do Espaço de Busca (Laya)",
      "summary": "Análise da integração do modelo Laya (ModernBERT/mmBERT, latência ~32,8 ms) no pipeline. Proposta de Soft Pruning e Hard Pruning no CBBA e warm start no NMPC, respeitando limites temporais rígidos.",
      "tags": [
        "Laya",
        "ModernBERT",
        "Soft Pruning",
        "Hard Pruning",
        "Latência",
        "Warm Start"
      ],
      "color": "purple",
      "solicitacao": {
        "title": "Solicitação 3",
        "raw": "# Solicitação 3\n``` markdown\nEstou considerando implementar um sistema que, com base em dados, análises e consultas, reduz o número de possibilidades e/ou respostas possíveis do sistema de otimização para que ele opere sob um menor número de opções, resultados e/ou alternativas possíveis de resposta ótima.\nÉ possível e adequado implementar esse sistema? Se sim, onde e como ele deve atuar? No NMPC ou no CBBA ou em ambos?\n\nConsidere que pretendo implementar esse sistema utilizando múltiplos agentes de inteligência artificial, competindo entre si para a melhor solução, utilizando como motor principal de inferências o projeto Laya (após uma etapa de fine-tuning para essa tarefa específica), que é a principal alternativa open-source (código aberto) ao Jev (modelo de decisão da TypeSafe AI), lançado pela Convai Innovations. O Laya é um classificador de decisão baseado em encoders bidirecionais (como ModernBERT e mmBERT) em vez de gerar texto token por token, oferecendo latência ultrarrápida de cerca de 32,8 milissegundos (comparado aos ~150–276 ms do Jev).\n\n```",
        "clean": "Estou considerando implementar um sistema que, com base em dados, análises e consultas, reduz o número de possibilidades e/ou respostas possíveis do sistema de otimização para que ele opere sob um menor número de opções, resultados e/ou alternativas possíveis de resposta ótima.\nÉ possível e adequado implementar esse sistema? Se sim, onde e como ele deve atuar? No NMPC ou no CBBA ou em ambos?\n\nConsidere que pretendo implementar esse sistema utilizando múltiplos agentes de inteligência artificial, competindo entre si para a melhor solução, utilizando como motor principal de inferências o projeto Laya (após uma etapa de fine-tuning para essa tarefa específica), que é a principal alternativa open-source (código aberto) ao Jev (modelo de decisão da TypeSafe AI), lançado pela Convai Innovations. O Laya é um classificador de decisão baseado em encoders bidirecionais (como ModernBERT e mmBERT) em vez de gerar texto token por token, oferecendo latência ultrarrápida de cerca de 32,8 milissegundos (comparado aos ~150–276 ms do Jev).\n",
        "chars_count": 1038,
        "lines_count": 4
      },
      "resposta": {
        "title": "Resposta solicitação 3",
        "raw": "# Resposta solicitação 3\n``` markdown\n**Sim, é possível e adequado**, mas esse subsistema deve funcionar como uma camada de **redução aprendida de candidatos**, e não como substituto do CBBA, do NMPC ou dos verificadores de segurança. No ATAS, ele deve atuar **principalmente antes do CBBA** e **como gerador/rankeador de warm starts antes do NMPC**; nunca deve remover restrições rígidas nem aplicar comandos diretamente.\n\n## Papel recomendado\n\nA arquitetura adequada é:\n\n''' text\nEstado do ATAS\n      │\n      ▼\nFiltros determinísticos\n      │  removem opções impossíveis\n      ▼\nRedutor aprendido de candidatos\n      │  classifica e prioriza opções plausíveis\n      ▼\n  ┌───────────────┬─────────────────┐\n  ▼               ▼                 ▼\nCBBA          NMPC candidato 1   NMPC candidato M\n  │               │                 │\n  └───────────────┴────────┬────────┘\n                           ▼\n              Verificador determinístico\n                           │\n                           ▼\n                  Filtro de segurança\n                           │\n                           ▼\n                       Drake\n'''\n\nA regra fundamental deve ser:\n\n> A inteligência artificial reduz e ordena o espaço de busca; os algoritmos formais resolvem o problema reduzido; os verificadores determinísticos aceitam ou rejeitam o resultado.\n\nEssa abordagem é consistente com métodos de *learning to prune* e *learning to warm-start*: a aprendizagem elimina opções fáceis ou fornece inicializações, enquanto um algoritmo convencional resolve o núcleo difícil e verifica viabilidade. [arxiv](https://arxiv.org/pdf/1910.10835v2.pdf)\n\n## Onde ele deve atuar\n\n| Ponto de atuação | Uso recomendado | Grau de recomendação |\n|---|---|---:|\n| Antes do CBBA | Eliminar ou priorizar tarefas, viewpoints e pares drone–tarefa | **Muito alto** |\n| Dentro do lance CBBA | Estimar qualidade, custo ou probabilidade de êxito | Médio, com restrições |\n| Antes do NMPC | Selecionar referências, modos e warm starts | **Muito alto** |\n| Dentro do NMPC | Escolher horizonte, pesos ou regiões de operação | Médio |\n| Substituindo o NMPC | Produzir diretamente os comandos de voo | **Não recomendado** |\n| Filtro de segurança | Autorizar violações ou remover restrições | **Proibido** |\n| Após a otimização | Rankear soluções já verificadas | Alto |\n\n## Atuação no CBBA\n\nO maior ganho inicial provavelmente estará no CBBA, porque seu espaço é naturalmente discreto. Para cada agente, o redutor pode receber um conjunto grande de:\n\n- tarefas de cobertura;\n- regiões de interesse;\n- viewpoints;\n- setores angulares;\n- tarefas de acompanhamento;\n- tarefas de redundância;\n- tarefas de relay V2X;\n- pares drone–tarefa;\n- posições candidatas discretizadas.\n\nO sistema classificaria cada opção como, por exemplo:\n\n''' text\nREJECT_HARD\nLOW_PRIORITY\nKEEP\nHIGH_PRIORITY\nMANDATORY\n'''\n\nContudo, `REJECT_HARD` **não deve ser produzido pelo Laya**. Essa classe precisa resultar exclusivamente de regras determinísticas, como:\n\n- capacidade incompatível;\n- bateria insuficiente;\n- tarefa expirada;\n- altitude proibida;\n- geofence;\n- ausência de rota possível;\n- FoV geometricamente impossível;\n- sensor inadequado;\n- requisito obrigatório não atendido.\n\nO Laya deve operar apenas depois desses filtros e retornar categorias como `LOW_PRIORITY`, `KEEP` e `HIGH_PRIORITY`.\n\n### Pipeline CBBA\n\n1. Gerar tarefas e viewpoints candidatos.\n2. Aplicar filtros geométricos, temporais, energéticos e de capacidade.\n3. Calcular atributos numéricos normalizados.\n4. Submeter os candidatos plausíveis aos agentes classificadores.\n5. Agregar as classificações e probabilidades.\n6. Preservar os melhores \\(K\\) candidatos por drone.\n7. Preservar também candidatos exploratórios e obrigatórios.\n8. Executar o CBBA convencional sobre o conjunto reduzido.\n9. Se não houver solução ou consenso, aumentar \\(K\\) e repetir.\n10. Comparar periodicamente a solução reduzida com a solução sem redução.\n\nO CBBA convencional depende de uma estrutura de lances adequada, incluindo ganhos marginais decrescentes, para sustentar suas propriedades de convergência. Portanto, não é aconselhável deixar o modelo neural produzir livremente o lance final. O modelo pode estimar componentes como qualidade visual, risco ou chance de sucesso, mas a função final deve continuar explícita, normalizada e testável. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)\n\nUma formulação segura seria:\n\n\\[\nb_{ij}\n=\nb^{\\text{det}}_{ij}\n+\n\\lambda_{\\text{AI}}\\hat{s}_{ij},\n\\]\n\nonde \\(b^{\\text{det}}_{ij}\\) é o lance determinístico e \\(\\hat{s}_{ij}\\) é uma correção aprendida limitada:\n\n\\[\n-\\Delta_{\\max}\n\\leq\n\\lambda_{\\text{AI}}\\hat{s}_{ij}\n\\leq\n\\Delta_{\\max}.\n\\]\n\nNa primeira versão, recomenda-se usar a IA somente para **ordenar os candidatos que serão avaliados pelo CBBA**, sem alterar seus lances. Isso preserva melhor o comportamento do algoritmo.\n\n## Atuação no NMPC\n\nNo NMPC, “reduzir possibilidades” não deve significar retirar arbitrariamente regiões do espaço contínuo. Isso pode eliminar a única trajetória viável ou remover o ótimo global. O uso mais seguro é selecionar **warm starts**, referências e classes topológicas de trajetória.\n\nPor exemplo, um drone pode ter estes candidatos:\n\n- contornar o obstáculo pela esquerda;\n- contornar pela direita;\n- passar acima;\n- manter altitude e reduzir velocidade;\n- realizar hover;\n- retornar ao último viewpoint seguro.\n\nCada alternativa gera uma trajetória inicial aproximada. Os agentes de IA classificam as alternativas e o NMPC resolve apenas as melhores \\(M\\), em vez de iniciar repetidamente a partir de todas as possibilidades.\n\n### Pipeline NMPC\n\n1. Receber a tarefa vencedora do CBBA.\n2. Gerar uma biblioteca pequena de referências dinamicamente plausíveis.\n3. Descartar referências que violem restrições evidentes.\n4. Usar o redutor aprendido para classificar os modos restantes.\n5. Selecionar os melhores \\(M\\) warm starts.\n6. Resolver um NMPC para cada warm start selecionado, se o orçamento permitir.\n7. Verificar dinâmica, colisões, geofence, separação e reserva energética.\n8. Escolher a melhor solução factível.\n9. Aplicar apenas o primeiro comando.\n10. Guardar a solução como warm start do próximo ciclo.\n\nMétodos de warm start baseados em dados podem reduzir o número de iterações e melhorar a convergência, mas o solver posterior continua necessário para impor as restrições. Warm starts multimodais também ajudam a representar mínimos locais pertencentes a diferentes classes de trajetória. [sciencedirect](https://www.sciencedirect.com/science/article/abs/pii/S0005109820304453)\n\nO modelo aprendido não deve:\n\n- remover restrições de colisão;\n- alterar limites de atuação;\n- declarar uma trajetória factível;\n- produzir diretamente thrust ou taxas angulares;\n- substituir o status do solver;\n- autorizar uma solução com violação;\n- impedir a execução de hover ou retorno seguro.\n\n## Papel do Laya\n\nO Laya parece apropriado para o nível **discreto e classificatório** dessa arquitetura. Ele recebe estado textual ou JSON e perguntas tipadas, retornando escolhas, scores e probabilidades em uma passagem de inferência; os checkpoints divulgados usam ModernBERT ou mmBERT e possuem pesos sob Apache-2.0. [laya.convaiinnovations](https://laya.convaiinnovations.com/)\n\nEntretanto, ele não foi projetado originalmente como:\n\n- otimizador contínuo;\n- regressor de trajetória;\n- solver de controle ótimo;\n- processador geométrico;\n- verificador de restrições;\n- modelo físico;\n- estimador numérico de alta precisão.\n\nPor isso, o melhor uso no ATAS seria responder perguntas estruturadas como:\n\n''' json\n{\n  \"state\": {\n    \"drone_id\": 3,\n    \"battery\": 0.67,\n    \"distance_to_task\": 42.1,\n    \"estimated_visibility\": 0.81,\n    \"occlusion_ratio\": 0.12,\n    \"ground_robot_priority\": 0.95,\n    \"communication_quality\": 0.72,\n    \"estimated_energy_cost\": 0.18,\n    \"task_deadline_margin\": 4.2\n  },\n  \"question\": {\n    \"type\": \"choice\",\n    \"options\": [\n      \"discard\",\n      \"retain\",\n      \"high_priority\",\n      \"mandatory_review\"\n    ]\n  }\n}\n'''\n\nAinda assim, encoders treinados sobre texto ou JSON não devem ser considerados naturalmente confiáveis para comparar números, distâncias e restrições físicas. Os valores precisam ser:\n\n- normalizados;\n- acompanhados de categorias semânticas;\n- testados em casos de fronteira;\n- submetidos a ablações;\n- calibrados fora da distribuição;\n- confrontados com uma baseline puramente numérica.\n\nUma representação mais robusta pode combinar os números com bins:\n\n''' json\n{\n  \"battery\": 0.67,\n  \"battery_band\": \"MEDIUM\",\n  \"visibility\": 0.81,\n  \"visibility_band\": \"HIGH\",\n  \"collision_margin\": 1.4,\n  \"collision_status\": \"MARGINAL\"\n}\n'''\n\n## Limitação da latência\n\nA latência de 32,8 ms divulgada refere-se ao checkpoint multilíngue executado em uma GPU NVIDIA T4; o checkpoint inglês aparece com aproximadamente 39,5 ms no mesmo tipo de benchmark. Esses números não podem ser transferidos diretamente para a RTX A2000 do laptop, especialmente quando Drake, ROS 2, ray casting e vários processos também competirem pela GPU. [dell.huggingface](https://dell.huggingface.co/models/convaiinnovations/laya)\n\nAlém disso, carregar uma cópia completa do modelo para cada “agente de IA” desperdiçaria VRAM. A arquitetura apropriada é:\n\n''' text\nAgentes lógicos especializados\n             │\n             ▼\nFila de inferência e batching\n             │\n             ▼\nUma instância compartilhada do Laya\n             │\n             ▼\nRespostas separadas por papel/agente\n'''\n\nO Laya divulga ganhos de throughput quando várias perguntas são processadas em batch, o que favorece essa arquitetura compartilhada. [laya.convaiinnovations](https://laya.convaiinnovations.com/)\n\n## Agentes concorrentes\n\n“Múltiplos agentes competindo” só agrega valor se houver diversidade real. Vários agentes com o mesmo checkpoint, o mesmo prompt, os mesmos atributos e o mesmo seed tenderão a produzir respostas altamente correlacionadas.\n\nUma divisão adequada seria:\n\n| Agente | Prioridade |\n|---|---|\n| `coverage_agent` | Redução de pontos cegos |\n| `detection_agent` | Qualidade esperada da percepção |\n| `energy_agent` | Energia e autonomia |\n| `communication_agent` | V2X e conectividade |\n| `safety_agent` | Margens operacionais, sem substituir regras rígidas |\n| `robustness_agent` | Incerteza, falhas e redundância |\n| `resource_agent` | Menor quantidade de drones ativos |\n\nCada agente classifica os mesmos candidatos segundo uma política especializada. Um agregador determinístico calcula:\n\n\\[\nS(c)=\n\\sum_a w_a\\,p_a(\\text{retain}\\mid c)\n-\n\\lambda_u U(c),\n\\]\n\nonde \\(U(c)\\) representa discordância ou incerteza.\n\nA discordância pode ser útil:\n\n- **Alta concordância positiva:** candidato permanece.\n- **Alta concordância negativa:** candidato pode ser removido, salvo salvaguardas.\n- **Alta discordância:** encaminhar ao CBBA completo.\n- **Baixa confiança:** não podar.\n- **Entrada fora da distribuição:** ignorar a IA e usar baseline determinística.\n\nPara obter diversidade real, podem ser usados:\n\n- checkpoints com seeds diferentes;\n- subconjuntos diferentes de atributos;\n- funções de perda especializadas;\n- agentes treinados para objetivos diferentes;\n- modelos compactos alternativos;\n- regras analíticas independentes;\n- ensemble com calibração separada.\n\n## Redução segura\n\nRecomenda-se implementar dois modos:\n\n### Soft pruning\n\nO candidato não é eliminado; apenas recebe baixa prioridade ou não entra no primeiro lote. Se não houver solução, o sistema amplia o conjunto.\n\n''' text\ntop K → tenta resolver\ntop 2K → nova tentativa\ntodos os candidatos → fallback completo\n'''\n\nEsse deve ser o modo inicial.\n\n### Hard pruning\n\nO candidato é removido definitivamente. Deve ser reservado a:\n\n- inviabilidade geometricamente comprovada;\n- incompatibilidade de capacidade;\n- expiração;\n- restrição regulatória;\n- impossibilidade energética comprovada;\n- dominância formal;\n- regras invariantes verificadas.\n\nNão se recomenda hard pruning baseado apenas no Laya.\n\n## Arquitetura ATAS\n\nSugere-se um componente denominado `atas_candidate_reduction`:\n\n''' text\nTask Generator\n      │\n      ▼\nDeterministic Feasibility Filter\n      │\n      ▼\nCandidate Feature Builder\n      │\n      ▼\nAI Agent Ensemble\n      │\n      ▼\nCalibrated Aggregator\n      │\n      ├── CBBA shortlist\n      ├── NMPC warm-start shortlist\n      ├── uncertainty report\n      └── fallback request\n'''\n\nInterfaces ROS 2 possíveis:\n\n''' text\n/atas/candidates/raw\n/atas/candidates/feasible\n/atas/candidates/ranked\n/atas/candidates/rejected\n/atas/ai_agent_scores\n/atas/ai_disagreement\n/atas/reduction/status\n'''\n\nCada decisão deve registrar:\n\n- candidatos de entrada;\n- opções removidas;\n- motivo;\n- probabilidades;\n- versão do modelo;\n- hash do checkpoint;\n- limiar utilizado;\n- latência;\n- conjunto final;\n- solução do CBBA;\n- resultado do NMPC;\n- diferença em relação à baseline completa.\n\n## Treinamento\n\nO conjunto de treinamento deve ser produzido principalmente por **soluções do pipeline completo**, e não por opiniões humanas abstratas:\n\n1. Gerar cenários no Drake.\n2. Executar CBBA sem redução.\n3. Resolver múltiplos NMPCs ou uma baseline de maior orçamento.\n4. Registrar quais tarefas e viewpoints participaram das melhores soluções.\n5. Rotular candidatos descartáveis, relevantes e críticos.\n6. Incluir exemplos em que candidatos inicialmente ruins tornam-se necessários.\n7. Incluir falhas de drones, bloqueios, baixa bateria e comunicação degradada.\n8. Separar treino, validação e teste por cenário, mapa e configuração de enxame.\n9. Calibrar probabilidades em conjunto separado.\n10. Testar cenários fora da distribuição.\n\nA função de perda deve penalizar muito mais o **falso descarte** de um candidato necessário do que a retenção de candidatos inúteis:\n\n\\[\nL =\n\\lambda_{\\mathrm{FN}}L_{\\mathrm{false\\ prune}}\n+\n\\lambda_{\\mathrm{FP}}L_{\\mathrm{unnecessary\\ keep}}\n+\n\\lambda_{\\mathrm{cal}}L_{\\mathrm{calibration}},\n\\qquad\n\\lambda_{\\mathrm{FN}}\\gg\\lambda_{\\mathrm{FP}}.\n\\]\n\nO objetivo principal não é obter alta acurácia média. É obter **recall extremamente alto para candidatos pertencentes a soluções factíveis ou próximas do Pareto**.\n\n## Métricas obrigatórias\n\n| Categoria | Métrica |\n|---|---|\n| Redução | Percentual de candidatos removidos |\n| Segurança | Taxa de solução factível perdida |\n| Qualidade | Gap em relação ao pipeline completo |\n| CBBA | Tempo e rodadas até consenso |\n| NMPC | Tempo, iterações e falhas do solver |\n| Percepção | Cobertura, pontos cegos e detecção esperada |\n| Frota | Energia e número de drones ativos |\n| IA | Calibração, recall, precisão e OOD |\n| Computação | P50, P95, P99 e deadline misses |\n| Robustez | Desempenho sob falha, atraso e packet loss |\n\nO principal critério deve ser:\n\n\\[\n\\text{speedup significativo}\n\\quad\\text{com}\\quad\n\\text{taxa de perda de factibilidade próxima de zero}.\n\\]\n\n## Recomendação final\n\nImplemente o sistema em **ambos**, mas de maneira assimétrica:\n\n- **CBBA:** redução direta do conjunto de tarefas, viewpoints e pares drone–tarefa; este é o uso principal.\n- **NMPC:** seleção de referências, warm starts e classes de trajetória; não redução arbitrária das variáveis contínuas.\n- **Segurança:** totalmente fora do modelo aprendido.\n- **Laya:** classificador/rankeador e estimador de confiança, não solver nem controlador.\n- **Agentes múltiplos:** agentes lógicos especializados utilizando uma instância compartilhada e batched do modelo.\n- **Primeira versão:** soft pruning, top-\\(K\\) adaptativo, fallback completo e comparação contínua com a baseline.\n\nA implementação inicial mais segura é:\n\n''' text\nFiltros formais\n    → ensemble Laya\n    → top-K adaptativo para CBBA\n    → 2–4 warm starts para NMPC\n    → solver convencional\n    → verificação determinística\n    → filtro de segurança\n'''\n\nIsso preserva a estrutura CBBA–NMPC já definida para o ATAS e utiliza a IA onde ela oferece maior valor: **reduzir custo de busca e melhorar inicialização, sem assumir autoridade sobre viabilidade, estabilidade ou segurança**.\n\n```",
        "clean": "**Sim, é possível e adequado**, mas esse subsistema deve funcionar como uma camada de **redução aprendida de candidatos**, e não como substituto do CBBA, do NMPC ou dos verificadores de segurança. No ATAS, ele deve atuar **principalmente antes do CBBA** e **como gerador/rankeador de warm starts antes do NMPC**; nunca deve remover restrições rígidas nem aplicar comandos diretamente.\n\n## Papel recomendado\n\nA arquitetura adequada é:\n\n''' text\nEstado do ATAS\n      │\n      ▼\nFiltros determinísticos\n      │  removem opções impossíveis\n      ▼\nRedutor aprendido de candidatos\n      │  classifica e prioriza opções plausíveis\n      ▼\n  ┌───────────────┬─────────────────┐\n  ▼               ▼                 ▼\nCBBA          NMPC candidato 1   NMPC candidato M\n  │               │                 │\n  └───────────────┴────────┬────────┘\n                           ▼\n              Verificador determinístico\n                           │\n                           ▼\n                  Filtro de segurança\n                           │\n                           ▼\n                       Drake\n'''\n\nA regra fundamental deve ser:\n\n> A inteligência artificial reduz e ordena o espaço de busca; os algoritmos formais resolvem o problema reduzido; os verificadores determinísticos aceitam ou rejeitam o resultado.\n\nEssa abordagem é consistente com métodos de *learning to prune* e *learning to warm-start*: a aprendizagem elimina opções fáceis ou fornece inicializações, enquanto um algoritmo convencional resolve o núcleo difícil e verifica viabilidade. [arxiv](https://arxiv.org/pdf/1910.10835v2.pdf)\n\n## Onde ele deve atuar\n\n| Ponto de atuação | Uso recomendado | Grau de recomendação |\n|---|---|---:|\n| Antes do CBBA | Eliminar ou priorizar tarefas, viewpoints e pares drone–tarefa | **Muito alto** |\n| Dentro do lance CBBA | Estimar qualidade, custo ou probabilidade de êxito | Médio, com restrições |\n| Antes do NMPC | Selecionar referências, modos e warm starts | **Muito alto** |\n| Dentro do NMPC | Escolher horizonte, pesos ou regiões de operação | Médio |\n| Substituindo o NMPC | Produzir diretamente os comandos de voo | **Não recomendado** |\n| Filtro de segurança | Autorizar violações ou remover restrições | **Proibido** |\n| Após a otimização | Rankear soluções já verificadas | Alto |\n\n## Atuação no CBBA\n\nO maior ganho inicial provavelmente estará no CBBA, porque seu espaço é naturalmente discreto. Para cada agente, o redutor pode receber um conjunto grande de:\n\n- tarefas de cobertura;\n- regiões de interesse;\n- viewpoints;\n- setores angulares;\n- tarefas de acompanhamento;\n- tarefas de redundância;\n- tarefas de relay V2X;\n- pares drone–tarefa;\n- posições candidatas discretizadas.\n\nO sistema classificaria cada opção como, por exemplo:\n\n''' text\nREJECT_HARD\nLOW_PRIORITY\nKEEP\nHIGH_PRIORITY\nMANDATORY\n'''\n\nContudo, `REJECT_HARD` **não deve ser produzido pelo Laya**. Essa classe precisa resultar exclusivamente de regras determinísticas, como:\n\n- capacidade incompatível;\n- bateria insuficiente;\n- tarefa expirada;\n- altitude proibida;\n- geofence;\n- ausência de rota possível;\n- FoV geometricamente impossível;\n- sensor inadequado;\n- requisito obrigatório não atendido.\n\nO Laya deve operar apenas depois desses filtros e retornar categorias como `LOW_PRIORITY`, `KEEP` e `HIGH_PRIORITY`.\n\n### Pipeline CBBA\n\n1. Gerar tarefas e viewpoints candidatos.\n2. Aplicar filtros geométricos, temporais, energéticos e de capacidade.\n3. Calcular atributos numéricos normalizados.\n4. Submeter os candidatos plausíveis aos agentes classificadores.\n5. Agregar as classificações e probabilidades.\n6. Preservar os melhores \\(K\\) candidatos por drone.\n7. Preservar também candidatos exploratórios e obrigatórios.\n8. Executar o CBBA convencional sobre o conjunto reduzido.\n9. Se não houver solução ou consenso, aumentar \\(K\\) e repetir.\n10. Comparar periodicamente a solução reduzida com a solução sem redução.\n\nO CBBA convencional depende de uma estrutura de lances adequada, incluindo ganhos marginais decrescentes, para sustentar suas propriedades de convergência. Portanto, não é aconselhável deixar o modelo neural produzir livremente o lance final. O modelo pode estimar componentes como qualidade visual, risco ou chance de sucesso, mas a função final deve continuar explícita, normalizada e testável. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)\n\nUma formulação segura seria:\n\n\\[\nb_{ij}\n=\nb^{\\text{det}}_{ij}\n+\n\\lambda_{\\text{AI}}\\hat{s}_{ij},\n\\]\n\nonde \\(b^{\\text{det}}_{ij}\\) é o lance determinístico e \\(\\hat{s}_{ij}\\) é uma correção aprendida limitada:\n\n\\[\n-\\Delta_{\\max}\n\\leq\n\\lambda_{\\text{AI}}\\hat{s}_{ij}\n\\leq\n\\Delta_{\\max}.\n\\]\n\nNa primeira versão, recomenda-se usar a IA somente para **ordenar os candidatos que serão avaliados pelo CBBA**, sem alterar seus lances. Isso preserva melhor o comportamento do algoritmo.\n\n## Atuação no NMPC\n\nNo NMPC, “reduzir possibilidades” não deve significar retirar arbitrariamente regiões do espaço contínuo. Isso pode eliminar a única trajetória viável ou remover o ótimo global. O uso mais seguro é selecionar **warm starts**, referências e classes topológicas de trajetória.\n\nPor exemplo, um drone pode ter estes candidatos:\n\n- contornar o obstáculo pela esquerda;\n- contornar pela direita;\n- passar acima;\n- manter altitude e reduzir velocidade;\n- realizar hover;\n- retornar ao último viewpoint seguro.\n\nCada alternativa gera uma trajetória inicial aproximada. Os agentes de IA classificam as alternativas e o NMPC resolve apenas as melhores \\(M\\), em vez de iniciar repetidamente a partir de todas as possibilidades.\n\n### Pipeline NMPC\n\n1. Receber a tarefa vencedora do CBBA.\n2. Gerar uma biblioteca pequena de referências dinamicamente plausíveis.\n3. Descartar referências que violem restrições evidentes.\n4. Usar o redutor aprendido para classificar os modos restantes.\n5. Selecionar os melhores \\(M\\) warm starts.\n6. Resolver um NMPC para cada warm start selecionado, se o orçamento permitir.\n7. Verificar dinâmica, colisões, geofence, separação e reserva energética.\n8. Escolher a melhor solução factível.\n9. Aplicar apenas o primeiro comando.\n10. Guardar a solução como warm start do próximo ciclo.\n\nMétodos de warm start baseados em dados podem reduzir o número de iterações e melhorar a convergência, mas o solver posterior continua necessário para impor as restrições. Warm starts multimodais também ajudam a representar mínimos locais pertencentes a diferentes classes de trajetória. [sciencedirect](https://www.sciencedirect.com/science/article/abs/pii/S0005109820304453)\n\nO modelo aprendido não deve:\n\n- remover restrições de colisão;\n- alterar limites de atuação;\n- declarar uma trajetória factível;\n- produzir diretamente thrust ou taxas angulares;\n- substituir o status do solver;\n- autorizar uma solução com violação;\n- impedir a execução de hover ou retorno seguro.\n\n## Papel do Laya\n\nO Laya parece apropriado para o nível **discreto e classificatório** dessa arquitetura. Ele recebe estado textual ou JSON e perguntas tipadas, retornando escolhas, scores e probabilidades em uma passagem de inferência; os checkpoints divulgados usam ModernBERT ou mmBERT e possuem pesos sob Apache-2.0. [laya.convaiinnovations](https://laya.convaiinnovations.com/)\n\nEntretanto, ele não foi projetado originalmente como:\n\n- otimizador contínuo;\n- regressor de trajetória;\n- solver de controle ótimo;\n- processador geométrico;\n- verificador de restrições;\n- modelo físico;\n- estimador numérico de alta precisão.\n\nPor isso, o melhor uso no ATAS seria responder perguntas estruturadas como:\n\n''' json\n{\n  \"state\": {\n    \"drone_id\": 3,\n    \"battery\": 0.67,\n    \"distance_to_task\": 42.1,\n    \"estimated_visibility\": 0.81,\n    \"occlusion_ratio\": 0.12,\n    \"ground_robot_priority\": 0.95,\n    \"communication_quality\": 0.72,\n    \"estimated_energy_cost\": 0.18,\n    \"task_deadline_margin\": 4.2\n  },\n  \"question\": {\n    \"type\": \"choice\",\n    \"options\": [\n      \"discard\",\n      \"retain\",\n      \"high_priority\",\n      \"mandatory_review\"\n    ]\n  }\n}\n'''\n\nAinda assim, encoders treinados sobre texto ou JSON não devem ser considerados naturalmente confiáveis para comparar números, distâncias e restrições físicas. Os valores precisam ser:\n\n- normalizados;\n- acompanhados de categorias semânticas;\n- testados em casos de fronteira;\n- submetidos a ablações;\n- calibrados fora da distribuição;\n- confrontados com uma baseline puramente numérica.\n\nUma representação mais robusta pode combinar os números com bins:\n\n''' json\n{\n  \"battery\": 0.67,\n  \"battery_band\": \"MEDIUM\",\n  \"visibility\": 0.81,\n  \"visibility_band\": \"HIGH\",\n  \"collision_margin\": 1.4,\n  \"collision_status\": \"MARGINAL\"\n}\n'''\n\n## Limitação da latência\n\nA latência de 32,8 ms divulgada refere-se ao checkpoint multilíngue executado em uma GPU NVIDIA T4; o checkpoint inglês aparece com aproximadamente 39,5 ms no mesmo tipo de benchmark. Esses números não podem ser transferidos diretamente para a RTX A2000 do laptop, especialmente quando Drake, ROS 2, ray casting e vários processos também competirem pela GPU. [dell.huggingface](https://dell.huggingface.co/models/convaiinnovations/laya)\n\nAlém disso, carregar uma cópia completa do modelo para cada “agente de IA” desperdiçaria VRAM. A arquitetura apropriada é:\n\n''' text\nAgentes lógicos especializados\n             │\n             ▼\nFila de inferência e batching\n             │\n             ▼\nUma instância compartilhada do Laya\n             │\n             ▼\nRespostas separadas por papel/agente\n'''\n\nO Laya divulga ganhos de throughput quando várias perguntas são processadas em batch, o que favorece essa arquitetura compartilhada. [laya.convaiinnovations](https://laya.convaiinnovations.com/)\n\n## Agentes concorrentes\n\n“Múltiplos agentes competindo” só agrega valor se houver diversidade real. Vários agentes com o mesmo checkpoint, o mesmo prompt, os mesmos atributos e o mesmo seed tenderão a produzir respostas altamente correlacionadas.\n\nUma divisão adequada seria:\n\n| Agente | Prioridade |\n|---|---|\n| `coverage_agent` | Redução de pontos cegos |\n| `detection_agent` | Qualidade esperada da percepção |\n| `energy_agent` | Energia e autonomia |\n| `communication_agent` | V2X e conectividade |\n| `safety_agent` | Margens operacionais, sem substituir regras rígidas |\n| `robustness_agent` | Incerteza, falhas e redundância |\n| `resource_agent` | Menor quantidade de drones ativos |\n\nCada agente classifica os mesmos candidatos segundo uma política especializada. Um agregador determinístico calcula:\n\n\\[\nS(c)=\n\\sum_a w_a\\,p_a(\\text{retain}\\mid c)\n-\n\\lambda_u U(c),\n\\]\n\nonde \\(U(c)\\) representa discordância ou incerteza.\n\nA discordância pode ser útil:\n\n- **Alta concordância positiva:** candidato permanece.\n- **Alta concordância negativa:** candidato pode ser removido, salvo salvaguardas.\n- **Alta discordância:** encaminhar ao CBBA completo.\n- **Baixa confiança:** não podar.\n- **Entrada fora da distribuição:** ignorar a IA e usar baseline determinística.\n\nPara obter diversidade real, podem ser usados:\n\n- checkpoints com seeds diferentes;\n- subconjuntos diferentes de atributos;\n- funções de perda especializadas;\n- agentes treinados para objetivos diferentes;\n- modelos compactos alternativos;\n- regras analíticas independentes;\n- ensemble com calibração separada.\n\n## Redução segura\n\nRecomenda-se implementar dois modos:\n\n### Soft pruning\n\nO candidato não é eliminado; apenas recebe baixa prioridade ou não entra no primeiro lote. Se não houver solução, o sistema amplia o conjunto.\n\n''' text\ntop K → tenta resolver\ntop 2K → nova tentativa\ntodos os candidatos → fallback completo\n'''\n\nEsse deve ser o modo inicial.\n\n### Hard pruning\n\nO candidato é removido definitivamente. Deve ser reservado a:\n\n- inviabilidade geometricamente comprovada;\n- incompatibilidade de capacidade;\n- expiração;\n- restrição regulatória;\n- impossibilidade energética comprovada;\n- dominância formal;\n- regras invariantes verificadas.\n\nNão se recomenda hard pruning baseado apenas no Laya.\n\n## Arquitetura ATAS\n\nSugere-se um componente denominado `atas_candidate_reduction`:\n\n''' text\nTask Generator\n      │\n      ▼\nDeterministic Feasibility Filter\n      │\n      ▼\nCandidate Feature Builder\n      │\n      ▼\nAI Agent Ensemble\n      │\n      ▼\nCalibrated Aggregator\n      │\n      ├── CBBA shortlist\n      ├── NMPC warm-start shortlist\n      ├── uncertainty report\n      └── fallback request\n'''\n\nInterfaces ROS 2 possíveis:\n\n''' text\n/atas/candidates/raw\n/atas/candidates/feasible\n/atas/candidates/ranked\n/atas/candidates/rejected\n/atas/ai_agent_scores\n/atas/ai_disagreement\n/atas/reduction/status\n'''\n\nCada decisão deve registrar:\n\n- candidatos de entrada;\n- opções removidas;\n- motivo;\n- probabilidades;\n- versão do modelo;\n- hash do checkpoint;\n- limiar utilizado;\n- latência;\n- conjunto final;\n- solução do CBBA;\n- resultado do NMPC;\n- diferença em relação à baseline completa.\n\n## Treinamento\n\nO conjunto de treinamento deve ser produzido principalmente por **soluções do pipeline completo**, e não por opiniões humanas abstratas:\n\n1. Gerar cenários no Drake.\n2. Executar CBBA sem redução.\n3. Resolver múltiplos NMPCs ou uma baseline de maior orçamento.\n4. Registrar quais tarefas e viewpoints participaram das melhores soluções.\n5. Rotular candidatos descartáveis, relevantes e críticos.\n6. Incluir exemplos em que candidatos inicialmente ruins tornam-se necessários.\n7. Incluir falhas de drones, bloqueios, baixa bateria e comunicação degradada.\n8. Separar treino, validação e teste por cenário, mapa e configuração de enxame.\n9. Calibrar probabilidades em conjunto separado.\n10. Testar cenários fora da distribuição.\n\nA função de perda deve penalizar muito mais o **falso descarte** de um candidato necessário do que a retenção de candidatos inúteis:\n\n\\[\nL =\n\\lambda_{\\mathrm{FN}}L_{\\mathrm{false\\ prune}}\n+\n\\lambda_{\\mathrm{FP}}L_{\\mathrm{unnecessary\\ keep}}\n+\n\\lambda_{\\mathrm{cal}}L_{\\mathrm{calibration}},\n\\qquad\n\\lambda_{\\mathrm{FN}}\\gg\\lambda_{\\mathrm{FP}}.\n\\]\n\nO objetivo principal não é obter alta acurácia média. É obter **recall extremamente alto para candidatos pertencentes a soluções factíveis ou próximas do Pareto**.\n\n## Métricas obrigatórias\n\n| Categoria | Métrica |\n|---|---|\n| Redução | Percentual de candidatos removidos |\n| Segurança | Taxa de solução factível perdida |\n| Qualidade | Gap em relação ao pipeline completo |\n| CBBA | Tempo e rodadas até consenso |\n| NMPC | Tempo, iterações e falhas do solver |\n| Percepção | Cobertura, pontos cegos e detecção esperada |\n| Frota | Energia e número de drones ativos |\n| IA | Calibração, recall, precisão e OOD |\n| Computação | P50, P95, P99 e deadline misses |\n| Robustez | Desempenho sob falha, atraso e packet loss |\n\nO principal critério deve ser:\n\n\\[\n\\text{speedup significativo}\n\\quad\\text{com}\\quad\n\\text{taxa de perda de factibilidade próxima de zero}.\n\\]\n\n## Recomendação final\n\nImplemente o sistema em **ambos**, mas de maneira assimétrica:\n\n- **CBBA:** redução direta do conjunto de tarefas, viewpoints e pares drone–tarefa; este é o uso principal.\n- **NMPC:** seleção de referências, warm starts e classes de trajetória; não redução arbitrária das variáveis contínuas.\n- **Segurança:** totalmente fora do modelo aprendido.\n- **Laya:** classificador/rankeador e estimador de confiança, não solver nem controlador.\n- **Agentes múltiplos:** agentes lógicos especializados utilizando uma instância compartilhada e batched do modelo.\n- **Primeira versão:** soft pruning, top-\\(K\\) adaptativo, fallback completo e comparação contínua com a baseline.\n\nA implementação inicial mais segura é:\n\n''' text\nFiltros formais\n    → ensemble Laya\n    → top-K adaptativo para CBBA\n    → 2–4 warm starts para NMPC\n    → solver convencional\n    → verificação determinística\n    → filtro de segurança\n'''\n\nIsso preserva a estrutura CBBA–NMPC já definida para o ATAS e utiliza a IA onde ela oferece maior valor: **reduzir custo de busca e melhorar inicialização, sem assumir autoridade sobre viabilidade, estabilidade ou segurança**.",
        "chars_count": 16044,
        "lines_count": 453,
        "sections": [
          {
            "level": 2,
            "title": "Papel recomendado",
            "anchor": "t3-papel-recomendado"
          },
          {
            "level": 2,
            "title": "Onde ele deve atuar",
            "anchor": "t3-onde-ele-deve-atuar"
          },
          {
            "level": 2,
            "title": "Atuação no CBBA",
            "anchor": "t3-atua-o-no-cbba"
          },
          {
            "level": 3,
            "title": "Pipeline CBBA",
            "anchor": "t3-pipeline-cbba"
          },
          {
            "level": 2,
            "title": "Atuação no NMPC",
            "anchor": "t3-atua-o-no-nmpc"
          },
          {
            "level": 3,
            "title": "Pipeline NMPC",
            "anchor": "t3-pipeline-nmpc"
          },
          {
            "level": 2,
            "title": "Papel do Laya",
            "anchor": "t3-papel-do-laya"
          },
          {
            "level": 2,
            "title": "Limitação da latência",
            "anchor": "t3-limita-o-da-lat-ncia"
          },
          {
            "level": 2,
            "title": "Agentes concorrentes",
            "anchor": "t3-agentes-concorrentes"
          },
          {
            "level": 2,
            "title": "Redução segura",
            "anchor": "t3-redu-o-segura"
          },
          {
            "level": 3,
            "title": "Soft pruning",
            "anchor": "t3-soft-pruning"
          },
          {
            "level": 3,
            "title": "Hard pruning",
            "anchor": "t3-hard-pruning"
          },
          {
            "level": 2,
            "title": "Arquitetura ATAS",
            "anchor": "t3-arquitetura-atas"
          },
          {
            "level": 2,
            "title": "Treinamento",
            "anchor": "t3-treinamento"
          },
          {
            "level": 2,
            "title": "Métricas obrigatórias",
            "anchor": "t3-m-tricas-obrigat-rias"
          },
          {
            "level": 2,
            "title": "Recomendação final",
            "anchor": "t3-recomenda-o-final"
          }
        ],
        "tables_count": 3,
        "code_blocks_count": 9,
        "references_count": 0
      },
      "tables": [
        {
          "headers": [
            "Ponto de atuação",
            "Uso recomendado",
            "Grau de recomendação"
          ],
          "rows": [
            [
              "Antes do CBBA",
              "Eliminar ou priorizar tarefas, viewpoints e pares drone–tarefa",
              "**Muito alto**"
            ],
            [
              "Dentro do lance CBBA",
              "Estimar qualidade, custo ou probabilidade de êxito",
              "Médio, com restrições"
            ],
            [
              "Antes do NMPC",
              "Selecionar referências, modos e warm starts",
              "**Muito alto**"
            ],
            [
              "Dentro do NMPC",
              "Escolher horizonte, pesos ou regiões de operação",
              "Médio"
            ],
            [
              "Substituindo o NMPC",
              "Produzir diretamente os comandos de voo",
              "**Não recomendado**"
            ],
            [
              "Filtro de segurança",
              "Autorizar violações ou remover restrições",
              "**Proibido**"
            ],
            [
              "Após a otimização",
              "Rankear soluções já verificadas",
              "Alto"
            ]
          ],
          "raw": "| Ponto de atuação | Uso recomendado | Grau de recomendação |\n|---|---|---:|\n| Antes do CBBA | Eliminar ou priorizar tarefas, viewpoints e pares drone–tarefa | **Muito alto** |\n| Dentro do lance CBBA | Estimar qualidade, custo ou probabilidade de êxito | Médio, com restrições |\n| Antes do NMPC | Selecionar referências, modos e warm starts | **Muito alto** |\n| Dentro do NMPC | Escolher horizonte, pesos ou regiões de operação | Médio |\n| Substituindo o NMPC | Produzir diretamente os comandos de voo | **Não recomendado** |\n| Filtro de segurança | Autorizar violações ou remover restrições | **Proibido** |\n| Após a otimização | Rankear soluções já verificadas | Alto |"
        },
        {
          "headers": [
            "Agente",
            "Prioridade"
          ],
          "rows": [
            [
              "`coverage_agent`",
              "Redução de pontos cegos"
            ],
            [
              "`detection_agent`",
              "Qualidade esperada da percepção"
            ],
            [
              "`energy_agent`",
              "Energia e autonomia"
            ],
            [
              "`communication_agent`",
              "V2X e conectividade"
            ],
            [
              "`safety_agent`",
              "Margens operacionais, sem substituir regras rígidas"
            ],
            [
              "`robustness_agent`",
              "Incerteza, falhas e redundância"
            ],
            [
              "`resource_agent`",
              "Menor quantidade de drones ativos"
            ]
          ],
          "raw": "| Agente | Prioridade |\n|---|---|\n| `coverage_agent` | Redução de pontos cegos |\n| `detection_agent` | Qualidade esperada da percepção |\n| `energy_agent` | Energia e autonomia |\n| `communication_agent` | V2X e conectividade |\n| `safety_agent` | Margens operacionais, sem substituir regras rígidas |\n| `robustness_agent` | Incerteza, falhas e redundância |\n| `resource_agent` | Menor quantidade de drones ativos |"
        },
        {
          "headers": [
            "Categoria",
            "Métrica"
          ],
          "rows": [
            [
              "Redução",
              "Percentual de candidatos removidos"
            ],
            [
              "Segurança",
              "Taxa de solução factível perdida"
            ],
            [
              "Qualidade",
              "Gap em relação ao pipeline completo"
            ],
            [
              "CBBA",
              "Tempo e rodadas até consenso"
            ],
            [
              "NMPC",
              "Tempo, iterações e falhas do solver"
            ],
            [
              "Percepção",
              "Cobertura, pontos cegos e detecção esperada"
            ],
            [
              "Frota",
              "Energia e número de drones ativos"
            ],
            [
              "IA",
              "Calibração, recall, precisão e OOD"
            ],
            [
              "Computação",
              "P50, P95, P99 e deadline misses"
            ],
            [
              "Robustez",
              "Desempenho sob falha, atraso e packet loss"
            ]
          ],
          "raw": "| Categoria | Métrica |\n|---|---|\n| Redução | Percentual de candidatos removidos |\n| Segurança | Taxa de solução factível perdida |\n| Qualidade | Gap em relação ao pipeline completo |\n| CBBA | Tempo e rodadas até consenso |\n| NMPC | Tempo, iterações e falhas do solver |\n| Percepção | Cobertura, pontos cegos e detecção esperada |\n| Frota | Energia e número de drones ativos |\n| IA | Calibração, recall, precisão e OOD |\n| Computação | P50, P95, P99 e deadline misses |\n| Robustez | Desempenho sob falha, atraso e packet loss |"
        }
      ],
      "code_blocks": [
        {
          "lang": "text",
          "content": "Estado do ATAS\n      │\n      ▼\nFiltros determinísticos\n      │  removem opções impossíveis\n      ▼\nRedutor aprendido de candidatos\n      │  classifica e prioriza opções plausíveis\n      ▼\n  ┌───────────────┬─────────────────┐\n  ▼               ▼                 ▼\nCBBA          NMPC candidato 1   NMPC candidato M\n  │               │                 │\n  └───────────────┴────────┬────────┘\n                           ▼\n              Verificador determinístico\n                           │\n                           ▼\n                  Filtro de segurança\n                           │\n                           ▼\n                       Drake\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "REJECT_HARD\nLOW_PRIORITY\nKEEP\nHIGH_PRIORITY\nMANDATORY\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "json",
          "content": "{\n  \"state\": {\n    \"drone_id\": 3,\n    \"battery\": 0.67,\n    \"distance_to_task\": 42.1,\n    \"estimated_visibility\": 0.81,\n    \"occlusion_ratio\": 0.12,\n    \"ground_robot_priority\": 0.95,\n    \"communication_quality\": 0.72,\n    \"estimated_energy_cost\": 0.18,\n    \"task_deadline_margin\": 4.2\n  },\n  \"question\": {\n    \"type\": \"choice\",\n    \"options\": [\n      \"discard\",\n      \"retain\",\n      \"high_priority\",\n      \"mandatory_review\"\n    ]\n  }\n}\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "json",
          "content": "{\n  \"battery\": 0.67,\n  \"battery_band\": \"MEDIUM\",\n  \"visibility\": 0.81,\n  \"visibility_band\": \"HIGH\",\n  \"collision_margin\": 1.4,\n  \"collision_status\": \"MARGINAL\"\n}\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Agentes lógicos especializados\n             │\n             ▼\nFila de inferência e batching\n             │\n             ▼\nUma instância compartilhada do Laya\n             │\n             ▼\nRespostas separadas por papel/agente\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "top K → tenta resolver\ntop 2K → nova tentativa\ntodos os candidatos → fallback completo\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Task Generator\n      │\n      ▼\nDeterministic Feasibility Filter\n      │\n      ▼\nCandidate Feature Builder\n      │\n      ▼\nAI Agent Ensemble\n      │\n      ▼\nCalibrated Aggregator\n      │\n      ├── CBBA shortlist\n      ├── NMPC warm-start shortlist\n      ├── uncertainty report\n      └── fallback request\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "/atas/candidates/raw\n/atas/candidates/feasible\n/atas/candidates/ranked\n/atas/candidates/rejected\n/atas/ai_agent_scores\n/atas/ai_disagreement\n/atas/reduction/status\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Filtros formais\n    → ensemble Laya\n    → top-K adaptativo para CBBA\n    → 2–4 warm starts para NMPC\n    → solver convencional\n    → verificação determinística\n    → filtro de segurança\n",
          "delimiter": "'''",
          "is_diagram": false
        }
      ],
      "references": []
    },
    {
      "id": 4,
      "title": "Resposta solicitação 4",
      "short_title": "Teoria de Controle vs. Modelos de Atenção End-to-End",
      "summary": "Fundamentação rigorosa demonstrando por que o Laya/Transformers não devem substituir o NMPC no controle contínuo: viabilidade recursiva, restrições rígidas, estabilidade de Lyapunov, distribuição OOD e arquitetura de filtro de segurança.",
      "tags": [
        "Controle Ótimo",
        "Lyapunov",
        "Viabilidade Recursiva",
        "OOD",
        "Safety Filter",
        "CBF"
      ],
      "color": "amber",
      "solicitacao": {
        "title": "Solicitação 4",
        "raw": "# Solicitação 4\n``` markdown\nPor que não é recomendado utilizar o Laya para Substituir o NMPC, Produzindo diretamente os comandos de voo?\n\n```",
        "clean": "Por que não é recomendado utilizar o Laya para Substituir o NMPC, Produzindo diretamente os comandos de voo?\n",
        "chars_count": 109,
        "lines_count": 1
      },
      "resposta": {
        "title": "Resposta solicitação 4",
        "raw": "# Resposta solicitação 4\n``` markdown\nPorque o **Laya é um classificador de decisões discretas sobre entradas estruturadas/textuais, não um controlador ótimo de sistemas dinâmicos**. Mesmo após fine-tuning, comandar diretamente um drone com suas respostas eliminaria mecanismos centrais do NMPC: predição temporal, aplicação explícita da dinâmica, satisfação de restrições, verificação de viabilidade e tratamento sistemático de obstáculos e interações entre drones.\n\n## Diferença fundamental\n\n| Capacidade | Laya | NMPC |\n|---|---|---|\n| Selecionar entre opções discretas | Sim | Não é seu papel principal |\n| Produzir scores/probabilidades | Sim | Produz custos e violações |\n| Predizer dinâmica no horizonte | Não nativamente | Sim |\n| Impor limites dos atuadores | Não | Sim |\n| Impor geofence e separação | Não | Sim |\n| Considerar estados futuros | Somente se codificados como atributos | Explicitamente |\n| Verificar factibilidade | Não | Sim |\n| Otimizar sequência de comandos | Não | Sim |\n| Oferecer garantias de estabilidade | Não | Possível sob hipóteses específicas |\n| Garantir satisfação de restrições | Não | Possível por construção |\n\nO Laya aceita perguntas tipadas dos tipos `choice`, `score` e `noul`, selecionando respostas e probabilidades a partir das opções apresentadas. Isso é adequado para decidir **qual tarefa priorizar** ou **qual warm start testar**, mas é diferente de resolver, em cada ciclo: [laya](https://laya.studio/learn/what-is-laya)\n\n\\[\n\\min_{\\mathbf u_{0:N-1}}\n\\sum_{k=0}^{N-1}\\ell(\\mathbf x_k,\\mathbf u_k)+\\ell_f(\\mathbf x_N)\n\\]\n\nsujeito a:\n\n\\[\n\\mathbf x_{k+1}=f(\\mathbf x_k,\\mathbf u_k),\n\\]\n\n\\[\n\\mathbf x_k\\in\\mathcal X,\\qquad\n\\mathbf u_k\\in\\mathcal U,\n\\]\n\n\\[\nd(\\mathbf x_k,\\mathcal O)\\geq d_{\\min},\n\\qquad\nd(\\mathbf x_{i,k},\\mathbf x_{j,k})\\geq d_{\\mathrm{sep}}.\n\\]\n\n## Dinâmica contínua\n\nOs comandos de um drone não são escolhas isoladas. Cada comando altera velocidade, posição, atitude e energia, influenciando todos os estados futuros.\n\nO Laya poderia escolher entre:\n\n''' text\nSUBIR\nDESCER\nVIRAR_ESQUERDA\nVIRAR_DIREITA\nMANTER\n'''\n\nMas essa classificação não responde:\n\n- Quanto subir?\n- Durante quanto tempo?\n- Com que aceleração?\n- Qual taxa de pitch é admissível?\n- A trajetória futura colidirá com outro drone?\n- Será possível cumprir a tarefa seguinte?\n- O drone manterá reserva energética para retornar?\n- A resposta continuará válida depois de atraso na comunicação?\n\nO NMPC responde a essas questões ao otimizar uma **sequência temporal** de comandos sobre um modelo dinâmico. Depois aplica somente o primeiro comando e refaz a otimização com o estado atualizado.\n\n## Restrições rígidas\n\nUma resposta neural pode parecer razoável e ainda violar:\n\n- thrust máximo;\n- taxa angular máxima;\n- envelope de voo;\n- altitude regulamentar;\n- geofence;\n- distância de segurança;\n- velocidade máxima;\n- reserva de bateria;\n- limites do gimbal;\n- região de estabilidade;\n- colisão futura que ainda não aparece no estado instantâneo.\n\nProbabilidade ou confiança não equivale a viabilidade física. Uma resposta com confiança de 99% ainda pode ser inadmissível.\n\nO NMPC pode incorporar essas condições como desigualdades explícitas. Formulações robustas conseguem estabelecer, sob hipóteses documentadas, satisfação de restrições, estabilidade e viabilidade recursiva. [oxford-man.ox.ac](https://www.oxford-man.ox.ac.uk/wp-content/uploads/2020/11/Robust-learning-based-MPC-for-nonlinear-constrained-systems.pdf)\n\n## Viabilidade recursiva\n\nNão basta que o comando seja seguro **agora**. É necessário evitar estados dos quais não exista continuação segura.\n\nConsidere um drone voando em direção a uma parede. Um comando de aceleração pode respeitar todos os limites no instante atual, mas colocar o veículo tão próximo da parede que ele não tenha distância de frenagem suficiente no próximo ciclo.\n\nO NMPC detecta isso no horizonte:\n\n''' text\nt0: comando admissível\nt1: ainda sem colisão\nt2: frenagem insuficiente\nt3: colisão inevitável\n'''\n\nA **viabilidade recursiva** significa que, depois de aplicar o primeiro comando, deve continuar existindo uma solução admissível no ciclo seguinte. Arquiteturas MPC usam conjuntos terminais, tubos robustos, restrições apertadas ou outras construções para estabelecer essa propriedade. [arxiv](https://arxiv.org/html/1703.02761v1)\n\nO Laya, por si só, não possui esse conceito matemático.\n\n## Estabilidade\n\nUm classificador pode alternar entre decisões próximas:\n\n''' text\nciclo 1: virar à esquerda\nciclo 2: virar à direita\nciclo 3: virar à esquerda\n'''\n\nIsso pode gerar chattering, oscilação, desperdício energético ou instabilidade. Mesmo que cada comando individual pareça adequado, a sequência fechada pode ser ruim.\n\nUm NMPC utiliza:\n\n- custo de rastreamento;\n- custo de controle;\n- penalidade de variação do comando;\n- modelo dinâmico;\n- custo terminal;\n- conjunto terminal;\n- horizonte de predição.\n\nEsses elementos permitem analisar estabilidade e suavidade. Um classificador neural não oferece essas propriedades automaticamente.\n\n## Generalização e distribuição\n\nO fine-tuning aprende a partir de uma distribuição de cenários. Em operação, o ATAS pode encontrar:\n\n- formação inédita do enxame;\n- combinação nova de obstáculos;\n- falha simultânea de agentes;\n- atraso maior que o visto no treinamento;\n- condições de vento não representadas;\n- estado próximo do limite operacional;\n- configurações novas de FoV;\n- mensagens inconsistentes ou antigas.\n\nNessas situações, a rede ainda retorna alguma resposta. Confiança elevada não garante que a entrada esteja dentro da distribuição de treinamento.\n\nIsso é especialmente crítico em controle, porque pequenos erros repetidos podem se acumular na dinâmica. O NMPC também depende de um modelo imperfeito, mas essa incerteza pode ser representada por margens, tubos robustos, tightening e limites conhecidos.\n\n## Representação numérica\n\nO Laya lê uma sequência e responde a perguntas tipadas. Mesmo com JSON contendo números, sua arquitetura baseada em encoder não executa naturalmente:\n\n- integração de equações diferenciais;\n- álgebra de estados;\n- propagação de covariância;\n- cálculo confiável de distância de colisão;\n- otimização contínua;\n- verificação de desigualdades;\n- análise de alcançabilidade.\n\nPor exemplo:\n\n''' json\n{\n  \"distance_to_obstacle\": 4.2,\n  \"velocity\": 12.7,\n  \"max_deceleration\": 3.1\n}\n'''\n\nUm controlador precisa relacionar esses valores fisicamente. Uma aproximação simplificada da distância de frenagem é:\n\n\\[\nd_{\\mathrm{stop}}=\\frac{v^2}{2a_{\\max}}.\n\\]\n\nNesse exemplo:\n\n\\[\nd_{\\mathrm{stop}}\\approx\\frac{12.7^2}{2(3.1)}\\approx26\\text{ m},\n\\]\n\nmuito maior que 4,2 m. Não é adequado depender de um encoder textual para aprender implicitamente e aplicar com precisão esse tipo de relação em todas as combinações possíveis.\n\n## Latência\n\nMesmo aceitando os aproximadamente 32,8 ms divulgados, baixa latência não resolve a inadequação funcional. Um resultado pode ser rápido e ainda não estar:\n\n- fisicamente correto;\n- dentro dos limites;\n- livre de colisão;\n- dinamicamente executável;\n- estável;\n- sincronizado com o estado atual.\n\nAlém disso, 32,8 ms é uma medição em determinada configuração de hardware e benchmark, não um limite de pior caso na RTX A2000 compartilhada com Drake, ROS 2 e processamento geométrico.\n\nPara controle, importam principalmente:\n\n- latência de pior caso;\n- jitter;\n- P99/P99.9;\n- deadlines perdidos;\n- comportamento quando a inferência falha;\n- idade do estado usado na decisão.\n\n## Treinamento incompleto\n\nPara substituir o NMPC, seria necessário gerar dados que cobrissem um espaço combinatório muito amplo:\n\n- estados do drone;\n- estados dos vizinhos;\n- obstáculos;\n- velocidades;\n- vento;\n- bateria;\n- tarefas;\n- FoV;\n- conectividade;\n- atrasos;\n- falhas;\n- diferentes quantidades de drones.\n\nMesmo um grande conjunto de trajetórias do NMPC ensina apenas uma aproximação da política nos estados observados. Não garante comportamento correto entre amostras ou fora delas.\n\nAlém disso, se os rótulos forem produzidos pelo próprio NMPC, o Laya aprenderá uma aproximação do controlador e poderá introduzir erro sem adquirir automaticamente suas garantias.\n\n## O uso seguro\n\nIsso não significa que uma rede neural jamais possa aproximar MPC. Há pesquisas em **approximate MPC**, mas elas adicionam mecanismos de segurança:\n\n1. A rede prevê uma sequência completa de controles.\n2. Um verificador testa a sequência contra dinâmica e restrições.\n3. Uma trajetória segura convencional é mantida como fallback.\n4. A previsão neural só é usada se for factível e tiver custo aceitável.\n5. Caso contrário, aplica-se a solução segura.\n\nEssa estrutura pode oferecer garantias determinísticas apesar de erros de aproximação. Observe que, nesse caso, a rede **não substitui sozinha o MPC**; ela atua dentro de uma arquitetura MPC com verificação e fallback. [arxiv](https://arxiv.org/html/2304.09575v3)\n\n## Arquitetura adequada\n\nPara o ATAS:\n\n''' text\nLaya\n  ├── seleciona tarefa\n  ├── seleciona viewpoint\n  ├── seleciona modo de trajetória\n  ├── escolhe warm starts\n  ├── sugere pesos limitados\n  └── estima criticidade\n             │\n             ▼\nNMPC\n  ├── prediz estados\n  ├── otimiza comandos\n  ├── impõe dinâmica\n  ├── impõe restrições\n  └── produz trajetória nominal\n             │\n             ▼\nVerificador + safety filter\n             │\n             ▼\nAutopiloto / Drake\n'''\n\nUma evolução possível seria:\n\n''' text\nLaya → escolhe entre trajetórias pré-verificadas\n'''\n\nIsso é mais seguro do que:\n\n''' text\nLaya → gera diretamente thrust/rates\n'''\n\nOutra opção é permitir que o Laya selecione um dos controladores:\n\n''' text\nTRACK_VIEWPOINT\nAVOID_OBSTACLE\nHOLD_POSITION\nRETURN_HOME\nEMERGENCY_LAND\n'''\n\nCada modo continuaria executado por um controlador formal e protegido.\n\n## Em termos diretos\n\nO Laya pode responder bem:\n\n> “Qual dessas estratégias parece mais adequada para este estado?”\n\nO NMPC precisa responder:\n\n> “Qual sequência contínua de comandos, respeitando dinâmica e restrições durante todo o horizonte, minimiza o custo e mantém uma continuação segura?”\n\nEsses são problemas distintos. No ATAS, o Laya é adequado para **decisão estratégica e redução do espaço de busca**; o NMPC é necessário para **controle preditivo contínuo, viável e verificável**. Substituir integralmente o NMPC pelo Laya transferiria autoridade de voo a um classificador que não foi concebido para dinâmica, otimização contínua ou garantias de segurança.\n\n```",
        "clean": "Porque o **Laya é um classificador de decisões discretas sobre entradas estruturadas/textuais, não um controlador ótimo de sistemas dinâmicos**. Mesmo após fine-tuning, comandar diretamente um drone com suas respostas eliminaria mecanismos centrais do NMPC: predição temporal, aplicação explícita da dinâmica, satisfação de restrições, verificação de viabilidade e tratamento sistemático de obstáculos e interações entre drones.\n\n## Diferença fundamental\n\n| Capacidade | Laya | NMPC |\n|---|---|---|\n| Selecionar entre opções discretas | Sim | Não é seu papel principal |\n| Produzir scores/probabilidades | Sim | Produz custos e violações |\n| Predizer dinâmica no horizonte | Não nativamente | Sim |\n| Impor limites dos atuadores | Não | Sim |\n| Impor geofence e separação | Não | Sim |\n| Considerar estados futuros | Somente se codificados como atributos | Explicitamente |\n| Verificar factibilidade | Não | Sim |\n| Otimizar sequência de comandos | Não | Sim |\n| Oferecer garantias de estabilidade | Não | Possível sob hipóteses específicas |\n| Garantir satisfação de restrições | Não | Possível por construção |\n\nO Laya aceita perguntas tipadas dos tipos `choice`, `score` e `noul`, selecionando respostas e probabilidades a partir das opções apresentadas. Isso é adequado para decidir **qual tarefa priorizar** ou **qual warm start testar**, mas é diferente de resolver, em cada ciclo: [laya](https://laya.studio/learn/what-is-laya)\n\n\\[\n\\min_{\\mathbf u_{0:N-1}}\n\\sum_{k=0}^{N-1}\\ell(\\mathbf x_k,\\mathbf u_k)+\\ell_f(\\mathbf x_N)\n\\]\n\nsujeito a:\n\n\\[\n\\mathbf x_{k+1}=f(\\mathbf x_k,\\mathbf u_k),\n\\]\n\n\\[\n\\mathbf x_k\\in\\mathcal X,\\qquad\n\\mathbf u_k\\in\\mathcal U,\n\\]\n\n\\[\nd(\\mathbf x_k,\\mathcal O)\\geq d_{\\min},\n\\qquad\nd(\\mathbf x_{i,k},\\mathbf x_{j,k})\\geq d_{\\mathrm{sep}}.\n\\]\n\n## Dinâmica contínua\n\nOs comandos de um drone não são escolhas isoladas. Cada comando altera velocidade, posição, atitude e energia, influenciando todos os estados futuros.\n\nO Laya poderia escolher entre:\n\n''' text\nSUBIR\nDESCER\nVIRAR_ESQUERDA\nVIRAR_DIREITA\nMANTER\n'''\n\nMas essa classificação não responde:\n\n- Quanto subir?\n- Durante quanto tempo?\n- Com que aceleração?\n- Qual taxa de pitch é admissível?\n- A trajetória futura colidirá com outro drone?\n- Será possível cumprir a tarefa seguinte?\n- O drone manterá reserva energética para retornar?\n- A resposta continuará válida depois de atraso na comunicação?\n\nO NMPC responde a essas questões ao otimizar uma **sequência temporal** de comandos sobre um modelo dinâmico. Depois aplica somente o primeiro comando e refaz a otimização com o estado atualizado.\n\n## Restrições rígidas\n\nUma resposta neural pode parecer razoável e ainda violar:\n\n- thrust máximo;\n- taxa angular máxima;\n- envelope de voo;\n- altitude regulamentar;\n- geofence;\n- distância de segurança;\n- velocidade máxima;\n- reserva de bateria;\n- limites do gimbal;\n- região de estabilidade;\n- colisão futura que ainda não aparece no estado instantâneo.\n\nProbabilidade ou confiança não equivale a viabilidade física. Uma resposta com confiança de 99% ainda pode ser inadmissível.\n\nO NMPC pode incorporar essas condições como desigualdades explícitas. Formulações robustas conseguem estabelecer, sob hipóteses documentadas, satisfação de restrições, estabilidade e viabilidade recursiva. [oxford-man.ox.ac](https://www.oxford-man.ox.ac.uk/wp-content/uploads/2020/11/Robust-learning-based-MPC-for-nonlinear-constrained-systems.pdf)\n\n## Viabilidade recursiva\n\nNão basta que o comando seja seguro **agora**. É necessário evitar estados dos quais não exista continuação segura.\n\nConsidere um drone voando em direção a uma parede. Um comando de aceleração pode respeitar todos os limites no instante atual, mas colocar o veículo tão próximo da parede que ele não tenha distância de frenagem suficiente no próximo ciclo.\n\nO NMPC detecta isso no horizonte:\n\n''' text\nt0: comando admissível\nt1: ainda sem colisão\nt2: frenagem insuficiente\nt3: colisão inevitável\n'''\n\nA **viabilidade recursiva** significa que, depois de aplicar o primeiro comando, deve continuar existindo uma solução admissível no ciclo seguinte. Arquiteturas MPC usam conjuntos terminais, tubos robustos, restrições apertadas ou outras construções para estabelecer essa propriedade. [arxiv](https://arxiv.org/html/1703.02761v1)\n\nO Laya, por si só, não possui esse conceito matemático.\n\n## Estabilidade\n\nUm classificador pode alternar entre decisões próximas:\n\n''' text\nciclo 1: virar à esquerda\nciclo 2: virar à direita\nciclo 3: virar à esquerda\n'''\n\nIsso pode gerar chattering, oscilação, desperdício energético ou instabilidade. Mesmo que cada comando individual pareça adequado, a sequência fechada pode ser ruim.\n\nUm NMPC utiliza:\n\n- custo de rastreamento;\n- custo de controle;\n- penalidade de variação do comando;\n- modelo dinâmico;\n- custo terminal;\n- conjunto terminal;\n- horizonte de predição.\n\nEsses elementos permitem analisar estabilidade e suavidade. Um classificador neural não oferece essas propriedades automaticamente.\n\n## Generalização e distribuição\n\nO fine-tuning aprende a partir de uma distribuição de cenários. Em operação, o ATAS pode encontrar:\n\n- formação inédita do enxame;\n- combinação nova de obstáculos;\n- falha simultânea de agentes;\n- atraso maior que o visto no treinamento;\n- condições de vento não representadas;\n- estado próximo do limite operacional;\n- configurações novas de FoV;\n- mensagens inconsistentes ou antigas.\n\nNessas situações, a rede ainda retorna alguma resposta. Confiança elevada não garante que a entrada esteja dentro da distribuição de treinamento.\n\nIsso é especialmente crítico em controle, porque pequenos erros repetidos podem se acumular na dinâmica. O NMPC também depende de um modelo imperfeito, mas essa incerteza pode ser representada por margens, tubos robustos, tightening e limites conhecidos.\n\n## Representação numérica\n\nO Laya lê uma sequência e responde a perguntas tipadas. Mesmo com JSON contendo números, sua arquitetura baseada em encoder não executa naturalmente:\n\n- integração de equações diferenciais;\n- álgebra de estados;\n- propagação de covariância;\n- cálculo confiável de distância de colisão;\n- otimização contínua;\n- verificação de desigualdades;\n- análise de alcançabilidade.\n\nPor exemplo:\n\n''' json\n{\n  \"distance_to_obstacle\": 4.2,\n  \"velocity\": 12.7,\n  \"max_deceleration\": 3.1\n}\n'''\n\nUm controlador precisa relacionar esses valores fisicamente. Uma aproximação simplificada da distância de frenagem é:\n\n\\[\nd_{\\mathrm{stop}}=\\frac{v^2}{2a_{\\max}}.\n\\]\n\nNesse exemplo:\n\n\\[\nd_{\\mathrm{stop}}\\approx\\frac{12.7^2}{2(3.1)}\\approx26\\text{ m},\n\\]\n\nmuito maior que 4,2 m. Não é adequado depender de um encoder textual para aprender implicitamente e aplicar com precisão esse tipo de relação em todas as combinações possíveis.\n\n## Latência\n\nMesmo aceitando os aproximadamente 32,8 ms divulgados, baixa latência não resolve a inadequação funcional. Um resultado pode ser rápido e ainda não estar:\n\n- fisicamente correto;\n- dentro dos limites;\n- livre de colisão;\n- dinamicamente executável;\n- estável;\n- sincronizado com o estado atual.\n\nAlém disso, 32,8 ms é uma medição em determinada configuração de hardware e benchmark, não um limite de pior caso na RTX A2000 compartilhada com Drake, ROS 2 e processamento geométrico.\n\nPara controle, importam principalmente:\n\n- latência de pior caso;\n- jitter;\n- P99/P99.9;\n- deadlines perdidos;\n- comportamento quando a inferência falha;\n- idade do estado usado na decisão.\n\n## Treinamento incompleto\n\nPara substituir o NMPC, seria necessário gerar dados que cobrissem um espaço combinatório muito amplo:\n\n- estados do drone;\n- estados dos vizinhos;\n- obstáculos;\n- velocidades;\n- vento;\n- bateria;\n- tarefas;\n- FoV;\n- conectividade;\n- atrasos;\n- falhas;\n- diferentes quantidades de drones.\n\nMesmo um grande conjunto de trajetórias do NMPC ensina apenas uma aproximação da política nos estados observados. Não garante comportamento correto entre amostras ou fora delas.\n\nAlém disso, se os rótulos forem produzidos pelo próprio NMPC, o Laya aprenderá uma aproximação do controlador e poderá introduzir erro sem adquirir automaticamente suas garantias.\n\n## O uso seguro\n\nIsso não significa que uma rede neural jamais possa aproximar MPC. Há pesquisas em **approximate MPC**, mas elas adicionam mecanismos de segurança:\n\n1. A rede prevê uma sequência completa de controles.\n2. Um verificador testa a sequência contra dinâmica e restrições.\n3. Uma trajetória segura convencional é mantida como fallback.\n4. A previsão neural só é usada se for factível e tiver custo aceitável.\n5. Caso contrário, aplica-se a solução segura.\n\nEssa estrutura pode oferecer garantias determinísticas apesar de erros de aproximação. Observe que, nesse caso, a rede **não substitui sozinha o MPC**; ela atua dentro de uma arquitetura MPC com verificação e fallback. [arxiv](https://arxiv.org/html/2304.09575v3)\n\n## Arquitetura adequada\n\nPara o ATAS:\n\n''' text\nLaya\n  ├── seleciona tarefa\n  ├── seleciona viewpoint\n  ├── seleciona modo de trajetória\n  ├── escolhe warm starts\n  ├── sugere pesos limitados\n  └── estima criticidade\n             │\n             ▼\nNMPC\n  ├── prediz estados\n  ├── otimiza comandos\n  ├── impõe dinâmica\n  ├── impõe restrições\n  └── produz trajetória nominal\n             │\n             ▼\nVerificador + safety filter\n             │\n             ▼\nAutopiloto / Drake\n'''\n\nUma evolução possível seria:\n\n''' text\nLaya → escolhe entre trajetórias pré-verificadas\n'''\n\nIsso é mais seguro do que:\n\n''' text\nLaya → gera diretamente thrust/rates\n'''\n\nOutra opção é permitir que o Laya selecione um dos controladores:\n\n''' text\nTRACK_VIEWPOINT\nAVOID_OBSTACLE\nHOLD_POSITION\nRETURN_HOME\nEMERGENCY_LAND\n'''\n\nCada modo continuaria executado por um controlador formal e protegido.\n\n## Em termos diretos\n\nO Laya pode responder bem:\n\n> “Qual dessas estratégias parece mais adequada para este estado?”\n\nO NMPC precisa responder:\n\n> “Qual sequência contínua de comandos, respeitando dinâmica e restrições durante todo o horizonte, minimiza o custo e mantém uma continuação segura?”\n\nEsses são problemas distintos. No ATAS, o Laya é adequado para **decisão estratégica e redução do espaço de busca**; o NMPC é necessário para **controle preditivo contínuo, viável e verificável**. Substituir integralmente o NMPC pelo Laya transferiria autoridade de voo a um classificador que não foi concebido para dinâmica, otimização contínua ou garantias de segurança.",
        "chars_count": 10396,
        "lines_count": 303,
        "sections": [
          {
            "level": 2,
            "title": "Diferença fundamental",
            "anchor": "t4-diferen-a-fundamental"
          },
          {
            "level": 2,
            "title": "Dinâmica contínua",
            "anchor": "t4-din-mica-cont-nua"
          },
          {
            "level": 2,
            "title": "Restrições rígidas",
            "anchor": "t4-restri-es-r-gidas"
          },
          {
            "level": 2,
            "title": "Viabilidade recursiva",
            "anchor": "t4-viabilidade-recursiva"
          },
          {
            "level": 2,
            "title": "Estabilidade",
            "anchor": "t4-estabilidade"
          },
          {
            "level": 2,
            "title": "Generalização e distribuição",
            "anchor": "t4-generaliza-o-e-distribui-o"
          },
          {
            "level": 2,
            "title": "Representação numérica",
            "anchor": "t4-representa-o-num-rica"
          },
          {
            "level": 2,
            "title": "Latência",
            "anchor": "t4-lat-ncia"
          },
          {
            "level": 2,
            "title": "Treinamento incompleto",
            "anchor": "t4-treinamento-incompleto"
          },
          {
            "level": 2,
            "title": "O uso seguro",
            "anchor": "t4-o-uso-seguro"
          },
          {
            "level": 2,
            "title": "Arquitetura adequada",
            "anchor": "t4-arquitetura-adequada"
          },
          {
            "level": 2,
            "title": "Em termos diretos",
            "anchor": "t4-em-termos-diretos"
          }
        ],
        "tables_count": 1,
        "code_blocks_count": 8,
        "references_count": 0
      },
      "tables": [
        {
          "headers": [
            "Capacidade",
            "Laya",
            "NMPC"
          ],
          "rows": [
            [
              "Selecionar entre opções discretas",
              "Sim",
              "Não é seu papel principal"
            ],
            [
              "Produzir scores/probabilidades",
              "Sim",
              "Produz custos e violações"
            ],
            [
              "Predizer dinâmica no horizonte",
              "Não nativamente",
              "Sim"
            ],
            [
              "Impor limites dos atuadores",
              "Não",
              "Sim"
            ],
            [
              "Impor geofence e separação",
              "Não",
              "Sim"
            ],
            [
              "Considerar estados futuros",
              "Somente se codificados como atributos",
              "Explicitamente"
            ],
            [
              "Verificar factibilidade",
              "Não",
              "Sim"
            ],
            [
              "Otimizar sequência de comandos",
              "Não",
              "Sim"
            ],
            [
              "Oferecer garantias de estabilidade",
              "Não",
              "Possível sob hipóteses específicas"
            ],
            [
              "Garantir satisfação de restrições",
              "Não",
              "Possível por construção"
            ]
          ],
          "raw": "| Capacidade | Laya | NMPC |\n|---|---|---|\n| Selecionar entre opções discretas | Sim | Não é seu papel principal |\n| Produzir scores/probabilidades | Sim | Produz custos e violações |\n| Predizer dinâmica no horizonte | Não nativamente | Sim |\n| Impor limites dos atuadores | Não | Sim |\n| Impor geofence e separação | Não | Sim |\n| Considerar estados futuros | Somente se codificados como atributos | Explicitamente |\n| Verificar factibilidade | Não | Sim |\n| Otimizar sequência de comandos | Não | Sim |\n| Oferecer garantias de estabilidade | Não | Possível sob hipóteses específicas |\n| Garantir satisfação de restrições | Não | Possível por construção |"
        }
      ],
      "code_blocks": [
        {
          "lang": "text",
          "content": "SUBIR\nDESCER\nVIRAR_ESQUERDA\nVIRAR_DIREITA\nMANTER\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "t0: comando admissível\nt1: ainda sem colisão\nt2: frenagem insuficiente\nt3: colisão inevitável\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "ciclo 1: virar à esquerda\nciclo 2: virar à direita\nciclo 3: virar à esquerda\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "json",
          "content": "{\n  \"distance_to_obstacle\": 4.2,\n  \"velocity\": 12.7,\n  \"max_deceleration\": 3.1\n}\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Laya\n  ├── seleciona tarefa\n  ├── seleciona viewpoint\n  ├── seleciona modo de trajetória\n  ├── escolhe warm starts\n  ├── sugere pesos limitados\n  └── estima criticidade\n             │\n             ▼\nNMPC\n  ├── prediz estados\n  ├── otimiza comandos\n  ├── impõe dinâmica\n  ├── impõe restrições\n  └── produz trajetória nominal\n             │\n             ▼\nVerificador + safety filter\n             │\n             ▼\nAutopiloto / Drake\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Laya → escolhe entre trajetórias pré-verificadas\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "Laya → gera diretamente thrust/rates\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "text",
          "content": "TRACK_VIEWPOINT\nAVOID_OBSTACLE\nHOLD_POSITION\nRETURN_HOME\nEMERGENCY_LAND\n",
          "delimiter": "'''",
          "is_diagram": false
        }
      ],
      "references": []
    },
    {
      "id": 5,
      "title": "Resposta 5",
      "short_title": "Modelagem e Criação de Cenários 3D no Drake",
      "summary": "Workflow prático de engenharia para criar o mapa de simulação no Drake: modelagem no Blender, exportação glTF/OBJ, envelopamento em SDFormat (SDF) com separação visual/colisão e classes semânticas para label images.",
      "tags": [
        "Blender",
        "SDFormat",
        "SDF",
        "glTF",
        "Meshcat",
        "Label Images",
        "Cenário 3D"
      ],
      "color": "blue",
      "solicitacao": {
        "title": "Solicitação 5",
        "raw": "# Solicitação 5\n``` markdown\nFaça um guia completo, didático, passo a passo e detalhado de como posso criar um \"mapa\" para rodar essa simulação no Drake onde irei inserir edificações, obstáculos e elementos que deverão ser identificados ao longo da simulação desse sistema\n\nConsidere apresentar e definir quais as ferramenta e/ou softwares open source são mais indicada para criar esse \"mapa\".\n```",
        "clean": "Faça um guia completo, didático, passo a passo e detalhado de como posso criar um \"mapa\" para rodar essa simulação no Drake onde irei inserir edificações, obstáculos e elementos que deverão ser identificados ao longo da simulação desse sistema\n\nConsidere apresentar e definir quais as ferramenta e/ou softwares open source são mais indicada para criar esse \"mapa\".",
        "chars_count": 364,
        "lines_count": 3
      },
      "resposta": {
        "title": "Resposta 5",
        "raw": "# Resposta 5\n``` markdown\nSim — o caminho mais **adequado** para criar esse “mapa” no Drake é tratá-lo como uma **cena 3D modular**, composta por modelos estáticos e dinâmicos descritos em **SDFormat/URDF + meshes `.gltf`/`.obj`**, e não como um “mapa” no sentido GIS ou occupancy grid. No seu caso, o melhor fluxo open source é: **modelar o ambiente em Blender**, exportar as geometrias para **glTF/OBJ**, criar **wrappers SDFormat** para cada elemento relevante, e então montar a cena completa no Drake com `Parser`, `SceneGraph` e `MultibodyPlant`. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\n## Ferramentas indicadas\n\nAs ferramentas open source mais indicadas para esse trabalho são:\n\n| Ferramenta | Papel principal | Quando usar |\n|---|---|---|\n| **Blender** | Modelagem 3D do ambiente | Melhor opção geral para edifícios, ruas, obstáculos e organização visual do cenário. [docs.blender](https://docs.blender.org/manual/en/latest/addons/scene_gltf2.html) |\n| **Drake** | Simulação física e geométrica | Para carregar, posicionar, soldar e consultar os elementos da cena. [github](https://github.com/robotlocomotion) |\n| **Meshcat** | Visualização e depuração | Para inspecionar a cena no navegador durante o desenvolvimento. [github](https://github.com/robotlocomotion) |\n| **OpenSCAD** | Geometria paramétrica simples | Útil para obstáculos, volumes, torres, caixas e estruturas repetitivas. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export) |\n| **Meshlab** | Conversão/limpeza de malhas | Útil quando você recebe assets em formatos que precisam virar OBJ. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html) |\n\n### Recomendação prática\n\nPara o ATAS, a recomendação mais forte é:\n\n- **Blender** como ferramenta principal de criação do ambiente.\n- **SDFormat** como formato principal de descrição da cena.\n- **glTF** para geometria visual.\n- **Primitivas ou malhas simplificadas** para colisão e consultas geométricas.\n- **OpenSCAD** apenas como apoio para gerar obstáculos paramétricos simples.\n\nIsso é coerente com a documentação do Drake, que recomenda **SDFormat** para cenas mais complexas e indica **glTF como formato preferido para visualização**; OBJ também é bem suportado. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\n## Conceito do “mapa”\n\nNo Drake, o “mapa” do seu projeto deve ser organizado em três camadas:\n\n1. **Camada visual** — o que aparece na visualização.\n2. **Camada de colisão/proximidade** — volumes simplificados usados para contato e consultas geométricas.\n3. **Camada semântica/perceptiva** — elementos rotulados para saber o que cada drone “vê” ou não vê.\n\nEssa separação é importante porque o Drake distingue papéis geométricos, e um mesmo modelo pode carregar funções diferentes para ilustração, percepção e proximidade. Para seu caso, isso permite ter edifícios visualmente detalhados, mas com colisão simplificada e rótulos de percepção específicos. [github](https://github.com/robotlocomotion)\n\n## Estratégia recomendada\n\nA forma mais robusta de construir seu mapa é esta:\n\n1. Modelar o ambiente no Blender em **módulos**.\n2. Exportar cada módulo como mesh.\n3. Criar um arquivo **SDF por ativo** importante.\n4. Montar uma **cena mestre** no Drake que instancia esses módulos.\n5. Validar no Meshcat.\n6. Adicionar rótulos e metadados para FoV e detecção.\n\nOs módulos devem incluir, por exemplo:\n\n- terreno/base;\n- vias e áreas de circulação;\n- edificações;\n- muros e barreiras;\n- postes, árvores e obstáculos verticais;\n- veículos estáticos;\n- alvos e elementos que deverão ser identificados;\n- zonas semânticas, como entrada, cruzamento, doca ou corredor.\n\n## Passo a passo\n\n### 1. Defina o escopo do cenário\n\nAntes de abrir qualquer software, defina:\n\n- dimensão do ambiente em metros;\n- quantidade de edifícios;\n- largura de vias;\n- altura típica dos obstáculos;\n- objetos que interessam para percepção;\n- objetos irrelevantes para percepção, mas relevantes para oclusão;\n- quais elementos são estáticos e quais serão móveis.\n\nPara o ATAS, isso deve sair de requisitos funcionais, por exemplo:\n\n- o drone precisa observar vias laterais;\n- o robô terrestre precisa operar em corredores urbanos;\n- edifícios devem produzir oclusão realista;\n- postes e árvores podem criar pontos cegos;\n- certos objetos devem ser classificáveis como “alvos”.\n\nEssa etapa evita criar um cenário bonito, mas ruim para experimentos.\n\n### 2. Escolha a estrutura de diretórios\n\nUse um repositório organizado por ativos. Um exemplo:\n\n''' text\natas_sim/\n  models/\n    building_a/\n      model.sdf\n      meshes/\n        building_a_visual.glb\n        building_a_collision.obj\n    building_b/\n      model.sdf\n      meshes/\n        building_b_visual.glb\n        building_b_collision.obj\n    wall_segment/\n      model.sdf\n      meshes/\n        wall_visual.glb\n    pole/\n      model.sdf\n      meshes/\n        pole_visual.glb\n    target_object_01/\n      model.sdf\n      meshes/\n        target_visual.glb\n  scenes/\n    atas_city_block.dmd.yaml\n    atas_test_range.dmd.yaml\n  packages/\n    atas_environment/\n      package.xml\n'''\n\nO Drake aceita `package://` URLs por meio do `PackageMap` do `Parser`, então vale a pena estruturar o projeto como pacote desde cedo.\n\n### 3. Modele o ambiente no Blender\n\nNo Blender, modele os objetos em **escala real**, em metros. O Drake assume SI e, ao lidar com OBJ, assume vértices em metros.\n\nBoas práticas no Blender:\n\n- 1 unidade = 1 metro.\n- Origem de cada objeto bem posicionada.\n- Transformações aplicadas antes da exportação.\n- Nomes claros para objetos.\n- Separar objetos por função: prédio, muro, obstáculo, alvo.\n- Evitar malhas excessivamente pesadas.\n- Criar versões simplificadas para colisão, se necessário.\n\n### 4. Trabalhe com modularidade\n\nEm vez de modelar um bairro inteiro como uma única malha, crie blocos reutilizáveis:\n\n- `building_low_01`\n- `building_tall_01`\n- `wall_straight_02`\n- `road_segment_10m`\n- `tree_01`\n- `pole_camera_01`\n- `vehicle_parked_01`\n\nIsso facilita:\n\n- instanciamento repetido;\n- alterações rápidas;\n- testes A/B;\n- geração procedural futura;\n- controle de oclusões específicas.\n\nAlém disso, OBJ carregado diretamente como modelo no Drake exige um único objeto por arquivo, o que reforça a conveniência da modularização.\n\n### 5. Exporte para glTF/OBJ\n\nPara visualização, priorize **glTF/GLB**. O Drake recomenda glTF como formato preferido para visualização. O Blender exporta glTF 2.0 nativamente, inclusive como `.glb`, que embute malha e texturas em um único arquivo. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\nUse:\n\n- **`.glb`** para visual.\n- **`.obj`** ou primitivas para colisão simplificada.\n- Evite depender só de uma malha complexa para tudo.\n\nSe o ativo for simples e estático, um único visual `.glb` e uma colisão por caixas/cilindros no SDF costuma ser melhor do que usar a mesh inteira para colisão. [github](https://github.com/robotlocomotion)\n\n### 6. Crie wrappers SDFormat\n\nMesmo que o Drake possa carregar OBJ diretamente, isso usa hipóteses padrão de massa, escala e inércia. Para um ambiente organizado, o melhor é criar um `model.sdf` para cada ativo. [github](https://github.com/robotlocomotion)\n\nExemplo simplificado:\n\n''' xml\n<?xml version=\"1.0\"?>\n<sdf version=\"1.7\">\n  <model name=\"building_a\">\n    <static>true</static>\n    >\n      <visual name=\"visual\">\n        <geometry>\n          <mesh>\n            <uri>meshes/building_a_visual.glb</uri>\n          </mesh>\n        </geometry>\n      </visual>\n\n      llision name=\"collision\">\n        <pose>0 0 10 0 0 0</pose>\n        <geometry>\n          <box>\n            <size>20 15 20</size>\n          </box>\n        </geometry>\n      </collision>\n    </link>\n  </model>\n</sdf>\n'''\n\nPara edifícios e obstáculos fixos, use `<static>true</static>` quando apropriado. Para objetos puramente estruturais, isso simplifica a simulação.\n\n### 7. Separe visual de colisão\n\nEssa é uma das decisões mais importantes. A própria documentação do Drake recomenda usar malha para visual e primitivas ou aproximações mais simples para colisão quando possível, porque isso reduz custo computacional. [github](https://github.com/robotlocomotion)\n\nPara seu caso:\n\n- **Visual detalhado**: `.glb`\n- **Colisão/FoV rápido**: caixas, cilindros ou malhas simplificadas\n- **Percepção**: rótulos por classe de objeto\n\nExemplos:\n\n- prédio: visual detalhado, colisão por 1 ou 2 boxes;\n- árvore: visual detalhado, colisão por cilindro;\n- poste: visual detalhado, colisão por cilindro fino;\n- veículo estacionado: visual detalhado, colisão por box.\n\n## Montagem da cena\n\n### 8. Crie uma cena mestre\n\nNo lugar de um único arquivo enorme, use um arquivo de cena que instancia os modelos. O parser do Drake suporta SDF, URDF, MJCF, OBJ e também **Drake Model Directives** (`.dmd.yaml`), que são úteis para organizar cenas com múltiplos modelos.\n\nUma cena mestre deve:\n\n- incluir o terreno;\n- incluir prédios;\n- posicionar muros;\n- adicionar obstáculos;\n- definir poses iniciais;\n- nomear cada instância com clareza.\n\nEssa abordagem fica especialmente boa para cenários com vários drones, dois robôs terrestres e objetos de interesse espalhados.\n\n### 9. Carregue no Drake\n\nNo Drake, o fluxo base é:\n\n- criar `DiagramBuilder`;\n- usar `AddMultibodyPlantSceneGraph`;\n- criar `Parser`;\n- carregar os modelos;\n- soldar ao mundo o que for fixo;\n- `Finalize()`.\n\nEsse padrão está no tutorial oficial. [github](https://github.com/robotlocomotion)\n\nExemplo conceitual:\n\n''' python\nbuilder = DiagramBuilder()\nplant, scene_graph = AddMultibodyPlantSceneGraph(builder, time_step=0.01)\nparser = Parser(plant, scene_graph)\n\nparser.AddModels(\"scenes/atas_city_block.dmd.yaml\")\n\nplant.Finalize()\n'''\n\n### 10. Use Meshcat para depurar\n\nO Meshcat é essencial para validar:\n\n- escala do cenário;\n- orientação dos meshes;\n- alinhamento dos obstáculos;\n- poses dos alvos;\n- sobreposição indevida;\n- colisão exagerada;\n- problemas de origem/local frame.\n\nO Drake oferece integração direta com Meshcat para visualização interativa. [github](https://github.com/robotlocomotion)\n\n## Elementos que deverão ser identificados\n\n### 11. Modele classes semânticas\n\nComo você precisa saber o que deve ser identificado ao longo da simulação, seus objetos precisam ser pensados como **classes do cenário**:\n\n- `building`\n- `wall`\n- `tree`\n- `pole`\n- `ground_robot`\n- `drone`\n- `civil_vehicle`\n- `target_person`\n- `target_object`\n- `restricted_zone_marker`\n\nEssas classes podem ser refletidas:\n\n- no nome do modelo;\n- no nome das geometrias;\n- em tabelas auxiliares do projeto;\n- em rótulos de renderização.\n\n### 12. Use label images quando fizer sentido\n\nSe em algum momento você quiser validar presença/ausência no campo de visão por rasterização, o Drake suporta **label images**, em que cada pixel recebe um `RenderLabel` associado à geometria renderizada. Isso é muito útil para: [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)\n\n- verificar quais classes aparecem no FoV;\n- calcular porcentagem visível de um objeto;\n- distinguir objetos relevantes de “background”;\n- marcar objetos que não devem entrar na imagem semântica.\n\nO próprio Drake define labels reservados como `kEmpty`, `kDontCare` e `kDoNotRender`. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)\n\nPara o ATAS, isso permite uma arquitetura híbrida:\n\n- FoV geométrico analítico para decisão rápida;\n- label image de baixa resolução para validação de visibilidade e oclusão.\n\n## Três estratégias de criação do mapa\n\n### Estratégia A: Blender + SDFormat + glTF\n\nÉ a melhor estratégia geral. [github](https://github.com/robotlocomotion)\n\n**Fluxo:**\n\n1. Modelar no Blender.\n2. Exportar `.glb`.\n3. Criar `model.sdf`.\n4. Instanciar no Drake.\n5. Validar no Meshcat.\n\n**Vantagens:**\n\n- Melhor equilíbrio entre qualidade e esforço.\n- Excelente para ambiente urbano/semiurbano.\n- Bom controle de semântica e modularidade.\n- Totalmente open source.\n\n**Limitações:**\n\n- Exige disciplina na organização de assets.\n- Colisão precisa ser simplificada manualmente.\n\n### Estratégia B: OpenSCAD + SDF\n\nBoa para mapas geométricos e paramétricos simples. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export)\n\n**Fluxo:**\n\n1. Gerar prédios e obstáculos por parâmetros.\n2. Exportar OBJ/STL.\n3. Criar wrappers SDF.\n4. Montar cena no Drake.\n\n**Vantagens:**\n\n- Excelente reprodutibilidade.\n- Muito bom para estudos sistemáticos.\n- Fácil variar altura, largura, espaçamento.\n\n**Limitações:**\n\n- Estética pior.\n- Pouco prático para cenas visuais complexas.\n- Menos amigável para composição urbana rica.\n\n### Estratégia C: Drake-first com primitivas\n\nBoa para MVP e validação inicial. [github](https://github.com/robotlocomotion)\n\n**Fluxo:**\n\n1. Criar tudo com caixas, cilindros e planos.\n2. Gerar cena direto em SDF.\n3. Soldar ao mundo.\n4. Validar FoV e oclusão.\n\n**Vantagens:**\n\n- Implementação mais rápida.\n- Leve para laptop.\n- Ideal para a versão alfa.\n\n**Limitações:**\n\n- Pouco realismo visual.\n- Menor fidelidade geométrica.\n- Menos útil para demonstrações.\n\n## Recomendação para o seu projeto\n\nPara o ATAS, a melhor estratégia é **combinar C e A**:\n\n- começar com **Drake-first com primitivas** para validar rapidamente FoV, oclusão e integração ROS 2;\n- evoluir para **Blender + SDFormat + glTF** assim que a lógica principal estiver estável.\n\nEssa combinação reduz risco técnico. Você valida primeiro o sistema de otimização, coordenação e percepção geométrica sem ficar preso à criação artística do mapa. Depois, substitui blocos simples por ativos mais realistas.\n\n## Procedimento sugerido\n\n### Fase 1: MVP do mapa\n\n1. Criar plano do solo.\n2. Inserir 4 a 8 edifícios como boxes.\n3. Inserir muros e corredores.\n4. Inserir postes e obstáculos cilíndricos.\n5. Inserir alvos como boxes rotulados.\n6. Validar FoV dos drones.\n7. Medir desempenho.\n\n### Fase 2: Mapa modular\n\n1. Modelar ativos principais no Blender.\n2. Exportar `.glb`.\n3. Criar `model.sdf` para cada ativo.\n4. Substituir boxes por ativos modulares.\n5. Ajustar colisão simplificada.\n6. Revisar rótulos semânticos.\n\n### Fase 3: Mapa experimental\n\n1. Criar múltiplos cenários.\n2. Variações de densidade urbana.\n3. Variações de altura.\n4. Variações de oclusão.\n5. Variações de quantidade de alvos.\n6. Variações de zonas críticas para o ATAS.\n\n## Cuidados importantes\n\n- Trabalhe sempre em **metros**.\n- Não use uma única mesh gigante para tudo.\n- Não use colisão detalhada demais sem necessidade.\n- Nomeie todos os modelos de modo consistente.\n- Mantenha ativos visuais e de colisão separados.\n- Faça testes frequentes no Meshcat. [github](https://github.com/robotlocomotion)\n- Use SDFormat em vez de URDF para cenas mais complexas. [github](https://github.com/robotlocomotion)\n\n## Ferramenta mais indicada\n\nSe você quiser escolher **uma** ferramenta principal para criar o mapa, a melhor opção é **Blender**. Ele é open source, exporta glTF nativamente, permite modelagem modular de ambientes e se encaixa bem no fluxo recomendado pelo Drake para uso de meshes em visualização. [github](https://github.com/robotlocomotion)\n\nSe o objetivo imediato for só validar rápido a feature do ATAS, a melhor opção inicial é **criar o mapa diretamente no Drake com primitivas e SDF**, e só depois migrar para Blender.\n\nPosso, no próximo passo, te entregar um **template completo de estrutura de pastas + exemplos de `model.sdf` + um arquivo de cena inicial para um quarteirão urbano do ATAS em Drake**.\n```",
        "clean": "Sim — o caminho mais **adequado** para criar esse “mapa” no Drake é tratá-lo como uma **cena 3D modular**, composta por modelos estáticos e dinâmicos descritos em **SDFormat/URDF + meshes `.gltf`/`.obj`**, e não como um “mapa” no sentido GIS ou occupancy grid. No seu caso, o melhor fluxo open source é: **modelar o ambiente em Blender**, exportar as geometrias para **glTF/OBJ**, criar **wrappers SDFormat** para cada elemento relevante, e então montar a cena completa no Drake com `Parser`, `SceneGraph` e `MultibodyPlant`. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\n## Ferramentas indicadas\n\nAs ferramentas open source mais indicadas para esse trabalho são:\n\n| Ferramenta | Papel principal | Quando usar |\n|---|---|---|\n| **Blender** | Modelagem 3D do ambiente | Melhor opção geral para edifícios, ruas, obstáculos e organização visual do cenário. [docs.blender](https://docs.blender.org/manual/en/latest/addons/scene_gltf2.html) |\n| **Drake** | Simulação física e geométrica | Para carregar, posicionar, soldar e consultar os elementos da cena. [github](https://github.com/robotlocomotion) |\n| **Meshcat** | Visualização e depuração | Para inspecionar a cena no navegador durante o desenvolvimento. [github](https://github.com/robotlocomotion) |\n| **OpenSCAD** | Geometria paramétrica simples | Útil para obstáculos, volumes, torres, caixas e estruturas repetitivas. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export) |\n| **Meshlab** | Conversão/limpeza de malhas | Útil quando você recebe assets em formatos que precisam virar OBJ. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html) |\n\n### Recomendação prática\n\nPara o ATAS, a recomendação mais forte é:\n\n- **Blender** como ferramenta principal de criação do ambiente.\n- **SDFormat** como formato principal de descrição da cena.\n- **glTF** para geometria visual.\n- **Primitivas ou malhas simplificadas** para colisão e consultas geométricas.\n- **OpenSCAD** apenas como apoio para gerar obstáculos paramétricos simples.\n\nIsso é coerente com a documentação do Drake, que recomenda **SDFormat** para cenas mais complexas e indica **glTF como formato preferido para visualização**; OBJ também é bem suportado. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\n## Conceito do “mapa”\n\nNo Drake, o “mapa” do seu projeto deve ser organizado em três camadas:\n\n1. **Camada visual** — o que aparece na visualização.\n2. **Camada de colisão/proximidade** — volumes simplificados usados para contato e consultas geométricas.\n3. **Camada semântica/perceptiva** — elementos rotulados para saber o que cada drone “vê” ou não vê.\n\nEssa separação é importante porque o Drake distingue papéis geométricos, e um mesmo modelo pode carregar funções diferentes para ilustração, percepção e proximidade. Para seu caso, isso permite ter edifícios visualmente detalhados, mas com colisão simplificada e rótulos de percepção específicos. [github](https://github.com/robotlocomotion)\n\n## Estratégia recomendada\n\nA forma mais robusta de construir seu mapa é esta:\n\n1. Modelar o ambiente no Blender em **módulos**.\n2. Exportar cada módulo como mesh.\n3. Criar um arquivo **SDF por ativo** importante.\n4. Montar uma **cena mestre** no Drake que instancia esses módulos.\n5. Validar no Meshcat.\n6. Adicionar rótulos e metadados para FoV e detecção.\n\nOs módulos devem incluir, por exemplo:\n\n- terreno/base;\n- vias e áreas de circulação;\n- edificações;\n- muros e barreiras;\n- postes, árvores e obstáculos verticais;\n- veículos estáticos;\n- alvos e elementos que deverão ser identificados;\n- zonas semânticas, como entrada, cruzamento, doca ou corredor.\n\n## Passo a passo\n\n### 1. Defina o escopo do cenário\n\nAntes de abrir qualquer software, defina:\n\n- dimensão do ambiente em metros;\n- quantidade de edifícios;\n- largura de vias;\n- altura típica dos obstáculos;\n- objetos que interessam para percepção;\n- objetos irrelevantes para percepção, mas relevantes para oclusão;\n- quais elementos são estáticos e quais serão móveis.\n\nPara o ATAS, isso deve sair de requisitos funcionais, por exemplo:\n\n- o drone precisa observar vias laterais;\n- o robô terrestre precisa operar em corredores urbanos;\n- edifícios devem produzir oclusão realista;\n- postes e árvores podem criar pontos cegos;\n- certos objetos devem ser classificáveis como “alvos”.\n\nEssa etapa evita criar um cenário bonito, mas ruim para experimentos.\n\n### 2. Escolha a estrutura de diretórios\n\nUse um repositório organizado por ativos. Um exemplo:\n\n''' text\natas_sim/\n  models/\n    building_a/\n      model.sdf\n      meshes/\n        building_a_visual.glb\n        building_a_collision.obj\n    building_b/\n      model.sdf\n      meshes/\n        building_b_visual.glb\n        building_b_collision.obj\n    wall_segment/\n      model.sdf\n      meshes/\n        wall_visual.glb\n    pole/\n      model.sdf\n      meshes/\n        pole_visual.glb\n    target_object_01/\n      model.sdf\n      meshes/\n        target_visual.glb\n  scenes/\n    atas_city_block.dmd.yaml\n    atas_test_range.dmd.yaml\n  packages/\n    atas_environment/\n      package.xml\n'''\n\nO Drake aceita `package://` URLs por meio do `PackageMap` do `Parser`, então vale a pena estruturar o projeto como pacote desde cedo.\n\n### 3. Modele o ambiente no Blender\n\nNo Blender, modele os objetos em **escala real**, em metros. O Drake assume SI e, ao lidar com OBJ, assume vértices em metros.\n\nBoas práticas no Blender:\n\n- 1 unidade = 1 metro.\n- Origem de cada objeto bem posicionada.\n- Transformações aplicadas antes da exportação.\n- Nomes claros para objetos.\n- Separar objetos por função: prédio, muro, obstáculo, alvo.\n- Evitar malhas excessivamente pesadas.\n- Criar versões simplificadas para colisão, se necessário.\n\n### 4. Trabalhe com modularidade\n\nEm vez de modelar um bairro inteiro como uma única malha, crie blocos reutilizáveis:\n\n- `building_low_01`\n- `building_tall_01`\n- `wall_straight_02`\n- `road_segment_10m`\n- `tree_01`\n- `pole_camera_01`\n- `vehicle_parked_01`\n\nIsso facilita:\n\n- instanciamento repetido;\n- alterações rápidas;\n- testes A/B;\n- geração procedural futura;\n- controle de oclusões específicas.\n\nAlém disso, OBJ carregado diretamente como modelo no Drake exige um único objeto por arquivo, o que reforça a conveniência da modularização.\n\n### 5. Exporte para glTF/OBJ\n\nPara visualização, priorize **glTF/GLB**. O Drake recomenda glTF como formato preferido para visualização. O Blender exporta glTF 2.0 nativamente, inclusive como `.glb`, que embute malha e texturas em um único arquivo. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)\n\nUse:\n\n- **`.glb`** para visual.\n- **`.obj`** ou primitivas para colisão simplificada.\n- Evite depender só de uma malha complexa para tudo.\n\nSe o ativo for simples e estático, um único visual `.glb` e uma colisão por caixas/cilindros no SDF costuma ser melhor do que usar a mesh inteira para colisão. [github](https://github.com/robotlocomotion)\n\n### 6. Crie wrappers SDFormat\n\nMesmo que o Drake possa carregar OBJ diretamente, isso usa hipóteses padrão de massa, escala e inércia. Para um ambiente organizado, o melhor é criar um `model.sdf` para cada ativo. [github](https://github.com/robotlocomotion)\n\nExemplo simplificado:\n\n''' xml\n<?xml version=\"1.0\"?>\n<sdf version=\"1.7\">\n  <model name=\"building_a\">\n    <static>true</static>\n    >\n      <visual name=\"visual\">\n        <geometry>\n          <mesh>\n            <uri>meshes/building_a_visual.glb</uri>\n          </mesh>\n        </geometry>\n      </visual>\n\n      llision name=\"collision\">\n        <pose>0 0 10 0 0 0</pose>\n        <geometry>\n          <box>\n            <size>20 15 20</size>\n          </box>\n        </geometry>\n      </collision>\n    </link>\n  </model>\n</sdf>\n'''\n\nPara edifícios e obstáculos fixos, use `<static>true</static>` quando apropriado. Para objetos puramente estruturais, isso simplifica a simulação.\n\n### 7. Separe visual de colisão\n\nEssa é uma das decisões mais importantes. A própria documentação do Drake recomenda usar malha para visual e primitivas ou aproximações mais simples para colisão quando possível, porque isso reduz custo computacional. [github](https://github.com/robotlocomotion)\n\nPara seu caso:\n\n- **Visual detalhado**: `.glb`\n- **Colisão/FoV rápido**: caixas, cilindros ou malhas simplificadas\n- **Percepção**: rótulos por classe de objeto\n\nExemplos:\n\n- prédio: visual detalhado, colisão por 1 ou 2 boxes;\n- árvore: visual detalhado, colisão por cilindro;\n- poste: visual detalhado, colisão por cilindro fino;\n- veículo estacionado: visual detalhado, colisão por box.\n\n## Montagem da cena\n\n### 8. Crie uma cena mestre\n\nNo lugar de um único arquivo enorme, use um arquivo de cena que instancia os modelos. O parser do Drake suporta SDF, URDF, MJCF, OBJ e também **Drake Model Directives** (`.dmd.yaml`), que são úteis para organizar cenas com múltiplos modelos.\n\nUma cena mestre deve:\n\n- incluir o terreno;\n- incluir prédios;\n- posicionar muros;\n- adicionar obstáculos;\n- definir poses iniciais;\n- nomear cada instância com clareza.\n\nEssa abordagem fica especialmente boa para cenários com vários drones, dois robôs terrestres e objetos de interesse espalhados.\n\n### 9. Carregue no Drake\n\nNo Drake, o fluxo base é:\n\n- criar `DiagramBuilder`;\n- usar `AddMultibodyPlantSceneGraph`;\n- criar `Parser`;\n- carregar os modelos;\n- soldar ao mundo o que for fixo;\n- `Finalize()`.\n\nEsse padrão está no tutorial oficial. [github](https://github.com/robotlocomotion)\n\nExemplo conceitual:\n\n''' python\nbuilder = DiagramBuilder()\nplant, scene_graph = AddMultibodyPlantSceneGraph(builder, time_step=0.01)\nparser = Parser(plant, scene_graph)\n\nparser.AddModels(\"scenes/atas_city_block.dmd.yaml\")\n\nplant.Finalize()\n'''\n\n### 10. Use Meshcat para depurar\n\nO Meshcat é essencial para validar:\n\n- escala do cenário;\n- orientação dos meshes;\n- alinhamento dos obstáculos;\n- poses dos alvos;\n- sobreposição indevida;\n- colisão exagerada;\n- problemas de origem/local frame.\n\nO Drake oferece integração direta com Meshcat para visualização interativa. [github](https://github.com/robotlocomotion)\n\n## Elementos que deverão ser identificados\n\n### 11. Modele classes semânticas\n\nComo você precisa saber o que deve ser identificado ao longo da simulação, seus objetos precisam ser pensados como **classes do cenário**:\n\n- `building`\n- `wall`\n- `tree`\n- `pole`\n- `ground_robot`\n- `drone`\n- `civil_vehicle`\n- `target_person`\n- `target_object`\n- `restricted_zone_marker`\n\nEssas classes podem ser refletidas:\n\n- no nome do modelo;\n- no nome das geometrias;\n- em tabelas auxiliares do projeto;\n- em rótulos de renderização.\n\n### 12. Use label images quando fizer sentido\n\nSe em algum momento você quiser validar presença/ausência no campo de visão por rasterização, o Drake suporta **label images**, em que cada pixel recebe um `RenderLabel` associado à geometria renderizada. Isso é muito útil para: [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)\n\n- verificar quais classes aparecem no FoV;\n- calcular porcentagem visível de um objeto;\n- distinguir objetos relevantes de “background”;\n- marcar objetos que não devem entrar na imagem semântica.\n\nO próprio Drake define labels reservados como `kEmpty`, `kDontCare` e `kDoNotRender`. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)\n\nPara o ATAS, isso permite uma arquitetura híbrida:\n\n- FoV geométrico analítico para decisão rápida;\n- label image de baixa resolução para validação de visibilidade e oclusão.\n\n## Três estratégias de criação do mapa\n\n### Estratégia A: Blender + SDFormat + glTF\n\nÉ a melhor estratégia geral. [github](https://github.com/robotlocomotion)\n\n**Fluxo:**\n\n1. Modelar no Blender.\n2. Exportar `.glb`.\n3. Criar `model.sdf`.\n4. Instanciar no Drake.\n5. Validar no Meshcat.\n\n**Vantagens:**\n\n- Melhor equilíbrio entre qualidade e esforço.\n- Excelente para ambiente urbano/semiurbano.\n- Bom controle de semântica e modularidade.\n- Totalmente open source.\n\n**Limitações:**\n\n- Exige disciplina na organização de assets.\n- Colisão precisa ser simplificada manualmente.\n\n### Estratégia B: OpenSCAD + SDF\n\nBoa para mapas geométricos e paramétricos simples. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export)\n\n**Fluxo:**\n\n1. Gerar prédios e obstáculos por parâmetros.\n2. Exportar OBJ/STL.\n3. Criar wrappers SDF.\n4. Montar cena no Drake.\n\n**Vantagens:**\n\n- Excelente reprodutibilidade.\n- Muito bom para estudos sistemáticos.\n- Fácil variar altura, largura, espaçamento.\n\n**Limitações:**\n\n- Estética pior.\n- Pouco prático para cenas visuais complexas.\n- Menos amigável para composição urbana rica.\n\n### Estratégia C: Drake-first com primitivas\n\nBoa para MVP e validação inicial. [github](https://github.com/robotlocomotion)\n\n**Fluxo:**\n\n1. Criar tudo com caixas, cilindros e planos.\n2. Gerar cena direto em SDF.\n3. Soldar ao mundo.\n4. Validar FoV e oclusão.\n\n**Vantagens:**\n\n- Implementação mais rápida.\n- Leve para laptop.\n- Ideal para a versão alfa.\n\n**Limitações:**\n\n- Pouco realismo visual.\n- Menor fidelidade geométrica.\n- Menos útil para demonstrações.\n\n## Recomendação para o seu projeto\n\nPara o ATAS, a melhor estratégia é **combinar C e A**:\n\n- começar com **Drake-first com primitivas** para validar rapidamente FoV, oclusão e integração ROS 2;\n- evoluir para **Blender + SDFormat + glTF** assim que a lógica principal estiver estável.\n\nEssa combinação reduz risco técnico. Você valida primeiro o sistema de otimização, coordenação e percepção geométrica sem ficar preso à criação artística do mapa. Depois, substitui blocos simples por ativos mais realistas.\n\n## Procedimento sugerido\n\n### Fase 1: MVP do mapa\n\n1. Criar plano do solo.\n2. Inserir 4 a 8 edifícios como boxes.\n3. Inserir muros e corredores.\n4. Inserir postes e obstáculos cilíndricos.\n5. Inserir alvos como boxes rotulados.\n6. Validar FoV dos drones.\n7. Medir desempenho.\n\n### Fase 2: Mapa modular\n\n1. Modelar ativos principais no Blender.\n2. Exportar `.glb`.\n3. Criar `model.sdf` para cada ativo.\n4. Substituir boxes por ativos modulares.\n5. Ajustar colisão simplificada.\n6. Revisar rótulos semânticos.\n\n### Fase 3: Mapa experimental\n\n1. Criar múltiplos cenários.\n2. Variações de densidade urbana.\n3. Variações de altura.\n4. Variações de oclusão.\n5. Variações de quantidade de alvos.\n6. Variações de zonas críticas para o ATAS.\n\n## Cuidados importantes\n\n- Trabalhe sempre em **metros**.\n- Não use uma única mesh gigante para tudo.\n- Não use colisão detalhada demais sem necessidade.\n- Nomeie todos os modelos de modo consistente.\n- Mantenha ativos visuais e de colisão separados.\n- Faça testes frequentes no Meshcat. [github](https://github.com/robotlocomotion)\n- Use SDFormat em vez de URDF para cenas mais complexas. [github](https://github.com/robotlocomotion)\n\n## Ferramenta mais indicada\n\nSe você quiser escolher **uma** ferramenta principal para criar o mapa, a melhor opção é **Blender**. Ele é open source, exporta glTF nativamente, permite modelagem modular de ambientes e se encaixa bem no fluxo recomendado pelo Drake para uso de meshes em visualização. [github](https://github.com/robotlocomotion)\n\nSe o objetivo imediato for só validar rápido a feature do ATAS, a melhor opção inicial é **criar o mapa diretamente no Drake com primitivas e SDF**, e só depois migrar para Blender.\n\nPosso, no próximo passo, te entregar um **template completo de estrutura de pastas + exemplos de `model.sdf` + um arquivo de cena inicial para um quarteirão urbano do ATAS em Drake**.",
        "chars_count": 15579,
        "lines_count": 445,
        "sections": [
          {
            "level": 2,
            "title": "Ferramentas indicadas",
            "anchor": "t5-ferramentas-indicadas"
          },
          {
            "level": 3,
            "title": "Recomendação prática",
            "anchor": "t5-recomenda-o-pr-tica"
          },
          {
            "level": 2,
            "title": "Conceito do “mapa”",
            "anchor": "t5-conceito-do-mapa"
          },
          {
            "level": 2,
            "title": "Estratégia recomendada",
            "anchor": "t5-estrat-gia-recomendada"
          },
          {
            "level": 2,
            "title": "Passo a passo",
            "anchor": "t5-passo-a-passo"
          },
          {
            "level": 3,
            "title": "1. Defina o escopo do cenário",
            "anchor": "t5-1-defina-o-escopo-do-cen-rio"
          },
          {
            "level": 3,
            "title": "2. Escolha a estrutura de diretórios",
            "anchor": "t5-2-escolha-a-estrutura-de-diret-rios"
          },
          {
            "level": 3,
            "title": "3. Modele o ambiente no Blender",
            "anchor": "t5-3-modele-o-ambiente-no-blender"
          },
          {
            "level": 3,
            "title": "4. Trabalhe com modularidade",
            "anchor": "t5-4-trabalhe-com-modularidade"
          },
          {
            "level": 3,
            "title": "5. Exporte para glTF/OBJ",
            "anchor": "t5-5-exporte-para-gltf-obj"
          },
          {
            "level": 3,
            "title": "6. Crie wrappers SDFormat",
            "anchor": "t5-6-crie-wrappers-sdformat"
          },
          {
            "level": 3,
            "title": "7. Separe visual de colisão",
            "anchor": "t5-7-separe-visual-de-colis-o"
          },
          {
            "level": 2,
            "title": "Montagem da cena",
            "anchor": "t5-montagem-da-cena"
          },
          {
            "level": 3,
            "title": "8. Crie uma cena mestre",
            "anchor": "t5-8-crie-uma-cena-mestre"
          },
          {
            "level": 3,
            "title": "9. Carregue no Drake",
            "anchor": "t5-9-carregue-no-drake"
          },
          {
            "level": 3,
            "title": "10. Use Meshcat para depurar",
            "anchor": "t5-10-use-meshcat-para-depurar"
          },
          {
            "level": 2,
            "title": "Elementos que deverão ser identificados",
            "anchor": "t5-elementos-que-dever-o-ser-identificados"
          },
          {
            "level": 3,
            "title": "11. Modele classes semânticas",
            "anchor": "t5-11-modele-classes-sem-nticas"
          },
          {
            "level": 3,
            "title": "12. Use label images quando fizer sentido",
            "anchor": "t5-12-use-label-images-quando-fizer-sentido"
          },
          {
            "level": 2,
            "title": "Três estratégias de criação do mapa",
            "anchor": "t5-tr-s-estrat-gias-de-cria-o-do-mapa"
          },
          {
            "level": 3,
            "title": "Estratégia A: Blender + SDFormat + glTF",
            "anchor": "t5-estrat-gia-a-blender-sdformat-gltf"
          },
          {
            "level": 3,
            "title": "Estratégia B: OpenSCAD + SDF",
            "anchor": "t5-estrat-gia-b-openscad-sdf"
          },
          {
            "level": 3,
            "title": "Estratégia C: Drake-first com primitivas",
            "anchor": "t5-estrat-gia-c-drake-first-com-primitivas"
          },
          {
            "level": 2,
            "title": "Recomendação para o seu projeto",
            "anchor": "t5-recomenda-o-para-o-seu-projeto"
          },
          {
            "level": 2,
            "title": "Procedimento sugerido",
            "anchor": "t5-procedimento-sugerido"
          },
          {
            "level": 3,
            "title": "Fase 1: MVP do mapa",
            "anchor": "t5-fase-1-mvp-do-mapa"
          },
          {
            "level": 3,
            "title": "Fase 2: Mapa modular",
            "anchor": "t5-fase-2-mapa-modular"
          },
          {
            "level": 3,
            "title": "Fase 3: Mapa experimental",
            "anchor": "t5-fase-3-mapa-experimental"
          },
          {
            "level": 2,
            "title": "Cuidados importantes",
            "anchor": "t5-cuidados-importantes"
          },
          {
            "level": 2,
            "title": "Ferramenta mais indicada",
            "anchor": "t5-ferramenta-mais-indicada"
          }
        ],
        "tables_count": 1,
        "code_blocks_count": 3,
        "references_count": 0
      },
      "tables": [
        {
          "headers": [
            "Ferramenta",
            "Papel principal",
            "Quando usar"
          ],
          "rows": [
            [
              "**Blender**",
              "Modelagem 3D do ambiente",
              "Melhor opção geral para edifícios, ruas, obstáculos e organização visual do cenário. [docs.blender](https://docs.blender.org/manual/en/latest/addons/scene_gltf2.html)"
            ],
            [
              "**Drake**",
              "Simulação física e geométrica",
              "Para carregar, posicionar, soldar e consultar os elementos da cena. [github](https://github.com/robotlocomotion)"
            ],
            [
              "**Meshcat**",
              "Visualização e depuração",
              "Para inspecionar a cena no navegador durante o desenvolvimento. [github](https://github.com/robotlocomotion)"
            ],
            [
              "**OpenSCAD**",
              "Geometria paramétrica simples",
              "Útil para obstáculos, volumes, torres, caixas e estruturas repetitivas. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export)"
            ],
            [
              "**Meshlab**",
              "Conversão/limpeza de malhas",
              "Útil quando você recebe assets em formatos que precisam virar OBJ. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)"
            ]
          ],
          "raw": "| Ferramenta | Papel principal | Quando usar |\n|---|---|---|\n| **Blender** | Modelagem 3D do ambiente | Melhor opção geral para edifícios, ruas, obstáculos e organização visual do cenário. [docs.blender](https://docs.blender.org/manual/en/latest/addons/scene_gltf2.html) |\n| **Drake** | Simulação física e geométrica | Para carregar, posicionar, soldar e consultar os elementos da cena. [github](https://github.com/robotlocomotion) |\n| **Meshcat** | Visualização e depuração | Para inspecionar a cena no navegador durante o desenvolvimento. [github](https://github.com/robotlocomotion) |\n| **OpenSCAD** | Geometria paramétrica simples | Útil para obstáculos, volumes, torres, caixas e estruturas repetitivas. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export) |\n| **Meshlab** | Conversão/limpeza de malhas | Útil quando você recebe assets em formatos que precisam virar OBJ. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html) |"
        }
      ],
      "code_blocks": [
        {
          "lang": "text",
          "content": "atas_sim/\n  models/\n    building_a/\n      model.sdf\n      meshes/\n        building_a_visual.glb\n        building_a_collision.obj\n    building_b/\n      model.sdf\n      meshes/\n        building_b_visual.glb\n        building_b_collision.obj\n    wall_segment/\n      model.sdf\n      meshes/\n        wall_visual.glb\n    pole/\n      model.sdf\n      meshes/\n        pole_visual.glb\n    target_object_01/\n      model.sdf\n      meshes/\n        target_visual.glb\n  scenes/\n    atas_city_block.dmd.yaml\n    atas_test_range.dmd.yaml\n  packages/\n    atas_environment/\n      package.xml\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "xml",
          "content": "<?xml version=\"1.0\"?>\n<sdf version=\"1.7\">\n  <model name=\"building_a\">\n    <static>true</static>\n    >\n      <visual name=\"visual\">\n        <geometry>\n          <mesh>\n            <uri>meshes/building_a_visual.glb</uri>\n          </mesh>\n        </geometry>\n      </visual>\n\n      llision name=\"collision\">\n        <pose>0 0 10 0 0 0</pose>\n        <geometry>\n          <box>\n            <size>20 15 20</size>\n          </box>\n        </geometry>\n      </collision>\n    </link>\n  </model>\n</sdf>\n",
          "delimiter": "'''",
          "is_diagram": false
        },
        {
          "lang": "python",
          "content": "builder = DiagramBuilder()\nplant, scene_graph = AddMultibodyPlantSceneGraph(builder, time_step=0.01)\nparser = Parser(plant, scene_graph)\n\nparser.AddModels(\"scenes/atas_city_block.dmd.yaml\")\n\nplant.Finalize()\n",
          "delimiter": "'''",
          "is_diagram": false
        }
      ],
      "references": []
    }
  ],
  "glossary": [
    {
      "term": "ATAS",
      "tag": "Arquitetura",
      "definition": "Autonomy Through Aerial Swarms: sistema de percepção e visão computacional aérea cooperativa onde veículos terrestres desprovidos de sensores visuais pesados recebem consciência situacional em tempo real de enxames de drones via V2X."
    },
    {
      "term": "Drake",
      "tag": "Simulação",
      "definition": "Framework open source de robótica em C++ e Python desenvolvido pelo MIT focado em simulação física de corpos rígidos (MultibodyPlant), geometria e visibilidade (SceneGraph) e controle ótimo baseado em programas matemáticos."
    },
    {
      "term": "CBBA",
      "tag": "Coordenação",
      "definition": "Consensus-Based Bundle Algorithm: protocolo descentralizado de leilão em duas fases (construção do feixe de tarefas e resolução de conflitos por consenso local) que aloca tarefas no enxame sem necessitar de um nó centralizador."
    },
    {
      "term": "NMPC",
      "tag": "Controle",
      "definition": "Nonlinear Model Predictive Control: algoritmo de controle ótimo em tempo real que calcula trajetórias ideais ao resolver um problema de otimização em horizonte móvel considerando dinâmicas não lineares e restrições rígidas."
    },
    {
      "term": "FoV",
      "tag": "Percepção",
      "definition": "Field of View: cone geométrico piramidal (frustum) que delimita o espaço visível por uma câmera, definido por planos de corte near/far e ângulos de abertura horizontal e vertical."
    },
    {
      "term": "SceneGraph",
      "tag": "Drake",
      "definition": "Módulo do Drake que centraliza a árvore geométrica do mundo, consultas de proximidade, colisões, raios de oclusão e ligação com motores de renderização como RenderEngineGl e Meshcat."
    },
    {
      "term": "Laya",
      "tag": "IA / Decisão",
      "definition": "Classificador de decisão neural rápido (~32,8 ms) baseado em encoders bidirecionais (ModernBERT / mmBERT) avaliado como podador de alternativas (pruning) e fornecedor de estimativas iniciais (warm start)."
    },
    {
      "term": "Viabilidade Recursiva",
      "tag": "Controle",
      "definition": "Propriedade fundamental de sistemas de controle em horizonte móvel onde a existência de uma trajetória viável em t garante matematicamente a existência de solução viável em t+1, prevenindo travamentos ou becos sem saída dinâmicos."
    },
    {
      "term": "SDFormat (SDF)",
      "tag": "Modelagem 3D",
      "definition": "Formato de especificação em XML amplamente utilizado no Gazebo e no Drake para definir modelos físicos, permitindo separar rigorosamente elementos visuais de alta definição e geometrias simplificadas de colisão e oclusão."
    },
    {
      "term": "Meshcat",
      "tag": "Visualização",
      "definition": "Visualizador web leve para o Drake que renderiza malhas, trajetórias e frames de referência no navegador via WebGL e WebSockets sem overhead de GPU local excessivo."
    },
    {
      "term": "Soft Pruning",
      "tag": "Otimização",
      "definition": "Abordagem segura de redução de busca onde o modelo de IA aplica penalidades ou priorizações nos custos das alternativas, permitindo que o otimizador numérico rígido ainda explore todas as opções caso necessário."
    },
    {
      "term": "Hard Pruning",
      "tag": "Otimização",
      "definition": "Eliminação categórica e irreversível de ramos do espaço de busca antes da resolução do solver; requer camadas independentes de validação para impedir a exclusão acidental da rota ótima ou segura."
    }
  ]
};
