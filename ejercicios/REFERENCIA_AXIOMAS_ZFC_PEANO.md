# Principia Computationis — Fundamentos Lógico-Matemáticos de la Programación

> Principia Computationis: De los axiomas de Peano y ZFC al código en C++  
> Estudiante: [Nombre] — Fecha: Junio 2026

---

## 1. AXIOMAS DE PEANO (1889)

**Autor:** Giuseppe Peano  
**Definen:** Los números naturales ℕ = {0, 1, 2, 3, ...}  
**Conceptos primitivos:** 0 (cero), S (función sucesor)

### Tabla 1: Los 5 axiomas de Peano

| # | Nombre | Lenguaje Simbólico | Explicación Coloquial | En C++ / Programación |
|---|--------|-------------------|----------------------|----------------------|
| P1 | Existencia del cero | 0 ∈ ℕ | El 0 es un número natural | `int i = 0;` — toda variable se inicializa |
| P2 | Clausura del sucesor | ∀n (n ∈ ℕ → S(n) ∈ ℕ) | Si n es natural, su sucesor también | `i++` — siempre podemos incrementar |
| P3 | Inyectividad del sucesor | ∀n ∀m (S(n) = S(m) → n = m) | Si dos sucesores son iguales, los originales también | Si `a+1 == b+1` entonces `a == b` |
| P4 | El cero no es sucesor | ∀n (S(n) ≠ 0) | Ningún número tiene 0 como sucesor | No hay número que al incrementarlo dé 0 (en unsigned) |
| P5 | Inducción | ∀P⊆ℕ: [P(0) ∧ ∀k(P(k)→P(S(k)))] → ∀n P(n) | Lo que vale para 0 y se hereda, vale para todos | **Fundamento del `for` y la recursión** |

### Demostración por inducción (P5 en acción)

**Problema:** Demostrar que 1 + 2 + 3 + ... + n = n(n+1)/2

```
Paso 1 — Caso base (n=0):
  Suma vacía = 0
  0(0+1)/2 = 0
  ∴ P(0) se cumple ✓

Paso 2 — Hipótesis inductiva:
  Supongo que para n = k: 1+2+...+k = k(k+1)/2

Paso 3 — Paso inductivo (k → k+1):
  1+2+...+k+(k+1) = k(k+1)/2 + (k+1)
                   = (k+1)(k/2 + 1)
                   = (k+1)(k+2)/2
  ∴ Si P(k) → P(k+1) ✓

Paso 4 — Conclusión (por P5):
  ∀n ∈ ℕ: P(n) es verdadero ✓
```

**Correspondencia con bucle for:**
```cpp
int suma = 0;                        // Caso base: P(0)
for(int i = 1; i <= n; i++) {        // Iteración: k → k+1
    suma += i;                        // Mantiene el invariante
}
// Al terminar: suma = n(n+1)/2       // Conclusión: ∀n P(n)
```

---

## 2. AXIOMAS ZFC (Zermelo-Fraenkel + Elección)

**Autores:** Ernst Zermelo (1908), Abraham Fraenkel (1922), Thoralf Skolem (1922), John von Neumann (1925)  
**Definen:** La teoría de conjuntos, base de toda la matemática moderna  
**Concepto primitivo:** ∈ (pertenencia)

### Tabla 2: Los 8 axiomas de ZF (sin elección)

