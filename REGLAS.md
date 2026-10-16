# Reglas del estudio integral: C++ + MPI I + Lógica Computacional

> Documento vivo. Se actualiza a medida que encontramos mejores formas de trabajar.
> Última actualización: 2026-06-02 — flujo integral activado (3 archivos por ejercicio).

---

## 1. Flujo de cada ejercicio (integral)

Cada ejercicio `E<n>` tiene **tres entregas**, todas en la carpeta del proyecto:

```
~/Documentos/Proyectos/AprendiendoCpp/
```

| Archivo | Qué contiene | Quién lo hace |
|---------|--------------|---------------|
| `E<n>_<nombre>.cpp` | Código C++ compilable | El estudiante, desde cero |
| `E<n>_matematica.txt` | Resolución a mano con notación simbólica MPI | El estudiante, desde cero |
| `E<n>_pseudocodigo.txt` | Resolución a mano con estilo ILyPC (Pilas Bloques textual) | El estudiante, desde cero |

### Reglas del flujo

1. El asistente entrega la consigna en el chat con la plantilla de la sección 2.
2. El estudiante crea los **tres archivos** desde cero en su editor.
3. El estudiante compila el `.cpp` (con `g++ -std=c++17 -Wall -Wextra`) y resuelve los `.txt` a mano.
4. Cuando los tres están listos, avisa con `listo` y **pega o indica la ruta** de los tres archivos.
5. El asistente revisa los tres y propone el siguiente ejercicio.

### Reglas duras

- **El asistente nunca crea `.cpp` ni `.txt` de ejercicios.** Solo entrega la consigna por chat.
- **El asistente nunca modifica `.cpp` ni `.txt` de ejercicios ya entregados.** Si hay que corregir, devuelve feedback en el chat.
- `listo` aplica a los **tres archivos**. No es "listo" si falta uno.
- Si el estudiante quiere saltar, repetir, cambiar de nivel, lo dice y se arregla.

### Carpetas y compilación

- Fuentes `.cpp` y `.txt`: `~/Documentos/Proyectos/AprendiendoCpp/`
- Binarios compilados: en `~/` con nombre **distinto** al del fuente. Ejemplo:
  ```sh
  g++ -std=c++17 -Wall -Wextra E8_euclides.cpp -o ~/e8_euclides
  ```
  Nunca uses `-o <mismo_nombre>.cpp` porque pisa el fuente.
- Cheatsheet de notación: `~/Documentos/Proyectos/AprendiendoCpp/NOTACION.md`.

---

## 2. Formato oficial de las consignas

```markdown
## EN — Título del ejercicio

**Nivel:** X — Nombre del nivel
**MPI:** conceptos matemáticos involucrados
**Lógica:** concepto de lógica computacional
**C++:** herramientas de C++ que se practican
**Historia:** personaje o contexto histórico relevante

### Consigna (C++)
[qué compilar en E<n>_<nombre>.cpp]

### Consigna (Matemática)
[qué demostrar/calcular a mano en E<n>_matematica.txt — incluir qué leyes o propiedades usar]

### Consigna (Pseudocódigo)
[qué algoritmo escribir a mano en E<n>_pseudocodigo.txt con las reglas ILyPC]

### Salida esperada
[solo aplica a C++]

```
$ ./programa
Entrada del usuario en negrita
Línea de salida 1
Línea de salida 2
```

> Una sola corrida típica. Entrada en **negrita**. Prompt `$`. Texto en español.
> Casos borde se mencionan aparte en texto: `(caso borde: si a=0, el programa muestra 'a debe ser positivo' y termina)`.

### Tips
- Mezclados por tema (C++ / matemática / pseudocódigo). Si alguno no aplica, se omite.

### Buenas prácticas
- Recordatorios cortos de estilo o convención, aplicables a las tres dimensiones.

### Reflexión
- Pregunta conceptual para responder después de terminar.
```

### Ejemplo canónico (E8)

