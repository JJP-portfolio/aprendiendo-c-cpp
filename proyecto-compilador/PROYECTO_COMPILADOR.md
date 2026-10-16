# Proyecto de Vacaciones de Invierno: De C a mi propio Sistema Operativo

**Un recorrido por compiladores, lenguajes formales y arquitectura de sistemas**

---

## 1. Contexto

Soy estudiante de Programación en la UNAHUR. Este proyecto es personal y nace durante
las vacaciones de invierno: una forma de no aburrirme y, sobre todo, de seguir estudiando
con un rumbo claro. No es una materia ni un trabajo obligatorio; es mi propio plan de
aprendizaje, hecho a medida.

El hilo conductor es ambicioso pero concreto: partir de un lenguaje como C y, paso a paso,
llegar a construir mi propio sistema operativo. Para llegar ahí, el camino natural pasa por
entender cómo funcionan los compiladores y los lenguajes formales.

---

## 2. Visión a largo plazo (el "por qué")

El proyecto no es solo escribir código. Es una escalera de aprendizaje con cuatro peldaños:

1. **Construir un compilador.** Lo trato como el vehículo principal de aprendizaje: si
   logro hacer uno, entiendo de verdad cómo un lenguaje se convierte en algo que la
   computadora ejecuta.
2. **Usarlo como base para crear un sistema operativo propio.** El compilador es el primer
   ladrillo; el sistema operativo es la casa.
3. **Aprender machine language, binario y ensamblador.** Bajar hasta el nivel donde el
   hardware realmente "entiende" las instrucciones.
4. **(Futuro) Diseñar una pieza de hardware libre, con una mini inversión.** La meta más
   lejana: cerrar el ciclo completo, del software al silicio.

> *"No me importaría crear un lenguaje o empezar a aprender binario."*

---

## 3. Principio rector (FUNDAMENTAL)

**El objetivo principal es APRENDER MATEMÁTICAS. No quiero codear sin entender
matemáticamente qué estoy haciendo.**

Cada implementación debe estar precedida por el estudio de sus fundamentos matemáticos.
El compilador es el vehículo; los fundamentos son el destino.

Esto significa que, antes de escribir una sola línea de un lexer o un parser, voy a estudiar
la teoría que los sostiene: autómatas, gramáticas, lógica, recursión. El código es la
aplicación; la matemática es la justificación de por qué funciona.

---

## 4. Filosofía de enseñanza (reglas del agente profesor-cpp)

Para acompañar este proceso uso un asistente (agente `profesor-cpp`) con reglas de trabajo
muy definidas:

- **Nunca da la respuesta** salvo que se la pidan explícitamente.
- **Siempre oculta la solución**: el estudiante debe razonarla por sí mismo.
- **Andamiaje progresivo (scaffolding)** con retiro gradual de ayuda (*fading*) a medida
  que mejoro.
- **Preguntas socráticas**: llevan a descubrir la respuesta en lugar de recibirla.
- **Growth mindset**: celebrar el esfuerzo y normalizar el error como parte del aprendizaje.
- **Human-in-the-Loop**: siempre pregunta antes de ejecutar comandos o avanzar.

---

## 5. Stack tecnológico

| Elemento | Elección |
|----------|----------|
| Lenguaje de implementación | **C** (confirmado) |
| Sistema operativo del estudiante | **Arch Linux** |
| Compilador del host | **gcc** |
| Documentación | **LaTeX** (skill `latex-apuntes`, template y guía ya disponibles) |
| Herramienta de build | **make** |

---

## 6. Roadmap del proyecto (hitos)

- **Hito 0 — Fundamentos matemáticos:** autómatas finitos, gramáticas formales, teoría de
  lenguajes, recursión, árboles, tablas hash y representación binaria.
- **Hito 1 — Calculadora en C** (lexer + parser + evaluador, ~200 líneas): aplicar
  autómatas y gramáticas en un primer proyecto real y acotado.
- **Hito 2 — Crafting Interpreters, Parte I** (intérprete *tree-walk* en Java): entender la
  teoría general de intérpretes.
- **Hito 3 — Crafting Interpreters, Parte II** (VM y compilador a bytecode en C): el primer
  compilador real, ya en el lenguaje definitivo del proyecto.
- **Hito 4 — (si llegamos) Nand2Tetris:** de la compuerta NAND al compilador Jack + sistema
  operativo.
- **Hito 5 — (futuro) Ensamblador, binario, arquitectura** y el camino hacia el sistema
  operativo propio.

---

## 7. Recursos disponibles (material ya recolectado)

- **Libro "Crafting Interpreters"** (Robert Nystrom) — extraído completo a texto en
  `referencia/crafting-interpreters/COMPLETO.txt`.
