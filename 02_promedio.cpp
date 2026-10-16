// 02 - Promedio de 3 numeros con funciones
#include <iostream>

double num1, num2, num3;

void capturar_datos() {
    std::cout << "Ingrese tres numeros:\n";
    std::cin >> num1 >> num2 >> num3;
}

double promediar() {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    capturar_datos();
    double resultado = promediar();
    std::cout << "El promedio es: " << resultado << "\n";
}
