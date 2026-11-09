
# Solicitação 1
``` markdown
Considerando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.

Considerando que, nesse projeto que estou desenvolvendo, o que eu preciso fazer no meu projeto é:  
1. Desenvolver um sistema model-based design, utilizando Drake, onde cada "bloco" do modelo é um nó ROS2.  
2. Um requisito importante nesse projeto é que estamos utilizando apenas softwares e ferramentas open source para o desenvolvimento.
3. Esse sistema precisa de uma simulação de dois robôs terrestres interagindo e cooperando, via tópicos e mensagens ROS2, com múltiplos robôs aéreos (drones).  
4. O sistema depende de simular com precisão o Field of View (FoV) de sensores de visão instalados em cada drone (não precisaria simular os sensores, somente simular e obter o que está e o que não está no FoV de cada sensor, em cada drone, em tempo real).  
5. O sistema que estou desenvolvendo é um sistema denominado "ATAS" (Autonomy Through Aerial Swarms) que consiste em um sistema de percepção e visão computacional, operado com os sensores instalados em enxames de aeronaves não tripuladas (drones), e comunicação V2X, onde a inteligência de percepção sai do veículo terrestre (que possui apenas sensores inerciais e GNSS para a operação) e passa a residir nos agentes de percepção móvel aérea (enxames de drones em operação cooperativa).
6. A feature do sistema ATAS que devo desenvolver agora é um sistema de otimização multi-objetivo que realiza a otimização em tempo real da posição (x, y, z), orientação (yaw, pitch e rool) e quantidade de robôs móveis aéreos em operação (número de drones ativos na operação do sistema) considerando obter os melhores resultados dessas variáveis, para cada drone em operação, minimizando os pontos cegos de visão do ambiente de operação e maximizando as detecções corretas do sistema de percepção/visão computacional para a melhor, mais adequada e mais segura operação dos robôs que operam no solo. 
7. O desenvolvimento e simulações serão realizados, inicialmente, em um computador com recursos de hardware limitados para simulações com gráficos avançados (como seria se utilizasse simuladores como o Carla ou AirSim), minha ideia é desenvolver o sistema utilizando simulações no próprio Drake (que é a plataforma onde eu já irei desenvolver todo o sistema model-based design).
- O computador que irá ser utilizado para o desenvolvimento da versão alfa desse projeto é um computador laptop workstation rodando Arch Linux, com interface GNOME, equipado com um processador Intel Core i9-12900H de 12ª geração, 32 GB de RAM e uma placa de vídeo dedicada NVIDIA RTX A2000 de 8 GB, operando em conjunto com gráficos integrados Intel Iris Xe, operando com terminal `tmux`, shell `zsh` e pacotes gerenciados via Pacman.

Considerando essas informações e dados apresentados, principalmente as informações e descrição da feature que estou devo desenvolver agora para esse sistema, faça uma nova pesquisa e busca completa e apresente ao menos 3 estratégias de desenvolvimento otimizadas, revisadas, completas, detalhadas, descritas de maneira didática e passo a passo, incluindo um comparativo técnico entre essas 3 novas estratégias que você irá propor (com vantagens, limitações, prós e contras de cada uma dessas técnicas).
Considere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).
Considere o foco atual específico na feature de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.

Considere:
1. Qual fidelidade geométrica do FoV é necessária na versão alfa?
Frustum + oclusão por ray casting (Recommended)
2. Quantos drones devem ser simulados simultaneamente na versão alfa?
Até 10 (Recommended)
3. Qual ambiente ROS 2 você aceita para maior compatibilidade?
Container Ubuntu 24.04/Jazzy sobre Arch (Recommended)
4. Como prefere receber o resultado?
Report (Recommended)
```

# Resposta solicitação 1 - Estratégias para otimização multiobjetivo de pose, cobertura visual e número de drones