- **Nand2Tetris** — curso gratuito en nand2tetris.org.
- **Dragon Book** (Aho, Sethi, Ullman) — referencia teórica clásica.
- **Engineering a Compiler** (Cooper, Torczon) — referencia complementaria.
- **Biblioteca de PDFs en `~/.opencode/material/`:**
  - Johnsonbaugh (matemáticas discretas, cap. de autómatas/gramáticas)
  - Rosen (matemáticas discretas)
  - Velleman (demostraciones)
  - Mendelson (lógica)
  - Polya (resolución de problemas)
- **Apuntes LaTeX propios:** inducción matemática, reglas de conjuntos, template y guía
  rápida.
- **Skills del asistente:** `latex-apuntes`, `mpi-apuntes`, `cpp-pseudocodigo`, `didactica`,
  `material-externo`, `material-extraido` y `compiladores-sistemas` (a crear).

---

## 8. Mapa de dependencias: Matemática → Código

La matemática no es un adorno: cada tema sustenta una parte concreta del compilador.

| Fundamento matemático | Aplicación en el código |
|-----------------------|-------------------------|
| Autómatas finitos | lexer (reconocimiento de tokens) |
| Gramáticas libres de contexto | parser (árbol sintáctico) |
| Recursión / inducción | evaluación de AST, demostración de correctitud |
| Árboles | AST (*Abstract Syntax Tree*) |
| Tablas hash | tabla de símbolos, gestión de variables |
| Representación binaria / complemento a 2 | generación de código, VM |
| Lógica proposicional | condicionales, evaluación de booleanos |

---

## 9. Plan de acción inmediato (lo que se va a configurar)

- **A.** Mejorar las *references* en `opencode.jsonc` para dar acceso al material sin inflar
  el prompt.
- **B.** Crear la skill `compiladores-sistemas` (roadmap + fundamentos matemáticos).
- **C.** Reescribir el agente `profesor-cpp` (permisos bash corregidos, reglas 6 y 7,
  proyecto).
- **D.** Crear `PLAN_PROYECTO.md` con hitos y material.
- **E.** Reformatear el `.txt` del material para búsqueda fina si hace falta.

---

## 10. Cronograma sugerido (flexible)

- **Semanas 1-2:** Fundamentos matemáticos (autómatas, gramáticas) + calculadora en C.
- **Semanas 3-5:** Crafting Interpreters, Parte I (teoría).
- **Semanas 6-9:** Crafting Interpreters, Parte II (implementación en C).
- **Resto:** Nand2Tetris / ensamblador según avance.

> El cronograma es una guía, no una obligación. Lo importante es no saltarse los
> fundamentos.

---

## 11. Notas para la presentación futura

Este documento es la base. Para la presentación final se puede usar **Beamer** (LaTeX) o
directamente **markdown**.

Estructura sugerida de slides:

1. Visión
2. Principio matemático
3. Roadmap
4. Hitos
5. Recursos
6. Demo de la calculadora

---

*Documentado el 18/07/2026. Base para presentación futura.*

---

## 12. Anexo (14/09/2026) — Evaluación Python vs C

**Pregunta investigada:** ¿se puede armar un lenguaje en Python o hay que volver a C? ¿Cómo encararlo como proyecto futuro?

**Respuesta corta:** sí se puede en Python, y es mejor punto de partida para Hito 1-2. C sigue siendo el lenguaje definitivo del proyecto porque la meta final es un sistema operativo propio (Hito 5), al que Python no llega.

**Diferencias encontradas:**

- Lexer / Parser / AST: en Python se valida la idea en pocas líneas (strings, clases); en C se valida la máquina (char\*, malloc/free, struct + punteros).
- Tabla de símbolos: en Python es un `dict` (esconde la teoría); en C hay que implementarla (palomar, `k mod m`, encadenamiento), que es justo lo que el Hito 0 ya documentó y se quiere aprender.
- Errores: Python da traceback con línea; C da segfault sin causa clara (se mezcla error de gramática con error de puntero).
- Hito 3 (VM + bytecode + GC) y Hito 5 (binario / SO): solo C sirve. Python ahí solo sería prototipo.
- El libro base ya usa este esquema: Parte I en lenguaje alto (Java) para conceptos, Parte II en C para máquina real. Acá se reemplaza Java por Python para no sumar un tercer lenguaje (la carrera usa C++/MPI).

**Riesgos de quedarse 100% en C:** abandono por fricción (gramática + punteros a la vez), confusión de causa ante un bug, sobrecarga de herramientas (se vio en `hito1-calculadora.tex` incompleto).

**Riesgos de pasarse 100% a Python:** deriva del objetivo (aleja del SO), falsa confianza (esconde hash, GC, complemento a 2 y overflow), rompe la cadena hacia hardware.

**Decisión:** se mantiene C como lenguaje definitivo (no se reescribe el stack). Se permite Python solo como andamio: prototipo en Python para validar gramática/AST y después port a C con los mismos tests (ej. `2+3*4=14`, `(8-3)*2=10`). Hito 2 se hace en Python en vez de Java. Desde Hito 3, solo C.

> Regla: Python para validar la idea, C para validar la máquina. Las matemáticas van primero en ambos casos.
