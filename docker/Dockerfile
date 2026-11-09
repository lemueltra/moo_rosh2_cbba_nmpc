# syntax=docker/dockerfile:1
# Dockerfile para o Sistema de Otimização Multi-Objetivo ATAS (CBBA + NMPC/PolyMPC)
# Base OS: Imagem oficial unificada com Drake 1.57.0 e ROS 2 Jazzy pré-instalados
# Aceleração: NVIDIA GPU Nativa via nvidia-container-toolkit

ARG BASE_IMAGE=swarm_sim:unified-dev
FROM ${BASE_IMAGE} AS base

USER root

ARG DEBIAN_FRONTEND=noninteractive

# 1. Instalar Solvers Matemáticos (Ipopt, YAML-CPP) e Dependências Adicionais
RUN --mount=type=cache,target=/var/cache/apt,sharing=locked \
    --mount=type=cache,target=/var/lib/apt,sharing=locked \
    apt-get update && apt-get install -y --no-install-recommends \
        coinor-libipopt-dev \
        coinor-libipopt1v5 \
        liblapack-dev \
        libblas-dev \
        libyaml-cpp-dev \
        clang-format \
        clang-tidy \
        python3-pip \
        python3-scipy \
        python3-networkx \
    && rm -rf /var/lib/apt/lists/*

# 2. Instalar Linters, OSQP e ferramentas de validação Python via pip
RUN pip install --no-cache-dir --break-system-packages \
    ruff \
    mypy \
    pytest \
    osqp

# Configurar .bashrc do usuario jonatas para carregar ROS 2 e Drake automaticamente
RUN echo 'source /opt/ros/jazzy/setup.bash' >> /home/jonatas/.bashrc && \
    echo 'export PATH="/opt/drake/bin:${PATH}"' >> /home/jonatas/.bashrc && \
    echo 'export CMAKE_PREFIX_PATH="/opt/drake:/opt/ros/jazzy:${CMAKE_PREFIX_PATH:-}"' >> /home/jonatas/.bashrc && \
    echo 'export LD_LIBRARY_PATH="/opt/drake/lib:${LD_LIBRARY_PATH:-}"' >> /home/jonatas/.bashrc && \
    echo 'export PYTHONPATH="/opt/drake/lib/python3.12/site-packages:${PYTHONPATH:-}"' >> /home/jonatas/.bashrc && \
    echo 'if [ -f "/workspace/ws/install/setup.bash" ]; then source /workspace/ws/install/setup.bash; fi' >> /home/jonatas/.bashrc

USER jonatas
WORKDIR /workspace

# 3. Configurar Entrypoint
COPY --chown=jonatas:jonatas docker/entrypoint.sh /usr/local/bin/entrypoint.sh

ENTRYPOINT ["/usr/local/bin/entrypoint.sh"]
CMD ["bash"]

