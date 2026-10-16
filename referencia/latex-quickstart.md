# LaTeX para Apuntes Universitarios — Quickstart

> *"La mejor manera de escribir matemáticas hermosas."* — Donald Knuth

---

## ¿Qué es LaTeX?

LaTeX **no es** un procesador WYSIWYG tipo Word o LibreOffice. No ves el resultado mientras escribís.

En LaTeX **escribís código** con el contenido y la estructura, y después **compilás** a PDF. La ventaja: el resultado es impecable, las ecuaciones se ven profesionales, y te separás del formato para concentrarte en el contenido.

```
Escribís:  \int_{a}^{b} x^2 \, dx
Compilás:  ∫_a^b x² dx   (hermoso)
```

---

## Instalación (Arch Linux)

```bash
sudo pacman -S texlive-latex texlive-latexextra texlive-latexrecommended \
               texlive-pictures texlive-mathscience texlive-fontsextra \
               texlive-langspanish texlive-xetex texlive-binextra
```

Esto instala ~400 MB. Si querés TODO (pesado, ~2 GB):

```bash
sudo pacman -S texlive-full
```

---

## Tu primer documento

Creá un archivo `ejemplo.tex` con esto:

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[utf8]{inputenc}
\usepackage[spanish]{babel}

\title{Mi primer documento en \LaTeX}
\author{Tu Nombre}
\date{\today}

\begin{document}

\maketitle

\section{Introducción}

Este es mi primer documento. LaTeX es \textbf{genial}.

\section{Matemáticas}

Ecuación inline: $E = mc^2$.

Ecuación en su propia línea (display):

\[
\int_{a}^{b} x^2 \, dx = \frac{b^3 - a^3}{3}
\]

Y una ecuación numerada:

\begin{equation}
\lim_{n \to \infty} \frac{1}{n} = 0
\end{equation}

\end{document}
```

Compilalo:

```bash
pdflatex ejemplo.tex
```

Te genera `ejemplo.pdf`. Abrilo con cualquier visor.

---

## Estructura de un documento

```latex
\documentclass[opciones]{clase}   % article, report, book, beamer...
% ── PREÁMBULO ──────────────────────
\usepackage[utf8]{inputenc}        % Acentos directos
\usepackage[spanish]{babel}        % Títulos en español
\usepackage{amsmath, amssymb}      % Matemáticas avanzadas
\usepackage{graphicx}              % Imágenes
\usepackage{listings}              % Código fuente

\title{Título}
\author{Autor}
\date{\today}
% ── CUERPO ─────────────────────────
\begin{document}

\maketitle                         % Portada
\tableofcontents                   % Índice (compilar 2 veces)

\section{Sección}
\subsection{Subsección}

Contenido...

