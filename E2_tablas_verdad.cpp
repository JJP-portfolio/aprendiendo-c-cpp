// E2 — Tablas de verdad programadas
//
// 📐 MPI: Lógica proposicional — Tablas de verdad
// 📖 Lógica: Tablas de verdad (Wittgenstein, Tractatus 1921)
// 🧠 C++ nuevo: for anidados con bool, cout formateado
// 📜 Historia: Wittgenstein formalizó las tablas de verdad
//             en el Tractatus Logico-Philosophicus (1921)
// 📦 Archivo: E2_tablas_verdad.cpp
//
// 📝 Consigna:
// Escribí un programa que genere e imprima la tabla de verdad completa para:
//   (p ∧ ¬q) → (r ∨ q)
// Usá 3 for anidados para generar las 8 combinaciones de p, q, r.
//
// La salida debería verse así:
// p q r | ¬q | p∧¬q | r∨q | (p∧¬q)→(r∨q)
// 0 0 0 | 1  |  0   |  0  |     1
// ...
//
// 💡 Tips:
// - for (int p = 0; p <= 1; p++) anidado con for de q y for de r
// - bool en C++ acepta 0/1 como entrada y se imprime como 0/1
// - Implicación: p→q  =>  !p || q
// - Podés calcular subfórmulas paso a paso (¬q, p∧¬q, etc.)
// - Usá '\t' o std::setw para alinear columnas
//
// ✅ Buenas prácticas:
// - Variables con nombres descriptivos
// - Una línea por fila de la tabla
// - Calculá las subfórmulas en variables separadas para claridad

#include <iostream>
#include <iomanip> //Para setw y otros manipuladores.

using namespace std;

int main() {
    cout << "p q r | ¬q | p∧¬q | r∨q | (p∧¬q)→(r∨q)" << endl;
   
    for (int p = 0 ; p <= 1; p++) {
        for(int q = 0; q <= 1; q++) {
            for (int r = 0; r <= 1; r++) {
                int no_q = !q;
                int p_y_no_q = p && no_q;
                int r_o_q = r||q;
                int cond = !(p_y_no_q)||r_o_q;
                cout << setw(5) << p << setw(5) << " " << setw(5) << q << setw(5) << " " << setw(5) << r << setw(5) << " | " << setw(5) << no_q << setw(5) << " | " << setw(5) << p_y_no_q << setw(5) << " | " << setw(5) << r_o_q << setw(5) << " | " << setw(5) << cond << endl;  
            }
        }
    } 
    return 0;
}
