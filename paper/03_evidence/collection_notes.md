# Notas de coleta

Gerado por `scripts/collect_results.py`. Não editar à mão: correções
pertencem à fonte ou à declaração de unidades, e a coleta deve poder
ser repetida.

Comando: `collect_results.py ws/build/atas_optimizer/test_results/atas_optimizer/copyright.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/cppcheck.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/cpplint.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/flake8.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/lint_cmake.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/pep257.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_adaptive_feedback.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_cbba.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_cbba_v2.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_dual_sensor_fov.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_occlusion_and_targets.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_polympc_nlp.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_test_node_integration.py.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/test_viewpoint.gtest.xml ws/build/atas_optimizer/test_results/atas_optimizer/uncrustify.xunit.xml ws/build/atas_optimizer/test_results/atas_optimizer/xmllint.xunit.xml ws/build/swarm_interfaces/test_results/swarm_interfaces/test_interfaces_roundtrip.gtest.xml ws/build/swarm_world_interfaces/test_results/swarm_world_interfaces/test_world_interfaces_roundtrip.gtest.xml docs/closed_loop_evaluation_v2.log --aggregate-across junit.tests=sum:@junit.tests --aggregate-across junit.failures=sum:@junit.failures --aggregate-across junit.errors=sum:@junit.errors`

## Fontes aceitas

| ID | Tipo | Arquivo | sha256 | Linhas | Cópia |
| :--- | :--- | :--- | :--- | :--- | :--- |
| SRC-001 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/copyright.xunit.xml` | `e9624615fc35` | 16 | `SRC-001-copyright.xunit.xml` |
| SRC-002 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/cppcheck.xunit.xml` | `4fd3a13a8742` | 14 | `SRC-002-cppcheck.xunit.xml` |
| SRC-003 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/cpplint.xunit.xml` | `fffe7fffd6fb` | 14 | `SRC-003-cpplint.xunit.xml` |
| SRC-004 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/flake8.xunit.xml` | `c4fcc15c76a6` | 1 | `SRC-004-flake8.xunit.xml` |
| SRC-005 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/lint_cmake.xunit.xml` | `1fee661f094c` | 1 | `SRC-005-lint_cmake.xunit.xml` |
| SRC-006 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/pep257.xunit.xml` | `d1cd952b0b5e` | 2 | `SRC-006-pep257.xunit.xml` |
| SRC-007 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_adaptive_feedback.gtest.xml` | `db0de61bcc3d` | 6 | `SRC-007-test_adaptive_feedback.gtest.xml` |
| SRC-008 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_cbba.gtest.xml` | `a1b952342824` | 4 | `SRC-008-test_cbba.gtest.xml` |
| SRC-009 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_cbba_v2.gtest.xml` | `4e9b933fe9ad` | 6 | `SRC-009-test_cbba_v2.gtest.xml` |
| SRC-010 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_dual_sensor_fov.gtest.xml` | `0e6cd6c322e6` | 9 | `SRC-010-test_dual_sensor_fov.gtest.xml` |
| SRC-011 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_occlusion_and_targets.gtest.xml` | `987127eb4394` | 5 | `SRC-011-test_occlusion_and_targets.gtest.xml` |
| SRC-012 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_polympc_nlp.gtest.xml` | `a0c01c486e0c` | 5 | `SRC-012-test_polympc_nlp.gtest.xml` |
| SRC-013 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_test_node_integration.py.xunit.xml` | `9cefb4113c5b` | 1 | `SRC-013-test_test_node_integration.py.xunit.xml` |
| SRC-014 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/test_viewpoint.gtest.xml` | `861dc00fe747` | 4 | `SRC-014-test_viewpoint.gtest.xml` |
| SRC-015 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/uncrustify.xunit.xml` | `277ba084fa36` | 14 | `SRC-015-uncrustify.xunit.xml` |
| SRC-016 | junit | `ws/build/atas_optimizer/test_results/atas_optimizer/xmllint.xunit.xml` | `80616a259050` | 1 | `SRC-016-xmllint.xunit.xml` |
| SRC-017 | junit | `ws/build/swarm_interfaces/test_results/swarm_interfaces/test_interfaces_roundtrip.gtest.xml` | `f7781818575f` | 16 | `SRC-017-test_interfaces_roundtrip.gtest.xml` |
| SRC-018 | junit | `ws/build/swarm_world_interfaces/test_results/swarm_world_interfaces/test_world_interfaces_roundtrip.gtest.xml` | `265269b2f8ee` | 9 | `SRC-018-test_world_interfaces_roundtrip.gtest.xml` |
| SRC-019 | log | `docs/closed_loop_evaluation_v2.log` | `4e76c9a4be95` | 11 | `SRC-019-closed_loop_evaluation_v2.log` |

## Fontes e colunas rejeitadas

Nenhuma. Toda fonte apresentada foi lida por completo.

## Observações

Nenhuma.

## O que este coletor não verificou

- Não julga se o experimento foi bem conduzido; só registra o que existe.
- Não escolhe a agregação por você: `--aggregation` é uma decisão do
  autor e deve constar do texto.
- Não lê rosbags: o formato é reconhecido e a ausência do extrator é
  registrada em `rejected`.
- Não detecta unidade errada, apenas unidade ausente ou conflitante.
