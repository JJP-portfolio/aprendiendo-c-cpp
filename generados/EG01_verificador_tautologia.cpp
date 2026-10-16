// EG01 — Verificador de tautologías (con resolución)
//
// 📐 MPI: Tablas de verdad, tautología
// 📖 Lógica: Cuantificador universal (∀) sobre combinaciones
// 🧠 C++: for anidados, flag booleano, cout formateado
// 📜 Historia: Wittgenstein — tablas de verdad como método
//             de decisión (Tractatus, 1921)
//
// 📝 Consigna original:
//   Determinar si (p ∧ ¬q) → (r ∨ q) es tautología.
//
// 💡 Estrategia:
//   1. Generar las 8 combinaciones con 3 for anidados
//   2. Evaluar la fórmula en cada una
//   3. Si alguna da F, no es tautología
//
// Resolución completa:

#include <iostream>

int main() {
    bool esTautologia = true;

    std::cout << "p q r | ¬q | p∧¬q | r∨q | (p∧¬q)→(r∨q)\n";
    std::cout << "----------------------------------------\n";

    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                bool not_q = !q;
                bool p_and_not_q = p && not_q;
                bool r_or_q = r || q;
                bool formula = !p_and_not_q || r_or_q;

                std::cout << p << " " << q << " " << r << " |  "
                          << not_q << "  |   " << p_and_not_q
                          << "   |  " << r_or_q << "  |      " << formula << "\n";

                if (!formula) {
                    esTautologia = false;
                }
            }
        }
    }

    std::cout << "----------------------------------------\n";
    if (esTautologia) {
        std::cout << "La formula ES tautologia.\n";
    } else {
        std::cout << "La formula NO es tautologia.\n";
    }

    return 0;
}