## Resumo
``` markdown
A recomendação principal para a feature atual do ATAS é uma **arquitetura híbrida e hierárquica**:

- Um supervisor discreto, executado em frequência baixa, seleciona drones ativos, reservas e atribuições.
- Um otimizador contínuo em horizonte móvel refina posição, orientação e trajetória dos drones ativos.
- Um avaliador geométrico calcula FoV, oclusão e qualidade perceptiva.
- Um supervisor independente garante separação, geofence, bateria e fallback seguro.

As três estratégias detalhadas no relatório são:

1. **Otimização hierárquica centralizada:** recomendada como núcleo da versão alfa.
2. **Viewpoints discretos e otimização combinatória:** recomendada como supervisor discreto, fallback e benchmark determinístico.
3. **CBBA distribuído com NMPC local:** recomendada para a evolução do ATAS em direção a enxames maiores e operação V2X distribuída.

O relatório apresenta formulação matemática, variáveis de decisão, objetivos, restrições, modelo probabilístico de detecção, arquitetura Drake–ROS 2, mensagens, QoS, FoV em três níveis, ferramentas open source, comparação técnica e plano incremental de implementação.

Uma alteração importante é proposta: **nem todo bloco elementar do modelo deve se tornar um processo ROS 2 separado**. Blocos funcionalmente implantáveis devem ser nós ou componentes ROS 2, enquanto operações internas, funções de custo, filtros e conversores devem permanecer dentro de um `Diagram` Drake ou componente composto, evitando que serialização e DDS dominem a latência. [github](https://github.com/anyoptimization/pymoo)

Para a versão alfa, o stack recomendado é Drake + ROS 2 + Ipopt + OR-Tools + Open3D/Embree, mantendo `pymoo` e NSGA-II para exploração de Pareto e calibração offline. Essas ferramentas possuem licenças open source permissivas ou aprovadas, mas o Drake deve ser compilado e auditado cuidadosamente caso o requisito exclua qualquer componente proprietário presente em distribuições binárias. [pymoo](https://pymoo.org/customization/mixed.html)

O ambiente reproduzível deve ser executado em container Ubuntu sobre o Arch Linux, mantendo o Arch como host de desenvolvimento. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1, enquanto `drake-ros` documenta uma configuração recomendada associada ao Ubuntu 22.04 e ROS 2 Humble; convém selecionar apenas uma baseline, fixá-la por digest e registrar os commits usados. [drake.mit](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)
```
## Resposta executiva
```
A estratégia tecnicamente mais adequada para a versão alfa do ATAS é uma **otimização hierárquica centralizada em horizonte móvel**: um nível discreto e lento escolhe quantos drones permanecem ativos e suas responsabilidades; um nível contínuo e rápido otimiza as poses e trajetórias curtas; e um avaliador geométrico leve calcula FoV, oclusão e qualidade perceptiva. Essa decomposição evita colocar, no mesmo problema online, variáveis binárias, dinâmica não linear, orientação 3D, oclusões descontínuas e métricas reais de detecção — combinação que seria difícil de resolver com latência previsível no hardware informado.

Duas alternativas devem ser mantidas como caminhos de evolução. A primeira discretiza o espaço em viewpoints e resolve cobertura/alocação como set cover, assignment e roteamento, oferecendo grande robustez computacional. A segunda distribui a decisão entre drones usando leilão/CBBA e NMPC local, oferecendo maior escalabilidade e tolerância a falhas de comunicação. Métodos evolucionários como NSGA-II são muito úteis **offline** para explorar a frente de Pareto, calibrar pesos e produzir baselines, mas não devem ser o único controlador online de segurança crítica; o `pymoo` disponibiliza NSGA-II, D-NSGA-II e variáveis mistas sob licença Apache-2.0.[^1][^2][^3][^4]

A arquitetura também deve ser corrigida em um ponto: **cada bloco funcional implantável deve ser um nó ROS 2, não cada operação elementar do diagrama Drake**. Sistemas pequenos, conversores, funções de custo e filtros devem permanecer dentro de um componente ROS 2/`Diagram` Drake; caso contrário, serialização, DDS, escalonamento e cópias passam a dominar o tempo de processamento. ROS 2 suporta composição e comunicação intra-processo em C++, permitindo preservar modularidade sem transformar toda aresta interna em tráfego DDS.[^5][^6]

## Escopo matemático

### Variáveis de decisão

Para um máximo de `Nmax` drones e horizonte discreto `k = 0,...,H`, use:

- `a_i ∈ {0,1}`: drone `i` ativo ou inativo;
- `p_i,k = [x,y,z]`: posição;
- `q_i,k` ou `R_i,k`: orientação; internamente, quaternion ou matriz de rotação;
- `u_i,k`: velocidade, aceleração ou comando de referência;
- `g_i,k`: orientação do gimbal, quando a câmera não for rigidamente fixada;
- `y_i,r`: atribuição do drone `i` à região, alvo ou tarefa `r`;
- variáveis auxiliares de cobertura, conectividade, redundância e slack.

Embora a interface possa expor yaw, pitch e roll, a otimização não deve usar Euler como representação interna global: há descontinuidades angulares e singularidades. Para a versão alfa, a simplificação mais eficiente é otimizar posição, yaw e pitch da linha de visada, mantendo roll próximo de zero por restrição suave; posteriormente, um gimbal pode separar orientação do veículo e orientação da câmera.

### Estado de cobertura

Discretize o espaço relevante em células, voxels, amostras de superfície ou pontos ponderados `r ∈ R`. Cada elemento deve conter:

- posição e, quando aplicável, normal da superfície;
- peso de risco `w_r`;
- idade desde a última observação;
- associação a corredores dos robôs terrestres;
- classe semântica ou prioridade;
- incerteza de ocupação/percepção;
- exigência de redundância mínima.

A cobertura binária ideal de uma célula pelo drone `i` é:

`v_i,r = in_frustum_i,r × in_range_i,r × line_of_sight_i,r × resolution_ok_i,r`.

Para otimização contínua, substitua os degraus por aproximações suaves durante a solução e reavalie a solução final com o teste geométrico exato. O FoV do Drake segue um modelo pinhole configurável por intrínsecos ou ângulo de visão; `RgbdSensor` também fornece imagem de rótulos alinhada à câmera, na qual cada pixel contém um `RenderLabel`.[^7][^8]

### Qualidade perceptiva

Estar no FoV não implica detecção correta. A probabilidade de detecção deve ser modelada separadamente, por exemplo:

`Pdet(i,r) = sigmoid(β0 + β1 log(pixel_area) + β2 cos(incidence) + β3 visibility_fraction - β4 range - β5 blur - β6 uncertainty)`.

Na fase inicial, `Pdet` pode ser uma função analítica calibrável. Depois, seus parâmetros devem ser ajustados com experimentos do detector real ou simulado. Evidências de planejamento ativo mostram que distância, aspecto, oclusão e custo de movimento devem ser ponderados na seleção de viewpoints; outros trabalhos maximizam ganho de informação semântica para selecionar o próximo viewpoint.[^9][^10][^11]

Para fusão de observações aproximadamente independentes, pode-se usar `Pcombined(r) = 1 - product_i(1 - a_i Pdet(i,r))`. A hipótese de independência deve ser documentada, pois erros de vários drones podem ser correlacionados pelo mesmo clima, iluminação, oclusor ou modelo de percepção.

### Objetivos recomendados

Evite começar com dez objetivos independentes. Na versão alfa, use quatro grupos normalizados:

1. **Risco não observado:** minimizar células críticas não cobertas e sua idade.
2. **Qualidade perceptiva:** maximizar probabilidade de detecção e redundância útil.
3. **Custo operacional:** minimizar drones ativos, energia, deslocamento e esforço de controle.
4. **Robustez:** maximizar conectividade V2X e margens de segurança.

Uma formulação escalar online pode ser:

`J = wc Jblind + wd Jdetect + wa Jactive + we Jenergy + wm Jmotion + wr Jredundancy + wcom Jcommunication + ws Jslack`.

Os objetivos devem ser normalizados por faixas físicas ou valores de referência. Segurança, separação, geofence, bateria mínima e limites de movimento devem ser **restrições**, não apenas termos de custo. Pesos não devem ser tratados como verdades fixas: uma exploração offline da frente de Pareto pode identificar regiões úteis, e R-NSGA-II permite direcionar a busca para regiões preferidas.[^12]

### Restrições mínimas

- Cinemática ou dinâmica de cada drone.
- Altitude, velocidade, aceleração e inclinação.
- Separação drone–drone e drone–obstáculo.
- Geofence e no-fly zones.
- Bateria e retorno seguro.
- Alcance e qualidade mínima de comunicação.
- Continuidade de cobertura durante handover.
- Limite de ativações/desativações por unidade de tempo.
- Tempo mínimo ligado/desligado para impedir chattering.
- Pelo menos uma configuração de fallback segura.

## Arquitetura comum

A infraestrutura abaixo deve ser compartilhada pelas três estratégias:

''' text
                 /clock + estado verdadeiro Drake
                              |
                  atas_world_simulator_node
                    MultibodyPlant + SceneGraph
                              |
             +----------------+----------------+
             |                                 |
      robot/drones states               geometry snapshot
             |                                 |
       atas_fov_evaluator_node <---- ROI/risk map/occluders
             |
   VisibilityMatrix + DetectionQuality + CoverageState
             |
   +---------+--------------------------+
   |                                    |
mission/activation optimizer      pose/trajectory optimizer
   |                                    |
   +----------- setpoints --------------+
                    |
          drone controller nodes
                    |
         plant commands / trajectories
'''

O `SceneGraph` deve ser a fonte comum das geometrias e poses; ele centraliza registro, atualização e consultas geométricas. Para validação de visibilidade, o Drake possui renderizadores VTK e OpenGL; `RenderEngineGl` prioriza desempenho, enquanto `RenderEngineVtk` é mais flexível. As imagens de label são suficientes para obter o ID visível e a fração projetada sem renderizar RGB fotorealista.[^13][^14][^15]

O avaliador de FoV deve ter três níveis com a mesma interface:

- **L0 analítico:** frustum contra pontos, bounding spheres ou AABBs; usado dentro do otimizador.
- **L1 ray casting:** raios para centros, corners ou amostras; usado para oclusão seletiva.
- **L2 label image:** rasterização semântica de baixa resolução; usada para validação e estimativa de fração visível.

Open3D oferece `RaycastingScene` e licença MIT; Embree fornece kernels de ray tracing de alto desempenho sob Apache-2.0. Ambos são opções open source para L1, se a API pública de geometria do Drake não atender ao padrão de raios necessário.[^16][^17][^18]

## Estratégia 1 — Otimização hierárquica centralizada

### Conceito

Separar a decisão em três escalas:

- **Supervisor discreto, 0,2–1 Hz:** escolhe drones ativos, reservas e atribuições.
- **Otimizador de pose em horizonte móvel, 2–10 Hz:** calcula referências de posição e orientação.
- **Controle de voo, 50–200 Hz:** acompanha referências; não resolve cobertura global.

O Drake fornece `MathematicalProgram`, `DirectTranscription`, `DirectCollocation` e `MultipleShooting` para formular otimização de trajetórias. Para cumprir o requisito open source, use Ipopt para NLP contínuo; Ipopt é C++ e EPL-2.0. Não use SNOPT, Gurobi ou Mosek, mesmo que alguma distribuição do Drake os exponha; releases binários do Drake incorporam SNOPT pré-compilado, portanto um requisito rigoroso pode exigir build do Drake a partir do código-fonte e auditoria da árvore de dependências.[^19][^20][^21][^22][^23]

### Passo a passo

1. **Definir a grade de risco.** Comece com o corredor previsto dos dois robôs terrestres, não com todo o mundo 3D. Gere pontos no chão, laterais dos obstáculos e regiões de possível colisão; atribua pesos maiores à trajetória futura dos UGVs.
2. **Implementar `atas_fov_core`.** Biblioteca C++ sem ROS contendo transformações, frustum, projeção pinhole, matriz de visibilidade, qualidade e fusão. Testes unitários devem cobrir bordas do FoV, ângulos, near/far plane e oclusores conhecidos.
3. **Implementar L0.** Para cada pose candidata, teste se cada amostra está dentro do frustum e compute range, ângulo, GSD/pixels estimados e incidência.
4. **Adicionar L1 seletivo.** Faça ray casting apenas para células importantes e candidatas que passaram no frustum. Cache a geometria estática; atualize apenas transforms de objetos móveis.
5. **Implementar o supervisor discreto.** A cada período lento, estime o benefício marginal de cada drone. Use CP-SAT/OR-Tools para ativação, reserva e assignment discretos; OR-Tools é Apache-2.0 e inclui CP-SAT e interfaces de programação inteira.[^24]
6. **Impor histerese.** Só desative um drone se a economia superar um limiar por vários ciclos; imponha `minimum_on_time`, `minimum_off_time` e custo de troca.
7. **Implementar o NMPC de pose.** Use horizonte curto, modelo cinemático ou point-mass inicialmente, warm start da solução anterior e limites de tempo do solver. Otimize apenas drones ativos.
8. **Suavizar visibilidade.** Dentro do NLP, use margens suaves do frustum e uma aproximação de oclusão. Depois, reavalie a pose com L1/L2; se falhar, aplique repair ou mantenha o último comando seguro.
9. **Separar planejamento de controle.** A saída deve ser uma trajetória curta ou setpoint; cada drone possui controlador local independente e watchdog.
10. **Validar com L2.** Periodicamente produza label images de baixa resolução. O `RgbdSensor` é contínuo; versões discretas e assíncronas existem para aquisição amostrada, e a documentação alerta que renderizar modalidades não consumidas desperdiça computação.[^25][^7]
11. **Medir deadline.** Registre tempo de avaliação, tempo do solver, atraso DDS, violações e taxa de fallback.
12. **Escalonar complexidade.** Aumente horizonte, número de drones, células e fidelidade somente depois de cumprir o budget temporal.

### Vantagens

- Melhor coerência global entre cobertura, número ativo, energia e segurança.
- Fácil impor regras operacionais e prioridades dos dois UGVs.
- Warm start eficiente para cenas que mudam gradualmente.
- Integração direta com ferramentas de otimização do Drake.
- Melhor estratégia para uma versão alfa com poucos drones.

### Limitações

- Ponto central de falha.
- Crescimento combinatório no nível discreto.
- NLP não convexo pode convergir para mínimos locais ou falhar; a própria documentação do Drake observa que solvers gradiente em problemas não convexos podem parar em pontos inviáveis e dependem da inicialização.[^26]
- Oclusão exata é descontínua e inadequada para derivação direta.
- Requer fallback explícito quando o solver excede o deadline.

### Melhor uso

Versão alfa e experimentos com aproximadamente 2–8 drones, mapa conhecido ou parcialmente conhecido e computador único. É a estratégia recomendada como arquitetura principal.

## Estratégia 2 — Viewpoints discretos e cobertura combinatória

### Conceito

Em vez de otimizar diretamente seis graus de liberdade contínuos para cada drone, gere um conjunto finito de poses admissíveis. Para cada viewpoint, pré-calcule quais células ele cobre, a qualidade esperada, custo de chegada e conectividade. O problema online passa a selecionar viewpoints, número de drones e rotas.

A literatura de cobertura multi-UAV frequentemente decompõe o problema em geração de viewpoints, avaliação de visibilidade, alocação e roteamento; há formulações por set cover/vehicle routing, clustering e MTSP. Essa decomposição troca refinamento contínuo por previsibilidade e torna o número de drones uma consequência natural da seleção de rotas e limites de energia.[^27][^28][^29]

### Passo a passo

1. **Gerar amostras de interesse.** Use a mesma grade de risco da estratégia 1.
2. **Gerar viewpoints candidatos.** Amostre camadas de altitude, posições laterais ao corredor e orientações `look-at`; descarte poses fora de geofence, em colisão ou dinamicamente inalcançáveis.
3. **Reduzir orientação.** Para cada posição, compute yaw/pitch apontando para um cluster de interesse; mantenha somente algumas variações angulares.
4. **Calcular matriz de cobertura.** Para cada viewpoint `j` e célula `r`, obtenha `C[j,r]`, qualidade, oclusão e redundância. Use L0 em lote e L1 apenas nos sobreviventes.
5. **Comprimir viewpoints.** Remova candidatos dominados: se `j1` cobre subconjunto de `j2` com maior custo e menor qualidade, descarte `j1`.
6. **Construir grafo de transição.** Nós são viewpoints; arestas possuem tempo, energia, risco e verificação de colisão. Arestas inviáveis são removidas.
7. **Resolver seleção/ativação.** Formule set cover máximo ponderado com variáveis binárias para viewpoint, drone e célula coberta. Adicione penalidade por drone ativo e exigência de cobertura mínima.
8. **Resolver assignment e rota.** Use CP-SAT para instâncias pequenas/médias ou heurísticas de clustering + rota. OR-Tools permite modelar CP-SAT e problemas de programação inteira sob Apache-2.0.[^24]
9. **Aplicar rolling horizon.** Execute somente o primeiro segmento, atualize UGVs, mapa, bateria e comunicação, e resolva novamente.
10. **Refinar localmente.** Após selecionar um viewpoint discreto, execute uma pequena otimização contínua em torno dele para ajustar `x,y,z,yaw,pitch` sem alterar a decisão global.
11. **Atualizar incrementalmente.** Recalcule somente colunas da matriz afetadas por objetos móveis ou mudança da região de interesse.
12. **Manter reserva.** Se o solver não retornar a tempo, continue para o último viewpoint seguro ou entre em loiter.

### Formulação típica

Com `s_j` indicando viewpoint selecionado e `c_r` indicando célula coberta:

- minimizar número/custo de viewpoints e drones;
- maximizar `sum_r w_r c_r`;
- maximizar qualidade e redundância;
- restringir `c_r <= sum_j C[j,r] s_j`;
- restringir continuidade de rota e orçamento de energia;
- impor que cada viewpoint seja atribuído a no máximo um drone no instante relevante.

Para múltiplos objetivos, há três opções práticas:

- soma ponderada para execução online;
- método `epsilon-constraint`, fixando cobertura mínima e minimizando custo;
- gerar poucas soluções Pareto e escolher pela política de missão.

### Vantagens

- Latência mais previsível do que otimização contínua 6-DoF completa.
- Trata naturalmente variáveis binárias e quantidade de drones.
- Fácil auditar por que determinada área ficou coberta.
- Reutiliza resultados geométricos via cache.
- Fallback simples e determinístico.
- Excelente para hardware limitado e mapas conhecidos.

### Limitações

- Qualidade depende da densidade e inteligência da amostragem.
- Matriz de cobertura pode crescer muito.
- Mudanças rápidas exigem atualização incremental.
- Trajetórias podem parecer discretizadas sem refinamento local.
- CP-SAT oferece boas soluções práticas, mas a combinação set cover + roteamento continua combinatória.

### Melhor uso

Missões estruturadas, corredores, mapas estáticos ou semi-estáticos e necessidade de previsibilidade. É a alternativa mais segura se o NMPC centralizado não cumprir o deadline.

## Estratégia 3 — CBBA distribuído e NMPC local

### Conceito

Transformar regiões cegas, setores do corredor e necessidades de redundância em tarefas. Cada drone calcula localmente o benefício de atender tarefas e participa de um leilão por consenso; depois executa um NMPC local para alcançar o viewpoint e manter percepção, separação e conectividade. O número ativo emerge das tarefas e dos lances: agentes sem benefício marginal suficiente permanecem em standby.

CBBA alterna construção gananciosa de bundles e consenso para resolver conflitos. Implementações open source incluem `TrajAllocPy` sob MIT e repositórios Python de CBBA; estudos também disponibilizam comparações entre Hungarian, auction e CBBA para multi-UAV. Para missões dinâmicas, CBBA com partial replanning reduz o custo de realocar toda a missão.[^30][^31][^32][^33]

### Passo a passo

1. **Definir tarefas perceptivas.** Cada tarefa deve especificar região, prioridade, janela temporal, qualidade mínima, redundância, energia estimada e viewpoint/corredor admissível.
2. **Criar tarefa de ponto cego.** Quando a idade ou risco de uma célula exceder o limite, agregue células vizinhas em uma tarefa.
3. **Calcular lance local.** O lance inclui ganho de cobertura/detecção, distância, bateria, risco, comunicação e custo de retirar o drone de sua tarefa atual.
4. **Executar bundle building.** Cada drone adiciona tarefas de maior ganho marginal compatíveis com sua capacidade.
5. **Executar consenso.** Drones trocam vencedores, bids e timestamps por ROS 2; empates usam IDs determinísticos.
6. **Aplicar partial replanning.** Quando UGV, oclusor ou link muda, libere apenas parte final do bundle.
7. **Derivar ativação.** Um drone standby ativa se vencer tarefa cujo benefício exceda custo de ativação; desativa apenas após perder tarefas e cumprir tempo mínimo ligado.
8. **Executar NMPC local.** Cada agente recebe o viewpoint ou região e resolve trajetória curta respeitando dinâmica e vizinhos.
9. **Compartilhar intenção.** Publique trajetória prevista compacta, não estados em alta frequência para todos os pares.
10. **Manter supervisor de segurança.** Mesmo em arquitetura distribuída, um nó independente monitora separação, geofence, bateria e colisão iminente; ele pode vetar setpoints.
11. **Simular falhas V2X.** Introduza atraso, perda, partição e stale data. ROS 2 oferece políticas de reliability, deadline, lifespan e liveliness para modelar e detectar esses eventos.[^34][^35]
12. **Validar convergência e degradação.** Meça tempo para consenso, conflitos, mensagens, cobertura durante partições e recuperação após falha de drone.

### Vantagens

- Escala melhor com o número de drones.
- Mais coerente com a visão ATAS de inteligência distribuída aérea.
- Tolerante a perda do otimizador central e a comunicação parcial.
- Alocação pode operar somente com vizinhos.
- Permite adicionar/remover drones dinamicamente.

### Limitações

- Não garante ótimo global.
- Pode haver cobertura temporariamente inconsistente durante consenso.
- Ajustar bids multiobjetivo é difícil.
- Verificação e depuração distribuídas são mais complexas.
- NMPCs locais ainda podem conflitar sem reservas de trajetória ou barreiras.
- Não é a melhor primeira implementação para uma equipe pequena e hardware único.

### Melhor uso

Evolução posterior, enxames maiores, execução distribuída real e comunicação intermitente. Deve ser implementada depois que métricas de FoV, detecção e segurança estiverem estáveis na estratégia centralizada.

## Comparativo técnico

| Critério | Estratégia 1: hierárquica central | Estratégia 2: viewpoints discretos | Estratégia 3: CBBA + NMPC local |
|---|---|---|---|
| Decisão de pose | Contínua em horizonte curto | Discreta, com refinamento local | Contínua local após alocação |
| Número de drones | Supervisor binário lento | Variáveis binárias de seleção/rota | Emerge de tarefas e bids |
| Otimalidade global | Boa localmente; depende do warm start | Boa no conjunto amostrado | Aproximada/distribuída |
| Previsibilidade temporal | Média | Alta | Média, dependente de consenso |
| Escalabilidade | Média | Média | Alta |
| Comunicação | Centralizada | Centralizada | Distribuída |
| Robustez a falha do planner | Média com fallback | Média/alta com plano cacheado | Alta |
| Oclusão | Surrogate + validação | Pré-calculada/atualizada | Avaliada localmente |
| Adequação ao laptop | Alta com horizonte curto | Muito alta | Alta, mas complexa de testar |
| Complexidade de implementação | Média/alta | Média | Alta |
| Melhor fase | Alfa principal | Alfa alternativa/benchmark | Beta e implantação distribuída |

## Recomendação combinada

A solução mais eficiente não é escolher apenas uma estratégia. Recomenda-se:

- **Núcleo da alfa:** estratégia 1.
- **Supervisor discreto e fallback:** componentes da estratégia 2.
- **Benchmark de Pareto offline:** NSGA-II/R-NSGA-II em `pymoo`.
- **Evolução distribuída:** estratégia 3.

Na prática, o supervisor da estratégia 1 pode selecionar drones e viewpoints aproximados com CP-SAT; o NMPC refina as poses; o NSGA-II explora pesos e trade-offs offline; e, mais tarde, o supervisor central é substituído progressivamente por CBBA sem alterar `atas_fov_core` ou os controladores locais.

## ROS 2 e Drake

### Granularidade dos nós

Nós recomendados:

- `atas_world_simulator`: único dono do `Simulator`, `MultibodyPlant`, `SceneGraph` e `/clock`.
- `atas_ground_truth_bridge`: publica estados e TF necessários.
- `atas_fov_evaluator`: calcula visibilidade e qualidade.
- `atas_coverage_map`: mantém risco, idade e regiões cegas.
- `atas_activation_optimizer`: nível discreto.
- `atas_pose_optimizer`: NMPC ou refinamento.
- `atas_task_allocator`: usado na estratégia 3.
- `atas_safety_supervisor`: veto independente.
- `atas_drone_controller_i`: controlador por drone ou componentes compostos.
- `atas_metrics`: logging, deadlines, rosbag e indicadores.

Não execute múltiplos simuladores Drake independentes como fonte de verdade. Cada nó que necessite de dinâmica para predição pode possuir um modelo local reduzido, mas o estado verdadeiro deve vir do simulador central.

O repositório `RobotLocomotion/drake-ros` fornece APIs e exemplos para Drake com ROS 2, mas ainda se apresenta como prototipagem experimental; sua README documenta exemplos com `colcon` e configurações suportadas específicas, portanto a integração deve ser fixada por commit e testada no container escolhido.[^36][^37]

### Tempo e execução

O Drake deve dirigir `/clock`, e todos os nós devem usar `use_sim_time`. ROS 2 define tempo simulado por uma fonte abstrata ativada por esse parâmetro. Para testes determinísticos, prefira execução stepped/lockstep: avançar o Drake, publicar estado, aguardar decisões com deadline conhecido e então avançar novamente. Em execução em tempo real, nunca bloqueie o thread de simulação esperando indefinidamente pelo solver.[^38]

Separe callback groups para estado, solver, watchdog e publicação. Executors ROS 2 utilizam threads para callbacks, mas a documentação ressalta que os executors padrão não garantem, por si só, determinismo hard real-time. Portanto, a meta da alfa deve ser **soft real-time com deadline medido e fallback**, não hard real-time.[^39]

### Mensagens

Crie `atas_msgs` com:

- `VisibilityMatrix` ou formato esparso por drone;
- `CoverageCellArray`;
- `DetectionQualityArray`;
- `DroneActivationPlan`;
- `PerceptionTask` e `TaskBundle`;
- `TimedPoseTrajectory`;
- `OptimizationStatus`;
- `SafetyOverride`.

Cada mensagem deve conter `stamp`, `frame_id`, `sequence`, validade temporal, versão do mapa e `solution_age`. Estados volumosos podem ser publicados best-effort; planos, overrides e ativação devem ser reliable. Use `lifespan` para descartar plano vencido, `deadline` para detectar falha e `liveliness` para monitorar agentes.[^34]

## FoV eficiente

### Geometria analítica

Para um ponto mundial `P_W`, transforme para o frame óptico:

`P_C = X_CW P_W = [x_C,y_C,z_C]`.

O ponto está no frustum quando:

- `z_near <= z_C <= z_far`;
- `abs(atan2(x_C,z_C)) <= HFOV/2`;
- `abs(atan2(y_C,z_C)) <= VFOV/2`.

Ou projete com intrínsecos e verifique limites de pixel. Isso é barato, vetorizável e diferenciável após suavização.

### Oclusão

Use uma cascata:

1. Frustum analítico.
2. Broad phase por AABB/BVH.
3. Um raio ao centro.
4. Raios para corners/superfície somente se a célula for crítica.
5. Label image somente para auditoria periódica ou empates.

Essa cascata reduz o número de raios e renderizações. Cenas estáticas devem ser carregadas uma vez no raycaster; atualize transforms de UGVs e drones.

### Label images

Um `RgbdSensor` pode produzir label image sem depender de um detector neural; cada pixel carrega um identificador de renderização. Conte pixels por ID para obter:[^40][^7]

- presença visível;
- fração da imagem;
- bounding box projetada;
- fração visível aproximada, comparada com render sem oclusores ou área projetada esperada.

Use resolução baixa para o otimizador/validador e resolução nominal apenas em testes. Compartilhe o mesmo `RenderEngine` entre câmeras quando suportado pela configuração.[^41]

## Open source e ambiente

### Plataforma

Arch Linux pode continuar como host, mas não deve ser o ambiente de referência do workspace. ROS 2 Jazzy tem Ubuntu 24.04 como plataforma Tier 1; a documentação recomenda plataforma Tier 1 porque outros sistemas podem exigir trabalho significativo. Use Podman rootless para executar um ambiente Ubuntu fixado; Podman é daemonless e suporta execução sem privilégios.[^42][^43][^44]

Duas imagens devem ser avaliadas:

- **Ubuntu 22.04 + ROS 2 Humble:** melhor alinhamento com a configuração recomendada documentada pelo `drake-ros`.[^36]
- **Ubuntu 24.04 + ROS 2 Jazzy:** melhor alinhamento com a plataforma ROS 2 LTS atual e Drake recente.[^43][^45]

Escolha uma e fixe digest, commit do Drake, commit do `drake-ros`, compiler e middleware. Não mantenha ambos como ambientes de produção da alfa.

### Licenças

- Drake: BSD-3-Clause.[^22]
- ROS 2: predominantemente Apache-2.0 e código portado BSD-3-Clause.[^46]
- Cyclone DDS: EPL-2.0 e middleware Tier 1 do ROS 2.[^47]
- Ipopt: EPL-2.0.[^20]
- OR-Tools: Apache-2.0.[^24]
- pymoo: Apache-2.0.[^1]
- Open3D: MIT.[^16]
- Embree: Apache-2.0.[^17]

Se “apenas open source” for literal, não use CUDA/OptiX nem dependa do driver proprietário NVIDIA. Rode o pipeline principal em CPU e, para rasterização, teste Mesa/Intel Iris Xe ou um stack gráfico aberto compatível. A RTX A2000 pode permanecer opcional e fora da baseline auditável. Mantenha SBOM, `LICENSES/`, versões fixadas e CI que bloqueie dependências não aprovadas.

## Plano de implementação

### Fase 0 — Especificação

1. Fixar `Nmax`, área, taxa de atualização e budget de latência.
2. Definir o que é ponto cego e detecção correta.
3. Definir requisitos de cobertura, redundância e disponibilidade.
4. Separar restrições duras de objetivos.
5. Definir cenários e seeds reproduzíveis.

### Fase 1 — Gêmeo geométrico

1. Modelar dois UGVs e drones no Drake.
2. Implementar frames ópticos e intrínsecos.
3. Implementar L0 sem oclusão.
4. Publicar `VisibilityMatrix`.
5. Validar contra casos analíticos.

### Fase 2 — Oclusão e qualidade

1. Integrar Open3D/Embree ou label images.
2. Implementar fração visível.
3. Implementar modelo inicial de `Pdet`.
4. Criar mapa de risco e idade.
5. Validar com cenas contendo oclusores móveis.

### Fase 3 — Baselines

1. Heurística look-at + drones fixos.
2. Greedy de ganho marginal para ativação.
3. Viewpoints discretos + CP-SAT.
4. NSGA-II offline para Pareto.
5. Registrar hypervolume, cobertura, custo e latência.

### Fase 4 — Estratégia 1

1. Supervisor CP-SAT lento.
2. NMPC cinemático curto.
3. Warm start e deadline.
4. Reavaliação geométrica exata.
5. Fallback e watchdog.

### Fase 5 — Robustez

1. Atraso/perda ROS 2.
2. Falha de drone.
3. Bateria crítica.
4. Entrada/saída de drones.
5. Obstáculo não previsto.
6. Monte Carlo com seeds registradas.

### Fase 6 — Distribuição

1. Transformar regiões cegas em tarefas.
2. Implementar CBBA.
3. Adicionar partial replanning.
4. Migrar um subconjunto das decisões.
5. Comparar com o planner central usando os mesmos cenários.

## Métricas de aceitação

### Percepção

- Percentual ponderado coberto.
- Maior duração contínua de ponto cego.
- Fração visível dos dois UGVs e obstáculos críticos.
- Probabilidade combinada de detecção.
- Redundância útil por célula.
- Frescor das observações.

### Otimização

- Tempo mediano, p95 e máximo.
- Taxa de deadline perdido.
- Taxa de solução inviável.
- Gap ou qualidade relativa ao baseline offline.
- Número de mudanças de ativação.
- Distância entre comando sucessivo e estabilidade.

### Operação

- Número médio e máximo de drones ativos.
- Energia estimada.
- Distância e esforço de controle.
- Margem mínima de separação.
- Tempo em comunicação degradada.
- Taxa de fallback e duração.

### Multiobjetivo

Para os experimentos offline, use frente Pareto, hypervolume, IGD quando houver referência e estabilidade entre seeds. Online, escolha uma única política operacional ou uma pequena coleção de modos (`economy`, `balanced`, `safety`); não tente apresentar uma frente Pareto completa a cada ciclo.

## Decisões recomendadas

1. Adotar a estratégia 1 como principal.
2. Usar estratégia 2 como supervisor discreto, fallback e benchmark.
3. Reservar estratégia 3 para a evolução distribuída.
4. Otimizar internamente quaternion/rotação, não Euler completo.
5. Começar com `x,y,z,yaw,pitch` e roll restrito.
6. Usar FoV analítico no loop, ray casting seletivo para oclusão e label images para validação.
7. Tratar “detecção correta” como modelo probabilístico calibrado, não sinônimo de presença no FoV.
8. Executar o ambiente de referência em Ubuntu containerizado e manter Arch apenas como host.
9. Usar somente Ipopt, OR-Tools, pymoo, Open3D/Embree e middleware de licença aprovada.
10. Definir soft real-time com deadline, última solução válida e comportamento seguro.
11. Fixar commits e manter SBOM para demonstrar conformidade open source.
12. Projetar interfaces para trocar o otimizador sem alterar simulador, FoV, mensagens ou controladores.

---

## References

1. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...

2. [NSGA-II: Non-dominated Sorting Genetic Algorithm - pymoo](https://pymoo.org/algorithms/moo/nsga2.html) - An implementation of the famous NSGA-II (also known as NSGA2) algorithm to solve multi-objective opt...

3. [pymoo.org › customization › mixedMixed Variable Problem — pymoo: Multi-objective Optimization ...](https://pymoo.org/customization/mixed.html)

4. [D-nsga-ii](https://pymoo.org/algorithms/moo/dnsga2.html) - An implementation of D-NSGA-II (Dynamic NSGA-II), a modified NSGA-II for dynamic multi-objective opt...

5. [Composing multiple nodes in a single process - ROS documentation](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Composition.html) - Table of Contents: Background, Prerequisites, Run the demos- Discover available components, Run-time...

6. [Features Status — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/The-ROS2-Project/Features.html) - The features listed below are available in the current ROS 2 release. Unless otherwise specified, th...

7. [RgbdSensor Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor.html)

8. [pydrake.systems.sensors](https://drake.mit.edu/pydrake/pydrake.systems.sensors.html)

9. [[PDF] Planning to Perceive: Exploiting Mobility for Robust Object Detection](https://dspace.mit.edu/bitstream/handle/1721.1/81259/Roy_Planning%20to%20perceive.pdf;sequence=1)

10. [Semantics-Aware Next-best-view Planning for Efficient Search and Detection of Task-relevant Plant Parts](https://arxiv.org/html/2306.09801)

11. [Nonmyopic View Planning for Active Object Detection](https://arxiv.org/html/1309.5401v1)

12. [R-NSGA-II — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/algorithms/moo/rnsga2.html) - An implementation of R-NSGA-II, a reference-point-based variant of NSGA-II that guides the search to...

13. [Rendering Engines - Drake](https://drake.mit.edu/doxygen_cxx/group__render__engines.html)

14. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)

15. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)

16. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...

17. [GitHub - conda-forge/embree-feedstock: A conda-smithy repository for embree.](https://github.com/conda-forge/embree-feedstock) - A conda-smithy repository for embree. Contribute to conda-forge/embree-feedstock development by crea...

18. [Open3D (C++ API)](https://www.open3d.org/html/cpp_api/_raycasting_scene_8h_source.html)

19. [drake.mit.edu › group__planning__trajectoryDrake: Trajectories](https://drake.mit.edu/doxygen_cxx/group__planning__trajectory.html)

20. [GitHub - coin-or/Ipopt: COIN-OR Interior Point Optimizer IPOPT](https://github.com/coin-or/IPOPT) - COIN-OR Interior Point Optimizer IPOPT. Contribute to coin-or/Ipopt development by creating an accou...

21. [drake/solvers/mathematical_program.h at master - GitHub](https://github.com/RobotLocomotion/drake/blob/master/solvers/mathematical_program.h) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...

22. [drake/LICENSE.TXT at master · RobotLocomotion/drake](https://github.com/RobotLocomotion/drake/blob/master/LICENSE.TXT) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...

23. [Drake v1.35.0](https://drake.mit.edu/release_notes/v1.35.0.html) - Drake ("dragon" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...

24. [ortools](https://pypi.org/project/ortools/9.15.6755/) - Google OR-Tools python libraries and modules

25. [RgbdSensorDiscrete Class Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1sensors_1_1_rgbd_sensor_discrete.html)

26. [MathematicalProgram debugging tips](https://drake.mit.edu/tutorials/debug_mathematical_program.html)

27. [Model-based analysis of multi-UAV path planning for surveying postdisaster building damage - Scientific Reports](https://www.nature.com/articles/s41598-021-97804-4) - Emergency responders require accurate and comprehensive data to make informed decisions. Moreover, t...

28. [[2007.13065] Multi-UAV Coverage Path Planning for the Inspection ...](https://ar5iv.labs.arxiv.org/html/2007.13065) - We present a multi-UAV Coverage Path Planning (CPP) framework for the inspection of large-scale, com...

29. [Occlusion-Aware UAV Path Planning for Reconnaissance and Surveillance](https://ira.lib.polyu.edu.hk/bitstream/10397/91621/1/Zhang_Occlusion-aware_uav.pdf)

30. [github.com › kasperg3 › TrajAllocPyGitHub - kasperg3/trajallocpy: Decentralized multi-robot ...](https://github.com/kasperg3/TrajAllocPy) - Decentralized multi-robot/agent task allocation for area coverage problems - kasperg3/trajallocpy

31. [www.mdpi.com › 2504-446X › 9/8/530Comparative Analysis of Centralized and Distributed Multi-UAV ...](https://www.mdpi.com/2504-446X/9/8/530) - Unmanned aerial vehicles (UAVs), commonly known as drones, offer unprecedented flexibility for compl...

32. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)

33. [keep9oing/consensus-based-bundle-algorithm - GitHub](https://github.com/keep9oing/consensus-based-bundle-algorithm) - Implementation of Consensus Based Bundle Algorithm (CBBA) with python - keep9oing/consensus-based-bu...

34. [Quality of Service settings — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Quality-of-Service-Settings.html) - Table of Contents: Overview, QoS policies- Comparison to ROS 1., QoS profiles, QoS compatibilities- ...

35. [ROS QoS - Deadline, Liveliness, and Lifespan](https://design.ros2.org/articles/qos_deadline_liveliness_lifespan.html) - Distilled design documents related to the ROS 2 effort

36. [drake-ros/README.md at main · RobotLocomotion/drake-ros](https://github.com/RobotLocomotion/drake-ros/blob/main/README.md) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...

37. [RobotLocomotion/drake-ros: Experimental prototyping (for ...](https://github.com/RobotLocomotion/drake-ros) - Experimental prototyping (for now). Contribute to RobotLocomotion/drake-ros development by creating ...

38. [Clock and Time - ROS 2 Design](https://design.ros2.org/articles/clock_and_time.html) - Distilled design documents related to the ROS 2 effort

39. [Executors — ROS 2 Documentation: Iron documentation](https://docs.ros.org/en/iron/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...

40. [Ch. 9 - Object Detection and Segmentation](https://manipulation.csail.mit.edu/segmentation.html)

41. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)

42. [containers.conf](https://docs.podman.io/en/stable/markdown/podman.1.html)

43. [Jazzy Jalisco (jazzy) — ROS 2 Documentation: Rolling documentation](https://docs.ros.org/en/rolling/Releases/Release-Jazzy-Jalisco.html) - Table of Contents: Supported Platforms, Installation, Changes to how ROS 2 and Gazebo integrate, New...

44. [Getting Started - ROS (Robot Operating System)](https://www.ros.org/blog/getting-started/)

45. [Installation Guide | RobotLocomotion/drake | DeepWiki](https://deepwiki.com/RobotLocomotion/drake/1.1-installation-guide) - This guide details the different methods to install Drake, the specific platforms supported, and the...

46. [Why ROS 2?](https://docs.ros.org/en/crystal/_downloads/8e25980591e39eda300136ddebc9e97b/ros2-brochure-ltr-web.pdf)

47. [cyclonedds - ROS Package Overview](https://index.ros.org/p/cyclonedds/) - a community-maintained index of robotics software
```