| # | Nombre | Lenguaje Simbólico | Explicación | En Programación |
|---|--------|-------------------|-------------|-----------------|
| ZF1 | **Extensionalidad** | ∀A∀B[∀x(x∈A↔x∈B)→A=B] | Dos conjuntos son iguales si tienen los mismos elementos | Comparación de structs: `memcmp`, `operator==` |
| ZF2 | **Conjunto Vacío** | ∃∅ ∀x(x∉∅) | Existe el conjunto sin elementos | `nullptr`, `NULL`, `{}` vacío |
| ZF3 | **Par (no ordenado)** | ∀a∀b∃C∀x(x∈C↔x=a∨x=b) | Dados a y b, existe {a, b} | `std::pair`, tupla de 2 elementos |
| ZF4 | **Unión** | ∀A∃B∀x[x∈B↔∃C(C∈A∧x∈C)] | Existe la unión de todos los elementos de A | Concatenación de vectores: `v1.insert(end, v2)` |
| ZF5 | **Partes (Potencia)** | ∀A∃P∀x(x∈P↔x⊆A) | Existe el conjunto de todos los subconjuntos de A | Algoritmo de generación de combinaciones, `pow()` |
| ZF6 | **Esquema de Reemplazo** | ∀A[∀x∈A∃!y φ(x,y) → ∃B∀x∈A∃y∈B φ(x,y)] | La imagen de un conjunto bajo una función es un conjunto | `std::transform(in, out, f)` — mapeo |
| ZF7 | **Infinito** | ∃I[∅∈I ∧ ∀x(x∈I→x∪{x}∈I)] | Existe un conjunto infinito (ℕ) | Bucles infinitos `while(true)`, streams, lazy eval |
| ZF8 | **Fundación (Regularidad)** | ∀A(A≠∅→∃B∈A(B∩A=∅)) | Los conjuntos están bien fundados, no hay pertenencia circular | Tipos de datos sin ciclos, `shared_ptr` sin referencias circulares |

### Tabla 3: Axioma de Elección

| # | Nombre | Lenguaje Simbólico | Explicación | En Programación |
|---|--------|-------------------|-------------|-----------------|
| AC | **Elección** | ∀F[∅∉F→∃f:F→⋃F ∀A∈F(f(A)∈A)] | Podemos elegir un elemento de cada conjunto no vacío simultáneamente | `rand()`, heurísticas, nondeterminismo, `select()` |

### Construcción de los números naturales en ZFC (von Neumann)

ZFC no tiene números naturales como concepto primitivo — los **construye** como conjuntos:

```
0 = ∅                    = {}
1 = {∅}                  = {0}
2 = {∅, {∅}}            = {0, 1}
3 = {∅, {∅}, {∅,{∅}}} = {0, 1, 2}
...
n = {0, 1, 2, ..., n-1}
```

El **axioma de Infinito (ZF7)** garantiza que existe el conjunto ℕ = {0, 1, 2, 3, ...}.  
La función sucesor es: S(n) = n ∪ {n}

---

## 3. TABLA COMPARATIVA: Peano vs ZFC

| Aspecto | Peano | ZFC |
|---------|-------|-----|
| **¿Qué define?** | Los números naturales ℕ | La noción de conjunto |
| **Concepto primitivo** | 0 y S (sucesor) | ∈ (pertenencia) |
| **Cantidad de axiomas** | 5 | 9 (8 ZF + 1 AC) |
| **Paradigma** | Aritmético | Conjuntista |
| **Base de...** | Aritmética, inducción, recursión | Toda la matemática moderna |
| **En computación** | Bucles, recursión, tipos numéricos | Estructuras de datos, tipos abstractos, memoria |
| **Relación entre ambos** | ZFC puede **construir un modelo** de Peano (von Neumann) | Peano se **deriva** de ZFC |
| **Consistencia** | Demostrable consistente si ZFC lo es | No demostrable dentro de ZFC (Gödel) |
| **Problema que resuelve** | ¿Qué son los números? | ¿Qué es un conjunto? (evitar paradojas tipo Russell) |

---

## 4. FUNDAMENTACIÓN MATEMÁTICA DE ESTRUCTURAS DE PROGRAMACIÓN

### 4.1 El bucle `for` = Inducción (P5)

Matemáticamente, un bucle:
```cpp
for(int i=0; i<N; i++) { cuerpo(i); }
```
es una **demostración por inducción ejecutable**:

