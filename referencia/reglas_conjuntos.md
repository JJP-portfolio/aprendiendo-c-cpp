# Reglas y Propiedades de Simplificación de Conjuntos

Matemática para Informática I — MPI I

---

## 1. Operaciones Básicas

### Unión (A ∪ B)

**Definición:** A ∪ B = {x | x ∈ A ∨ x ∈ B}

**Diagrama Venn:**

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A ∪ B (todo sombreado)
```

### Intersección (A ∩ B)

**Definición:** A ∩ B = {x | x ∈ A ∧ x ∈ B}

**Diagrama Venn:**

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A ∩ B (solo la intersección)
```

### Diferencia (A − B)

**Definición:** A − B = {x | x ∈ A ∧ x ∉ B}

**Diagrama Venn:**

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A − B (solo A sin la parte de B)
```

### Complemento (A')

**Definición:** A' = U − A = {x ∈ U | x ∉ A}

**Diagrama Venn:**

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···       ···       ··· ░░░░│
         │░░░ ···   A   ···   B   ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░░ ···   ·······   ··· ░░░░░░│
         │░░░░ ··· ······· ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = A' (todo fuera de A)
```

---

## 2. Propiedades Fundamentales

### Conmutativa

| Operación | Equivalencia |
|-----------|-------------|
| Unión | A ∪ B = B ∪ A |
| Intersección | A ∩ B = B ∩ A |

### Asociativa

| Operación | Equivalencia |
|-----------|-------------|
| Unión | (A ∪ B) ∪ C = A ∪ (B ∪ C) |
| Intersección | (A ∩ B) ∩ C = A ∩ (B ∩ C) |

### Distributiva

| Operación | Equivalencia |
|-----------|-------------|
| Unión sobre intersección | A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C) |
| Intersección sobre unión | A ∩ (B ∪ C) = (A ∩ B) ∪ (A ∩ C) |

### Idempotente

| Operación | Equivalencia |
|-----------|-------------|
| Unión | A ∪ A = A |
| Intersección | A ∩ A = A |

### Absorción

| Operación | Equivalencia |
|-----------|-------------|
| Absorción 1 | A ∪ (A ∩ B) = A |
| Absorción 2 | A ∩ (A ∪ B) = A |

---

## 3. Elementos Neutros y Absorbentes

### Neutro (elemento que no modifica)

| Operación | Equivalencia | Explicación |
|-----------|-------------|-------------|
| Unión con vacío | A ∪ ∅ = A | El vacío no aporta nada a la unión |
| Intersección con universal | A ∩ U = A | El universal no quita nada en la intersección |

### Absorbente (elemento que anula)

| Operación | Equivalencia | Explicación |
|-----------|-------------|-------------|
| Unión con universal | A ∪ U = U | TODO se absorbe en el universal |
| Intersección con vacío | A ∩ ∅ = ∅ | TODO se absorbe en el vacío |

---

## 4. Complemento

