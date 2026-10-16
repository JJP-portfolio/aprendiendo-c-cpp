// 12 - Cifrador para la nena
// Pide una palabra y un numero clave, muestra los numeros cifrados
#include <iostream>
#include <string>

int main() {
    std::string palabra;
    int clave;

    std::cout << "Escribi una palabra: ";
    std::cin >> palabra;

    std::cout << "Numero magico: ";
    std::cin >> clave;

    std::cout << "Mensaje cifrado:\n";
    for (char c : palabra) {
        int num = c - 'A' + 1;
        std::cout << num + clave << " ";
    }
    std::cout << "\n";
}
