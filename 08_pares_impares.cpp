// 08 - Contar pares e impares
#include <iostream>

int main() {
    int num, pares = 0, impares = 0;
    std::cout << "Ingrese numeros (0 para terminar):\n";

    while (true) {
        std::cin >> num;
        if (num == 0) break;
        if (num % 2 == 0) pares++;
        else impares++;
    }

    std::cout << "Pares: " << pares << "\n";
    std::cout << "Impares: " << impares << "\n";
}