---
# Solicitação 2
``` markdown
Considerando o conteúdo completo dos dados, informações e mensagens compartilhadas ao longo dessa nossa conversa atual.

Considere que vou seguir com a estratégia de implementação 3, com CBBA (Consensus-Based Bundle Algorithm) + NMPC local + ROS2 + Drake + código c++ .

Faça uma pesquisa ampla, técnica, completa e detalhada sobre as técnicas, ferramentas, escopo, contexto de aplicação e requisitos do meu projeto, principalmente da feature de otimização multi-objetivo que estamos planejando agora (e que devemos implementar inicialmente) e, considerando os resultados e sua análise dessa pesquisa, faça um guia completo, didático, adequado e passo a passo de como a implementação desse sistema deve ser feita, definindo e detalhando cada uma das etapas de implementação, testes, verificações e validações desse sistema de otimização multi-objetivo do projeto ATAS.

Considere, se necessário e adequado, sugerir alterações nas ferramentas e/ou metodologias que apresentei nas informações e descrições do meu projeto (apresentadas nessa mensagem), podendo propor alterações na forma com que, atualmente, penso que esse projeto deve ser desenvolvido (mantendo o escopo, contexto de aplicação e o requisito de utilizar apenas softwares e ferramentas open source).

Considere como nosso foco atual e total no desenvolvimento do sistema de otimização multi-objetivo que preciso desenvolver, a partir de agora, para esse projeto ATAS.
```

