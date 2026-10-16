// 01 - Suma de 2 numeros
// Pedi dos numeros, sumalos y mostra el resultado
#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;
    int suma = num1 + num2;
    std::cout << "La suma es: " << suma << "\n";
}
