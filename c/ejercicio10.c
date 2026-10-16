#include <stdio.h>

int main() {
    int numeros[5];
    printf("Ingrese 5 numeros:\n");

    for (int i=0; i <= 4; i++) {
        scanf("%d", &numeros[i]); 
    }
    int max = numeros[0], posicion = 0;
    
    for (int i = 1; i <= 4; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
            posicion = i;
        }
    }printf("El numero mas alto que ingreso es %d, en la posicion: %d\n", max, posicion);
}
