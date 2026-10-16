// 10 - Numero mas grande y su posicion
#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; i++)
        std::cin >> numeros[i];

    int max = numeros[0], pos = 0;
    for (int i = 1; i < 5; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
            pos = i;
        }
    }

    std::cout << "El mas grande es " << max << " en posicion " << pos << "\n";
}
