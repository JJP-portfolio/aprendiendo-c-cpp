# Plan de Proyecto: Compilador → Sistema Operativo
Estudiante de Programación — UNAHUR
Lenguaje de implementación: C | SO: Arch Linux | Build: gcc + make | Docs: LaTeX

## 1. Objetivo
Construir un compilador en C como proyecto de vacaciones de invierno, que sirva de base para un sistema operativo propio. Aprender machine language/binario/ensamblador y, a futuro, diseñar hardware libre.

## 2. Principio rector
> El objetivo principal es aprender matemáticas. No codear sin entender matemáticamente qué se hace.
Cada hito de implementación requiere previamente el estudio de sus fundamentos matemáticos.

## 3. Hitos (con checklist)

- [ ] **Hito 0 — Fundamentos matemáticos**
  - Autómatas finitos (determinísticos y no determinísticos)
  - Gramáticas formales (tipos de Chomsky)
  - Teoría de lenguajes formales
  - Recursión e inducción
  - Árboles y grafos
  - Tablas hash
  - Representación binaria, complemento a 2

- [ ] **Hito 1 — Calculadora en C** (~200 líneas)
  - Lexer (reconocimiento de tokens con AFD)
  - Parser (análisis sintáctico, gramática)
  - Evaluador (recorrido del AST)
  - Aplica: autómatas + gramáticas del Hito 0

- [ ] **Hito 2 — Crafting Interpreters Parte I** (Java, intérprete tree-walk)
  - Lexer, Parser, AST, evaluador
  - Closures, clases, alcance (scope)
  - Entender la teoría antes de implementar en C

- [ ] **Hito 3 — Crafting Interpreters Parte II** (C, VM + compilador a bytecode)
  - Chunks de bytecode
  - Máquina virtual (stack-based)
  - Compilación de expresiones
  - Strings, hash tables, variables
  - Closures, garbage collection
  - Clases, métodos
  - PRIMER COMPILADOR REAL

- [ ] **Hito 4 — Nand2Tetris** (si llegamos)
  - De la compuerta NAND a la CPU
  - Assembler
  - VM translator
  - Compilador Jack
  - OS

- [ ] **Hito 5 — Binario / Ensamblador / SO propio** (futuro)
  - Machine language
  - Arquitectura (Hack o propia)
  - Hacia el sistema operativo

## 4. Material disponible
- `referencia/crafting-interpreters/COMPLETO.txt` — libro completo extraído
- `~/.opencode/material/johnsonbaugh.txt` — matemáticas discretas (autómatas, gramáticas)
- `~/.opencode/material/rosen.txt` — discrete math (lenguajes formales)
- `~/.opencode/material/velleman.txt` — demostraciones
- `~/.opencode/material/mendelson-6th-ed.txt` — lógica
- `referencia/apunte-induccion.tex` — apunte LaTeX de inducción
- Skills: compiladores-sistemas, latex-apuntes, mpi-apuntes, cpp-pseudocodigo, didactica

## 5. Flujo de trabajo con el asistente
- El agente `profesor-cpp` guía con andamiaje, NUNCA da la respuesta salvo pedido explícito.
- Siempre pregunta antes de ejecutar comandos (HITL).
- Estudia fundamentos matemáticos ANTES de cada implementación.
- Documenta cada hito en LaTeX.

## 6. Comandos de compilación (Arch Linux)
```bash
gcc programa.c -o programa
./programa
make
pdflatex apunte.tex
```

Última actualización: 18/07/2026