# Resposta solicitação 2 - Guia de implementação do otimizador distribuído ATAS com CBBA, NMPC, ROS 2 e Drake
## Resumo
``` markdown
A estratégia **CBBA + NMPC local + ROS 2 + Drake + C++** é adequada para o ATAS, desde que exista uma separação explícita entre:

- **CBBA:** alocação discreta e distribuída das tarefas de percepção.
- **NMPC:** otimização contínua da trajetória, posição e orientação de cada drone.
- **Drake:** dinâmica, geometria, FoV, tempo e simulação.
- **ROS 2:** comunicação, composição e implantação dos subsistemas.

O guia técnico foi preparado com a arquitetura, formulação matemática, interfaces ROS 2, etapas de implementação, testes e critérios de validação.

## Decisões fundamentais

Três ajustes são especialmente importantes:

1. **Não otimizar diretamente \(x,y,z,\text{yaw},\text{pitch},\text{roll}\) pelo CBBA.** O CBBA deve atribuir tarefas como observar uma ROI, acompanhar um veículo terrestre ou cobrir determinado setor. O NMPC transforma a tarefa atribuída em trajetória e atitude executáveis.
2. **Não transformar segurança em objetivo ponderado.** Separação, geofence, reserva energética, limites de voo e prevenção de colisões devem ser restrições rígidas e verificadas também por um supervisor independente.
3. **Não começar pela versão assíncrona completa.** Primeiro deve ser implementado um CBBA síncrono determinístico, seguido de replanejamento parcial e, somente então, comunicação assíncrona. O CBBA clássico usa construção gulosa de bundles e consenso distribuído, com garantias dependentes da estrutura da função de pontuação. [koasas.kaist.ac](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)

## Sequência recomendada

A implementação deve avançar nestas fases:

1. Congelar requisitos quantitativos e critérios de aceitação.
2. Criar ambiente Ubuntu 24.04 reproduzível sobre o host Arch Linux; ROS 2 Jazzy considera Ubuntu 24.04 amd64 plataforma Tier 1. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)
3. Definir mensagens, frames, timestamps, namespaces e QoS.
4. Construir a simulação determinística no Drake.
5. Implementar o avaliador analítico de FoV.
6. Gerar tarefas discretas de percepção e viewpoints candidatos.
7. Implementar e testar o S-CBBA sem ROS 2.
8. Transportar o consenso pelo ROS 2 e testar rede degradada.
9. Implementar o NMPC local inicialmente com modelo cinemático simplificado.
10. Integrar CBBA e NMPC através de um contrato de tarefa estável.
11. Adicionar gerenciamento de drones ativos e reservas.
12. Incorporar filtro de segurança e fallback.
13. Implementar replanejamento parcial e tratamento de falhas.
14. Evoluir para A-CBBA somente após validação da versão síncrona.
15. Executar campanhas Monte Carlo, testes de escalabilidade e validação cruzada do FoV.

## Stack recomendado

- **ROS 2 Jazzy** em Ubuntu 24.04 containerizado.
- **Drake compilado a partir do código-fonte**, com solvers proprietários explicitamente desabilitados.
- **Ipopt via Drake** como implementação inicial de referência do NMPC.
- **acados/HPIPM** como evolução caso o tempo de solução do protótipo não atenda ao deadline.
- **Open3D ou Embree** para oclusão por ray casting, se o teste analítico de frustum for insuficiente; Open3D usa licença MIT e Embree está disponível sob Apache-2.0. [people.csail.mit](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)
- **OR-Tools**, opcionalmente, para benchmarks centralizados, geração de tarefas ou validação combinatória offline; a biblioteca é implementada em C++ e usa Apache-2.0. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)

Os componentes ROS 2 de um mesmo drone devem, inicialmente, ser compostos no mesmo processo para reduzir serialização. ROS 2 permite comunicação intraprocesso sem cópias em configurações compatíveis, e seus executores e callback groups permitem separar recepção de mensagens, consenso e resolução do NMPC. [drake.mit](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)

O ponto de partida recomendado é, portanto, um **MVP com dois robôs terrestres, três drones, FoV analítico, tarefas estáticas, CBBA síncrono, NMPC cinemático e rede ideal**. Falhas, perda de pacotes, oclusão detalhada, ativação dinâmica e CBBA assíncrono devem entrar incrementalmente, cada um acompanhado de testes de regressão e critérios mensuráveis.
```

## Resposta

