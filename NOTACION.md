# Cheatsheet: Notación MPI + Pseudocódigo ILyPC

> Referencia rápida para escribir los `.txt` de los ejercicios integrales
> (matemática con notación simbólica y pseudocódigo estilo Pilas Bloques textual).
> Los símbolos los componés en tu editor (LazyVim); esta es la lista de lo que necesitás.

---

## 1. Símbolos de Matemática para Informática I (MPI I)

| Símbolo | Nombre | Uso típico |
|---------|--------|------------|
| ¬ | negación | ¬p, ¬P(x) |
| ∧ | conjunción (Y) | p ∧ q |
| ∨ | disyunción (O) | p ∨ q |
| ⊕ | disyunción excluyente (XOR) | p ⊕ q |
| → | implicación / condicional | p → q |
| ↔ | bicondicional / doble implicación | p ↔ q |
| ∀ | cuantificador universal | ∀x ∈ A, P(x) |
| ∃ | cuantificador existencial | ∃x ∈ A, P(x) |
| ∈ | pertenencia | x ∈ A |
| ⊆ | inclusión (o igual) | A ⊆ B |
| ⊂ | inclusión propia | A ⊂ B |
| ∪ | unión | A ∪ B |
| ∩ | intersección | A ∩ B |
| ∅ | conjunto vacío | ∅ |
| U | conjunto universal | U |
| ≤ | menor o igual | a ≤ b |
| ≥ | mayor o igual | a ≥ b |
| ≠ | distinto | a ≠ b |
| ≡ | congruente / equivalente | a ≡ b (mod n) |
| · | multiplicación (punto medio) | a · b |
| mcd | máximo común divisor | mcd(a, b) |
| \| | divide (en divisibilidad) | b \| a |

---

## 2. Cómo escribirlos en LazyVim (sugerencias genéricas)

Tres mecanismos típicos, en orden de facilidad de configuración:

### 2.1. Digraphs nativos de Vim (ya viene con LazyVim)

Vim tiene una tabla de digraphs built-in. La forma más rápida:

- En modo insert: presioná `Ctrl+K` seguido de dos caracteres. Por ejemplo:
  - `Ctrl+K -` → `¬` (negación lógica, "not sign")
  - `Ctrl+K a*` → `α`
  - `Ctrl+K A!` → `∀` (for all)
  - `Ctrl+K TE` → `∃` (there exists)
  - `Ctrl+K (C` → `⊆`
  - `Ctrl+K (U` → `∪`
  - `Ctrl+K (I` → `∩`
  - `Ctrl+K 0O` → `∅`
  - `Ctrl+K ->` → `→`
  - `Ctrl+K <> ` → `↔`
  - `Ctrl+K +. ` → `±`
- Para ver la lista completa: `:h digraph-table` o `:digraphs` (los que ves ahí son los disponibles).

> Pro: zero-config. Contra: hay que memorizar el atajo o tener la tabla a mano.

### 2.2. Abreviaciones de Vim (`:iabbrev`)

Las definís una vez y se expanden al escribir:

```vim
" En ~/.config/nvim/init.lua o en un archivo de config:
vim.cmd("iabbrev <silent> not  ¬")
vim.cmd("iabbrev <silent> and  ∧")
vim.cmd("iabbrev <silent> or   ∨")
vim.cmd("iabbrev <silent> xor  ⊕")
vim.cmd("iabbrev <silent> imp  →")
vim.cmd("iabbrev <silent> iff  ↔")
vim.cmd("iabbrev <silent> forall  ∀")
vim.cmd("iabbrev <silent> exists  ∃")
vim.cmd("iabbrev <silent> in   ∈")
vim.cmd("iabbrev <silent> sub  ⊆")
vim.cmd("iabbrev <silent> cup  ∪")
vim.cmd("iabbrev <silent> cap  ∩")
vim.cmd("iabbrev <silent> empty ∅")
vim.cmd("iabbrev <silent> ne  ≠")
vim.cmd("iabbrev <silent> le  ≤")
vim.cmd("iabbrev <silent> ge  ≥")
```

> Pro: muy rápido al escribir, se ve la abreviación antes de expandir. Contra: hay que evitar que las abreviaciones choquen con palabras reales (por eso `not`, `and`, `or` no se usan en español).

### 2.3. Snippets (LuaSnip / vsnip / snippy)

Si ya usás un motor de snippets (LazyVim trae LuaSnip por defecto), podés definir triggers:

```lua
-- En ~/.config/nvim/lua/plugins/snippets/mpi.lua
return {
  s({ trig = "forall", dscr = "∀" }, { t("∀") }),
  s({ trig = "exists", dscr = "∃" }, { t("∃") }),
  s({ trig = "imp",    dscr = "→" }, { t("→") }),
  s({ trig = "iff",    dscr = "↔" }, { t("↔") }),
  s({ trig = "and",    dscr = "∧" }, { t("∧") }),
  s({ trig = "or",     dscr = "∨" }, { t("∨") }),
  s({ trig = "not",    dscr = "¬" }, { t("¬") }),
  s({ trig = "sub",    dscr = "⊆" }, { t("⊆") }),
  s({ trig = "cup",    dscr = "∪" }, { t("∪") }),
  s({ trig = "cap",    dscr = "∩" }, { t("∩") }),
  s({ trig = "empty",  dscr = "∅" }, { t("∅") }),
  s({ trig = "ne",     dscr = "≠" }, { t("≠") }),
}
```

> Pro: expansión visible, se puede combinar con placeholders. Contra: requiere recargar Lazy.

### 2.4. Copy-paste desde este archivo

