// Ronda repaso 4b - Funcion es_par
#include <iostream>

int es_par(int num) {
    return num % 2 == 0;
}

int main() {
    int num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    if (es_par(num))
        std::cout << "Es par\n";
    else
        std::cout << "Es impar\n";
}