```markdown
## E8 — Algoritmo de Euclides (MCD)

**Nivel:** 2 — Bucles + Cuantificadores
**MPI:** MCD, algoritmo de la división entera, propiedades de divisibilidad
**Lógica:** Repetición condicional (while)
**C++:** while, %, funciones, validación
**Historia:** Euclides (~300 a.C.) — el algoritmo más antiguo en uso

### Consigna (C++)
Escriba en `E8_euclides.cpp` un programa que lea dos enteros positivos `a` y `b`, y calcule su MCD usando el algoritmo de Euclides por divisiones sucesivas. El programa debe:

1. Validar que ambos sean positivos.
2. Aplicar el algoritmo hasta que el resto sea 0.
3. Mostrar el MCD resultante.
4. Decir si `a` y `b` son coprimos (`mcd = 1`).

### Consigna (Matemática)
Resuelva a mano en `E8_matematica.txt` los siguientes cálculos, mostrando **todas** las divisiones del algoritmo:

- `mcd(48, 18)`
- `mcd(17, 5)`
- `mcd(100, 75)`

Para cada uno, indique:

- La sucesión de divisiones con cociente y resto en cada paso.
- En qué paso se obtiene el resto 0.
- El MCD final.
- Si los números son coprimos o no, justificando con la definición.

### Consigna (Pseudocódigo)
Escriba en `E8_pseudocodigo.txt` el algoritmo de Euclides en **estilo ILyPC** (no en C++). Use:

- `Al empezar a ejecutar` + invocación a un procedimiento principal.
- `Definir Calcular MCD de dos numeros` con el bucle principal.
- `Definir Decir si son coprimos` separado (no anidar Si dentro de Si).
- `Mientras (b ≠ 0) Hacer` como estructura de repetición condicional.
- `Mostrar(...)` para imprimir y `Leer(...)` para leer.
- Sensores booleanos con `¿?` cuando corresponda.

Para notación de símbolos (¬, ∀, ⊆, etc.) y sintaxis ILyPC exacta, consultá `NOTACION.md`.

### Salida esperada
```
$ ./e8_euclides
Ingrese dos enteros positivos: 48 18
El MCD es: 6
48 y 18 NO son coprimos.
```

### Tips
- C++: `while (b != 0) { r = a % b; a = b; b = r; }`
- C++: validar con `if (a <= 0 || b <= 0)`.
- C++: una función por responsabilidad (`calcularMCD`, `sonCoprimos`).
- Matemática: use `D = d · q + r` como plantilla en cada paso, y `b | a ↔ a mod b = 0` para justificar.
- Pseudocódigo: no anide el Si; extraiga a un procedimiento aparte.
- Pseudocódigo: los verbos en infinitivo (`Calcular`, `Decir`).
- Pseudocódigo: pipes `|` para jerarquía, no espacios.

### Buenas prácticas
- Nombres descriptivos en los tres archivos.
- En matemática: justifique cada paso (no salte pasos aunque "se vean").
- En pseudocódigo: pipes `|` para jerarquía, no espacios.
- En C++: mensajes claros al usuario, no comentar el "qué".

### Reflexión
- ¿Por qué el algoritmo termina siempre?
- ¿Qué invariante cumple `mcd(a, b) = mcd(b, a mod b)` en cada iteración?
- En pseudocódigo, ¿por qué conviene separar "son coprimos" en un procedimiento aparte en vez de anidar?
```

---

## 3. Reglas anti-alucinación para salidas esperadas

- Solo herramientas que el estudiante ya usó en ejercicios previos: `cout`, `cin`, `endl`, `"\n"`, `setw` (únicamente en datos tabulares, como en E2).
- Prohibido en las salidas esperadas: `printf`/`scanf`, `getline`, `std::format`, `std::to_string`, manipuladores no vistos (`setprecision`, `fixed`, `hex`), códigos ANSI de color (`\033[...]`), separadores visuales exóticos.
- Una sola corrida de ejemplo por ejercicio. Los casos borde se mencionan en texto aparte: `"(caso borde: si a=0, el programa muestra 'a debe ser positivo' y termina)"`.
- La entrada del usuario se marca en **negrita** dentro del bloque de código.
- El bloque empieza con el prompt del shell (`$ ./programa`) para distinguir la salida del programa del shell.
- Salidas en español, salvo términos técnicos ya establecidos (MCD, Boole, Euclides, etc.).
- La `Salida esperada` aplica **solo al `.cpp`**. Los `.txt` son a mano y se revisan visualmente.

---

## 4. Recordatorios para el estudiante

- Compilar: `g++ -std=c++17 -Wall -Wextra archivo.cpp -o ~/binario` (binario con nombre **distinto** al fuente).
- Probar con casos borde: ceros, negativos, iguales, uno, primos.
- En matemática: revise las propiedades de divisibilidad / lógica antes de calcular.
- En pseudocódigo: nombres con verbos en infinitivo, sin anidar, pipes para jerarquía.
- Para notación de símbolos (¬, ∀, ⊆, etc.) y sintaxis ILyPC exacta, ver `NOTACION.md`.
- `listo` = "los tres archivos están hechos y probados".
- Si un ejercicio pide un `.txt` (matemática o pseudocódigo), es para hacer a mano, no para compilar.
