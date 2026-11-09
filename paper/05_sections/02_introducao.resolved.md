# Introdução

## 1. Contexto

A cooperação heterogênea entre veículos aéreos não tripulados (UAVs) e robôs autônomos terrestres (UGVs) constitui uma abordagem indispensável para operações complexas de monitoramento, escolta de comboios e patrulha em ambientes urbanos densos. Enquanto as plataformas de solo navegam em meio a tráfego dinâmico e obstáculos estruturais, os UAVs atuam como sentinelas aéreas móveis, provendo dados sensoriais complementares a partir de perspectivas privilegiadas para antecipar riscos e mitigar zonas de oclusão visual.

Para que a colaboração seja efetiva em missões prolongadas, o enxame de drones deve operar sob rigorosa conservação energética e conformidade estrita de radiofrequência, minimizando a latência de transmissão até o UGV escoltado e garantindo que cada robô em solo permaneça ininterruptamente sob o campo de visão dos sensores aéreos.

## 2. Lacuna

Na literatura de robótica de enxames, a coordenação cooperativa é comumente abordada por leilões distribuídos ou por técnicas de controle preditivo baseado em modelo (MPC). Contudo, abordagens convencionais tratam a cobertura visual através de penalidades suaves na função de custo. Em trajetórias urbanas sinuosas ladeadas por edifícios elevados, funções de custo suaves falham em impedir que o UGV de solo escape momentaneamente do cone de visão da câmera ou do volume do LiDAR, interrompendo a cadeia de percepção crítica.

Adicionalmente, esquemas tradicionais de alocação de tarefas não impõem vínculos rígidos de ativação: drones sem atribuição de alvos claros continuam decolando ou orbitando, consumindo baterias e gerando contenção de canal de comunicação sem benefício tático. Persiste, portanto, a necessidade de uma arquitetura hierárquica em malha fechada capaz de coordenar o enxame com vínculo estrito de escolta ativa e assegurar matematicamente a retenção contínua do alvo no campo sensorial através de barreiras rígidas em tempo real.

## 3. Contribuições

Este trabalho propõe, implementa e valida uma arquitetura hierárquica para o Sistema de Otimização Multi-Objetivo ATAS, cujas contribuições principais são:

1. **Formulação teórica hierárquica com barreira primordial:** Integração do algoritmo de leilão CBBA estendido com vínculo estrito de escolta ($M \ge 1$) e programação não linear (NLP via PolyMPC) dotada de penalidade barreira primordial dual-sensor ($\Psi_{\text{FoV}} \ge 10000{,}0$) e *fallback* orbital analítico, eliminando interrupções de visada (Seção 3 e Seção 4).
2. **Engenharia de sistema robótico em tempo real:** Implementação modular em C++20 sobre ROS 2 Jazzy e validação em malha fechada integrada ao simulador físico MIT Drake, alcançando convergência média de 1,8 ms por ciclo e 100% de conformidade de visada sobre 600 avaliações nominais (Seção 4).

## 4. Organização do Artigo

O restante deste artigo está estruturado da seguinte forma: a Seção 2 discute os trabalhos correlatos na literatura de enxames e controle de visada; a Seção 3 formaliza a metodologia e a arquitetura em duas camadas do otimizador; a Seção 4 reporta os resultados experimentais em malha fechada e a suíte de testes; a Seção 5 discute os resultados obtidos e limitações operacionais; e a Seção 6 sumariza as conclusões e trabalhos futuros.
