# MPP - MPI Parallel Programming

## 📖 Descripción
Directorio de ejercicios y ejemplos de **Programación Paralela con MPI** (Message Passing Interface).

## 🚀 Inicio Rápido

### Compilar un programa
```bash
mpic++ -std=c++17 -o programa programa.cpp
```

### Ejecutar
```bash
mpirun -np 4 ./programa
```

### Usar el script de ejecución
```bash
./ejecutar.sh 4  # Compila y ejecuta con 4 procesos
```

## 📚 Contenido

### Teoría
- `clase_00_teorico.md` - Introducción a MPI (conceptos básicos, entorno de ejecución)

### Ejemplos
- `clase_01_ejemplo.cpp` - MPI_Send y MPI_Recv (comunicación punto a punto)
- `clase_02_ejemplo.cpp` - Broadcast, Scatter y Gather (comunicación colectiva)
- `clase_03_ejemplo.cpp` - Reducciones (MPI_Reduce, MPI_Allreduce)
- `clase_04_ejemplo.cpp` - Tipos de datos y operaciones
- `clase_05_ejemplo.cpp` - Comunicadores y topologías
- `clase_06_ejemplo.cpp` - Non-blocking communication
- `clase_07_ejemplo.cpp` - Arreglos distribuidos (1D y 2D)
- `clase_08_ejemplo.cpp` - Sincronización

### Ejercicios Resueltos
- `clase_01_resuelto.cpp` - Ejercicio de Send/Recv

## 🛠️ Herramientas

### Script de ejecución
```bash
./ejecutar.sh <numero_de_procesos> [archivo_a_ejecutar]
```

### Comandos útiles
```bash
# Compilar
mpic++ -std=c++17 -o programa programa.cpp

# Ejecutar con 4 procesos
mpirun -np 4 ./programa

# Ejecutar en máquina local
mpirun --host localhost -np 4 ./programa

# Ver procesos MPI
mpd &
mpdtrace
```

## 📖 Referencia

- **cpp_basico.md**: Guía completa de C++ (en `../C++/cpp_basico.md`)
- **Manual MPI**: https://www.mpich.org/documentation/