| Propiedad | Fórmula | Explicación |
|-----------|---------|-------------|
| Doble complemento | (A')' = A | El complemento del complemento vuelve al original |
| Complemento del vacío | ∅' = U | Fuera del vacío está todo |
| Complemento del universal | U' = ∅ | Fuera del universal no hay nada |
| Complemento propio (unión) | A ∪ A' = U | Un conjunto y su complemento cubren todo |
| Complemento propio (intersección) | A ∩ A' = ∅ | Un conjunto y su complemento no comparten nada |

---

## 5. Leyes de De Morgan ⚠️ CRÍTICO

Estas son las leyes **más importantes** para simplificar expresiones de conjuntos.

| Expresión | Equivalencia | Explicación |
|-----------|-------------|-------------|
| 1ra Ley | (A ∪ B)' = A' ∩ B' | El complemento de una unión es la intersección de los complementos |
| 2da Ley | (A ∩ B)' = A' ∪ B' | El complemento de una intersección es la unión de los complementos |

**Truco mnemotécnico:** Al pasar el complemento hacia adentro, se **invierte** ∪ ↔ ∩

**Diagrama Venn: (A ∪ B)'**

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···       ···       ··· ░░░░│
         │░░░ ···   A   ···   B   ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░░ ···   ·······   ··· ░░░░░░│
         │░░░░ ··· ······· ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = (A ∪ B)' (todo fuera de A y B)

**Diagrama Venn: (A ∩ B)'**

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░░ ···░░A░░ ··· ░░B░░░ ··· ░░░░│
         │░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░░ ··· ░░░░░░░░   ··· ░░░░░░│
         │░░░░ ··· ░░░░░░░░ ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = (A ∩ B)' (todo excepto la zona de superposición)
```

---

## 6. Diferencia y Complemento

| Expresión | Equivalencia | Notas |
|-----------|-------------|-------|
| Diferencia como intersección | A − B = A ∩ B' | **Forma más útil para simplificar** |
| Diferencia vía De Morgan | A − B = (A' ∪ B)' | Alternativa |
| Diferencia simétrica | A ∆ B = (A − B) ∪ (B − A) | Elementos en uno u otro, no en ambos |
| Diferencia simétrica (alt) | A ∆ B = (A ∪ B) − (A ∩ B) | Alternativa |

---

## 7. Leyes de Simplificación (Tabla Rápida — Como Álgebra Booleana)

| Expresión original | Se simplifica a | Propiedad aplicada |
|--------------------|-----------------|-------------------|
| A ∪ A | A | Idempotencia |
| A ∩ A | A | Idempotencia |
| A ∪ ∅ | A | Neutro |
| A ∩ ∅ | ∅ | Absorbente |
| A ∪ U | U | Absorbente |
| A ∩ U | A | Neutro |
| A ∪ A' | U | Complemento propio |
| A ∩ A' | ∅ | Complemento propio |
| A ∪ (A ∩ B) | A | Absorción |
| A ∩ (A ∪ B) | A | Absorción |
| (A')' | A | Doble complemento |
| A ∪ (A' ∩ B) | A ∪ B | Reducción (caso especial) |
| A ∩ (A' ∪ B) | A ∩ B | Reducción (caso especial) |

---

## 8. Equivalencias Útiles para Simplificar

| Cuando veas... | Reemplazá por... | ¿Por qué? |
|----------------|-----------------|-----------|
| A − B | A ∩ B' | Definición diferencia |
| (A ∪ B)' | A' ∩ B' | De Morgan |
| (A ∩ B)' | A' ∪ B' | De Morgan |
| A ⊆ B (verificación) | A ∩ B = A | Definición de subconjunto |
| A ⊆ B (verificación) | A ∪ B = B | Definición de subconjunto |

---

## 9. Relaciones entre ⊆ y Operaciones

Todas las siguientes afirmaciones son **equivalentes**:

```
A ⊆ B
  ↔  A ∩ B = A      (intersección con B no cambia A)
  ↔  A ∪ B = B      (unión con B da B)
  ↔  A − B = ∅      (no hay elementos de A fuera de B)
  ↔  B' ⊆ A'        (contrarecíproco: complementos invertidos)
```

---

## 10. Diagramas de Venn Representativos

### Diagrama 1: A ∪ B (Unión)

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A ∪ B
```

### Diagrama 2: A ∩ B (Intersección)

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A ∩ B
```

### Diagrama 3: A − B (Diferencia)

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A − B
```

### Diagrama 4: A' (Complemento)

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···       ···       ··· ░░░░│
         │░░░ ···   A   ···   B   ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░░ ···   ·······   ··· ░░░░░░│
         │░░░░ ··· ······· ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = A'
```

### Diagrama 5: (A ∪ B)' (De Morgan — Unión Complementada)

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···       ···       ··· ░░░░│
         │░░░ ···   A   ···   B   ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░ ···       ···       ··· ░░░░│
         │░░░ ···   ·······   ··· ░░░░░░│
         │░░░░ ··· ······· ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = (A ∪ B)' — = A' ∩ B'
```

### Diagrama 6: (A ∩ B)' (De Morgan — Intersección Complementada)

```
         ┌─────────────────────────────────┐
         │░░░░░░░░░░ U (Universo) ░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         │░░░░░░ ··················· ░░░░░░│
         │░░░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░░ ···░░A░░ ··· ░░B░░░ ··· ░░░░│
         │░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░ ···░░░░░ ··· ░░░░░░░ ··· ░░░░│
         │░░░ ··· ░░░░░░░░   ··· ░░░░░░│
         │░░░░ ··· ░░░░░░░░ ··· ░░░░░░░│
         │░░░░░░ ············· ░░░░░░░│
         │░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░│
         └─────────────────────────────────┘
         ░░░ = (A ∩ B)' — = A' ∪ B'
```

### Diagrama 7: A ∆ B (Diferencia Simétrica)

```
         ┌─────────────────────────────────┐
         │         U (Universo)            │
         │                                 │
         │                                 │
         │       ···················       │
         │     ···       ···       ···     │
         │    ···   A   ···   B   ···     │
         │   ···       ···       ···     │
         │   ···       ···       ···     │
         │    ···   ·······   ···         │
         │     ··· ······· ···           │
         │       ·············           │
         │                                 │
         └─────────────────────────────────┘
         ░░░ = A ∆ B = (A − B) ∪ (B − A) = (A ∪ B) − (A ∩ B)
         La zona de intersección NO está incluida.
```

---

## 11. Trucos de Simplificación Paso a Paso

Para simplificar una expresión de conjuntos, seguir este orden:

### Paso 1: Eliminar diferencias
Reemplazar toda diferencia por intersección con complemento:

```
A − B  →  A ∩ B'
```

### Paso 2: Aplicar De Morgan
Si hay complementos de expresiones compuestas, aplicar De Morgan:

```
(A ∪ B)'  →  A' ∩ B'
(A ∩ B)'  →  A' ∪ B'
```

### Paso 3: Buscar absorción
Identificar patrones de absorción:

```
A ∪ (A ∩ B)  →  A
A ∩ (A ∪ B)  →  A
```

### Paso 4: Buscar complementos
Identificar A ∩ A' → ∅  y  A ∪ A' → U

### Paso 5: Idempotencia
```
A ∪ A  →  A
A ∩ A  →  A
```

### Paso 6: Repetir hasta forma irreducible

### Ejemplo paso a paso

**Simplificar:** (A ∩ B) ∪ (A ∩ B')

| Paso | Expresión | Regla aplicada |
|------|-----------|----------------|
| 0 | (A ∩ B) ∪ (A ∩ B') | Original |
| 1 | A ∩ (B ∪ B') | Distributiva (al revés) |
| 2 | A ∩ U | Complemento propio (B ∪ B' = U) |
| 3 | **A** | Neutro (A ∩ U = A) |

Resultado: (A ∩ B) ∪ (A ∩ B') = **A** ✓

---

## Bonus: Tabla de Equivalencias Lógicas vs. Conjuntos

| Lógica proposicional | Teoría de conjuntos |
|----------------------|---------------------|
| ∨ (or) | ∪ (unión) |
| ∧ (and) | ∩ (intersección) |
| ¬ (not) | ' (complemento) |
| T (verdadero) | U (universo) |
| F (falso) | ∅ (vacío) |
| → (implica) | ⊆ (subconjunto) |
| ↔ (equivalente) | = (igualdad) |

---

*Documento de referencia — Matemática para Informática I*