| Etapa | Inducción Matemática | Bucle for |
|-------|---------------------|-----------|
| Caso base | P(0) es verdadero | Se ejecuta `cuerpo(0)` |
| Hipótesis inductiva | Supongo P(k) verdadero | El estado refleja que se hicieron k iteraciones |
| Paso inductivo | P(k) → P(k+1) | De `cuerpo(k)` se pasa a `cuerpo(k+1)` |
| Conclusión | ∀i∈[0,n]: P(i) | El bucle termina con i = N |

**Verificación formal:** Se usa un **invariante de bucle** — propiedad que:
1. Es verdadera **antes** de entrar al bucle
2. Se mantiene verdadera **después de cada iteración**
3. Al terminar, implica que el resultado es correcto

Ejemplo clásico — suma de 1 a n:
```
Invariante: suma = 0 + 1 + 2 + ... + (i-1)

  suma = 0;                    // Invariante: suma = 0 (suma vacía)
  for(i=0; i<=n; i++) {
      suma += i;               // Invariante se mantiene
  }
  // Al terminar: suma = 0+1+...+n  ✓
```

### 4.2 El bucle `while` = Punto Fijo + Cuantificación Existencial

```cpp
while(condicion) { cuerpo; }
```

**Matemáticamente:**
- Sea f: Estado → Estado la transformación que ejecuta el cuerpo
- Sea c: Estado → bool la condición
- El while itera: e₀ → f(e₀) → f(f(e₀)) → ...
- Hasta encontrar el primer k tal que c(eₖ) = false

**En lógica de predicados:**
```
∃k ∈ ℕ: [c(eₖ) = false] ∧ [∀j < k: c(eⱼ) = true]
```

**Correspondencia con ZFC:** El while busca un **punto fijo** de la función `f` bajo la condición `c`. La existencia de ese punto fijo está garantizada por el **axioma de Fundación (ZF8)** si el estado es bien fundado.

### 4.3 El condicional `if` = Función Característica + Tercio Excluido

```cpp
if(cond) { A } else { B }
```

**En lógica proposicional:**
```
(cond → A) ∧ (¬cond → B)
```

**Matemáticamente:** El `if` implementa la **función característica** de un conjunto:
```
χ_A(x) = { 1  si x ∈ A
         { 0  si x ∉ A
```

**Fundamento:** El principio del **tercio excluido** (p ∨ ¬p) — en lógica clásica siempre podemos decidir entre dos caminos. Esto está en la base de la **arquitectura de von Neumann** (Shannon, 1937) que implementa la lógica booleana en circuitos.

### 4.4 La variable = Estado como Función

En programación, una variable es un **par (nombre, valor)**.

**Matemáticamente:**
```
Estado: Variables → Valores
         nombre   ↦ valor
```

Cada asignación `x = expr` transforma el estado:
```
Estado_nuevo = Estado_viejo ⊕ { (x, valor_de_expr) }
```

Donde ⊕ es la **sobreescritura** de una función en un punto. Esto corresponde a:
- ZF3 (Par): para crear el mapeo nombre→valor
- ZF6 (Reemplazo): para transformar el estado

### 4.5 La función = Subconjunto del Producto Cartesiano

**Matemáticamente (en ZFC):**
```
f: A → B  ≡  f ⊆ A × B  ∧  ∀x∈A ∃!y∈B: (x,y)∈f
```

**En C++:**
```cpp
int cuadrado(int x) { return x * x; }
```

**Correspondencias:**
| Concepto ZFC | En la función C++ |
|-------------|------------------|
| A = dominio | `int` (tipo del parámetro) |
| B = codominio | `int` (tipo de retorno) |
| f ⊆ A × B | El cuerpo de la función define los pares |
| ∃!y (existencia única) | Un solo `return` por llamada |
| ZF6 (Reemplazo) | Garantiza que `{f(x): x∈A}` es un conjunto |

### 4.6 El array = Función de Dominio Finito

