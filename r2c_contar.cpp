// Ronda repaso 2c - Contar numeros hasta -1
#include <iostream>

int main() {
    int num, contador = 0;
    std::cout << "Ingrese numeros (-1 para terminar):\n";

    while (true) {
        std::cin >> num;
        if (num == -1) break;
        contador++;
    }

    std::cout << "Ingreso " << contador << " numeros\n";
}
