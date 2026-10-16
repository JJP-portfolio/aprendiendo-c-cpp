# AGENTS.md - MPI Parallel Programming

## 🧪 TDD Obligatorio (Especialmente en Arreglos)

### Flujo estricto:
1. **ESCRIBIR EL TEST PRIMERO** - Red
2. **Ejecutar el test** - Verificar que FALLA
3. **Arreglar el código** - Green
4. **Ejecutar el test** - Verificar que PASA
5. **Refactorizar** - Blue

### Reglas:
- **NUNCA** arreglar código sin tener un test que demuestre el bug
- **NUNCA** escribir código sin tener al menos 1 test que falle
- Si te piden "arreglar X", primero escribí un test que falle por X

## 📋 Convenciones de Código

### Compilación MPI
- Usar `mpic++` con flag `-std=c++17` (o superior según necesidad)
- Ejecutar con `./ejecutar.sh <numero_de_ejecutables>`

### Archivos de ejemplo
- Cada archivo debe ser **autocontenido** (no depender de otros archivos)
- Usar `// Comentarios` para explicar conceptos
- Seguir la estructura del archivo `clase_01_ejemplo.cpp`

### Estructura típica de un programa MPI:
```cpp
#include <iostream>
#include <mpi.h>

int main(int argc, char **argv) {
    MPI_Init(&argc, &argv);
    
    int rank, size;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    // Código aquí
    
    MPI_Finalize();
    return 0;
}
```

## 🚫 Lo que NO hacer

- No crear archivos `.out` (ya están en `.gitignore`)
- No usar `MPI_Send`/`MPI_Recv` sin `MPI_Barrier` cuando hay dependencias
- No olvidar `MPI_Finalize()` al final
- No usar números mágicos → definir como constantes o usar argumentos

## 📚 Recursos

- `cpp_basico.md` en `../C++/cpp_basico.md` - Guía completa de C++
- `clase_00_teorico.md` - Introducción teórica a MPI
- `clase_01_ejemplo.cpp` - Ejemplo base de MPI con Send/Recv