**Matemáticamente:**
```cpp
int arr[n];  // arr: {0, 1, ..., n-1} → ℤ
```

Un array es una **función** donde:
- El dominio es un conjunto finito de índices
- El codominio es el tipo de los elementos
- `arr[i]` es la aplicación de la función en el punto `i`

**En ZFC:** Es un subconjunto finito de ℕ × T, construido con ZF3 (Par, repetido) y ZF4 (Unión).

### 4.7 Resumen de correspondencias

| Estructura de programación | Concepto matemático | Axioma que lo fundamenta |
|---------------------------|--------------------|------------------------|
| `int x = 0;` | Declaración de un natural | P1 (0∈ℕ) |
| `x++;` | Sucesor | P2 (S(n)∈ℕ) |
| `for(i=0; i<N; i++)` | Inducción matemática | P5 (Inducción) |
| `while(cond)` | Punto fijo, ∃ iterativo | ZF8 (Fundación) + P5 |
| `if/else` | Función característica | Tercio excluido (lógica clásica) |
| `nullptr` | Conjunto vacío | ZF2 (Vacío) |
| `std::pair` | Par no ordenado | ZF3 (Par) |
| `std::transform` | Imagen de una función | ZF6 (Reemplazo) |
| `std::vector` concatenado | Unión de conjuntos | ZF4 (Unión) |
| Arreglo `arr[i]` | Función de dominio finito | ZF3 + ZF4 + ZF6 |
| `while(true)` | Conjunto infinito | ZF7 (Infinito) |
| Tipos de datos | Conjuntos | ZFC en general |
| Herencia de clases | Subconjuntos ⊆ | ZF1 (Extensionalidad) |

---

## 5. ESQUEMA GENERAL: De los Axiomas al Código

```
AXIOMAS ZFC (1908-1925)
  ZF1-ZF8 + AC
  Definen: ∈, conjuntos, ℕ, funciones
       │
       ▼
  TEORÍA DE CONJUNTOS ─────────────────────────────────┐
    │ Construye: ℕ (von Neumann), ℤ, ℚ, ℝ              │
    │ Define: funciones, relaciones, grafos             │
    │ Base de: toda la matemática moderna               │
       │                                                │
       ▼                                                │
  AXIOMAS DE PEANO (1889) ──────────────────────────────┤
    P1-P5                                                │
    Definen: ℕ, 0, S, inducción                         │
       │                                                │
       ▼                                                │
  LÓGICA COMPUTACIONAL ─────────────────────────────────┘
    │ Lógica proposicional (¬, ∧, ∨, →, ↔)             
    │ Cuantificadores (∀, ∃)                           
    │ Equivalencias, tablas de verdad                  
       │                                               
       ▼                                               
  LENGUAJE DE PROGRAMACIÓN (C++)
    │ Estructuras de control: for (P5), while (ZF8), if (tercio excluido)
    │ Tipos de datos: int (ℕ), bool (lógica), arrays (funciones)
    │ Funciones: ZF6 (Reemplazo), λ-cálculo
    │ Memoria: ZF2 (vacío = nullptr), ZF3 (par = struct)
```

---

## 6. BIBLIOGRAFÍA Y REFERENCIAS

### Fuentes primarias (artículos originales)

| Año | Autor | Título | Relevancia |
|-----|-------|--------|-----------|
| 1889 | G. Peano | *Arithmetices principia, nova methodo exposita* | Formulación original de los axiomas de Peano |
| 1908 | E. Zermelo | *Untersuchungen über die Grundlagen der Mengenlehre I* (Math. Annalen 65) | Primera axiomatización de la teoría de conjuntos |
| 1922 | A. Fraenkel | *Der Begriff "definit" und die Unabhängigkeit des Auswahlsaxioms* | Propuesta del esquema de Reemplazo |
| 1922 | T. Skolem | *Einige Bemerkungen zur axiomatischen Begründung der Mengenlehre* | Formalización en lógica de primer orden |
| 1930 | E. Zermelo | *Über Grenzzahlen und Mengenbereiche* | Segunda axiomatización con Fundación |
| 1925 | J. von Neumann | *Eine Axiomatisierung der Mengenlehre* | Axioma de Fundación, construcción de ordinales |