Si ninguna te convence, siempre podés copiar el símbolo de esta tabla y pegarlo en el `.txt`. Funciona en cualquier editor y es cero-configuración.

---

## 3. Pseudocódigo estilo apuntes ILyPC (Alan Rodas Bonjour, UNAHUR)

Reglas oficiales extraídas del apunte de cátedra. **Este es el estilo que usás en `E<n>_pseudocodigo.txt`.**

### 3.1. Punto de entrada

Todo programa empieza con un punto de entrada que invoca un solo procedimiento (el "main"):

```
Al empezar a ejecutar
|<nombre_procedimiento_principal>
```

> El nombre del procedimiento principal debe ser el "objetivo general" del programa.

### 3.2. Definición de procedimientos

- Empiezan con **verbos en infinitivo** (Calcular, Determinar, Decir, Recolectar, etc.).
- Se definen con la palabra reservada `Definir <Nombre>`.
- Dentro del bloque, las **primitivas** (acciones que conoce el "autómata") se escriben **exactas** como las da el programa.
- La **invocación** a otro procedimiento se hace poniendo solo su nombre, sin `Definir`.
- Si un procedimiento solo invoca a otros, no tiene primitivas propias.

### 3.3. Indentación con pipes (jerarquía)

- Un nivel de anidación: `|acción`
- Dos niveles: `||acción`
- Tres niveles: `|||acción`
- Los pipes dibujan una "línea vertical" que muestra la dependencia jerárquica.
- **No uses espacios** para indentar en pseudocódigo ILyPC; usá pipes.

### 3.4. Estructura Repetir (determinada)

```
Repetir N veces
|<acción_1>
|<acción_2>
```

Donde `N` es un número natural positivo (cantidad de veces a repetir).

> Regla: **no anidar Repetir directamente.** Si necesitás un bucle dentro, extraé a un procedimiento aparte y llamalo.

### 3.5. Alternativa condicional

**Simple:**
```
Si ¿<sensor_booleano>? Entonces
|<acción_si_verdadero>
```

**Doble:**
```
Si ¿<sensor_booleano>? Entonces
|<acción_si_verdadero>
Sino
|<acción_si_falso>
```

> Regla: **no anidar Si dentro de Si.** Si necesitás otra condición adentro, extraé a un procedimiento aparte. Esto mejora la legibilidad.

### 3.6. Sensores booleanos

- Son **preguntas** que el autómata puede responder sobre el estado del "tablero" o de las variables.
- Se escriben entre signos `¿?`.
- La respuesta es siempre **Sí / No** (equivalente a Verdadero / Falso).
- Se escriben **tal cual** los provee el programa (no los inventes).

Ejemplos (variables como "sensores"):
- `¿numeroA es mayor que numeroB?`
- `¿resto es igual a 0?`
- `¿hay un elemento en la posicion actual?`

### 3.7. Primitivas típicas (las que se usan en los ejercicios)

- `Leer(variable)` — leer del teclado.
- `Mostrar("texto")` o `Mostrar(variable)` — imprimir.
- `Mover a la derecha`, `Mover abajo`, etc. — cuando se trabaja con un "autómata en tablero".

### 3.8. Ejemplo canónico: leer 2 números, mostrar el mayor

```
Al empezar a ejecutar
|Determinar el mayor de dos numeros ingresados

Definir Determinar el mayor de dos numeros ingresados
|Leer(numeroA)
|Leer(numeroB)
|Comparar y mostrar mayor

Definir Comparar y mostrar mayor
|Si ¿numeroA es mayor que numeroB? Entonces
||Mostrar(numeroA)
|Sino
||Mostrar(numeroB)
```

Notá:

- El procedimiento principal solo orquesta: lee, llama, lee, llama.
- `Comparar y mostrar mayor` está separado para no anidar la decisión dentro de la lectura.
- Los verbos están en infinitivo: `Determinar`, `Comparar`, `Mostrar`.
- Los pipes muestran la jerarquía sin ambigüedad.

### 3.9. Anti-patrones (qué NO hacer)

- ❌ `SI (a > b)` — usar `Si ¿a es mayor que b?` (estilo Pilas Bloques, no C++).
- ❌ Anidar un `Si` dentro de otro `Si` directamente.
- ❌ Anidar un `Repetir` dentro de otro `Repetir` directamente.
- ❌ Usar nombres sin verbo (`"MCD"`, `"Resultado"`) — usar `Calcular MCD`, `Mostrar resultado`.
- ❌ Indentar con espacios en vez de pipes.
- ❌ Escribir primitivas con otro nombre del que da el programa.
- ❌ Olvidarse del `Al empezar a ejecutar`.

---

## 4. Atajos rápidos

| Quiero escribir | Digraph (Ctrl+K ...) | Abreviación sugerida |
|-----------------|----------------------|----------------------|
| ¬ | `-` | `not` |
| ∧ | `an` | `and` |
| ∨ | `or` | `or` |
| → | `->` | `imp` |
| ↔ | `<>` | `iff` |
| ∀ | `A*` | `forall` |
| ∃ | `TE` | `exists` |
| ∈ | `(-` | `in` |
| ⊆ | `(C` | `sub` |
| ∪ | `(-` (con U mayúscula) | `cup` |
| ∩ | `(U` | `cap` |
| ∅ | `0O` | `empty` |
| ≠ | `=` (en algunos locales) | `ne` |
| ≤ | `=<` | `le` |
| ≥ | `>=` | `ge` |

> Los códigos de digraph son orientativos; si no funcionan, probá con `:digraphs` para ver los disponibles en tu configuración regional.
