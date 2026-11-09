# Trabalhos Relacionados

## 1. Eixo de Comparação

Os trabalhos correlatos na literatura de robótica de enxames e cooperação ar-terra são estruturados neste artigo ao longo de dois eixos comparativos fundamentais: (i) mecanismos distribuídos de leilão e alocação de tarefas em enxames heterogêneos; e (ii) formulações matemáticas contínuas para otimização de ponto de vista (*viewpoint optimization*) sob oclusões urbanas e campos de visão limitados.

## 2. Grupos de Trabalhos

### 2.1 Alocação Distribuída de Tarefas e Algoritmos de Leilão

O algoritmo CBBA (*Consensus-Based Bundle Algorithm*), introduzido originalmente por Choi et al. [CITAÇÃO NECESSÁRIA: Choi2009], estabeleceu um paradigma descentralizado robusto combinando fases alternadas de construção de feixes gulosos (*bundle*) e resolução assíncrona de conflitos por consenso local. Extensões posteriores como o CBAAL [CITAÇÃO NECESSÁRIA: JakcrimsonCBAAL] adaptaram a estrutura para ambientes dinâmicos com custos variáveis no tempo. Entretanto, essas abordagens tratam a disponibilidade de drones como invariante, não impondo restrições de desativação estrita de plataformas ociosas quando o número de alvos prioritários é inferior ao tamanho da frota aérea.

### 2.2 Otimização de Viewpoint e Rastreamento Visual com UAVs

O controle preditivo baseado em modelo (MPC) e formulações de programação não linear contínua têm sido amplamente empregados para guiar câmeras embarcadas em UAVs no monitoramento de alvos terrestres [CITAÇÃO NECESSÁRIA: Spica2018]. Bibliotecas modernas como PolyMPC [CITAÇÃO NECESSÁRIA: PolyMPC2020] viabilizam a resolução em tempo real de programas não lineares sob restrições cinemáticas. Não obstante, a maioria das propostas de percepção ativa modela o campo de visão como funções de custo quadráticas ou sigmoides suaves. Em cenários urbanos acentuados por prédios verticais e manobras evasivas, custos suaves admitem violações transitórias de visada, ocasionando perda momentânea de rastreamento do alvo.

| Abordagem / Trabalho | Mecanismo de Alocação | Tratamento de Visibilidade | Vínculo de Escolta | Tempo Real em Malha Fechada |
| :--- | :--- | :--- | :--- | :--- |
| Choi et al. (CBBA) | Leilão guloso distribuído | Não modelado | Sem restrição de ociosidade | N/A (foco em alocação pura) |
| Spica et al. (Active FoV MPC) | Centralizado / estático | Custo suave (sigmoide) | UAV único por alvo | Limitado a taxas moderadas |
| **ATAS (Este trabalho)** | CBBA com histerese anti-chattering | Barreira primordial dual-sensor ($\Psi_{\text{FoV}}$) e fallback orbital 3D | Vínculo estrito de escolta ($M \ge 1$) | Sim (1,8 ms a 5 Hz com CycloneDDS) |

## 3. Posicionamento do ATAS

Diferentemente das formulações existentes na literatura, o sistema ATAS desacopla formalmente a decisão discreta da resolução contínua, unindo a resiliência assíncrona do CBBA à velocidade do solver SQP/Ipopt do PolyMPC. Ao introduzir a restrição primordial de barreira dual-sensor (unindo LiDAR e Câmera com ângulo de elevação acoplado), o sistema impede matematicamente que o UGV saia do volume útil de observação sem penalização infinita, acionando de maneira determinística o *fallback* orbital analítico para preservar a visibilidade crítica em qualquer topologia urbana.