``` markdown
A arquitetura escolhida é tecnicamente adequada, desde que cada técnica seja aplicada ao nível correto do problema. **CBBA deve alocar tarefas discretas de percepção entre drones; NMPC deve otimizar a trajetória, posição e atitude contínuas de cada drone; ROS 2 deve transportar estado, lances, planos e diagnósticos; Drake deve manter o modelo físico, geométrico e temporal de referência.** O CBBA original combina construção gulosa de bundles e consenso distribuído para produzir atribuições sem conflito; suas garantias dependem, entre outras hipóteses, de uma função de pontuação com ganhos marginais decrescentes (DMG).[^1][^2][^3]

Há três correções essenciais ao plano inicial:

1. **Não colocar diretamente `x, y, z, yaw, pitch, roll` dentro do CBBA.** Esses valores são variáveis contínuas do NMPC. O CBBA deve escolher tarefas como “observar ROI 17 a partir do setor nordeste”, “manter cobertura do robô terrestre 2” ou “assumir redundância da área crítica 4”.
2. **Não representar ativação/desativação como uma variável contínua instantânea.** Usar estados operacionais (`RESERVE`, `ACTIVATING`, `ACTIVE`, `RETURNING`, `FAILED`), custos de ativação, tempo mínimo ligado/desligado e histerese. O número de drones ativos emerge da atribuição de tarefas, sob supervisão de um gerenciador de frota.
3. **Não tratar segurança como mais um objetivo ponderado.** Separação entre veículos, geofence, limites dinâmicos, reserva de bateria e estados inválidos devem ser restrições rígidas ou protegidas por um filtro de segurança. Trabalhos de NMPC descentralizado para múltiplos MAVs tratam colisão mediante predição de vizinhos, restrições de distância e incerteza; abordagens recentes também integram CBF/ECBF ao NMPC.[^4][^5][^6]

Para a versão alfa, recomenda-se começar com **CBBA síncrono e determinístico + NMPC local simplificado + FoV geométrico analítico**, evoluindo somente depois para CBBA assíncrono/CBBA-PR, oclusão por ray casting e um solver de NMPC especializado. Essa sequência reduz simultaneamente risco algorítmico, custo computacional e dificuldade de depuração.

## Arquitetura funcional

### Decomposição em camadas

''' text
                   +----------------------------------+
                   | Ground mission / V2X information |
                   +----------------+-----------------+
                                    |
                                    v
+------------------+       +----------------------+       +------------------+
| World model      | ----> | Task / viewpoint     | ----> | Local CBBA agent |
| targets, map,    |       | generation           |       | one per drone    |
| uncertainty      |       +----------------------+       +--------+---------+
+--------+---------+                                                |
         |                                                          v
         |                                                assigned task/path
         |                                                          |
         v                                                          v
+------------------+       neighbor trajectories          +------------------+
| FoV / visibility | <----------------------------------- | Local NMPC       |
| oracle           |                                      | one per drone    |
+--------+---------+                                      +--------+---------+
         |                                                          |
         | coverage quality                                         v
         |                                                 nominal command
         |                                                          |
         v                                                          v
+------------------+                                      +------------------+
| Metrics and      |                                      | Safety filter /  |
| experiment log   |                                      | supervisor       |
+------------------+                                      +--------+---------+
                                                                  |
                                                                  v
                                                        Drake plant / drone
'''

O Drake deve conter uma única fonte de verdade para poses, velocidades, geometrias, colisões e tempo de simulação. `SceneGraph` é o nexo geométrico do `Diagram` e fornece o `QueryObject` utilizado pelas consultas geométricas; o framework também oferece eventos de publicação, atualização discreta e atualização irrestrita. Dado um `Context`, os cálculos de um `System` devem ser determinísticos e repetíveis, característica importante para testes e regressões.[^7][^8][^9][^10]

### Limite entre blocos e nós

O requisito “cada bloco é um nó ROS 2” deve ser interpretado como **cada subsistema funcional implantável é um nó ou componente**, não cada soma, custo, transformação ou restrição matemática. ROS 2 permite definir nós separadamente e compô-los no mesmo processo, inclusive com transporte intraprocesso sem cópia em pipelines compatíveis.[^11]

Uma divisão adequada é:

| Componente | Instâncias | Responsabilidade |
|---|---:|---|
| `atas_drake_sim` | 1 | Mundo, dinâmica, geometrias, relógio e estados verdadeiros |
| `atas_world_model` | 1 ou distribuída | Fusão do estado dos robôs, mapa e incertezas |
| `atas_task_generator` | 1 lógico | Criar tarefas/ROIs/viewpoints e expiração |
| `atas_fov_evaluator` | 1 compartilhada ou 1 por drone | FoV, LoS, oclusão e qualidade esperada |
| `atas_cbba_agent` | 1 por drone | Bundle, lances, consenso e caminho discreto |
| `atas_nmpc_controller` | 1 por drone | Otimização contínua em horizonte móvel |
| `atas_safety_filter` | 1 por drone | Limites, separação, geofence e fallback |
| `atas_fleet_manager` | 1 lógico replicável | Estados ativo/reserva, energia e falhas |
| `atas_metrics` | 1 | KPIs, eventos, logs e relatório de execução |

Nos experimentos locais, componentes do mesmo drone podem residir em um container ROS 2, reduzindo serialização e cópias. Os executores ROS 2 usam threads para invocar callbacks; grupos mutuamente exclusivos ou reentrantes controlam quais callbacks podem executar em paralelo. O solver de NMPC deve ficar em grupo mutuamente exclusivo próprio, enquanto recepção de telemetria e lances pode usar grupos separados.[^12]

## Formulação do problema

### Estados e variáveis

Para cada drone `i`, usar inicialmente um modelo cinemático de aceleração limitada:

\[
\mathbf{x}_i = [x_i,y_i,z_i,v_{x,i},v_{y,i},v_{z,i},\psi_i,\theta_i,\phi_i]^T
\]

\[
\mathbf{u}_i = [a_{x,i},a_{y,i},a_{z,i},\dot{\psi}_i,\dot{\theta}_i,\dot{\phi}_i]^T.
\]

Na primeira versão, é preferível usar `position + velocity + yaw + câmera/gimbal` e não comandar livremente pitch e roll do corpo. Em um multirrotor real, pitch e roll participam da geração de aceleração e não são graus de liberdade independentes de posicionamento. Caso o sensor tenha gimbal, separar `X_WB` (corpo) e `X_BC` (câmera); caso seja fixo, o NMPC deve respeitar a dinâmica que acopla atitude e translação.

### Elementos de cobertura

Discretizar a região operacional em elementos `r`:

- células do solo;
- amostras nas superfícies dos dois robôs terrestres;
- objetos ou pistas de interesse;
- corredores de movimento previstos;
- zonas críticas com pesos maiores.

Cada elemento recebe peso `w_r`, criticidade, prazo, classe, posição prevista e incerteza. Planejamento visual multi-UAV costuma avaliar visibilidade sobre amostras e combinar cobertura com distância/rota; oclusões precisam ser consideradas quando o ambiente é obstruído.[^13][^14]

### Modelo de FoV

Para um ponto mundial `p_W`, calcular:

\[
p_C = X_{CW}p_W = [x_C,y_C,z_C]^T.
\]

O ponto satisfaz o frustum da câmera se:

\[
z_{near} < z_C < z_{far},\qquad
|\operatorname{atan2}(x_C,z_C)| \leq \alpha_h/2,\qquad
|\operatorname{atan2}(y_C,z_C)| \leq \alpha_v/2.
\]

Os parâmetros devem vir dos intrínsecos reais ou previstos do sensor. No Drake, `CameraConfig` aceita resolução e propriedades focais expressas por comprimentos focais ou ângulos de FoV. Na versão alfa, a visibilidade pode ter três níveis selecionáveis:[^15]

1. `FRUSTUM_ONLY`: teste analítico rápido.
2. `FRUSTUM_LOS`: frustum mais linha de visada contra geometria simplificada.
3. `SEMANTIC_RENDER`: imagem de rótulos/depth para validação de oclusão; o `RgbdSensor` do Drake produz imagens RGB, depth e label a partir do `SceneGraph`.[^16]

Para ray casting estritamente open source, Open3D possui `RaycastingScene` sob licença MIT, e Embree fornece kernels de ray tracing sob Apache-2.0. O backend deve ser intercambiável por interface, para que o CBBA e o NMPC não dependam do método de visibilidade.[^17][^18][^19]

### Qualidade perceptiva

Definir qualidade individual limitada a `[0,1]`:

\[
q_{ir} = v_{ir}\,q_d(d_{ir})\,q_a(\gamma_{ir})\,q_{res}(\rho_{ir})\,q_{occ}(o_{ir})\,q_{comm}(l_i),
\]

onde `v` indica pertença ao FoV, `d` é distância, `gamma` é incidência, `rho` é densidade projetada/pixels por metro, `o` é oclusão e `l` representa qualidade ou latência de comunicação. Esses fatores não devem ser apresentados como “probabilidade de detecção calibrada” enquanto não forem ajustados contra um detector real.

Para fusão de observações aproximadamente independentes:

\[
P_r = 1-\prod_{i\in A}(1-q_{ir}).
\]

Também registrar separadamente cobertura binária, cobertura ponderada, cobertura mínima, redundância e qualidade. Misturar tudo em um único KPI esconderia falhas importantes.

### Objetivos globais

A otimização do ATAS deve acompanhar um vetor de objetivos:

\[
\mathbf{J}=\left[
-J_{det},
-J_{cov},
-J_{min},
J_{energy},
J_{active},
J_{comm},
J_{motion},
J_{redundancy}
\right].
\]

- `J_det`: detecção esperada ponderada nos robôs e ROIs.
- `J_cov`: cobertura espaço-temporal ponderada.
- `J_min`: pior cobertura entre regiões críticas.
- `J_energy`: propulsão e deslocamento estimados.
- `J_active`: custo por drone ativo.
- `J_comm`: carga, latência prevista e perda de conectividade.
- `J_motion`: esforço e variação de comando.
- `J_redundancy`: excesso de sobreposição; redundância mínima requerida não é penalizada.

Em execução online, CBBA e NMPC precisam de decisões únicas, portanto os objetivos devem ser normalizados e convertidos em utilidades escalares. A fronteira de Pareto deve ser estudada **offline** para selecionar pesos, limiares e políticas operacionais. `pymoo` disponibiliza NSGA-II/III e outros métodos multiobjetivo sob Apache-2.0, mas é Python; pode ser usado somente no laboratório de calibração sem entrar no caminho C++ de produção. `pagmo2` oferece NSGA-II em C++, mas usa licenças GPL/LGPL; continua open source, porém exige uma decisão explícita de compatibilidade e distribuição.[^20][^21][^22][^23]

### Restrições rígidas

O NMPC deve impor:

- dinâmica discreta do drone;
- limites de velocidade, aceleração, atitude e taxa angular;
- altitude mínima e máxima;
- geofence;
- distância mínima a obstáculos;
- separação entre drones ao longo do horizonte;
- reserva energética para retorno;
- limites de gimbal, quando aplicável;
- visibilidade mínima apenas para tarefas críticas contratadas;
- conectividade mínima ou disponibilidade de rota V2X, se necessária à missão.

As trajetórias previstas dos vizinhos devem ser transmitidas, carimbadas no tempo e infladas com margem que cresce com idade, atraso e incerteza. NMPC descentralizado robusto para MAVs já foi formulado incorporando incerteza de estado e atraso de comunicação na distância aceitável.[^4]

## CBBA aplicado ao ATAS

### Definição das tarefas

CBBA resolve atribuição discreta. Para o ATAS, uma tarefa deve representar um contrato perceptivo executável:

''' text
Task
  id
  roi_id / ground_robot_id
  type: TRACK | COVER_CELL | MULTIVIEW | RELAY | RESERVE
  candidate_viewpoint or admissible_view_region
  earliest_start, deadline, duration, expiry
  priority and criticality
  min_quality
  required_capabilities
  min_agents, max_agents
  predecessor_ids
  version
'''

Tarefas cooperativas com `min_agents > 1` devem inicialmente ser decompostas em “slots” complementares, por exemplo `roi42/north_view` e `roi42/south_view`. Literatura de CBBA dinâmico também emprega divisão de tarefas cooperativas em subtarefas atribuíveis individualmente. O gerador deve evitar produzir milhares de tarefas quase idênticas: use clustering espacial, horizonte curto e somente os pontos cegos ou regiões relevantes ao movimento previsto dos robôs terrestres.[^24]

### Dados de cada agente

Cada drone mantém:

- `bundle b_i`: ordem em que tarefas foram ganhas;
- `path p_i`: ordem planejada de execução;
- `y_i[j]`: maior lance conhecido para tarefa `j`;
- `z_i[j]`: vencedor conhecido;
- `s_i[k]`: timestamp/contador da informação recebida do agente `k`;
- versões de tarefas e epoch de consenso;
- capacidade, energia e estado operacional.

### Função de lance

O lance deve ser o ganho marginal de inserir a tarefa `j` na melhor posição do caminho atual:

\[
b_{ij}=\max_n\left(S_i(p_i\oplus_n j)-S_i(p_i)\right).
\]

Uma utilidade inicial adequada é:

\[
S_i(p)=\sum_{j\in p}
\lambda_q\hat Q_{ij}
+\lambda_c\hat C_{ij}
+\lambda_t\hat T_{ij}
-\lambda_d\hat D_{ij}
-\lambda_e\hat E_{ij}
-\lambda_r\hat R_{ij}
-\lambda_a A_{ij}.
\]

Todos os termos devem ser normalizados em intervalos documentados. `A_ij` é custo de despertar/ativar um drone em reserva. A função precisa preservar ganhos marginais decrescentes para manter a garantia clássica de convergência; o CBBA exige que o valor de uma tarefa não aumente quando outras tarefas são acrescentadas antes dela.[^25][^1]

Não incorporar dentro do lance o resultado completo de dezenas de resoluções NMPC. Na alfa, usar uma estimativa barata de viagem e viabilidade, seguida por validação NMPC da atribuição vencedora. Caso a validação falhe, publicar `TASK_REJECTED_INFEASIBLE`, aumentar a penalidade local e reabrir a tarefa.

### Algoritmo incremental

1. Receber catálogo de tarefas e remover versões expiradas.
2. Atualizar custos locais de viagem, visibilidade, energia e comunicação.
3. Construir bundle escolhendo repetidamente o maior lance marginal que supera o lance vencedor conhecido.
4. Inserir a tarefa na melhor posição de `path`.
5. Publicar winners, bids, epoch e timestamps.
6. Receber estados de consenso dos vizinhos.
7. Resolver conflitos por maior lance; usar `agent_id` como desempate determinístico.
8. Quando perder uma tarefa, remover essa tarefa e todas as posteriores no bundle.
9. Repetir até não haver alterações durante uma janela ligada ao diâmetro da rede.
10. Emitir caminho atribuído e estado de convergência.

O CBBA original alterna construção gulosa e consenso para resolver reivindicações conflitantes. Sob pontuação DMG e rede estática síncrona de diâmetro `D`, existe um limite de convergência relacionado ao número de tarefas e ao diâmetro; isso deve ser testado, não presumido, na rede ROS 2.[^3][^26][^1]

### Evolução dinâmica

Implementar em três estágios:

- **S-CBBA:** relógio discreto comum, topologia fixa e tarefas estáticas. Serve como oráculo de regressão.
- **CBBA-PR:** tarefas novas, falhas e replanejamento parcial. Liberar somente a cauda de menor valor do bundle preserva a estrutura necessária à convergência e oferece compromisso entre tempo e qualidade.[^27][^25]
- **A-CBBA:** mensagens assíncronas, timestamps, descarte de informação velha e convergência local/global. Extensões assíncronas foram criadas para canais e ambientes dinâmicos e validadas em implementações distribuídas.[^28]

Não iniciar pela variante assíncrona. Sem um S-CBBA de referência, torna-se difícil distinguir erro algorítmico de reordenação, perda de pacote ou relógio.

## NMPC local

### Modelo por estágios

1. **Alfa:** point-mass 3D com aceleração e yaw; horizonte curto.
2. **Beta:** jerk limitado e gimbal.
3. **SIL avançado:** dinâmica de quadrotor com atitude, thrust e taxas.
4. **HIL:** autopiloto real ou modelo compatível, com NMPC produzindo setpoints, não comandos de motor.

O NMPC recebe estado atual, tarefa do CBBA, previsão dos robôs terrestres, trajetórias vizinhas, mapa e métricas de FoV. Produz sequência de estados/controles, publica a trajetória inteira aos vizinhos e aplica apenas o primeiro comando.

### Custo local

\[
J_i=\sum_{k=0}^{N-1}
\left(
\|p_{i,k}-p^{ref}_{i,k}\|_{Q_p}^2+
\|u_{i,k}\|_{R}^2+
\|u_{i,k}-u_{i,k-1}\|_{R_\Delta}^2+
\lambda_v\ell_{view}+
\lambda_c\ell_{comm}+
\lambda_s\xi_k^2
\right)+\ell_f.
\]

`ell_view` deve ser suave. Não colocar diretamente um indicador binário “dentro/fora do FoV” no NLP. Usar distância suave às bordas do frustum, erro de apontamento, distância desejada e qualidade diferenciável aproximada. A oclusão exata por mesh não é diferenciável; avaliar oclusão fora do solver e fornecer regiões/corredores ou custos locais aproximados.

### Solver

Para a primeira implementação, usar `drake::solvers::MathematicalProgram` com Ipopt e derivadas por `AutoDiff`. Drake usa `MathematicalProgram` para variáveis, custos e restrições e pode chamar Ipopt para programas não lineares. Construções do Drake a partir do fonte habilitam bibliotecas open source e desabilitam proprietárias por padrão; ainda assim, verificar `SolverInterface::available()` e bloquear explicitamente SNOPT, Gurobi e Mosek no CI.[^29][^30][^31]

Se o deadline não for satisfeito, migrar **somente o núcleo NMPC** para acados/HPIPM. O acados oferece solvers de controle ótimo/NMPC em C, e a distribuição identificada é BSD-2-Clause; HPIPM também usa BSD-2-Clause. Manter uma interface:[^32][^33]

''' cpp
class NmpcBackend {
 public:
  virtual SolveResult Solve(const NmpcProblemData&) = 0;
  virtual void WarmStart(const PredictedTrajectory&) = 0;
};
'''

Assim, `DrakeIpoptBackend` permanece como referência de correção e `AcadosBackend` pode ser otimizado para tempo real.

### Política de execução

- deslocar a solução anterior um passo para warm start;
- estabelecer orçamento de tempo por solve;
- aceitar apenas soluções com status e violações dentro de tolerâncias;
- se atingir timeout com solução utilizável, aplicar comando validado;
- se falhar, manter último plano seguro por janela curta;
- depois, acionar hover/loiter ou retorno seguro;
- publicar iterações, tempo, custo, violação máxima e razão do fallback.

## Ativação de drones

### Máquina de estados

''' text
OFF/UNAVAILABLE -> RESERVE -> ACTIVATING -> ACTIVE
ACTIVE -> RETURNING -> RESERVE
qualquer estado -> FAILED
'''

Os nós críticos devem ser `LifecycleNode`s. ROS 2 define estados gerenciados como `unconfigured`, `inactive`, `active` e `shutdown`, com transições de configuração, ativação, desativação e limpeza. Isso permite iniciar o sistema somente quando mapa, tarefas, solver e simulação estiverem prontos, além de reiniciar componentes online.[^34][^35]

### Política

- Drones `ACTIVE` participam normalmente do CBBA.
- Drones `RESERVE` podem calcular lances com custo de ativação e atraso de disponibilidade.
- Ativar somente se o ganho esperado superar limiar por várias épocas.
- Desativar somente se a cobertura permanecer acima do requisito sem o drone e após tempo mínimo ativo.
- Nunca desligar em voo; transitar para retorno/pouso.
- Manter reserva suficiente para cobrir falha de um agente em cenários críticos.

Essa política resolve a “otimização do número de drones” sem introduzir variáveis binárias dentro de cada NMPC local.

## Interfaces ROS 2

### Pacotes

''' text
atas_ws/src/
  atas_interfaces/
  atas_common/
  atas_models/
  atas_drake_sim/
  atas_world_model/
  atas_visibility/
  atas_tasking/
  atas_cbba/
  atas_nmpc/
  atas_safety/
  atas_fleet_manager/
  atas_metrics/
  atas_bringup/
  atas_tests/
'''

ROS 2 recomenda criar pacotes novos com licença Apache-2.0 e registrar a licença SPDX no `package.xml`.[^36][^37]

### Namespaces

''' text
/atas/world/...
/atas/tasks/...
/atas/ground_1/...
/atas/ground_2/...
/atas/drone_01/state
/atas/drone_01/cbba/consensus
/atas/drone_01/cbba/assignment
/atas/drone_01/nmpc/prediction
/atas/drone_01/safety/status
'''

Namespaces separam tópicos de robôs no mesmo domínio DDS; diferentes `ROS_DOMAIN_ID` isolam completamente processos e, portanto, não devem ser usados para agentes que precisam negociar entre si.[^38]

### Mensagens mínimas

- `Task.msg`: ID, versão, ROI, tipo, janela temporal, prioridade, capacidades, parâmetros do viewpoint.
- `BidVector.msg`: agent, epoch, sequência, arrays de task IDs, winners, bids e timestamps.
- `BundleState.msg`: bundle, path, utilidade e estado de convergência.
- `Assignment.msg`: tarefas contratadas, validade e fallback.
- `PredictedTrajectory.msg`: `Header`, frame, `dt`, poses, twists, covariâncias e validade.
- `VisibilityReport.msg`: cobertura por ROI, qualidade, oclusão e idade.
- `SolverStatus.msg`: backend, status, duração, iterações, custo e violação.
- `FleetState.msg`: modo operacional, energia, disponibilidade e health.

Mensagens CBBA devem transportar inteiros/IDs e vetores compactos, não nuvens de pontos ou imagens. Cada mensagem precisa de `stamp`, `frame_id`, `sequence`, `epoch`, `schema_version` e `valid_until`.

### QoS

| Fluxo | QoS inicial |
|---|---|
| Estado e trajetória frequentes | `BEST_EFFORT`, `KEEP_LAST(1-5)`, lifespan curto |
| Catálogo de tarefas | `RELIABLE`, durabilidade adequada, histórico limitado |
| Lances/consenso CBBA | `RELIABLE`, `KEEP_LAST`, deadline e liveliness |
| Comandos e eventos críticos | `RELIABLE`, lifespan curto, deadline |
| Diagnóstico | `RELIABLE`, frequência baixa |

ROS 2 oferece políticas de reliability, deadline, lifespan e liveliness; o perfil de sensor usa best effort porque atualidade costuma valer mais que retransmissão. Testar QoS na rede degradada: `RELIABLE` pode elevar latência por retransmissões.[^39][^40]

### Tempo

`atas_drake_sim` deve publicar `/clock`; todos os nós de simulação usam `use_sim_time=true`. `rosbag2` também entende simulação como tempo publicado em `/clock` e alerta que mensagens antes do primeiro clock recebem tempo zero. Usar tempo ROS para timestamps da missão e `steady_clock` apenas para medir duração computacional/timeout.[^41]

## Roteiro passo a passo

### Etapa 0 — Congelar requisitos

Produzir `requirements.md`, ADRs e matriz requisito-teste. Fixar:

- número máximo inicial de drones;
- sensor e extrínsecos;
- volume operacional;
- tipos de obstáculos;
- dinâmica dos robôs terrestres;
- definição quantitativa de “ponto cego” e “detecção correta”;
- tempos máximos de consenso, NMPC e reação à falha;
- política de energia e retorno;
- modelo de comunicação.

**Saída:** requisitos identificados (`REQ-COV-*`, `REQ-SAFE-*`, `REQ-CBBA-*`) e critérios verificáveis.

### Etapa 1 — Ambiente reproduzível

Usar Ubuntu 24.04 em container ou VM sobre Arch Linux, porque ROS 2 Jazzy tem Ubuntu Noble 24.04 amd64 como Tier 1 até maio de 2029. Drake pretende suportar as duas versões LTS recentes do Ubuntu.[^42][^43]

1. Criar Containerfile versionado.
2. Fixar imagem por digest.
3. Fixar commits/releases de ROS 2, Drake e dependências.
4. Compilar Drake sem backends proprietários.
5. Gerar SBOM e relatório de licenças.
6. Compilar com `-Wall -Wextra -Wpedantic`, sanitizers no perfil de teste.
7. Configurar `colcon test` e CI.

`drake-ros` pode fornecer referências, mas o repositório se descreve como prototipagem experimental; não deve ser uma dependência arquitetural sem revisão.[^44]

**Gate:** build limpo em máquina nova e lista de licenças aprovada.

### Etapa 2 — Contratos e modelos

1. Criar `atas_interfaces`.
2. Definir convenções ENU, frames `world`, `base_link`, `camera_link`.
3. Definir IDs imutáveis

---

## References

1. [[PDF] Consensus-Based Auction Approaches for Decentralized Task ...](https://koasas.kaist.ac.kr/bitstream/10203/22230/1/BrunetChoiHow_GNC08.pdf)

2. [Decentralized Task Allocation Using Local Information Consistency Assumptions](https://arc.aiaa.org/doi/pdf/10.2514/1.I010461)

3. [[PDF] Consensus-Based Decentralized Auctions for Robust Task Allocation | Semantic Scholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9) - This paper addresses task allocation to coordinate a fleet of autonomous vehicles by presenting two ...

4. [Robust Collision Avoidance for Multiple Micro Aerial ...](https://people.csail.mit.edu/jalonsom/docs/17-kamel-IROS.pdf)

5. [Decentralized Nonlinear Model Predictive Control for Safe ...](https://arxiv.org/html/2409.17379v1)

6. [A Comparative Study of NMPC Strategies for Prioritized ...](https://hal.science/hal-04784633v1/document)

7. [SceneGraph< T > Class Template Reference](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1_scene_graph.html)

8. [drake::geometry Namespace Reference](https://drake.mit.edu/doxygen_cxx/namespacedrake_1_1geometry.html)

9. [Modeling Dynamical Systems - Drake](https://drake.mit.edu/tutorials/dynamical_systems.html)

10. [Event< T > Class Template Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1systems_1_1_event.html)

11. [Setting up efficient intra-process communication](https://docs.ros.org/en/jazzy/Tutorials/Demos/Intra-Process-Communication.html) - Table of Contents: Background, Installing the demos, Running and understanding the demos- The two no...

12. [Executors — ROS 2 Documentation: Jazzy documentation](https://docs.ros.org/en/jazzy/Concepts/Intermediate/About-Executors.html) - Table of Contents: Overview, Basic use, Types of Executors, Callback groups, Scheduling semantics, O...

13. [Multi-Drone View Planning for Collaborative Coverage in Cluttered ...](https://arxiv.org/html/2310.10863v1)

14. [Multi-UAV Coverage Path Planning for the Inspection of ...](https://arxiv.org/html/2007.13065v1)

15. [CameraConfig Struct Reference - Drake](https://drake.mit.edu/doxygen_cxx/structdrake_1_1systems_1_1sensors_1_1_camera_config.html)

16. [Sensors](https://drake.mit.edu/doxygen_cxx/group__sensor__systems.html) - Drake provides a variety of capabilities for sensor modeling. Some sensors are offered as Systems in...

17. [Open3D/examples/python/geometry/ray_casting_to_image.py at ...](https://github.com/isl-org/Open3D/blob/main/examples/python/geometry/ray_casting_to_image.py) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...

18. [Intel® Rendering Toolkit Libraries Open to the Broader ...](https://www.intel.com/content/www/us/en/developer/articles/technical/open-development-of-render-kit-libraries.html) - These libraries are now open to community contributions, bringing community-funded features, functio...

19. [Open3D/LICENSE at main · isl-org/Open3D · GitHub](https://github.com/isl-org/Open3D/blob/main/LICENSE) - Open3D: A Modern Library for 3D Data Processing. Contribute to isl-org/Open3D development by creatin...

20. [esa/pagmo2: A C++ platform to perform parallel ...](https://github.com/esa/pagmo2) - A C++ platform to perform parallel computations of optimisation tasks (global and local) via the asy...

21. [Non dominated sorting genetic algorithm (NSGA-II)](https://esa.github.io/pagmo2/docs/cpp/algorithms/nsga2.html)

22. [github.com · anyoptimization · pymooGitHub - anyoptimization/pymoo: NSGA2, NSGA3, R-NSGA3, MOEAD,...](https://github.com/anyoptimization/pymoo) - NSGA2, NSGA3, R-NSGA3, MOEAD, Genetic Algorithms (GA), Differential Evolution (DE), CMAES, PSO - any...

23. [pymoo.org › licenseLicense — pymoo: Multi-objective Optimization in Python 0.6.2 ...](https://pymoo.org/license.html)

24. [UAV Swarm Mission Planning in Dynamic Environment Using Consensus-Based Bundle Algorithm](https://www.mdpi.com/1424-8220/20/8/2307) - To solve the real-time complex mission-planning problem for Multiple heterogeneous Unmanned Aerial V...

25. [Partial Replanning for Decentralized Dynamic Task Allocation - arXiv](https://arxiv.org/html/1806.04836v2)

26. [untitled](https://pdfs.semanticscholar.org/b5ba/62e298fb4ca5a321ddcf3029036ce8a6e091.pdf)

27. [Decentralized task allocation for dynamic, time-sensitive tasks](https://dspace.mit.edu/entities/publication/03841de1-7a48-4d21-a8b7-1450fcbb43f6) - In time-sensitive and dynamic missions, autonomous vehicles must respond quickly to new information ...

28. [Asynchronous Decentralized Task Allocation for Dynamic ...](https://dspace.mit.edu/entities/publication/8027006a-fddf-44a7-b5b9-3475099d7e6c) - This work builds on a decentralized task allocation algorithm for networked agents communicating thr...

29. [Formulating and Solving Optimization Problems - Drake](https://drake.mit.edu/doxygen_cxx/group__solvers.html)

30. [drake/tools/flags/BUILD.bazel at master](https://github.com/RobotLocomotion/drake/blob/master/tools/flags/BUILD.bazel) - Model-based design and verification for robotics. Contribute to RobotLocomotion/drake development by...

31. [MathematicalProgram Class Reference - Drake](https://drake.mit.edu/doxygen_cxx/classdrake_1_1solvers_1_1_mathematical_program.html)

32. [hpipm/include/hpipm_d_ocp_qp.h at master](https://github.com/giaf/hpipm/blob/master/include/hpipm_d_ocp_qp.h) - High-performance interior-point-method QP and QCQP solvers - giaf/hpipm

33. [FreshPorts -- science/acados: Fast and embedded solvers for ...](https://www.freshports.org/science/acados/) - acados provides fast and embedded solvers for nonlinear optimal control. It is written in C and offe...

34. [lifecycle: Jazzy 0.33.7 documentation](https://docs.ros.org/en/jazzy/p/lifecycle/)

35. [nav2_lifecycle_manager](https://docs.ros.org/en/jazzy/p/nav2_lifecycle_manager/)

36. [Developing a ROS 2 package — ROS 2 Documentation: Jazzy ...](https://docs.ros.org/en/jazzy/How-To-Guides/Developing-a-ROS-2-Package.html)

37. [Index Your Packages](https://docs.ros.org/en/jazzy/How-To-Guides/Releasing/Index-Your-Packages.html) - Are you releasing a new ROS package into a ROS distribution? Make the process faster by indexing you...

38. [Using multiple Create® 3 robots](https://ros.ncnynl.com/en/create3/setup/multi-robot/) - Documentation for the iRobot® Create® 3 robot

39. [Quality of Service settings](https://docs.ros.org/en/lyrical/Concepts/Intermediate/About-Quality-of-Service-Settings.html)

40. [topic_monitor](https://docs.ros.org/en/jazzy/p/topic_monitor/)

41. [ros2/rosbag2 - GitHub](https://github.com/ros2/rosbag2) - Contribute to ros2/rosbag2 development by creating an account on GitHub.

42. [REP 2000 -- ROS 2 Releases and Target Platforms (ROS.org)](https://www.ros.org/reps/rep-2000.html)

43. [Drake Stability Guidelines](https://drake.mit.edu/stable.html) - Drake ("dragon" in Middle English) is a C++ toolbox started by the Robot Locomotion Group at the MIT...

44. [RobotLocomotion - GitHub](https://github.com/robotlocomotion) - RobotLocomotion has 58 repositories available. Follow their code on GitHub.


```

