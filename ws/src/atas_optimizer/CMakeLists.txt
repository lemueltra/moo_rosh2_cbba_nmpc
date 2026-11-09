cmake_minimum_required(VERSION 3.22)
project(atas_optimizer)

# Padrão C++20 obrigatório
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -Werror=return-type)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rosgraph_msgs REQUIRED)
find_package(vision_msgs REQUIRED)
find_package(diagnostic_msgs REQUIRED)
find_package(Eigen3 REQUIRED NO_MODULE)

# Pacotes do Simulador (disponibilizados via overlay ou underlay)
find_package(swarm_interfaces QUIET)
find_package(swarm_world_interfaces QUIET)

# Pacotes matemáticos de otimização
find_package(PkgConfig REQUIRED)
pkg_check_modules(IPOPT ipopt)

include_directories(
  include
  ${EIGEN3_INCLUDE_DIRS}
)

if(IPOPT_FOUND)
  include_directories(${IPOPT_INCLUDE_DIRS})
endif()

# Biblioteca central do otimizador
add_library(atas_optimizer_core SHARED
  src/cbba_agent.cpp
  src/viewpoint_optimizer.cpp
  src/atas_optimizer_node.cpp
)

target_include_directories(atas_optimizer_core PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)

target_link_libraries(atas_optimizer_core PUBLIC
  rclcpp::rclcpp
  ${std_msgs_TARGETS}
  ${geometry_msgs_TARGETS}
  ${rosgraph_msgs_TARGETS}
  ${vision_msgs_TARGETS}
  ${diagnostic_msgs_TARGETS}
  Eigen3::Eigen
)

if(swarm_interfaces_FOUND)
  target_link_libraries(atas_optimizer_core PUBLIC ${swarm_interfaces_TARGETS})
  target_compile_definitions(atas_optimizer_core PUBLIC HAVE_SWARM_INTERFACES=1)
endif()

if(swarm_world_interfaces_FOUND)
  target_link_libraries(atas_optimizer_core PUBLIC ${swarm_world_interfaces_TARGETS})
  target_compile_definitions(atas_optimizer_core PUBLIC HAVE_SWARM_WORLD_INTERFACES=1)
endif()

if(IPOPT_FOUND)
  target_link_libraries(atas_optimizer_core PUBLIC ${IPOPT_LIBRARIES})
  target_compile_definitions(atas_optimizer_core PUBLIC HAVE_IPOPT=1)
endif()

# Executável principal do nó otimizador
add_executable(atas_optimizer_node
  src/main.cpp
)

target_link_libraries(atas_optimizer_node
  atas_optimizer_core
)

# Instalação
install(TARGETS
  atas_optimizer_core
  atas_optimizer_node
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include
)

install(DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

install(PROGRAMS
  ${CMAKE_CURRENT_SOURCE_DIR}/../../../scripts/atas_monitor.py
  DESTINATION lib/${PROJECT_NAME}
  RENAME atas_monitor
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()

  find_package(ament_cmake_gtest REQUIRED)
  # Testes unitários do CBBA
  ament_add_gtest(test_cbba test/test_cbba.cpp src/cbba_agent.cpp)
  target_include_directories(test_cbba PRIVATE include)
  target_link_libraries(test_cbba Eigen3::Eigen)

  # Testes unitários do CBBA v2 (Histerese, Multi-Bundle, Contenção RF, Vínculo de Escolta)
  ament_add_gtest(test_cbba_v2 test/test_cbba_v2.cpp)
  target_include_directories(test_cbba_v2 PRIVATE include)
  target_link_libraries(test_cbba_v2 atas_optimizer_core)

  # Testes unitários do Viewpoint Optimizer
  ament_add_gtest(test_viewpoint test/test_viewpoint.cpp src/viewpoint_optimizer.cpp)
  target_include_directories(test_viewpoint PRIVATE include)
  target_link_libraries(test_viewpoint Eigen3::Eigen)

  # Testes unitários de oclusão de prédios Town10 e alvos ativos (F1, M1)
  ament_add_gtest(test_occlusion_and_targets test/test_occlusion_and_targets.cpp src/viewpoint_optimizer.cpp)
  target_include_directories(test_occlusion_and_targets PRIVATE include)
  target_link_libraries(test_occlusion_and_targets Eigen3::Eigen)

  # Testes unitários do PolyMPC NLP, limitação de slew-rate e watchdog de fallback (F2, M3, R3, D2, D3)
  ament_add_gtest(test_polympc_nlp test/test_polympc_nlp.cpp src/viewpoint_optimizer.cpp)
  target_include_directories(test_polympc_nlp PRIVATE include)
  target_link_libraries(test_polympc_nlp Eigen3::Eigen)

  # Testes unitários de supervisão adaptativa Pareto em malha fechada (F3)
  ament_add_gtest(test_adaptive_feedback test/test_adaptive_feedback.cpp)
  target_include_directories(test_adaptive_feedback PRIVATE include)
  target_link_libraries(test_adaptive_feedback atas_optimizer_core)

  # Testes unitários do modelo geométrico dual-sensor (LiDAR + Câmera) (Fase 1 v2.0.0)
  ament_add_gtest(test_dual_sensor_fov test/test_dual_sensor_fov.cpp)
  target_include_directories(test_dual_sensor_fov PRIVATE include)
  target_link_libraries(test_dual_sensor_fov atas_optimizer_core)

  # Teste de integração de nó ROS 2 via launch_testing
  find_package(launch_testing_ament_cmake REQUIRED)
  add_launch_test(test/test_node_integration.py)
endif()

ament_package()
