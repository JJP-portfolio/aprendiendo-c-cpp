# AGENTS.md - Reglas y Guías para OpenCode

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
- Cada test debe probar UN solo comportamiento (Single Assertion Principle)

## 🧠 Filosofía TDD

TDD no es solo testing, es **diseño**:
- El test es el **cliente** de tu código
- Si es difícil de testear, es difícil de usar → el diseño está mal
- Los tests te obligan a pensar en interfaz antes de implementación

## 📋 Proceso de Trabajo

1. **Antes de tocar código:** entender qué hace y por qué existe
2. **Seguir la convención existente** del proyecto
3. **No duplicar lógica** → extraer a funciones/métodos
4. **Verificar compilación** después de cada cambio significativo
5. **No asumir** que algo funciona sin probarlo

## 📚 Recursos del Proyecto

### Documentación
- `C++/cpp_basico.md` - Guía completa de C++ (compilación, tipos, punteros, etc.)
- `MPP/clase_00_teorico.md` - Introducción a MPI

### Scripts
- `MPP/ejecutar.sh` - Script para compilar y ejecutar programas MPI

## 🚫 Lo que NO hacer

- No crear archivos innecesarios
- No duplicar código existente
- No cambiar configuraciones de compilación sin preguntar
- No agregar dependencias sin verificar que son necesarias
- No saltarse pasos del TDD
