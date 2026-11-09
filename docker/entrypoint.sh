#!/usr/bin/env bash
# docker/entrypoint.sh
# Container entrypoint configurando ROS 2 Jazzy, Drake, PolyMPC, aceleração NVIDIA e workspace overlay.

set -euo pipefail

# 1. Carregar ambiente base do ROS 2 Jazzy
if [ -f "/opt/ros/jazzy/setup.bash" ]; then
  set +u
  # shellcheck source=/dev/null
  source "/opt/ros/jazzy/setup.bash"
  set -u
fi

# 2. Configurar caminhos do Drake (se instalado em /opt/drake)
if [ -d "/opt/drake" ]; then
  export PATH="/opt/drake/bin:${PATH}"
  export CMAKE_PREFIX_PATH="/opt/drake:/opt/ros/jazzy${CMAKE_PREFIX_PATH:+:${CMAKE_PREFIX_PATH}}"
  export LD_LIBRARY_PATH="/opt/drake/lib${LD_LIBRARY_PATH:+:${LD_LIBRARY_PATH}}"
  export PYTHONPATH="/opt/drake/lib/python3.12/site-packages${PYTHONPATH:+:${PYTHONPATH}}"
fi

# 3. Carregar Overlay do Workspace de Otimização (se compilado)
if [ -f "/workspace/ws/install/setup.bash" ]; then
  set +u
  # shellcheck source=/dev/null
  source "/workspace/ws/install/setup.bash"
  set -u
fi

# 4. Detecção de Display & Interface Gráfica (Wayland vs X11)
if [ -n "${WAYLAND_DISPLAY:-}" ] && [ -n "${XDG_RUNTIME_DIR:-}" ] && [ -S "${XDG_RUNTIME_DIR}/${WAYLAND_DISPLAY}" ]; then
  export QT_QPA_PLATFORM="wayland;xcb"
  export GDK_BACKEND="wayland,x11"
elif [ -n "${DISPLAY:-}" ]; then
  export QT_QPA_PLATFORM="xcb"
  export GDK_BACKEND="x11"
fi

# 5. Configurar domínios e middleware ROS 2 para comunicação em enxame
export ROS_DOMAIN_ID="${SWARM_ROS_DOMAIN_ID:-42}"
export RMW_IMPLEMENTATION="${RMW_IMPLEMENTATION:-rmw_cyclonedds_cpp}"

exec "$@"