### Libros de texto de referencia

| Autor | Título | Editorial | Uso |
|-------|--------|-----------|-----|
| K. Kunen (1980) | *Set Theory: An Introduction to Independence Proofs* | Elsevier | Texto estándar sobre teoría de conjuntos ZFC |
| A. Fraenkel, Y. Bar-Hillel, A. Lévy (1973) | *Foundations of Set Theory* | North-Holland | Tratado completo sobre fundamentos |
| J. R. Shoenfield (1977) | *Axioms of Set Theory* (en Handbook of Mathematical Logic) | North-Holland | Capítulo de referencia |
| R. Johnsonbaugh | *Matemáticas Discretas* (6ed) | Pearson | Lógica, conjuntos, inducción (nivel MPI I) |
| K. Rosen | *Discrete Mathematics* (8ed) | McGraw-Hill | Lógica, cuantificadores, demostraciones |
| D. Velleman | *How to Prove It* (2ed) | Cambridge | Demostraciones formales y lógica de predicados |
| P. Smith | *Gödel Without (Too Many) Tears* | Logic Matters | Introducción accesible a PA y teoremas de incompletitud |

### Conexión con ciencias de la computación

| Autor | Título | Aporte |
|-------|--------|--------|
| C. Shannon (1937) | *A Symbolic Analysis of Relay and Switching Circuits* | Implementación física de la lógica booleana (base del `if`) |
| A. Turing (1936) | *On Computable Numbers* | Máquina de Turing: formaliza qué es computable |
| A. Church (1936) | *An Unsolvable Problem of Elementary Number Theory* | λ-cálculo: fundamento de las funciones |
| J.-Y. Girard (1971) | System F (lógica de segundo orden) | Curry-Howard: demostraciones = programas |
| J.-L. Krivine (2000) | *Typed λ-calculus in classical ZF set theory* | Curry-Howard para ZFC |
| M. Clint, C.A.R. Hoare (1972) | *Program Proving: Jumps and Functions* | Correspondencia entre lógica clásica e instrucciones de control |

### Enciclopedias y recursos en línea

| Recurso | URL | Contenido |
|---------|-----|-----------|
| Stanford Encyclopedia of Philosophy | plato.stanford.edu | Artículos "Zermelo-Fraenkel Set Theory" y "Peano Arithmetic" |
| Encyclopedia of Mathematics | encyclopediaofmath.org | Artículo "ZFC" con axiomas completos |
| nLab | ncatlab.org | "Peano arithmetic" con tratamiento categórico |
| Wikipedia | wikipedia.org | "Zermelo-Fraenkel set theory", "Peano axioms" |

### Sobre el nivel de confianza de este documento

| Contenido | Confianza | Fundamento |
|-----------|-----------|------------|
| Axiomas ZFC y Peano (lenguaje simbólico) | 5/5 | Conocimiento matemático canónico, verificado en SEP, Encyclopedia of Math, Kunen |
| Correspondencias for=inducción, if=lógica | 5/5 | Establecidas desde Turing (1936), Shannon (1937), Hoare (1969) |
| Correspondencias específicas axioma→C++ | 4/5 | Interpretación pedagógica; la relación es estructural, no formal |
| Construcción de von Neumann de ℕ | 5/5 | Estándar en teoría de conjuntos |

---

*Documento generado como material de referencia para el plan de estudio de C++, MPI I y Lógica Computacional.*  
*Proyecto: ~/Documentos/Proyectos/AprendiendoCpp/*  
*Última actualización: Junio 2026*
*Este material forma parte del programa Principia Computationis.*
