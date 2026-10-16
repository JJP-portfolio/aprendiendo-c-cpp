// 05 - Evaluador serial (par/impar del 1 al num)
#include <iostream>

int main() {
    int num;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0)
            std::cout << i << " es par\n";
        else
            std::cout << i << " es impar\n";
    }
}