\end{document}
```

### Secciones disponibles

| Comando | Nivel |
|---------|-------|
| `\part{...}` | -1 |
| `\chapter{...}` | 0 (solo en `report`/`book`) |
| `\section{...}` | 1 |
| `\subsection{...}` | 2 |
| `\subsubsection{...}` | 3 |
| `\paragraph{...}` | 4 |
| `\subparagraph{...}` | 5 |

---

## Matemáticas

### Modo inline vs display

| Modo | Código | Resultado |
|------|--------|-----------|
| Inline (dentro del texto) | `$a^2 + b^2 = c^2$` | a² + b² = c² |
| Display (línea separada) | `\[ a^2 + b^2 = c^2 \]` | (centrado, sin número) |
| Display numerado | `\begin{equation}...\end{equation}` | (centrado, con número) |

### Símbolos para MPI I

#### Lógica proposicional

| Querés | Código | Resultado |
|--------|--------|-----------|
| Negación (no) | `\neg p` | ¬p |
| Conjunción (y) | `p \land q` | p ∧ q |
| Disyunción (o) | `p \lor q` | p ∨ q |
| Implicación | `p \to q` o `p \implies q` | p → q / p ⟹ q |
| Doble implicación | `p \leftrightarrow q` o `p \iff q` | p ↔ q / p ⟺ q |
| XOR (o exclusivo) | `p \oplus q` | p ⊕ q |
| Tautología | `\top` | ⊤ |
| Contradicción | `\bot` | ⊥ |

#### Conjuntos

| Querés | Código | Resultado |
|--------|--------|-----------|
| Conjunto vacío | `\emptyset` o `\varnothing` | ∅ |
| Unión | `A \cup B` | A ∪ B |
| Intersección | `A \cap B` | A ∩ B |
| Subconjunto o igual | `A \subseteq B` | A ⊆ B |
| Subconjunto propio | `A \subset B` | A ⊂ B |
| Pertenece | `x \in A` | x ∈ A |
| No pertenece | `x \notin A` | x ∉ A |
| Diferencia | `A \setminus B` | A ∖ B |
| Diferencia simétrica | `A \triangle B` | A ∆ B |
| Producto cartesiano | `A \times B` | A × B |
| Conjunto de partes | `\mathcal{P}(A)` | 𝒫(A) |
| Barra de complemento | `\overline{A}` | A̅ |

#### Cuantificadores

| Querés | Código | Resultado |
|--------|--------|-----------|
| Para todo | `\forall x` | ∀x |
| Existe | `\exists x` | ∃x |
| Existe único | `\exists! x` | ∃!x |
| No existe | `\nexists x` | ∄x |
| Tal que | `\mid` o `\text{ tal que }` | ∣ |

#### Divisibilidad

| Querés | Código | Resultado |
|--------|--------|-----------|
| Divide | `a \mid b` | a ∣ b |
| No divide | `a \nmid b` | a ∤ b |
| Máximo común divisor | `\gcd(a,b)` o `\mcd(a,b)` | mcd(a,b) |
| Mínimo común múltiplo | `\operatorname{mcm}(a,b)` | mcm(a,b) |
| Congruencia | `a \equiv b \pmod{n}` | a ≡ b (mod n) |

#### Números

| Querés | Código | Resultado |
|--------|--------|-----------|
| Naturales | `\mathbb{N}` | ℕ |
| Enteros | `\mathbb{Z}` | ℤ |
| Racionales | `\mathbb{Q}` | ℚ |
| Reales | `\mathbb{R}` | ℝ |
| Complejos | `\mathbb{C}` | ℂ |

**Requiere** `\usepackage{amssymb}` en el preámbulo.

#### Letras griegas comunes

| Querés | Código | Resultado |
|--------|--------|-----------|
| Alfa | `\alpha` | α |
| Beta | `\beta` | β |
| Gamma | `\gamma` / `\Gamma` | γ / Γ |
| Delta | `\delta` / `\Delta` | δ / Δ |
| Épsilon | `\varepsilon` | ε |
| Theta | `\theta` / `\Theta` | θ / Θ |
| Lambda | `\lambda` / `\Lambda` | λ / Λ |
| Mu | `\mu` | μ |
| Pi | `\pi` / `\Pi` | π / Π |
| Sigma | `\sigma` / `\Sigma` | σ / Σ |
| Phi | `\phi` / `\varphi` / `\Phi` | ϕ / φ / Φ |
| Omega | `\omega` / `\Omega` | ω / Ω |

> 💡 **Regla mnemotécnica**: si la letra griega se escribe distinto a la latina, la mayúscula se hace con la primera letra en mayúscula: `\Gamma`, `\Delta`, `\Theta`, `\Lambda`, `\Xi`, `\Pi`, `\Sigma`, `\Phi`, `\Psi`, `\Omega`.

### Ecuaciones numeradas

```latex
\begin{equation}
a^2 + b^2 = c^2
\label{eq:pitagoras}
\end{equation}

