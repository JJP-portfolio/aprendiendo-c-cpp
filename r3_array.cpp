// Ronda repaso 3 - Array: llenar, mostrar, inverso, maximo
#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; i++)
        std::cin >> numeros[i];

    std::cout << "Normal:\n";
    for (int i = 0; i < 5; i++)
        std::cout << numeros[i] << " ";
    std::cout << "\n";

    std::cout << "Inverso:\n";
    for (int i = 4; i >= 0; i--)
        std::cout << numeros[i] << " ";
    std::cout << "\n";

    int max = numeros[0], pos = 0;
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
            pos = i;
        }
    }
    std::cout << "Maximo: " << max << " en posicion " << pos << "\n";
}
