// Ronda repaso 1c - Positivo, negativo o cero
#include <iostream>

int main() {
    int num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    if (num > 0)
        std::cout << "Es positivo\n";
    else if (num < 0)
        std::cout << "Es negativo\n";
    else
        std::cout << "Es cero\n";
}