---
# Solicitação 3
``` markdown
Estou considerando implementar um sistema que, com base em dados, análises e consultas, reduz o número de possibilidades e/ou respostas possíveis do sistema de otimização para que ele opere sob um menor número de opções, resultados e/ou alternativas possíveis de resposta ótima.
É possível e adequado implementar esse sistema? Se sim, onde e como ele deve atuar? No NMPC ou no CBBA ou em ambos?

Considere que pretendo implementar esse sistema utilizando múltiplos agentes de inteligência artificial, competindo entre si para a melhor solução, utilizando como motor principal de inferências o projeto Laya (após uma etapa de fine-tuning para essa tarefa específica), que é a principal alternativa open-source (código aberto) ao Jev (modelo de decisão da TypeSafe AI), lançado pela Convai Innovations. O Laya é um classificador de decisão baseado em encoders bidirecionais (como ModernBERT e mmBERT) em vez de gerar texto token por token, oferecendo latência ultrarrápida de cerca de 32,8 milissegundos (comparado aos ~150–276 ms do Jev).

```

# Resposta solicitação 3
``` markdown
**Sim, é possível e adequado**, mas esse subsistema deve funcionar como uma camada de **redução aprendida de candidatos**, e não como substituto do CBBA, do NMPC ou dos verificadores de segurança. No ATAS, ele deve atuar **principalmente antes do CBBA** e **como gerador/rankeador de warm starts antes do NMPC**; nunca deve remover restrições rígidas nem aplicar comandos diretamente.

## Papel recomendado

A arquitetura adequada é:

''' text
Estado do ATAS
      │
      ▼
Filtros determinísticos
      │  removem opções impossíveis
      ▼
Redutor aprendido de candidatos
      │  classifica e prioriza opções plausíveis
      ▼
  ┌───────────────┬─────────────────┐
  ▼               ▼                 ▼
CBBA          NMPC candidato 1   NMPC candidato M
  │               │                 │
  └───────────────┴────────┬────────┘
                           ▼
              Verificador determinístico
                           │
                           ▼
                  Filtro de segurança
                           │
                           ▼
                       Drake
'''

A regra fundamental deve ser:

> A inteligência artificial reduz e ordena o espaço de busca; os algoritmos formais resolvem o problema reduzido; os verificadores determinísticos aceitam ou rejeitam o resultado.

Essa abordagem é consistente com métodos de *learning to prune* e *learning to warm-start*: a aprendizagem elimina opções fáceis ou fornece inicializações, enquanto um algoritmo convencional resolve o núcleo difícil e verifica viabilidade. [arxiv](https://arxiv.org/pdf/1910.10835v2.pdf)

## Onde ele deve atuar

| Ponto de atuação | Uso recomendado | Grau de recomendação |
|---|---|---:|
| Antes do CBBA | Eliminar ou priorizar tarefas, viewpoints e pares drone–tarefa | **Muito alto** |
| Dentro do lance CBBA | Estimar qualidade, custo ou probabilidade de êxito | Médio, com restrições |
| Antes do NMPC | Selecionar referências, modos e warm starts | **Muito alto** |
| Dentro do NMPC | Escolher horizonte, pesos ou regiões de operação | Médio |
| Substituindo o NMPC | Produzir diretamente os comandos de voo | **Não recomendado** |
| Filtro de segurança | Autorizar violações ou remover restrições | **Proibido** |
| Após a otimização | Rankear soluções já verificadas | Alto |

## Atuação no CBBA

O maior ganho inicial provavelmente estará no CBBA, porque seu espaço é naturalmente discreto. Para cada agente, o redutor pode receber um conjunto grande de:

- tarefas de cobertura;
- regiões de interesse;
- viewpoints;
- setores angulares;
- tarefas de acompanhamento;
- tarefas de redundância;
- tarefas de relay V2X;
- pares drone–tarefa;
- posições candidatas discretizadas.

O sistema classificaria cada opção como, por exemplo:

''' text
REJECT_HARD
LOW_PRIORITY
KEEP
HIGH_PRIORITY
MANDATORY
'''

Contudo, `REJECT_HARD` **não deve ser produzido pelo Laya**. Essa classe precisa resultar exclusivamente de regras determinísticas, como:

- capacidade incompatível;
- bateria insuficiente;
- tarefa expirada;
- altitude proibida;
- geofence;
- ausência de rota possível;
- FoV geometricamente impossível;
- sensor inadequado;
- requisito obrigatório não atendido.

O Laya deve operar apenas depois desses filtros e retornar categorias como `LOW_PRIORITY`, `KEEP` e `HIGH_PRIORITY`.

### Pipeline CBBA

1. Gerar tarefas e viewpoints candidatos.
2. Aplicar filtros geométricos, temporais, energéticos e de capacidade.
3. Calcular atributos numéricos normalizados.
4. Submeter os candidatos plausíveis aos agentes classificadores.
5. Agregar as classificações e probabilidades.
6. Preservar os melhores \(K\) candidatos por drone.
7. Preservar também candidatos exploratórios e obrigatórios.
8. Executar o CBBA convencional sobre o conjunto reduzido.
9. Se não houver solução ou consenso, aumentar \(K\) e repetir.
10. Comparar periodicamente a solução reduzida com a solução sem redução.

O CBBA convencional depende de uma estrutura de lances adequada, incluindo ganhos marginais decrescentes, para sustentar suas propriedades de convergência. Portanto, não é aconselhável deixar o modelo neural produzir livremente o lance final. O modelo pode estimar componentes como qualidade visual, risco ou chance de sucesso, mas a função final deve continuar explícita, normalizada e testável. [semanticscholar](https://www.semanticscholar.org/paper/Consensus-Based-Decentralized-Auctions-for-Robust-Choi-Brunet/b34aa0606626cf170118e81d11dec701598ee6d9)

Uma formulação segura seria:

\[
b_{ij}
=
b^{\text{det}}_{ij}
+
\lambda_{\text{AI}}\hat{s}_{ij},
\]

onde \(b^{\text{det}}_{ij}\) é o lance determinístico e \(\hat{s}_{ij}\) é uma correção aprendida limitada:

\[
-\Delta_{\max}
\leq
\lambda_{\text{AI}}\hat{s}_{ij}
\leq
\Delta_{\max}.
\]

Na primeira versão, recomenda-se usar a IA somente para **ordenar os candidatos que serão avaliados pelo CBBA**, sem alterar seus lances. Isso preserva melhor o comportamento do algoritmo.

## Atuação no NMPC

No NMPC, “reduzir possibilidades” não deve significar retirar arbitrariamente regiões do espaço contínuo. Isso pode eliminar a única trajetória viável ou remover o ótimo global. O uso mais seguro é selecionar **warm starts**, referências e classes topológicas de trajetória.

Por exemplo, um drone pode ter estes candidatos:

- contornar o obstáculo pela esquerda;
- contornar pela direita;
- passar acima;
- manter altitude e reduzir velocidade;
- realizar hover;
- retornar ao último viewpoint seguro.

Cada alternativa gera uma trajetória inicial aproximada. Os agentes de IA classificam as alternativas e o NMPC resolve apenas as melhores \(M\), em vez de iniciar repetidamente a partir de todas as possibilidades.

### Pipeline NMPC

1. Receber a tarefa vencedora do CBBA.
2. Gerar uma biblioteca pequena de referências dinamicamente plausíveis.
3. Descartar referências que violem restrições evidentes.
4. Usar o redutor aprendido para classificar os modos restantes.
5. Selecionar os melhores \(M\) warm starts.
6. Resolver um NMPC para cada warm start selecionado, se o orçamento permitir.
7. Verificar dinâmica, colisões, geofence, separação e reserva energética.
8. Escolher a melhor solução factível.
9. Aplicar apenas o primeiro comando.
10. Guardar a solução como warm start do próximo ciclo.

Métodos de warm start baseados em dados podem reduzir o número de iterações e melhorar a convergência, mas o solver posterior continua necessário para impor as restrições. Warm starts multimodais também ajudam a representar mínimos locais pertencentes a diferentes classes de trajetória. [sciencedirect](https://www.sciencedirect.com/science/article/abs/pii/S0005109820304453)

O modelo aprendido não deve:

- remover restrições de colisão;
- alterar limites de atuação;
- declarar uma trajetória factível;
- produzir diretamente thrust ou taxas angulares;
- substituir o status do solver;
- autorizar uma solução com violação;
- impedir a execução de hover ou retorno seguro.

## Papel do Laya

O Laya parece apropriado para o nível **discreto e classificatório** dessa arquitetura. Ele recebe estado textual ou JSON e perguntas tipadas, retornando escolhas, scores e probabilidades em uma passagem de inferência; os checkpoints divulgados usam ModernBERT ou mmBERT e possuem pesos sob Apache-2.0. [laya.convaiinnovations](https://laya.convaiinnovations.com/)

Entretanto, ele não foi projetado originalmente como:

- otimizador contínuo;
- regressor de trajetória;
- solver de controle ótimo;
- processador geométrico;
- verificador de restrições;
- modelo físico;
- estimador numérico de alta precisão.

Por isso, o melhor uso no ATAS seria responder perguntas estruturadas como:

''' json
{
  "state": {
    "drone_id": 3,
    "battery": 0.67,
    "distance_to_task": 42.1,
    "estimated_visibility": 0.81,
    "occlusion_ratio": 0.12,
    "ground_robot_priority": 0.95,
    "communication_quality": 0.72,
    "estimated_energy_cost": 0.18,
    "task_deadline_margin": 4.2
  },
  "question": {
    "type": "choice",
    "options": [
      "discard",
      "retain",
      "high_priority",
      "mandatory_review"
    ]
  }
}
'''

Ainda assim, encoders treinados sobre texto ou JSON não devem ser considerados naturalmente confiáveis para comparar números, distâncias e restrições físicas. Os valores precisam ser:

- normalizados;
- acompanhados de categorias semânticas;
- testados em casos de fronteira;
- submetidos a ablações;
- calibrados fora da distribuição;
- confrontados com uma baseline puramente numérica.

Uma representação mais robusta pode combinar os números com bins:

''' json
{
  "battery": 0.67,
  "battery_band": "MEDIUM",
  "visibility": 0.81,
  "visibility_band": "HIGH",
  "collision_margin": 1.4,
  "collision_status": "MARGINAL"
}
'''

## Limitação da latência

A latência de 32,8 ms divulgada refere-se ao checkpoint multilíngue executado em uma GPU NVIDIA T4; o checkpoint inglês aparece com aproximadamente 39,5 ms no mesmo tipo de benchmark. Esses números não podem ser transferidos diretamente para a RTX A2000 do laptop, especialmente quando Drake, ROS 2, ray casting e vários processos também competirem pela GPU. [dell.huggingface](https://dell.huggingface.co/models/convaiinnovations/laya)

Além disso, carregar uma cópia completa do modelo para cada “agente de IA” desperdiçaria VRAM. A arquitetura apropriada é:

''' text
Agentes lógicos especializados
             │
             ▼
Fila de inferência e batching
             │
             ▼
Uma instância compartilhada do Laya
             │
             ▼
Respostas separadas por papel/agente
'''

O Laya divulga ganhos de throughput quando várias perguntas são processadas em batch, o que favorece essa arquitetura compartilhada. [laya.convaiinnovations](https://laya.convaiinnovations.com/)

## Agentes concorrentes

“Múltiplos agentes competindo” só agrega valor se houver diversidade real. Vários agentes com o mesmo checkpoint, o mesmo prompt, os mesmos atributos e o mesmo seed tenderão a produzir respostas altamente correlacionadas.

Uma divisão adequada seria:

| Agente | Prioridade |
|---|---|
| `coverage_agent` | Redução de pontos cegos |
| `detection_agent` | Qualidade esperada da percepção |
| `energy_agent` | Energia e autonomia |
| `communication_agent` | V2X e conectividade |
| `safety_agent` | Margens operacionais, sem substituir regras rígidas |
| `robustness_agent` | Incerteza, falhas e redundância |
| `resource_agent` | Menor quantidade de drones ativos |

Cada agente classifica os mesmos candidatos segundo uma política especializada. Um agregador determinístico calcula:

\[
S(c)=
\sum_a w_a\,p_a(\text{retain}\mid c)
-
\lambda_u U(c),
\]

onde \(U(c)\) representa discordância ou incerteza.

A discordância pode ser útil:

- **Alta concordância positiva:** candidato permanece.
- **Alta concordância negativa:** candidato pode ser removido, salvo salvaguardas.
- **Alta discordância:** encaminhar ao CBBA completo.
- **Baixa confiança:** não podar.
- **Entrada fora da distribuição:** ignorar a IA e usar baseline determinística.

Para obter diversidade real, podem ser usados:

- checkpoints com seeds diferentes;
- subconjuntos diferentes de atributos;
- funções de perda especializadas;
- agentes treinados para objetivos diferentes;
- modelos compactos alternativos;
- regras analíticas independentes;
- ensemble com calibração separada.

## Redução segura

Recomenda-se implementar dois modos:

### Soft pruning

O candidato não é eliminado; apenas recebe baixa prioridade ou não entra no primeiro lote. Se não houver solução, o sistema amplia o conjunto.

''' text
top K → tenta resolver
top 2K → nova tentativa
todos os candidatos → fallback completo
'''

Esse deve ser o modo inicial.

### Hard pruning

O candidato é removido definitivamente. Deve ser reservado a:

- inviabilidade geometricamente comprovada;
- incompatibilidade de capacidade;
- expiração;
- restrição regulatória;
- impossibilidade energética comprovada;
- dominância formal;
- regras invariantes verificadas.

Não se recomenda hard pruning baseado apenas no Laya.

## Arquitetura ATAS

Sugere-se um componente denominado `atas_candidate_reduction`:

''' text
Task Generator
      │
      ▼
Deterministic Feasibility Filter
      │
      ▼
Candidate Feature Builder
      │
      ▼
AI Agent Ensemble
      │
      ▼
Calibrated Aggregator
      │
      ├── CBBA shortlist
      ├── NMPC warm-start shortlist
      ├── uncertainty report
      └── fallback request
'''

Interfaces ROS 2 possíveis:

''' text
/atas/candidates/raw
/atas/candidates/feasible
/atas/candidates/ranked
/atas/candidates/rejected
/atas/ai_agent_scores
/atas/ai_disagreement
/atas/reduction/status
'''

Cada decisão deve registrar:

- candidatos de entrada;
- opções removidas;
- motivo;
- probabilidades;
- versão do modelo;
- hash do checkpoint;
- limiar utilizado;
- latência;
- conjunto final;
- solução do CBBA;
- resultado do NMPC;
- diferença em relação à baseline completa.

## Treinamento

O conjunto de treinamento deve ser produzido principalmente por **soluções do pipeline completo**, e não por opiniões humanas abstratas:

1. Gerar cenários no Drake.
2. Executar CBBA sem redução.
3. Resolver múltiplos NMPCs ou uma baseline de maior orçamento.
4. Registrar quais tarefas e viewpoints participaram das melhores soluções.
5. Rotular candidatos descartáveis, relevantes e críticos.
6. Incluir exemplos em que candidatos inicialmente ruins tornam-se necessários.
7. Incluir falhas de drones, bloqueios, baixa bateria e comunicação degradada.
8. Separar treino, validação e teste por cenário, mapa e configuração de enxame.
9. Calibrar probabilidades em conjunto separado.
10. Testar cenários fora da distribuição.

A função de perda deve penalizar muito mais o **falso descarte** de um candidato necessário do que a retenção de candidatos inúteis:

\[
L =
\lambda_{\mathrm{FN}}L_{\mathrm{false\ prune}}
+
\lambda_{\mathrm{FP}}L_{\mathrm{unnecessary\ keep}}
+
\lambda_{\mathrm{cal}}L_{\mathrm{calibration}},
\qquad
\lambda_{\mathrm{FN}}\gg\lambda_{\mathrm{FP}}.
\]

O objetivo principal não é obter alta acurácia média. É obter **recall extremamente alto para candidatos pertencentes a soluções factíveis ou próximas do Pareto**.

## Métricas obrigatórias

| Categoria | Métrica |
|---|---|
| Redução | Percentual de candidatos removidos |
| Segurança | Taxa de solução factível perdida |
| Qualidade | Gap em relação ao pipeline completo |
| CBBA | Tempo e rodadas até consenso |
| NMPC | Tempo, iterações e falhas do solver |
| Percepção | Cobertura, pontos cegos e detecção esperada |
| Frota | Energia e número de drones ativos |
| IA | Calibração, recall, precisão e OOD |
| Computação | P50, P95, P99 e deadline misses |
| Robustez | Desempenho sob falha, atraso e packet loss |

O principal critério deve ser:

\[
\text{speedup significativo}
\quad\text{com}\quad
\text{taxa de perda de factibilidade próxima de zero}.
\]

## Recomendação final

Implemente o sistema em **ambos**, mas de maneira assimétrica:

- **CBBA:** redução direta do conjunto de tarefas, viewpoints e pares drone–tarefa; este é o uso principal.
- **NMPC:** seleção de referências, warm starts e classes de trajetória; não redução arbitrária das variáveis contínuas.
- **Segurança:** totalmente fora do modelo aprendido.
- **Laya:** classificador/rankeador e estimador de confiança, não solver nem controlador.
- **Agentes múltiplos:** agentes lógicos especializados utilizando uma instância compartilhada e batched do modelo.
- **Primeira versão:** soft pruning, top-\(K\) adaptativo, fallback completo e comparação contínua com a baseline.

A implementação inicial mais segura é:

''' text
Filtros formais
    → ensemble Laya
    → top-K adaptativo para CBBA
    → 2–4 warm starts para NMPC
    → solver convencional
    → verificação determinística
    → filtro de segurança
'''

Isso preserva a estrutura CBBA–NMPC já definida para o ATAS e utiliza a IA onde ela oferece maior valor: **reduzir custo de busca e melhorar inicialização, sem assumir autoridade sobre viabilidade, estabilidade ou segurança**.

```

