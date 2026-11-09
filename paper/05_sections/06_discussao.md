# Discussão

## 1. Interpretação dos Resultados

Os resultados experimentais obtidos corroboram as hipóteses centrais que nortearam a concepção da arquitetura hierárquica do sistema ATAS:

| Afirmação | Interpretação Científica | Sustentada por |
| :--- | :--- | :--- |
| Eliminação de pontos cegos transitórios | A barreira primordial $\Psi_{\text{FoV}}$ aliada à união booleana dos sensores impede qualquer solução que descarte o alvo do campo útil | `MET-096`, `MET-097`, `MET-102` |
| Orçamento computacional ultraleve | O tempo médio de 1,8 ms permite execução segura a 5 Hz com folga temporal de 96,4% frente ao deadline de ciclo (50 ms) | `MET-099` |
| Confiabilidade de engenharia do enxame | Cobertura integral sem falhas na suíte de testes e comunicação determinística sob CycloneDDS | `MET-091`, `MET-092`, `MET-093`, `MET-101` |

A observação de zero violações de FoV ao longo de 600 poses de referência avaliadas confirma que a escolha de desacoplar a alocação discreta (CBBA com histerese anti-chattering) da otimização contínua de viewpoint (NLP no referencial local do UGV) é eficaz: o CBBA estabiliza os alvos prioritários, enquanto o solver PolyMPC/Ipopt reage instantaneamente às oscilações de heading dos veículos de solo.

## 2. Comparação com a Literatura

| Abordagem | Método | Métrica Central | Desempenho Reportado | Comparabilidade |
| :--- | :--- | :--- | :--- | :--- |
| MPC Suave Convencional [CITAÇÃO NECESSÁRIA: Spica2018] | NMPC com sigmoide | Violações de visada transitória | Admitidas em curvas bruscas | Não (cenário fechado sem edifícios 3D) |
| **ATAS (Este trabalho)** | CBBA + NLP Barreira Primordial | Violações de visada e tempo de ciclo | 0 violações (100% visada); 1,8 ms | Protocolo padronizado em malha fechada Drake |

Diferente das abordagens baseadas em penalizações suaves, onde o solver pode tolerar a perda do alvo para minimizar o esforço de controle, a barreira de 10000,0 força a convergência exclusivamente no espaço de visibilidade viável.

## 3. Ameaças à Validade

| Tipo | Ameaça Identificada | Mitigação Aplicada |
| :--- | :--- | :--- |
| **Interna** | Dependência de integridade temporal no transporte DDS | Uso do servidor autoritativo `/clock` a 200 Hz e `use_sim_time:=true` |
| **Externa** | Representatividade do cenário Town10 frente a cenários reais | Inclusão de 30 edificações 3D, 15 veículos dinâmicos e 20 pedestres |
| **De Constructo** | Frustum sensorial modelado geometricamente sem atenuação | Volume estrito com margem de segurança conservadora ($r \le 30\text{ m}$) |
| **De Conclusão** | Horizonte de amostragem contínua de 60 segundos | Amostragem densa a 5 Hz totalizando 600 poses e 3001 amostras de estado |

## 4. Implicações Práticas

Para operadores de missões autônomas reais, o vínculo estrito de escolta ($M \ge 1$) introduz uma política de conservação energética e ambiental transparente: UAVs ociosos não geram poluição sonora nem interferência eletromagnética na malha de rádio tática. Ademais, a interface estrita com o simulador Drake (Contrato 3.1.0) comprova que o otimizador pode ser integrado a diferentes controladores de baixo nível sem necessidade de refatoração do núcleo matemático.

## 5. O que os Resultados NÃO Permitem Concluir

Os resultados não autorizam inferir que o sistema manterá 100% de visibilidade sob falha simultânea de hardware (queda de link de comunicação ou panes mecânicas nos motores dos UAVs). Do mesmo modo, não se avaliou a degradação da visada sob intempéries climáticas severas (neblina densa ou tempestades tropicais), fatores que demandariam modelagem de atenuação atmosférica não contemplada nesta versão.
