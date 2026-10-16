// 11 - Selection Sort
#include <iostream>

int main() {
    int numeros[5];

    std::cout << "Ingrese 5 numeros:\n";
    for (int i = 0; i < 5; i++)
        std::cin >> numeros[i];

    for (int i = 0; i < 4; i++) {
        int pos_min = i;
        for (int j = i + 1; j < 5; j++) {
            if (numeros[j] < numeros[pos_min])
                pos_min = j;
        }
        if (pos_min != i) {
            int temp = numeros[i];
            numeros[i] = numeros[pos_min];
            numeros[pos_min] = temp;
        }
    }

    std::cout << "Ordenados:\n";
    for (int i = 0; i < 5; i++)
        std::cout << numeros[i] << "\n";
}
