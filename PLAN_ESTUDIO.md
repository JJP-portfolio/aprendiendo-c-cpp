# Plan de Estudio Integrado: C++ + Matemática para Informática I + Lógica Computacional

> **Autor:** Estudiante UNAHUR — Licenciatura en Informática
> **Materias activas:** MPI II · Programación Estructurada
> **Materias cursadas:** MPI I (Marcela Bellani) · Intro a Lógica y Prob. Computacionales (Alan Rodas Bonjour)
> **Última actualización:** 2026-05-26

---

## 1. Contenido del plan

Cada nivel tiene tres columnas: **C++** (código a compilar), **Matemática** (ejercicios de papel en `.txt`), **Pseudocódigo** (algoritmos en papel en `.txt`).

### NIVEL 1 — Lógica proposicional aplicada

| # | Código (C++) | Papel (matemática) | Papel (pseudocódigo) |
|---|-------------|-------------------|---------------------|
| 1 | Proposiciones como `if` | Coloquial ↔ Simbólico + simplificación | — |
| 2 | Tablas de verdad programadas | Tablas completas con valores de verdad | Pseudocódigo: evaluar si una fórmula es tautología |
| 3 | Leyes de De Morgan en código | Simplificación con leyes lógicas | — |
| 4 | Divisibilidad entera con `%` | Algoritmo de división entera | Pseudocódigo: determinar si dos números son coprimos (Euclides) |

### NIVEL 2 — Bucles + Cuantificadores

| # | Código (C++) | Papel (matemática) | Papel (pseudocódigo) |
|---|-------------|-------------------|---------------------|
| 5 | Cuantificador ∀ ("para todo") con `for` | ∀ aplicado a función proposicional | Pseudocódigo: ∀ con flag y corte temprano |
| 6 | Cuantificador ∃ ("existe") con `while` | ∃ y su negación (¬∃x P ↔ ∀x ¬P) | — |
| 7 | Negación de cuantificadores en código | Demostrar ¬∀x P ↔ ∃x ¬P con tabla | Pseudocódigo: equivalencia de cuantificadores negados |
| 8 | Algoritmo de Euclides (MCD) | MCD, propiedades, divisibilidad | Pseudocódigo: Euclides paso a paso |
| 9 | MCD extendido | Coeficientes s, t tales que a·s + b·t = mcd(a,b) | — |

### NIVEL 3 — Conjuntos + Arrays

| # | Código (C++) | Papel (matemática) | Papel (pseudocódigo) |
|---|-------------|-------------------|---------------------|
| 10 | Representación de conjuntos con `bool[]` | Cardinalidad, pertenencia, inclusión | Pseudocódigo: mostrar un conjunto por comprensión |
| 11 | Unión e intersección | Propiedades algebraicas (idempotencia, conmutatividad, asociatividad) | — |
| 12 | Diferencia y complemento | Complemento respecto a un universo U | Pseudocódigo: diferencia simétrica A △ B |
| 13 | Producto cartesiano | Pares ordenados, cardinalidad | — |

### NIVEL 4 — Funciones como predicados + Demostraciones

| # | Código (C++) | Papel (matemática) | Papel (pseudocódigo) |
|---|-------------|-------------------|---------------------|
| 14 | Función proposicional que devuelve `bool` | P(x) como predicado, dominio y conjunto de verdad | Pseudocódigo: función proposicional `esPrimo(n)` |
| 15 | Inducción → invariante de bucle | Demostración por inducción de 1+2+...+n = n(n+1)/2 | — |
| 16 | Verificador de tautologías | Tablas de verdad completas + leyes de inferencia | Pseudocódigo: verificador de validez de razonamiento |

### NIVEL 5 — Proyectos integradores

| # | Proyecto | Integración |
|---|----------|-------------|
| 17 | Cifrador con lógica | C++ + strings + tabla de verdad + operaciones lógicas |
| 18 | Simulador de máquina de Turing simple | Cinta (array) + estados (if/else) + reglas |
| 19 | Verificador de razonamientos deductivos | C++ + MPI (premisas → conclusión, leyes de inferencia) |
| 20 | Calculadora de conjuntos interactiva | C++ + menú con unión, intersección, diferencia, prod. cartesiano |

---

## 2. Referencia MPI I → C++

### Lógica proposicional

| Matemática (MPI) | C++ | Nombre |
|-----------------|-----|--------|
| `p` | `bool p;` | Proposición / variable booleana |
| `V` / `F` | `true` / `false` | Valores de verdad |
| `¬p` | `!p` | Negación |
| `p ∧ q` | `p && q` | Conjunción (Y) |
| `p ∨ q` | `p \|\| q` | Disyunción inclusiva (O) |
| `p ⊕ q` | `p != q` | Disyunción excluyente (XOR) |
| `p → q` | `!p \|\| q` | Implicación / condicional |
| `p ↔ q` | `p == q` | Bicondicional / doble condicional |

