// 04 - Tabla de multiplicar
#include <iostream>

int main() {
    int num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    for (int i = 1; i <= 10; i++)
        std::cout << num << " x " << i << " = " << num * i << "\n";
}
