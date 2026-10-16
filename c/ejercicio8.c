#include <stdio.h>

int main() {
    printf("Inserte un numero:\n");
    int num;
    scanf("%d", &num);
    int suma = num;
    int pares = 0;
    int impares = 0;
    while (scanf("%d", &num) == 1 && num != 0) {
        suma = num + suma;
        if (num % 2 == 0) {
            pares++;
        } else impares++;
    }
    printf("Ud ingreso un total de %d numeros pares\n", pares);
    printf("E ingreso un total de %d numeros impares\n", impares);
}