# Solicitação 4
``` markdown
Por que não é recomendado utilizar o Laya para Substituir o NMPC, Produzindo diretamente os comandos de voo?

```

# Resposta solicitação 4
``` markdown
Porque o **Laya é um classificador de decisões discretas sobre entradas estruturadas/textuais, não um controlador ótimo de sistemas dinâmicos**. Mesmo após fine-tuning, comandar diretamente um drone com suas respostas eliminaria mecanismos centrais do NMPC: predição temporal, aplicação explícita da dinâmica, satisfação de restrições, verificação de viabilidade e tratamento sistemático de obstáculos e interações entre drones.

## Diferença fundamental

| Capacidade | Laya | NMPC |
|---|---|---|
| Selecionar entre opções discretas | Sim | Não é seu papel principal |
| Produzir scores/probabilidades | Sim | Produz custos e violações |
| Predizer dinâmica no horizonte | Não nativamente | Sim |
| Impor limites dos atuadores | Não | Sim |
| Impor geofence e separação | Não | Sim |
| Considerar estados futuros | Somente se codificados como atributos | Explicitamente |
| Verificar factibilidade | Não | Sim |
| Otimizar sequência de comandos | Não | Sim |
| Oferecer garantias de estabilidade | Não | Possível sob hipóteses específicas |
| Garantir satisfação de restrições | Não | Possível por construção |

O Laya aceita perguntas tipadas dos tipos `choice`, `score` e `noul`, selecionando respostas e probabilidades a partir das opções apresentadas. Isso é adequado para decidir **qual tarefa priorizar** ou **qual warm start testar**, mas é diferente de resolver, em cada ciclo: [laya](https://laya.studio/learn/what-is-laya)

\[
\min_{\mathbf u_{0:N-1}}
\sum_{k=0}^{N-1}\ell(\mathbf x_k,\mathbf u_k)+\ell_f(\mathbf x_N)
\]

sujeito a:

\[
\mathbf x_{k+1}=f(\mathbf x_k,\mathbf u_k),
\]

\[
\mathbf x_k\in\mathcal X,\qquad
\mathbf u_k\in\mathcal U,
\]

\[
d(\mathbf x_k,\mathcal O)\geq d_{\min},
\qquad
d(\mathbf x_{i,k},\mathbf x_{j,k})\geq d_{\mathrm{sep}}.
\]

## Dinâmica contínua

Os comandos de um drone não são escolhas isoladas. Cada comando altera velocidade, posição, atitude e energia, influenciando todos os estados futuros.

O Laya poderia escolher entre:

''' text
SUBIR
DESCER
VIRAR_ESQUERDA
VIRAR_DIREITA
MANTER
'''

Mas essa classificação não responde:

- Quanto subir?
- Durante quanto tempo?
- Com que aceleração?
- Qual taxa de pitch é admissível?
- A trajetória futura colidirá com outro drone?
- Será possível cumprir a tarefa seguinte?
- O drone manterá reserva energética para retornar?
- A resposta continuará válida depois de atraso na comunicação?

O NMPC responde a essas questões ao otimizar uma **sequência temporal** de comandos sobre um modelo dinâmico. Depois aplica somente o primeiro comando e refaz a otimização com o estado atualizado.

## Restrições rígidas

Uma resposta neural pode parecer razoável e ainda violar:

- thrust máximo;
- taxa angular máxima;
- envelope de voo;
- altitude regulamentar;
- geofence;
- distância de segurança;
- velocidade máxima;
- reserva de bateria;
- limites do gimbal;
- região de estabilidade;
- colisão futura que ainda não aparece no estado instantâneo.

Probabilidade ou confiança não equivale a viabilidade física. Uma resposta com confiança de 99% ainda pode ser inadmissível.

O NMPC pode incorporar essas condições como desigualdades explícitas. Formulações robustas conseguem estabelecer, sob hipóteses documentadas, satisfação de restrições, estabilidade e viabilidade recursiva. [oxford-man.ox.ac](https://www.oxford-man.ox.ac.uk/wp-content/uploads/2020/11/Robust-learning-based-MPC-for-nonlinear-constrained-systems.pdf)

## Viabilidade recursiva

Não basta que o comando seja seguro **agora**. É necessário evitar estados dos quais não exista continuação segura.

Considere um drone voando em direção a uma parede. Um comando de aceleração pode respeitar todos os limites no instante atual, mas colocar o veículo tão próximo da parede que ele não tenha distância de frenagem suficiente no próximo ciclo.

O NMPC detecta isso no horizonte:

''' text
t0: comando admissível
t1: ainda sem colisão
t2: frenagem insuficiente
t3: colisão inevitável
'''

A **viabilidade recursiva** significa que, depois de aplicar o primeiro comando, deve continuar existindo uma solução admissível no ciclo seguinte. Arquiteturas MPC usam conjuntos terminais, tubos robustos, restrições apertadas ou outras construções para estabelecer essa propriedade. [arxiv](https://arxiv.org/html/1703.02761v1)

O Laya, por si só, não possui esse conceito matemático.

## Estabilidade

Um classificador pode alternar entre decisões próximas:

''' text
ciclo 1: virar à esquerda
ciclo 2: virar à direita
ciclo 3: virar à esquerda
'''

Isso pode gerar chattering, oscilação, desperdício energético ou instabilidade. Mesmo que cada comando individual pareça adequado, a sequência fechada pode ser ruim.

Um NMPC utiliza:

- custo de rastreamento;
- custo de controle;
- penalidade de variação do comando;
- modelo dinâmico;
- custo terminal;
- conjunto terminal;
- horizonte de predição.

Esses elementos permitem analisar estabilidade e suavidade. Um classificador neural não oferece essas propriedades automaticamente.

## Generalização e distribuição

O fine-tuning aprende a partir de uma distribuição de cenários. Em operação, o ATAS pode encontrar:

- formação inédita do enxame;
- combinação nova de obstáculos;
- falha simultânea de agentes;
- atraso maior que o visto no treinamento;
- condições de vento não representadas;
- estado próximo do limite operacional;
- configurações novas de FoV;
- mensagens inconsistentes ou antigas.

Nessas situações, a rede ainda retorna alguma resposta. Confiança elevada não garante que a entrada esteja dentro da distribuição de treinamento.

Isso é especialmente crítico em controle, porque pequenos erros repetidos podem se acumular na dinâmica. O NMPC também depende de um modelo imperfeito, mas essa incerteza pode ser representada por margens, tubos robustos, tightening e limites conhecidos.

## Representação numérica

O Laya lê uma sequência e responde a perguntas tipadas. Mesmo com JSON contendo números, sua arquitetura baseada em encoder não executa naturalmente:

- integração de equações diferenciais;
- álgebra de estados;
- propagação de covariância;
- cálculo confiável de distância de colisão;
- otimização contínua;
- verificação de desigualdades;
- análise de alcançabilidade.

Por exemplo:

''' json
{
  "distance_to_obstacle": 4.2,
  "velocity": 12.7,
  "max_deceleration": 3.1
}
'''

Um controlador precisa relacionar esses valores fisicamente. Uma aproximação simplificada da distância de frenagem é:

\[
d_{\mathrm{stop}}=\frac{v^2}{2a_{\max}}.
\]

Nesse exemplo:

\[
d_{\mathrm{stop}}\approx\frac{12.7^2}{2(3.1)}\approx26\text{ m},
\]

muito maior que 4,2 m. Não é adequado depender de um encoder textual para aprender implicitamente e aplicar com precisão esse tipo de relação em todas as combinações possíveis.

## Latência

Mesmo aceitando os aproximadamente 32,8 ms divulgados, baixa latência não resolve a inadequação funcional. Um resultado pode ser rápido e ainda não estar:

- fisicamente correto;
- dentro dos limites;
- livre de colisão;
- dinamicamente executável;
- estável;
- sincronizado com o estado atual.

Além disso, 32,8 ms é uma medição em determinada configuração de hardware e benchmark, não um limite de pior caso na RTX A2000 compartilhada com Drake, ROS 2 e processamento geométrico.

Para controle, importam principalmente:

- latência de pior caso;
- jitter;
- P99/P99.9;
- deadlines perdidos;
- comportamento quando a inferência falha;
- idade do estado usado na decisão.

## Treinamento incompleto

Para substituir o NMPC, seria necessário gerar dados que cobrissem um espaço combinatório muito amplo:

- estados do drone;
- estados dos vizinhos;
- obstáculos;
- velocidades;
- vento;
- bateria;
- tarefas;
- FoV;
- conectividade;
- atrasos;
- falhas;
- diferentes quantidades de drones.

Mesmo um grande conjunto de trajetórias do NMPC ensina apenas uma aproximação da política nos estados observados. Não garante comportamento correto entre amostras ou fora delas.

Além disso, se os rótulos forem produzidos pelo próprio NMPC, o Laya aprenderá uma aproximação do controlador e poderá introduzir erro sem adquirir automaticamente suas garantias.

## O uso seguro

Isso não significa que uma rede neural jamais possa aproximar MPC. Há pesquisas em **approximate MPC**, mas elas adicionam mecanismos de segurança:

1. A rede prevê uma sequência completa de controles.
2. Um verificador testa a sequência contra dinâmica e restrições.
3. Uma trajetória segura convencional é mantida como fallback.
4. A previsão neural só é usada se for factível e tiver custo aceitável.
5. Caso contrário, aplica-se a solução segura.

Essa estrutura pode oferecer garantias determinísticas apesar de erros de aproximação. Observe que, nesse caso, a rede **não substitui sozinha o MPC**; ela atua dentro de uma arquitetura MPC com verificação e fallback. [arxiv](https://arxiv.org/html/2304.09575v3)

## Arquitetura adequada

Para o ATAS:

''' text
Laya
  ├── seleciona tarefa
  ├── seleciona viewpoint
  ├── seleciona modo de trajetória
  ├── escolhe warm starts
  ├── sugere pesos limitados
  └── estima criticidade
             │
             ▼
NMPC
  ├── prediz estados
  ├── otimiza comandos
  ├── impõe dinâmica
  ├── impõe restrições
  └── produz trajetória nominal
             │
             ▼
Verificador + safety filter
             │
             ▼
Autopiloto / Drake
'''

Uma evolução possível seria:

''' text
Laya → escolhe entre trajetórias pré-verificadas
'''

Isso é mais seguro do que:

''' text
Laya → gera diretamente thrust/rates
'''

Outra opção é permitir que o Laya selecione um dos controladores:

''' text
TRACK_VIEWPOINT
AVOID_OBSTACLE
HOLD_POSITION
RETURN_HOME
EMERGENCY_LAND
'''

Cada modo continuaria executado por um controlador formal e protegido.

## Em termos diretos

O Laya pode responder bem:

> “Qual dessas estratégias parece mais adequada para este estado?”

O NMPC precisa responder:

> “Qual sequência contínua de comandos, respeitando dinâmica e restrições durante todo o horizonte, minimiza o custo e mantém uma continuação segura?”

Esses são problemas distintos. No ATAS, o Laya é adequado para **decisão estratégica e redução do espaço de busca**; o NMPC é necessário para **controle preditivo contínuo, viável e verificável**. Substituir integralmente o NMPC pelo Laya transferiria autoridade de voo a um classificador que não foi concebido para dinâmica, otimização contínua ou garantias de segurança.

```

# Solicitação 5
``` markdown
Faça um guia completo, didático, passo a passo e detalhado de como posso criar um "mapa" para rodar essa simulação no Drake onde irei inserir edificações, obstáculos e elementos que deverão ser identificados ao longo da simulação desse sistema

Considere apresentar e definir quais as ferramenta e/ou softwares open source são mais indicada para criar esse "mapa".
```

