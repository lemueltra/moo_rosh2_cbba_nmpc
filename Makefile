# Makefile para automação do Harness de IA e Contêiner ATAS MOO
.PHONY: all build-docker up down shell build test lint clean help

all: build-docker up

help:
	@echo "Comandos disponíveis:"
	@echo "  make build-docker  - Constrói a imagem Docker (atas_moo_dev:jazzy)"
	@echo "  make up            - Inicia o contêiner com suporte a GPU e rede compartilhada"
	@echo "  make down          - Para e remove os contêineres"
	@echo "  make shell         - Abre um terminal bash interativo no contêiner"
	@echo "  make build         - Compila o workspace ROS 2 dentro do contêiner (colcon build)"
	@echo "  make test          - Executa a suíte de testes (colcon test)"
	@echo "  make lint          - Executa clang-format e ruff em todo o código"
	@echo "  make clean         - Limpa build, install e logs do workspace"

build-docker:
	docker compose build

up:
	docker compose up -d

down:
	docker compose down

shell:
	docker compose exec atas_moo_dev bash

build:
	docker compose exec atas_moo_dev bash -c "cd /workspace/ws && colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release -DCMAKE_EXPORT_COMPILE_COMMANDS=ON"

test:
	docker compose exec atas_moo_dev bash -c "cd /workspace/ws && colcon test --event-handlers console_direct+ && colcon test-result --all --verbose"

lint:
	docker compose exec atas_moo_dev bash -c "find /workspace/ws/src -name '*.cpp' -o -name '*.hpp' | xargs clang-format --dry-run --Werror || true; ruff check /workspace/ws/src || true"

clean:
	rm -rf ws/build ws/install ws/log