### Cuantificadores

| Matemática | Significado | Patrón en C++ |
|-----------|-------------|---------------|
| `∀x ∈ A: P(x)` | Todos los elementos cumplen P | `bool ok = true; for (...) if (!P(x)) ok = false;` |
| `∃x ∈ A: P(x)` | Al menos un elemento cumple P | `bool ok = false; for (...) if (P(x)) { ok = true; break; }` |
| `¬∀x P(x) ↔ ∃x ¬P(x)` | Negación de universal | Se puede demostrar programáticamente |
| `¬∃x P(x) ↔ ∀x ¬P(x)` | Negación de existencial | Ídem |

### Divisibilidad entera

| Matemática | C++ |
|-----------|-----|
| `a = b · q + r` con `0 ≤ r < \|b\|` | `q = a / b; r = a % b;` |
| `b \| a` (b divide a a) | `a % b == 0` |
| `mcd(a, b)` | Algoritmo de Euclides |
| `a y b son coprimos ↔ mcd(a,b) = 1` | `mcd(a,b) == 1` |

**Algoritmo de Euclides:**
```
mientras (b != 0) {
    r = a % b;
    a = b;
    b = r;
}
// al final, a es el MCD
```

### Conjuntos

Conjuntos finitos con universo chico (ej: números del 0 al 9) se representan con arrays de `bool`:

| Matemática | Representación en C++ |
|-----------|----------------------|
| `U = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}` | `const int U = 10;` |
| `A = {1, 2, 3}` | `bool A[U] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0};` |
| `x ∈ A` | `A[x] == true` |
| `\|A\|` (cardinalidad) | `int contar(bool A[], int n)` |
| `A ∪ B` | `C[i] = A[i] \|\| B[i]` |
| `A ∩ B` | `C[i] = A[i] && B[i]` |
| `A − B` | `C[i] = A[i] && !B[i]` |
| `A △ B` (diferencia simétrica) | `C[i] = A[i] != B[i]` |
| `A ⊆ B` | `∀i (A[i] → B[i])` |
| `A × B` | `for (int a : A) for (int b : B) // (a, b)` |

---

## 3. Referencia Lógica Computacional (Pilas Bloques → C++)

| Pilas Bloques | Concepto | C++ |
|--------------|----------|-----|
| Comandos secuenciales | Secuencia | Líneas de código en orden |
| Procedimiento sin parámetros | Abstracción | `void nombre() { ... }` |
| Repetir `N` veces | Repetición determinística | `for (int i = 0; i < N; i++)` |
| Alternativa condicional | Decisión | `if (condicion) { ... } else { ... }` |
| Repetir mientras | Repetición condicional | `while (condicion) { ... }` |
| Sensores numéricos | Consultar entorno | `std::cin`, funciones que devuelven datos |

---

## 4. Buenas prácticas de programación

### Nombres

- Usá nombres **descriptivos** en español o inglés (elegí uno y mantenelo)
- Variables: `suma`, `contador`, `esPar` (camelCase)
- Funciones: `calcularPromedio()`, `esPrimo()`
- Constantes: `const int MAX = 100;`
- NO: `a, b, c, x, temp, aux` (salvo índices de `for`: `i, j, k`)

### Estructura

- Una función = una responsabilidad
- Si una función tiene más de 20 líneas, probablemente hace demasiadas cosas
- Declará las variables **cerca de donde se usan**, no todo al principio
- Usá `const` para valores que no cambian

### Comentarios

- No comentés **lo que hace** el código (se ve solo)
- Comentá **por qué** lo hace, o el **invariante** de un bucle
- En ejercicios de MPI: comentá qué ley lógica o propiedad matemática estás aplicando

### Formato

- Indentación consistente (2 o 4 espacios, no tabs mixtos)
- Espacios alrededor de operadores: `if (a > b && c < d)`
- Una instrucción por línea
- `{` en la misma línea que el `if`/`for`/`while` (estilo K&R)

---

## 5. Historia de la computación

