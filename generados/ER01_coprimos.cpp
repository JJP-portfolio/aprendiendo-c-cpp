// ER01 — Repaso: números coprimos (Euclides)
//
// 📐 MPI: Divisibilidad, mcd, coprimos
// 🧠 C++: while, %, condicionales
//
// 📝 Consigna:
//   Dados dos enteros positivos, determinar si son coprimos
//   (mcd(a, b) == 1) usando el algoritmo de Euclides.
//
// 💡 Tips rápidos:
//   - mientras (b != 0) { r = a % b; a = b; b = r; }
//   - al final, a es el mcd
//   - si mcd == 1, son coprimos

#include <iostream>

int main() {
    int a, b;

    std::cout << "Ingrese dos numeros: ";
    std::cin >> a >> b;

    int x = a, y = b;  // copias para no perder los originales

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    if (x == 1) {
        std::cout << a << " y " << b << " son coprimos.\n";
    } else {
        std::cout << a << " y " << b << " NO son coprimos (mcd = " << x << ").\n";
    }

    return 0;
}
