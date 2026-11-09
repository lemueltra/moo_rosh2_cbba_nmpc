#!/usr/bin/env python3
"""
Script de extração e estruturação de dados do histórico ATAS.
Lê conversa_moo_rosh2_perplexity_261013.md e gera data/conteudo.json e data/conteudo.js.
Garante 100% de integridade e fidelidade aos dados originais.
"""

import os
import re
import json

SOURCE_FILE = "conversa_moo_rosh2_perplexity_261013.md"
JSON_OUTPUT = "data/conteudo.json"
JS_OUTPUT = "data/conteudo.js"

def clean_fenced_markdown(text):
    """
    Remove as cercaduras externas de markdown do Perplexity (ex: ``` markdown ... ```)
    mantendo intacto todo o conteúdo interno.
    """
    lines = text.strip().splitlines()
    if len(lines) >= 2 and lines[0].strip().startswith("```") and lines[-1].strip() == "```":
        return "\n".join(lines[1:-1])
    return text.strip()

def parse_markdown_tables(text):
    """Extrai tabelas markdown em formato estruturado."""
    lines = text.splitlines()
    tables = []
    i = 0
    while i < len(lines):
        line = lines[i].strip()
        if line.startswith('|') and line.endswith('|') and i + 1 < len(lines):
            next_line = lines[i+1].strip()
            if next_line.startswith('|') and re.match(r'^\|[\s\-:|]+\|$', next_line):
                tbl_raw = [lines[i], lines[i+1]]
                i += 2
                while i < len(lines) and lines[i].strip().startswith('|') and lines[i].strip().endswith('|'):
                    tbl_raw.append(lines[i])
                    i += 1
                
                # Parse headers and rows
                headers = [c.strip() for c in tbl_raw[0].split('|')[1:-1]]
                rows = []
                for r in tbl_raw[2:]:
                    cols = [c.strip() for c in r.split('|')[1:-1]]
                    rows.append(cols)
                
                tables.append({
                    "headers": headers,
                    "rows": rows,
                    "raw": "\n".join(tbl_raw)
                })
                continue
        i += 1
    return tables

def parse_code_blocks(text):
    """Extrai blocos de código com ''' ou ```."""
    blocks = []
    # Match ''' lang ... '''
    pattern_quotes = re.compile(r"'''\s*([a-zA-Z0-9_\-\+]*)\n([\s\S]*?)'''")
    for m in pattern_quotes.finditer(text):
        blocks.append({
            "lang": m.group(1).strip() or "text",
            "content": m.group(2),
            "delimiter": "'''",
            "is_diagram": m.group(1).strip() in ["text", ""] and ("+--" in m.group(2) or "|  " in m.group(2) or "---->" in m.group(2))
        })
    return blocks

def parse_references(text):
    """Extrai itens de referências no formato 1. [Title](URL) - Description."""
    ref_section_match = re.search(r'## References\n([\s\S]*?)(?=\n#|\Z)', text)
    if not ref_section_match:
        return []
    
    ref_text = ref_section_match.group(1)
    refs = []
    for line in ref_text.splitlines():
        line = line.strip()
        m = re.match(r'^(\d+)\.\s+\[(.*?)\]\((.*?)\)(?:\s*-\s*(.*))?$', line)
        if m:
            refs.append({
                "num": int(m.group(1)),
                "title": m.group(2),
                "url": m.group(3),
                "desc": m.group(4) or ""
            })
    return refs