Como vimos en \eqref{eq:pitagoras}...
```

### Matrices

```latex
\[
\begin{pmatrix}
1 & 2 & 3 \\
4 & 5 & 6 \\
7 & 8 & 9
\end{pmatrix}
\qquad
\begin{bmatrix}
0 & 1 \\
1 & 0
\end{bmatrix}
\qquad
\begin{vmatrix}
a & b \\
c & d
\end{vmatrix}
= ad - bc
```

| Entorno | Delimitadores |
|---------|--------------|
| `pmatrix` | ( ) |
| `bmatrix` | [ ] |
| `Bmatrix` | { } |
| `vmatrix` | \| \| |
| `Vmatrix` | ‖ ‖ |
| `matrix` | ninguno |

### Casos (funciones partidas)

```latex
\[
|x| =
\begin{cases}
x  & \text{si } x \geq 0 \\
-x & \text{si } x < 0
\end{cases}
\]
```

---

## Tablas de verdad (esencial para MPI I)

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[utf8]{inputenc}
\usepackage[spanish]{babel}
\usepackage{amsmath, amssymb}
\usepackage{array}   % Para mejor control de columnas

\begin{document}

\section{Tabla de verdad: $p \land (q \lor r)$}

\[
\begin{array}{c|c|c||c}
p & q & r & p \land (q \lor r) \\ \hline
V & V & V & V \\
V & V & F & V \\
V & F & V & V \\
V & F & F & F \\
F & V & V & F \\
F & V & F & F \\
F & F & V & F \\
F & F & F & F
\end{array}
\]

\end{document}
```

Los separadores `||` o `|` dibujan las líneas verticales. `\hline` dibuja la horizontal. Podés usar `V`/`F` o `1`/`0`.

---

## Teoremas y definiciones

En el preámbulo se declaran los entornos:

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[utf8]{inputenc}
\usepackage[spanish]{babel}
\usepackage{amsthm}   % Para entornos teorema

% ── Declaración de entornos ──
\newtheorem{teorema}{Teorema}[section]
\newtheorem{definicion}{Definición}[section]
\newtheorem{lema}{Lema}[section]
\newtheorem{corolario}{Corolario}[section]

% Entorno sin numerar
\newtheorem*{ejemplo}{Ejemplo}

\begin{document}

\section{Lógica}

\begin{definicion}
Una \textbf{tautología} es una proposición compuesta
que es verdadera para todas las combinaciones de
valores de verdad de sus proposiciones atómicas.
\end{definicion}

\begin{ejemplo}
$p \lor \neg p$ es una tautología.
\end{ejemplo}

\begin{teorema}[Leyes de De Morgan]
\[
\neg(p \land q) \equiv \neg p \lor \neg q
\]
\[
\neg(p \lor q) \equiv \neg p \land \neg q
\]
\end{teorema}

\begin{corolario}
La negación de una conjunción es la disyunción de
las negaciones.
\end{corolario}

\end{document}
```

El `[section]` en `\newtheorem` hace que se numeren dentro de la sección (ej: *Definición 1.1*, *Teorema 1.2*).

---

## Diagramas con TikZ

Requiere `\usepackage{tikz}`.

### Diagrama de Venn (A ∩ B ≠ ∅)

```latex
\begin{tikzpicture}
  \draw[thick] (0,0) circle (1.5) node[left] {$A$};
  \draw[thick] (1.5,0) circle (1.5) node[right] {$B$};
  \node at (0.75,0) {$A \cap B$};
\end{tikzpicture}
```

### Compuerta lógica AND

```latex
\begin{tikzpicture}
  \draw (0,0) -- (0.5,0);
  \draw (0,1) -- (0.5,1);
  \draw (0.5,0) -- (1.5,0.5) -- (0.5,1) -- cycle;
  \draw (1.5,0.5) -- (2,0.5);
  \node at (0,1.2) {$x$};
  \node at (0,-0.2) {$y$};
  \node at (2.2,0.5) {$x \land y$};
\end{tikzpicture}
```

### Consejo

Para diagramas complejos, usá [mathcha.io](https://www.mathcha.io/) — editor visual que exporta TikZ. No hace ser expertos.

---

## Código C++ en LaTeX

```latex
\usepackage{listings}
\usepackage{xcolor}

% Configuración (poner en el preámbulo)
\lstset{
  language=C++,
  basicstyle=\ttfamily\small,
  keywordstyle=\color{blue},
  commentstyle=\color{green!60!black},
  stringstyle=\color{red},
  numbers=left,
  numberstyle=\tiny,
  frame=single,
  breaklines=true,
  tabsize=4
}
```

En el cuerpo:

```latex
\begin{lstlisting}[caption=Hola Mundo]
#include <iostream>

int main() {
    std::cout << "Hola, LaTeX!" << std::endl;
    return 0;
}
\end{lstlisting}
```

Para código **inline** (dentro del párrafo): `\lstinline|int x = 42;|`.

---

## Compilar

```bash
# Manual (1 pasada)
pdflatex archivo.tex

# Con referencias cruzadas (2 pasadas)
pdflatex archivo.tex
pdflatex archivo.tex

# Para bibliografía
pdflatex archivo.tex
bibtex   archivo.aux
pdflatex archivo.tex
pdflatex archivo.tex

# Automático (recomendado)
latexmk -pdf archivo.tex
```

`latexmk` detecta cuántas pasadas necesita y las corre automáticamente. Siempre preferí `latexmk`.

### Limpiar archivos auxiliares

```bash
latexmk -c          # Borra .aux .log .nav .out .snm .toc .bbl .blg
latexmk -C          # Lo mismo + .pdf
```

---

## Workflow recomendado

1. **Editor**: [VS Code](https://code.visualstudio.com/) + extensión **LaTeX Workshop** (instalala desde el marketplace)
2. **Compilar**: `Ctrl+Alt+B` (compila con latexmk automáticamente)
3. **Ver PDF**: `Ctrl+Alt+V` (abre el PDF en una vista al lado del código)
4. **Auto-compilar**: La extensión compila cada vez que guardás (`Ctrl+S`)
5. **Alternativa online**: [Overleaf](https://www.overleaf.com/) — funciona en el navegador, no requiere instalar nada, ideal para practicar

---

## Errores comunes

| Error | Causa probable | Solución |
|-------|---------------|----------|
| `Undefined control sequence` | Escribiste mal un comando | Revisá el spelling: `\lambd` → `\lambda` |
| `Missing $ inserted` | Olvidaste salir del modo matemático | Cerrá con `$` o usá `\(...\)` |
| `File not found` | Falta un paquete | `pacman -S texlive-...` |
| `Citation undefined` | Referencia cruzada sin compilar | Compilá **dos** veces |
| `! LaTeX Error: ... undefined` | Paquete no cargado | Agregá `\usepackage{...}` |
| `Overfull \hbox` | Texto muy largo para la línea | Usá `\sloppy` o partí manualmente |
| `! Argument of ... has an extra }` | Llaves mal anidadas | Revisá que cada `{` tenga su `}` |

---

## Minicheatsheet modo avión (emergencia)

Cuando no tenés internet, recordá esto:

```
Entorno matemático:       $...$        (inline)
                          \[...\]      (display, sin número)
                          \begin{equation}...\end{equation}  (numerada)

