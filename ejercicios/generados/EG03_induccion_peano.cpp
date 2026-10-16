/*
 * EG03 — Inducción en la Lógica de Peano
 *
 * Materias:  🧮 MPI I (Lógica de Peano, P5: Inducción)
 *            💻 C++ (bucles for, invariantes)
 *
 * Axioma P5 de Peano (Inducción):
 *   [P(0)  ∧  ∀k( P(k) → P(S(k)) )]  →  ∀n P(n)
 *
 * En C++ esto se traduce a:
 *   int suma = 0;           // ← P(0): caso base
 *   for(int i=1; i<=n; i++) { // ← i recorre 0→1→2→...→n
 *       suma += i;           // ← P(k) → P(k+1): paso inductivo
 *   }
 *   // Al final: suma = n(n+1)/2  ← ∀n P(n)
 */

#include <iostream>
using namespace std;

// ──────────────────────────────────────────────
// EJERCICIO 1: Inducción directa en un bucle
// ──────────────────────────────────────────────
// Demostrar por inducción que la suma de 1 a n es n(n+1)/2
// Usar un bucle for que calcule la suma y verificar la fórmula
//
// La función debe recibir n y devolver n(n+1)/2 USANDO UN BUCLE
// (no usar la fórmula directa, sino el invariante de bucle)
//
// PISTA: El invariante es: después de i iteraciones, suma = i(i+1)/2

int sumaInductiva(int n) {
    // CASO BASE: P(0) → suma = 0 = 0(0+1)/2
    int suma = 0;

    // PASO INDUCTIVO: asumiendo P(k) [suma = k(k+1)/2],
    // probar que P(k+1) [suma + (k+1) = (k+1)(k+2)/2]
    for (int i = 1; i <= n; i++) {
        suma = suma + i;  // ← aquí ocurre la inducción

        // Invariante: después de esta iteración,
        // suma = i(i+1)/2 (se mantiene la propiedad)
    }

    return suma;
}

// ──────────────────────────────────────────────
// EJERCICIO 2: El sucesor de Peano como función
// ──────────────────────────────────────────────
// Implementar la función sucesor S(n) = n+1
// y demostrar que es inyectiva (P3 de Peano):
//   S(a) == S(b)  =>  a == b

int S(int n) {
    return n + 1;
}

bool esInyectivo(int a, int b) {
    // Verificar P3: S(a) = S(b) → a = b
    // En ℕ (enteros no negativos) esto siempre se cumple
    return (S(a) == S(b)) ? (a == b) : true;
    // Si S(a) != S(b), la implicación es verdadera (vacuamente)
}

// ──────────────────────────────────────────────
// EJERCICIO 3: Verificar P5 programáticamente
// ──────────────────────────────────────────────
// Dada una propiedad P(n) cualquiera, verificar que
// si P(0) es verdadero y ∀k(P(k)→P(k+1)), entonces
// ∀n P(n) se cumple para n hasta un límite dado.
//
// P(n) de ejemplo: "la suma de 0 a n es n(n+1)/2"

bool P(int n) {
    // Propiedad: sumaInductiva(n) == n*(n+1)/2
    return sumaInductiva(n) == n * (n + 1) / 2;
}

bool verificarInduccion(int hastaN) {
    // CASO BASE: verificar P(0)
    if (!P(0)) return false;

    // PASO INDUCTIVO: para todo k, si P(k) entonces P(k+1)
    for (int k = 0; k < hastaN; k++) {
        if (P(k) && !P(k + 1)) {
            return false;  // Encontré un contraejemplo
        }
    }

    // CONCLUSIÓN: ∀n≤hastaN, P(n) es verdadero
    return true;
}

// ──────────────────────────────────────────────
// MAIN: demostración ejecutable
// ──────────────────────────────────────────────
int main() {
    cout << "=== INDUCCIÓN EN LA LÓGICA DE PEANO (P5) ===" << endl;
    cout << "Axioma P5: [P(0) ∧ ∀k(P(k)→P(k+1))] → ∀n P(n)" << endl;
    cout << "Demostración: 1 + 2 + ... + n = n(n+1)/2" << endl;
    cout << endl;

    // Probar sumaInductiva para varios valores
    for (int n = 0; n <= 10; n++) {
        int suma = sumaInductiva(n);
        int formula = n * (n + 1) / 2;
        cout << "n=" << n << " → suma=" << suma
             << ", fórmula=" << formula
             << "  " << (suma == formula ? "✓" : "✗")
             << endl;
    }

    cout << endl;

    // Verificar inyectividad del sucesor (P3)
    cout << "P3 - Inyectividad del sucesor:" << endl;
    cout << "  S(3)=" << S(3) << ", S(5)=" << S(5) << endl;
    cout << "  ¿S(3)=S(5) → 3=5? " << (esInyectivo(3, 5) ? "✓" : "✗") << endl;
    cout << "  ¿S(7)=S(7) → 7=7? " << (esInyectivo(7, 7) ? "✓" : "✗") << endl;

    cout << endl;

    // Verificar inducción programáticamente
    int limite = 20;
    bool ok = verificarInduccion(limite);
    cout << "Verificación de P5 hasta n=" << limite << ": "
         << (ok ? "✓ PASÓ" : "✗ FALLÓ") << endl;

    cout << endl;
    cout << "=== EXPLICACIÓN ===" << endl;
    cout << "El bucle 'for' ES una demostración por inducción:" << endl;
    cout << "  - suma=0     → P(0): 0 = 0(0+1)/2   [CASO BASE]" << endl;
    cout << "  - suma+=i    → P(k)→P(k+1)          [PASO INDUCTIVO]" << endl;
    cout << "  - i de 1 a n → ∀k≤n P(k)           [CONCLUSIÓN]" << endl;

    return 0;
}
