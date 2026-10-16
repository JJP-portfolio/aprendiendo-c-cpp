// 07 - Mayor y menor numero
#include <iostream>

int main() {
    int num, mayor, menor, suma = 0;

    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    mayor = menor = suma = num;

    while (true) {
        std::cin >> num;
        if (num == 0) break;
        suma += num;
        if (num > mayor) mayor = num;
        if (num < menor) menor = num;
    }

    std::cout << "Mayor: " << mayor << "\n";
    std::cout << "Menor: " << menor << "\n";
    std::cout << "Suma: " << suma << "\n";
}