# Resposta 5
``` markdown
Sim — o caminho mais **adequado** para criar esse “mapa” no Drake é tratá-lo como uma **cena 3D modular**, composta por modelos estáticos e dinâmicos descritos em **SDFormat/URDF + meshes `.gltf`/`.obj`**, e não como um “mapa” no sentido GIS ou occupancy grid. No seu caso, o melhor fluxo open source é: **modelar o ambiente em Blender**, exportar as geometrias para **glTF/OBJ**, criar **wrappers SDFormat** para cada elemento relevante, e então montar a cena completa no Drake com `Parser`, `SceneGraph` e `MultibodyPlant`. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)

## Ferramentas indicadas

As ferramentas open source mais indicadas para esse trabalho são:

| Ferramenta | Papel principal | Quando usar |
|---|---|---|
| **Blender** | Modelagem 3D do ambiente | Melhor opção geral para edifícios, ruas, obstáculos e organização visual do cenário. [docs.blender](https://docs.blender.org/manual/en/latest/addons/scene_gltf2.html) |
| **Drake** | Simulação física e geométrica | Para carregar, posicionar, soldar e consultar os elementos da cena. [github](https://github.com/robotlocomotion) |
| **Meshcat** | Visualização e depuração | Para inspecionar a cena no navegador durante o desenvolvimento. [github](https://github.com/robotlocomotion) |
| **OpenSCAD** | Geometria paramétrica simples | Útil para obstáculos, volumes, torres, caixas e estruturas repetitivas. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export) |
| **Meshlab** | Conversão/limpeza de malhas | Útil quando você recebe assets em formatos que precisam virar OBJ. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html) |

### Recomendação prática

Para o ATAS, a recomendação mais forte é:

- **Blender** como ferramenta principal de criação do ambiente.
- **SDFormat** como formato principal de descrição da cena.
- **glTF** para geometria visual.
- **Primitivas ou malhas simplificadas** para colisão e consultas geométricas.
- **OpenSCAD** apenas como apoio para gerar obstáculos paramétricos simples.

Isso é coerente com a documentação do Drake, que recomenda **SDFormat** para cenas mais complexas e indica **glTF como formato preferido para visualização**; OBJ também é bem suportado. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)

## Conceito do “mapa”

No Drake, o “mapa” do seu projeto deve ser organizado em três camadas:

1. **Camada visual** — o que aparece na visualização.
2. **Camada de colisão/proximidade** — volumes simplificados usados para contato e consultas geométricas.
3. **Camada semântica/perceptiva** — elementos rotulados para saber o que cada drone “vê” ou não vê.

Essa separação é importante porque o Drake distingue papéis geométricos, e um mesmo modelo pode carregar funções diferentes para ilustração, percepção e proximidade. Para seu caso, isso permite ter edifícios visualmente detalhados, mas com colisão simplificada e rótulos de percepção específicos. [github](https://github.com/robotlocomotion)

## Estratégia recomendada

A forma mais robusta de construir seu mapa é esta:

1. Modelar o ambiente no Blender em **módulos**.
2. Exportar cada módulo como mesh.
3. Criar um arquivo **SDF por ativo** importante.
4. Montar uma **cena mestre** no Drake que instancia esses módulos.
5. Validar no Meshcat.
6. Adicionar rótulos e metadados para FoV e detecção.

Os módulos devem incluir, por exemplo:

- terreno/base;
- vias e áreas de circulação;
- edificações;
- muros e barreiras;
- postes, árvores e obstáculos verticais;
- veículos estáticos;
- alvos e elementos que deverão ser identificados;
- zonas semânticas, como entrada, cruzamento, doca ou corredor.

## Passo a passo

### 1. Defina o escopo do cenário

Antes de abrir qualquer software, defina:

- dimensão do ambiente em metros;
- quantidade de edifícios;
- largura de vias;
- altura típica dos obstáculos;
- objetos que interessam para percepção;
- objetos irrelevantes para percepção, mas relevantes para oclusão;
- quais elementos são estáticos e quais serão móveis.

Para o ATAS, isso deve sair de requisitos funcionais, por exemplo:

- o drone precisa observar vias laterais;
- o robô terrestre precisa operar em corredores urbanos;
- edifícios devem produzir oclusão realista;
- postes e árvores podem criar pontos cegos;
- certos objetos devem ser classificáveis como “alvos”.

Essa etapa evita criar um cenário bonito, mas ruim para experimentos.

### 2. Escolha a estrutura de diretórios

Use um repositório organizado por ativos. Um exemplo:

''' text
atas_sim/
  models/
    building_a/
      model.sdf
      meshes/
        building_a_visual.glb
        building_a_collision.obj
    building_b/
      model.sdf
      meshes/
        building_b_visual.glb
        building_b_collision.obj
    wall_segment/
      model.sdf
      meshes/
        wall_visual.glb
    pole/
      model.sdf
      meshes/
        pole_visual.glb
    target_object_01/
      model.sdf
      meshes/
        target_visual.glb
  scenes/
    atas_city_block.dmd.yaml
    atas_test_range.dmd.yaml
  packages/
    atas_environment/
      package.xml
'''

O Drake aceita `package://` URLs por meio do `PackageMap` do `Parser`, então vale a pena estruturar o projeto como pacote desde cedo.

### 3. Modele o ambiente no Blender

No Blender, modele os objetos em **escala real**, em metros. O Drake assume SI e, ao lidar com OBJ, assume vértices em metros.

Boas práticas no Blender:

- 1 unidade = 1 metro.
- Origem de cada objeto bem posicionada.
- Transformações aplicadas antes da exportação.
- Nomes claros para objetos.
- Separar objetos por função: prédio, muro, obstáculo, alvo.
- Evitar malhas excessivamente pesadas.
- Criar versões simplificadas para colisão, se necessário.

### 4. Trabalhe com modularidade

Em vez de modelar um bairro inteiro como uma única malha, crie blocos reutilizáveis:

- `building_low_01`
- `building_tall_01`
- `wall_straight_02`
- `road_segment_10m`
- `tree_01`
- `pole_camera_01`
- `vehicle_parked_01`

Isso facilita:

- instanciamento repetido;
- alterações rápidas;
- testes A/B;
- geração procedural futura;
- controle de oclusões específicas.

Além disso, OBJ carregado diretamente como modelo no Drake exige um único objeto por arquivo, o que reforça a conveniência da modularização.

### 5. Exporte para glTF/OBJ

Para visualização, priorize **glTF/GLB**. O Drake recomenda glTF como formato preferido para visualização. O Blender exporta glTF 2.0 nativamente, inclusive como `.glb`, que embute malha e texturas em um único arquivo. [drake.mit](https://drake.mit.edu/tutorials/authoring_multibody_simulation.html)

Use:

- **`.glb`** para visual.
- **`.obj`** ou primitivas para colisão simplificada.
- Evite depender só de uma malha complexa para tudo.

Se o ativo for simples e estático, um único visual `.glb` e uma colisão por caixas/cilindros no SDF costuma ser melhor do que usar a mesh inteira para colisão. [github](https://github.com/robotlocomotion)

### 6. Crie wrappers SDFormat

Mesmo que o Drake possa carregar OBJ diretamente, isso usa hipóteses padrão de massa, escala e inércia. Para um ambiente organizado, o melhor é criar um `model.sdf` para cada ativo. [github](https://github.com/robotlocomotion)

Exemplo simplificado:

''' xml
<?xml version="1.0"?>
<sdf version="1.7">
  <model name="building_a">
    <static>true</static>
    >
      <visual name="visual">
        <geometry>
          <mesh>
            <uri>meshes/building_a_visual.glb</uri>
          </mesh>
        </geometry>
      </visual>

      llision name="collision">
        <pose>0 0 10 0 0 0</pose>
        <geometry>
          <box>
            <size>20 15 20</size>
          </box>
        </geometry>
      </collision>
    </link>
  </model>
</sdf>
'''

Para edifícios e obstáculos fixos, use `<static>true</static>` quando apropriado. Para objetos puramente estruturais, isso simplifica a simulação.

### 7. Separe visual de colisão

Essa é uma das decisões mais importantes. A própria documentação do Drake recomenda usar malha para visual e primitivas ou aproximações mais simples para colisão quando possível, porque isso reduz custo computacional. [github](https://github.com/robotlocomotion)

Para seu caso:

- **Visual detalhado**: `.glb`
- **Colisão/FoV rápido**: caixas, cilindros ou malhas simplificadas
- **Percepção**: rótulos por classe de objeto

Exemplos:

- prédio: visual detalhado, colisão por 1 ou 2 boxes;
- árvore: visual detalhado, colisão por cilindro;
- poste: visual detalhado, colisão por cilindro fino;
- veículo estacionado: visual detalhado, colisão por box.

## Montagem da cena

### 8. Crie uma cena mestre

No lugar de um único arquivo enorme, use um arquivo de cena que instancia os modelos. O parser do Drake suporta SDF, URDF, MJCF, OBJ e também **Drake Model Directives** (`.dmd.yaml`), que são úteis para organizar cenas com múltiplos modelos.

Uma cena mestre deve:

- incluir o terreno;
- incluir prédios;
- posicionar muros;
- adicionar obstáculos;
- definir poses iniciais;
- nomear cada instância com clareza.

Essa abordagem fica especialmente boa para cenários com vários drones, dois robôs terrestres e objetos de interesse espalhados.

### 9. Carregue no Drake

No Drake, o fluxo base é:

- criar `DiagramBuilder`;
- usar `AddMultibodyPlantSceneGraph`;
- criar `Parser`;
- carregar os modelos;
- soldar ao mundo o que for fixo;
- `Finalize()`.

Esse padrão está no tutorial oficial. [github](https://github.com/robotlocomotion)

Exemplo conceitual:

''' python
builder = DiagramBuilder()
plant, scene_graph = AddMultibodyPlantSceneGraph(builder, time_step=0.01)
parser = Parser(plant, scene_graph)

parser.AddModels("scenes/atas_city_block.dmd.yaml")

plant.Finalize()
'''

### 10. Use Meshcat para depurar

O Meshcat é essencial para validar:

- escala do cenário;
- orientação dos meshes;
- alinhamento dos obstáculos;
- poses dos alvos;
- sobreposição indevida;
- colisão exagerada;
- problemas de origem/local frame.

O Drake oferece integração direta com Meshcat para visualização interativa. [github](https://github.com/robotlocomotion)

## Elementos que deverão ser identificados

### 11. Modele classes semânticas

Como você precisa saber o que deve ser identificado ao longo da simulação, seus objetos precisam ser pensados como **classes do cenário**:

- `building`
- `wall`
- `tree`
- `pole`
- `ground_robot`
- `drone`
- `civil_vehicle`
- `target_person`
- `target_object`
- `restricted_zone_marker`

Essas classes podem ser refletidas:

- no nome do modelo;
- no nome das geometrias;
- em tabelas auxiliares do projeto;
- em rótulos de renderização.

### 12. Use label images quando fizer sentido

Se em algum momento você quiser validar presença/ausência no campo de visão por rasterização, o Drake suporta **label images**, em que cada pixel recebe um `RenderLabel` associado à geometria renderizada. Isso é muito útil para: [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)

- verificar quais classes aparecem no FoV;
- calcular porcentagem visível de um objeto;
- distinguir objetos relevantes de “background”;
- marcar objetos que não devem entrar na imagem semântica.

O próprio Drake define labels reservados como `kEmpty`, `kDontCare` e `kDoNotRender`. [drake.mit](https://drake.mit.edu/doxygen_cxx/classdrake_1_1geometry_1_1render_1_1_render_label.html)

Para o ATAS, isso permite uma arquitetura híbrida:

- FoV geométrico analítico para decisão rápida;
- label image de baixa resolução para validação de visibilidade e oclusão.

## Três estratégias de criação do mapa

### Estratégia A: Blender + SDFormat + glTF

É a melhor estratégia geral. [github](https://github.com/robotlocomotion)

**Fluxo:**

1. Modelar no Blender.
2. Exportar `.glb`.
3. Criar `model.sdf`.
4. Instanciar no Drake.
5. Validar no Meshcat.

**Vantagens:**

- Melhor equilíbrio entre qualidade e esforço.
- Excelente para ambiente urbano/semiurbano.
- Bom controle de semântica e modularidade.
- Totalmente open source.

**Limitações:**

- Exige disciplina na organização de assets.
- Colisão precisa ser simplificada manualmente.

### Estratégia B: OpenSCAD + SDF

Boa para mapas geométricos e paramétricos simples. [en.wikibooks](https://en.wikibooks.org/wiki/OpenSCAD_User_Manual/STL_Import_and_Export)

**Fluxo:**

1. Gerar prédios e obstáculos por parâmetros.
2. Exportar OBJ/STL.
3. Criar wrappers SDF.
4. Montar cena no Drake.

**Vantagens:**

- Excelente reprodutibilidade.
- Muito bom para estudos sistemáticos.
- Fácil variar altura, largura, espaçamento.

**Limitações:**

- Estética pior.
- Pouco prático para cenas visuais complexas.
- Menos amigável para composição urbana rica.

### Estratégia C: Drake-first com primitivas

Boa para MVP e validação inicial. [github](https://github.com/robotlocomotion)

**Fluxo:**

1. Criar tudo com caixas, cilindros e planos.
2. Gerar cena direto em SDF.
3. Soldar ao mundo.
4. Validar FoV e oclusão.

**Vantagens:**

- Implementação mais rápida.
- Leve para laptop.
- Ideal para a versão alfa.

**Limitações:**

- Pouco realismo visual.
- Menor fidelidade geométrica.
- Menos útil para demonstrações.

## Recomendação para o seu projeto

Para o ATAS, a melhor estratégia é **combinar C e A**:

- começar com **Drake-first com primitivas** para validar rapidamente FoV, oclusão e integração ROS 2;
- evoluir para **Blender + SDFormat + glTF** assim que a lógica principal estiver estável.

Essa combinação reduz risco técnico. Você valida primeiro o sistema de otimização, coordenação e percepção geométrica sem ficar preso à criação artística do mapa. Depois, substitui blocos simples por ativos mais realistas.

## Procedimento sugerido

### Fase 1: MVP do mapa

1. Criar plano do solo.
2. Inserir 4 a 8 edifícios como boxes.
3. Inserir muros e corredores.
4. Inserir postes e obstáculos cilíndricos.
5. Inserir alvos como boxes rotulados.
6. Validar FoV dos drones.
7. Medir desempenho.

### Fase 2: Mapa modular

1. Modelar ativos principais no Blender.
2. Exportar `.glb`.
3. Criar `model.sdf` para cada ativo.
4. Substituir boxes por ativos modulares.
5. Ajustar colisão simplificada.
6. Revisar rótulos semânticos.

### Fase 3: Mapa experimental

1. Criar múltiplos cenários.
2. Variações de densidade urbana.
3. Variações de altura.
4. Variações de oclusão.
5. Variações de quantidade de alvos.
6. Variações de zonas críticas para o ATAS.

## Cuidados importantes

- Trabalhe sempre em **metros**.
- Não use uma única mesh gigante para tudo.
- Não use colisão detalhada demais sem necessidade.
- Nomeie todos os modelos de modo consistente.
- Mantenha ativos visuais e de colisão separados.
- Faça testes frequentes no Meshcat. [github](https://github.com/robotlocomotion)
- Use SDFormat em vez de URDF para cenas mais complexas. [github](https://github.com/robotlocomotion)

## Ferramenta mais indicada

Se você quiser escolher **uma** ferramenta principal para criar o mapa, a melhor opção é **Blender**. Ele é open source, exporta glTF nativamente, permite modelagem modular de ambientes e se encaixa bem no fluxo recomendado pelo Drake para uso de meshes em visualização. [github](https://github.com/robotlocomotion)

Se o objetivo imediato for só validar rápido a feature do ATAS, a melhor opção inicial é **criar o mapa diretamente no Drake com primitivas e SDF**, e só depois migrar para Blender.

Posso, no próximo passo, te entregar um **template completo de estrutura de pastas + exemplos de `model.sdf` + um arquivo de cena inicial para um quarteirão urbano do ATAS em Drake**.
```