#include <stdio.h>

int main() {
    printf("Ingrese cualquier numero hasta -1 y contabilizara la cantidad de numeros ingresados\n");
    int num = 0, suma = 0;
    while (scanf("%d", &num), num != -1) {
        suma++;
    } printf("Ud escribio %d cantidad de numeros.\n", suma);
}
