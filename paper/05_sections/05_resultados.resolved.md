# Resultados

## 1. Verificação da Restrição Primordial de Campo de Visão

A eficácia da formulação dual-sensor e do vínculo estrito de escolta foi avaliada em malha fechada durante 60 s de operação contínua.

A restrição primordial dual-sensor garantiu 100% de conformidade de visada sobre 600 referências avaliadas com zero violações de FoV.
Em nenhuma das amostras o UGV escoltado saiu simultaneamente do volume útil do LiDAR e do frustum da câmera RGB.
Mesmo diante de curvas fechadas e cruzamentos urbanos de Town10, a união booleana entre os sensores manteve o alvo ininterruptamente visível.

## 2. Desempenho Numérico e Tempo de Resolução

O tempo de computação requerido pelo solver de ponto interior (Ipopt via PolyMPC) foi medido a cada ciclo de atualização de poses relativas.

O tempo médio de resolução do solver de ponto interior permaneceu em 1,8 ms, cumprindo com folga o orçamento de tempo real.
Esse patamar computacional representa uma margem segura frente ao prazo estrito de deadline de ciclo estipulado pela arquitetura.
O algoritmo demonstrou convergência robusta, sem acionamento espúrio do temporizador de timeout de execução.

## 3. Cobertura da Suíte Automatizada de Testes

A integridade funcional dos módulos algorítmicos e a interoperabilidade de mensagens foram comprovadas por execução sistemática de testes.

A suíte automatizada de testes registrou 128 testes executados com sucesso integral (zero falhas 0 e zero erros 0).
Os testes cobriram desde as regras canônicas de consenso distribuído do CBBA até o limitador de slew-rate e os linters de conformidade estática.
Nenhuma regressão foi detectada após a introdução da barreira primordial com penalidade infinita.

## 4. Telemetria e Tráfego em Malha Fechada

A interação contínua entre o nó otimizador e o simulador cooperativo Drake produziu fluxo estável de dados sobre o domínio DDS.

Durante 60 s de telemetria contínua a taxa nominal de atualização foram geradas 301 mensagens de active set, 300 mensagens de referências e 3001 amostras de estado de UGVs.
Adicionalmente, foram trocadas 300 mensagens de latência de enlace e 300 mensagens de realimentação de métricas.
O fluxo de mensagens transcorreu sem perda de pacotes ou saturação de buffers no middleware CycloneDDS.