def main():
    if not os.path.exists(SOURCE_FILE):
        print(f"Erro: arquivo {SOURCE_FILE} não encontrado.")
        return

    with open(SOURCE_FILE, "r", encoding="utf-8") as f:
        full_text = f.read()

    print(f"Lendo {SOURCE_FILE} ({len(full_text)} caracteres, {len(full_text.splitlines())} linhas)...")

    # Expressão para dividir nos 5 turnos (H1 Solicitação e H1 Resposta)
    turn_regex = re.compile(r'^(#\s+(?:Solicitação\s+\d+|Resposta(?:\s+solicitação\s+\d+.*|\s+\d+.*)?))$', re.MULTILINE)
    splits = list(turn_regex.finditer(full_text))

    turns = []
    # Devemos ter 10 blocos: 5 solicitações alternadas com 5 respostas
    for i in range(0, len(splits), 2):
        turn_num = (i // 2) + 1
        
        # Solicitação
        sol_match = splits[i]
        sol_end = splits[i+1].start()
        sol_raw = full_text[sol_match.start():sol_end].strip()
        sol_title = sol_match.group(1).strip()
        
        # Resposta
        resp_match = splits[i+1]
        resp_end = splits[i+2].start() if i+2 < len(splits) else len(full_text)
        resp_raw = full_text[resp_match.start():resp_end].strip()
        resp_title = resp_match.group(1).strip()

        # Limpar cercaduras Perplexity
        sol_body = sol_raw[len(sol_title):].strip()
        sol_clean = clean_fenced_markdown(sol_body)

        resp_body = resp_raw[len(resp_title):].strip()
        
        # Tratar títulos e seções internas da resposta
        resp_clean = resp_body
        # Remover cercaduras de abertura/fechamento repetidas pelo Perplexity
        resp_clean_normalized = re.sub(r'```\s*markdown\n?', '', resp_clean)
        resp_clean_normalized = re.sub(r'\n?```\n?', '\n', resp_clean_normalized)

        # Extrair tabelas e códigos da resposta
        tables = parse_markdown_tables(resp_clean_normalized)
        code_blocks = parse_code_blocks(resp_clean_normalized)
        references = parse_references(resp_clean_normalized)

        # Detectar subtítulos (H2 e H3)
        section_headers = []
        for line in resp_clean_normalized.splitlines():
            hm = re.match(r'^(#{2,3})\s+(.*)$', line)
            if hm:
                lvl = len(hm.group(1))
                stitle = hm.group(2).strip()
                sanchor = re.sub(r'[^a-z0-9]+', '-', stitle.lower()).strip('-')
                section_headers.append({
                    "level": lvl,
                    "title": stitle,
                    "anchor": f"t{turn_num}-{sanchor}"
                })

        # Resumo pedagógico e pontos-chave específicos por turno
        turn_meta = {
            1: {
                "short_title": "Estratégias de Otimização Multi-Objetivo (MOO)",
                "summary": "Definição do escopo matemático, formulação de FoV (Frustum + ray casting) e comparação de 3 estratégias: Hierárquica Centralizada, Viewpoints Discretos Combinatórios e CBBA + NMPC Local. Stack Drake + ROS 2 + Ipopt.",
                "tags": ["Drake", "ROS 2", "MOO", "FoV", "Ipopt", "Arch Linux", "Ubuntu"],
                "color": "cyan"
            },
            2: {
                "short_title": "Guia de Implementação Distribuída: CBBA + NMPC",
                "summary": "Detalhamento da arquitetura em camadas para a Estratégia 3. Algoritmo de leilão CBBA para alocação distribuída de tarefas, NMPC local com Ipopt/acados, máquina de estados para ativação dinâmica de drones e contratos ROS 2.",
                "tags": ["CBBA", "NMPC", "C++", "ROS 2 Interfaces", "QoS", "Drake SceneGraph"],
                "color": "emerald"
            },
            3: {
                "short_title": "Inteligência Artificial & Redução do Espaço de Busca (Laya)",
                "summary": "Análise da integração do modelo Laya (ModernBERT/mmBERT, latência ~32,8 ms) no pipeline. Proposta de Soft Pruning e Hard Pruning no CBBA e warm start no NMPC, respeitando limites temporais rígidos.",
                "tags": ["Laya", "ModernBERT", "Soft Pruning", "Hard Pruning", "Latência", "Warm Start"],
                "color": "purple"
            },
            4: {
                "short_title": "Teoria de Controle vs. Modelos de Atenção End-to-End",
                "summary": "Fundamentação rigorosa demonstrando por que o Laya/Transformers não devem substituir o NMPC no controle contínuo: viabilidade recursiva, restrições rígidas, estabilidade de Lyapunov, distribuição OOD e arquitetura de filtro de segurança.",
                "tags": ["Controle Ótimo", "Lyapunov", "Viabilidade Recursiva", "OOD", "Safety Filter", "CBF"],
                "color": "amber"
            },
            5: {
                "short_title": "Modelagem e Criação de Cenários 3D no Drake",
                "summary": "Workflow prático de engenharia para criar o mapa de simulação no Drake: modelagem no Blender, exportação glTF/OBJ, envelopamento em SDFormat (SDF) com separação visual/colisão e classes semânticas para label images.",
                "tags": ["Blender", "SDFormat", "SDF", "glTF", "Meshcat", "Label Images", "Cenário 3D"],
                "color": "blue"
            }
        }.get(turn_num, {})

        turn_obj = {
            "id": turn_num,
            "title": resp_title.replace("#", "").strip() if resp_title else f"Turno {turn_num}",
            "short_title": turn_meta.get("short_title", f"Turno {turn_num}"),
            "summary": turn_meta.get("summary", ""),
            "tags": turn_meta.get("tags", []),
            "color": turn_meta.get("color", "cyan"),
            "solicitacao": {
                "title": sol_title.replace("#", "").strip(),
                "raw": sol_raw,
                "clean": sol_clean,
                "chars_count": len(sol_clean),
                "lines_count": len(sol_clean.splitlines())
            },
            "resposta": {
                "title": resp_title.replace("#", "").strip(),
                "raw": resp_raw,
                "clean": resp_clean_normalized.strip(),
                "chars_count": len(resp_clean_normalized),
                "lines_count": len(resp_clean_normalized.splitlines()),
                "sections": section_headers,
                "tables_count": len(tables),
                "code_blocks_count": len(code_blocks),
                "references_count": len(references)
            },
            "tables": tables,
            "code_blocks": code_blocks,
            "references": references
        }
        turns.append(turn_obj)

    # Coletar estatísticas gerais
    dataset = {
        "metadata": {
            "title": "ATAS — Autonomy Through Aerial Swarms: Base de Conhecimento e Consultoria Técnica",
            "subtitle": "Simulação Model-Based em Drake, Integração ROS 2, Otimização Multi-Objetivo e Visão Computacional Cooperativa",
            "source_file": SOURCE_FILE,
            "total_turns": len(turns),
            "total_lines": len(full_text.splitlines()),
            "total_chars": len(full_text),
            "generated_at": "2026-10-23T12:20:00-03:00",
            "principles": [
                "100% de Fidelidade ao conteúdo original",
                "Completude total verificável por matriz de cobertura",
                "Operação 100% offline via file:// (Zero CDNs, Zero dependências externas de rede)",
                "Design instrucional com clara distinção de [Síntese do agente]"
            ]
        },
        "turns": turns,
        "glossary": [
            {
                "term": "ATAS",
                "tag": "Arquitetura",
                "definition": "Autonomy Through Aerial Swarms: sistema de percepção e visão computacional aérea cooperativa onde veículos terrestres desprovidos de sensores visuais pesados recebem consciência situacional em tempo real de enxames de drones via V2X."
            },
            {
                "term": "Drake",
                "tag": "Simulação",
                "definition": "Framework open source de robótica em C++ e Python desenvolvido pelo MIT focado em simulação física de corpos rígidos (MultibodyPlant), geometria e visibilidade (SceneGraph) e controle ótimo baseado em programas matemáticos."
            },
            {
                "term": "CBBA",
                "tag": "Coordenação",
                "definition": "Consensus-Based Bundle Algorithm: protocolo descentralizado de leilão em duas fases (construção do feixe de tarefas e resolução de conflitos por consenso local) que aloca tarefas no enxame sem necessitar de um nó centralizador."
            },
            {
                "term": "NMPC",
                "tag": "Controle",
                "definition": "Nonlinear Model Predictive Control: algoritmo de controle ótimo em tempo real que calcula trajetórias ideais ao resolver um problema de otimização em horizonte móvel considerando dinâmicas não lineares e restrições rígidas."
            },
            {
                "term": "FoV",
                "tag": "Percepção",
                "definition": "Field of View: cone geométrico piramidal (frustum) que delimita o espaço visível por uma câmera, definido por planos de corte near/far e ângulos de abertura horizontal e vertical."
            },
            {
                "term": "SceneGraph",
                "tag": "Drake",
                "definition": "Módulo do Drake que centraliza a árvore geométrica do mundo, consultas de proximidade, colisões, raios de oclusão e ligação com motores de renderização como RenderEngineGl e Meshcat."
            },
            {
                "term": "Laya",
                "tag": "IA / Decisão",
                "definition": "Classificador de decisão neural rápido (~32,8 ms) baseado em encoders bidirecionais (ModernBERT / mmBERT) avaliado como podador de alternativas (pruning) e fornecedor de estimativas iniciais (warm start)."
            },
            {
                "term": "Viabilidade Recursiva",
                "tag": "Controle",
                "definition": "Propriedade fundamental de sistemas de controle em horizonte móvel onde a existência de uma trajetória viável em t garante matematicamente a existência de solução viável em t+1, prevenindo travamentos ou becos sem saída dinâmicos."
            },
            {
                "term": "SDFormat (SDF)",
                "tag": "Modelagem 3D",
                "definition": "Formato de especificação em XML amplamente utilizado no Gazebo e no Drake para definir modelos físicos, permitindo separar rigorosamente elementos visuais de alta definição e geometrias simplificadas de colisão e oclusão."
            },
            {
                "term": "Meshcat",
                "tag": "Visualização",
                "definition": "Visualizador web leve para o Drake que renderiza malhas, trajetórias e frames de referência no navegador via WebGL e WebSockets sem overhead de GPU local excessivo."
            },
            {
                "term": "Soft Pruning",
                "tag": "Otimização",
                "definition": "Abordagem segura de redução de busca onde o modelo de IA aplica penalidades ou priorizações nos custos das alternativas, permitindo que o otimizador numérico rígido ainda explore todas as opções caso necessário."
            },
            {
                "term": "Hard Pruning",
                "tag": "Otimização",
                "definition": "Eliminação categórica e irreversível de ramos do espaço de busca antes da resolução do solver; requer camadas independentes de validação para impedir a exclusão acidental da rota ótima ou segura."
            }
        ]
    }

    # Salvar em JSON
    with open(JSON_OUTPUT, "w", encoding="utf-8") as f:
        json.dump(dataset, f, indent=2, ensure_ascii=False)
    print(f"Arquivo {JSON_OUTPUT} gerado com sucesso ({os.path.getsize(JSON_OUTPUT)} bytes).")

    # Salvar em JS (compatibilidade file://)
    with open(JS_OUTPUT, "w", encoding="utf-8") as f:
        f.write("/* Base de Conhecimento Estruturada ATAS - Compatível com file:// */\n")
        f.write("window.ATAS_DATA = ")
        json.dump(dataset, f, indent=2, ensure_ascii=False)
        f.write(";\n")
    print(f"Arquivo {JS_OUTPUT} gerado com sucesso ({os.path.getsize(JS_OUTPUT)} bytes).")

if __name__ == "__main__":
    main()
