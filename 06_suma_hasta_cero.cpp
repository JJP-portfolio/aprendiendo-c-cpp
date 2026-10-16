// 06 - Suma total hasta 0
#include <iostream>

int main() {
    int num, suma = 0;
    std::cout << "Ingrese numeros (0 para terminar):\n";

    while (true) {
        std::cin >> num;
        if (num == 0) break;
        suma += num;
    }

    std::cout << "La suma total es: " << suma << "\n";
}
