// 09 - Array orden inverso
#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; i++)
        std::cin >> numeros[i];

    std::cout << "Orden inverso:\n";
    for (int i = 4; i >= 0; i--)
        std::cout << numeros[i] << "\n";
}