Superíndice / subíndice:  x^{2}  x_{i}
Fracción:                 \frac{a}{b}
Raíz:                     \sqrt{x}  \sqrt[n]{x}
Sumatoria:                \sum_{i=1}^{n}
Integral:                 \int_{a}^{b}
Límite:                   \lim_{x \to 0}
Letras griegas:           \alpha  \beta  \gamma  \delta  \theta  \pi  \omega
Negrita matemática:       \mathbf{x}  \mathbb{R}
Texto en matemáticas:     \text{esto es texto}
Centrar:                  \begin{center}...\end{center}
Lista:                    \begin{itemize}  \item ...  \end{itemize}
Nueva línea (párrafo):    línea vacía
Salto de línea (sin párrafo):  \\  o  \newline
Comentario:               % esto es un comentario
```

---

## Para aprender más

- [Overleaf Learn](https://www.overleaf.com/learn) — documentación oficial, tutorial interactivo
- [Wikibooks LaTeX](https://en.wikibooks.org/wiki/LaTeX) — completo y gratuito
- [Detexify](https://detexify.kirelabs.org/) — dibujás un símbolo y te dice el código LaTeX
- [Mathcha](https://www.mathcha.io/) — editor visual de diagramas → exporta TikZ
- `texdoc nombrepaquete` — documentación offline: `texdoc amsmath`, `texdoc tikz`

---

*Última actualización: julio 2026*
