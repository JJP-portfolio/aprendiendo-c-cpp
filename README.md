# Aprendiendo C y C++

## 📖 Descripción
Repositorio de aprendizaje y práctica de **C y C++** con énfasis en:
- Fundamentos del lenguaje (punteros, memoria, clases)
- Programación Paralela con MPI (MPP)
- Resolución de ejercicios y problemas
- Puente matemática ↔ código (lógica, tablas de verdad, divisibilidad, cuantificadores)

## 📁 Estructura del Proyecto

```
├── c/                         # Ejercicios en C (ejercicio1..11, rondas de repaso)
│   └── ejercicio1.c ...
├── C++/
│   ├── cpp_basico.md          # Guía completa de C++
│   └── ...
├── MPP/
│   ├── clase_00_teorico.md    # Introducción a MPI
│   ├── clase_01_ejemplo.cpp   # Ejemplo base MPI Send/Recv
│   ├── clase_01_resuelto.cpp  # Ejercicio resuelto MPI
│   ├── clase_02_ejemplo.cpp   # Broadcast, Scatter, Gather
│   ├── ejecutar.sh            # Script de compilación
│   └── ...
├── Referencia/
│   ├── MPI_I/
│   │   ├── resumen_reglas_conjuntos.md
│   │   ├── resumen_probabilidad.md
│   │   └── ...
│   └── ...
├── AGENTS.md                  # Guías para OpenCode
└── .gitignore
```

## 🚀 Inicio Rápido

### Compilar y ejecutar un programa MPI
```bash
# Compilar con mpic++
mpic++ -std=c++17 -o programa programa.cpp

# Ejecutar con 4 procesos
mpirun -np 4 ./programa
```

### Usar el script de ejecución
```bash
./ejecutar.sh 4  # Compila y ejecuta con 4 procesos
```

## 📚 Recursos

- **C++ Básico**: Ver `C++/cpp_basico.md`
- **MPI Introducción**: Ver `MPP/clase_00_teorico.md`
- **MPI Ejemplos**: Ver archivos `clase_*_ejemplo.cpp` en `MPP/`

## 🔧 Herramientas

- **Compilador**: g++ (C++17 o superior)
- **MPI**: OpenMPI o MPICH
- **Editor**: VS Code con extensiones C++ y MPI
