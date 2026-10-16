// 03 - Par o impar
#include <iostream>

int main() {
    int num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    if (num % 2 == 0)
        std::cout << "Es par\n";
    else
        std::cout << "Es impar\n";
}