| Personaje | Aporte | Cuándo | Conexión con el plan |
|-----------|--------|--------|---------------------|
| **George Boole** | Álgebra de Boole (lógica binaria) | 1854 | Ej. 1-3: condiciones lógicas en `if` |
| **Gottlob Frege** | Primer sistema lógico formal | 1879 | Ej. 2-3: tablas de verdad |
| **Augustus De Morgan** | Leyes de De Morgan | 1847 | Ej. 3: equivalencias lógicas |
| **David Hilbert** | Problema de decisión (Entscheidungsproblem) | 1928 | Ej. 16: verificador de tautologías |
| **Kurt Gödel** | Teoremas de incompletitud | 1931 | Contexto: límites de la lógica formal |
| **Alan Turing** | Máquina de Turing, computabilidad | 1936 | Ej. 18: simulador de MT |
| **Alonzo Church** | Cálculo lambda, tesis Church-Turing | 1936 | Ej. 18: equivalencia computacional |
| **Claude Shannon** | Lógica booleana en circuitos | 1937 | Fundamento físico de if/else |
| **John von Neumann** | Arquitectura von Neumann | 1945 | Cómo ejecuta la CPU tu código |
| **Euclides** | Algoritmo de Euclides (MCD) | ~300 a.C. | Ej. 8-9: algoritmo más antiguo en uso |
| **Ludwig Wittgenstein** | Tablas de verdad (Tractatus) | 1921 | Ej. 2: formalización de tablas |

---

## 6. Formato de cada entrega

### Ejercicio de C++

```
┌────────────────────────────────────────────────────────────────────┐
│ # Título                                                          │
│ 📐 MPI: concepto                                                 │
│ 📖 Lógica: concepto                                              │
│ 🧠 C++ nuevo: concepto                                           │
│ 📜 Historia: persona y aporte                                    │
│ 📦 Archivo: ruta                                                 │
│ 📝 Consigna                                                     │
│ 💡 Tips                                                          │
│ ✅ Buenas prácticas                                              │
│ ❓ Reflexión                                                     │
└────────────────────────────────────────────────────────────────────┘
```

### Ejercicio de Matemática (papel → .txt)

```
┌────────────────────────────────────────────────────────────────────┐
│ # Título                                                         │
│ 📐 MPI: concepto                                                 │
│ 📝 Consigna                                                     │
│ ✏️ Resolución (a mano en .txt)                                  │
└────────────────────────────────────────────────────────────────────┘
```

### Ejercicio de Pseudocódigo (papel → .txt)

```
┌────────────────────────────────────────────────────────────────────┐
│ # Título                                                         │
│ 📖 Lógica: concepto                                              │
│ 📝 Consigna                                                     │
│ 💡 Pistas de pseudocódigo                                        │
│ ✏️ Resolución (a mano en .txt)                                  │
└────────────────────────────────────────────────────────────────────┘
```

---

## Material de referencia (PDFs y apuntes)

### 📚 Biblioteca de referencia (~/.opencode/material/)

- [ ] Johnsonbaugh — Matemáticas Discretas 6ed
- [ ] Rosen — Discrete Mathematics and its Applications 8ed
- [ ] Velleman — How to Prove It
- [ ] Stroustrup — Programming C++ 2ed
- [ ] Joyanes — Fundamentos de Programación 4ed
- [ ] Pensamiento Computacional (UNLP)
- [ ] Polya — How to Solve It
- [ ] Estructuras de Datos en C++

### 📖 Lógica

- [ ] Mendelson — Introducción a la Lógica Matemática 6ed
- [ ] Open Logic Project + Enderton

### 📓 Apuntes MPI I (extraídos a texto)

- [ ] Apunte teórico MPI I (2da parte) — Divisibilidad, cuantificadores, conjuntos
- [ ] Guía de ejercicios GTP2

### 📓 Inducción Matemática

- [ ] Apunte LaTeX: `referencia/apunte-induccion.tex`
- [ ] Ejercicios resueltos (Jovellanos)
- [ ] Enunciados de ejercicios (UNAM)

### 📓 Relaciones Binarias (MPI II)

- [ ] Ejercicios resueltos de relaciones
- [ ] Relaciones de equivalencia (UAM)
- [ ] Matemática para Informática II (libro)
- [ ] Guías de ejercitación MPI II

### 📓 Parciales

- [ ] Segundo parcial UNAHUR C1 2026

### 📓 LaTeX

- [ ] Template de apunte: `referencia/template-apunte.tex`
- [ ] Guía rápida: `referencia/latex-quickstart.md`
- [ ] Skill del asistente: `latex-apuntes`

---

## 7. Contenido MPI II — Matemática para Informática II

Cada nivel tiene dos columnas: **Matemática** (ejercicios de papel en `.txt`) y **C++** (implementación opcional).

### NIVEL 6 — Relaciones

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 21 | Definición de relación binaria, dominio e imagen | Representar relación como matriz booleana en C++ |
| 22 | Representación: pares, matriz, diagrama sagital, dígrafo | Clase `Relacion` con matriz de adyacencia |
| 23 | Relación inversa, complemento, unión, intersección, diferencia | Operaciones booleanas sobre matrices |
| 24 | Composición de relaciones (producto booleano) | Implementar composición con producto booleano |

### NIVEL 7 — Propiedades de relaciones

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 25 | Propiedades: reflexiva, simétrica, antisimétrica, transitiva | Verificador de propiedades sobre matriz |
| 26 | Clasificación de relaciones | Función que clasifica una relación |
| 27 | Clausuras: reflexiva, simétrica, transitiva | Algoritmo de clausura transitiva (Warshall) |

### NIVEL 8 — Relaciones de equivalencia

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 28 | Relación de equivalencia, clases de equivalencia, partición | Calcular clases desde matriz |
| 29 | Teorema fundamental de las relaciones de equivalencia | Demostración guiada |
| 30 | Congruencia módulo N, reloj de Gauss | `a ≡ b (mod n)` en C++ |

### NIVEL 9 — Relaciones de orden

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 31 | Orden parcial, orden total, buen orden | Verificador de orden |
| 32 | Diagrama de Hasse | Generar Hasse desde matriz |
| 33 | Elementos característicos: maximal, minimal, máximo, mínimo | Encontrar extremos en un conjunto ordenado |
| 34 | Cotas: superiores, inferiores, supremo, ínfimo | Calcular cotas desde subconjunto |

### NIVEL 10 — Inducción completa

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 35 | Principio de inducción: paso base + paso inductivo | Verificar fórmulas por inducción |
| 36 | Demostraciones por inducción (sumatorias, divisibilidad) | Implementar fórmulas y verificar |
| 37 | Inducción en recursividad | Función recursiva + invariante |

### NIVEL 11 — Análisis combinatorio

| # | Matemática | C++ (opcional) |
|---|-----------|----------------|
| 38 | Principios de adición y multiplicación | Solver de problemas de conteo |
| 39 | Variaciones con y sin repetición | Función V(n,k) y V'(n,k) |
| 40 | Permutaciones con y sin repetición | Función P(n) y P_n^{k1,k2,...} |
| 41 | Combinaciones con y sin repetición | Función C(n,k) y C'(n,k) |

### NIVEL 12 — Proyectos integradores MPI II

| # | Proyecto | Integración |
|---|----------|-------------|
| 42 | Calculadora de relaciones | Menú: crear relación, operar, clasificar, graficar |
| 43 | Verificador de equivalencias | Ingresar R, determina si es de equivalencia y muestra clases |
| 44 | Generador de diagrama de Hasse | A partir de matriz, dibuja Hasse en texto |
| 45 | Demostrador por inducción | Verifica paso base e inductivo para fórmulas dadas |

---

## 8. Referencia MPI II → C++

### Operaciones matriciales booleanas

| Matemática | C++ |
|-----------|-----|
| Matriz booleana m×n | `bool M[m][n]` o `vector<vector<bool>>` |
| (M_R)_{ij} = 1 si (a_i,b_j)∈R | `M[i][j] = true;` |
| M_{R∪S} = M_R ⋁ M_S | `C[i][j] = A[i][j] \|\| B[i][j];` |
| M_{R∩S} = M_R ⋀ M_S | `C[i][j] = A[i][j] && B[i][j];` |
| M_{R⁻¹} = (M_R)ᵗ | `C[j][i] = A[i][j];` |
| M_{S∘R} = M_R ◌ M_S | `C[i][j] = OR_k (A[i][k] && B[k][j])` |
| Reflexiva | `∀i: M[i][i] == true` |
| Simétrica | `∀i,j: M[i][j] == M[j][i]` |
| Transitiva | `∀i,j,k: (M[i][j] && M[j][k]) → M[i][k]` |
| Clausura transitiva | Algoritmo de Warshall |

### Combinatoria en C++

| Matemática | C++ |
|-----------|-----|
| n! (factorial) | `int fact(int n) { return (n<=1)?1:n*fact(n-1); }` |
| V(n,k) = n!/(n−k)! | `variacion(n,k)` |
| C(n,k) = n!/(k!(n−k)!) | `combinacion(n,k)` |
| nᵏ (variación con rep) | `pow(n,k)` |

### Inducción en C++

| Concepto | C++ |
|----------|-----|
| Hipótesis inductiva | Comentario / aserción |
| Invariante de bucle | `assert(...)` en puntos estratégicos |
| Verificación de fórmula | Función que computa ambos lados y compara |
