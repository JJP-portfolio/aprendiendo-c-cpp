#include <stdio.h>

int main() {
    int numeros[5], i, j, c, pos_min, cambio;
    printf("Ingrese 5 numeros:\n");
    for (i=0; i <= 4; i++) {
        scanf("%d",&numeros[i]);
    }
    for (j = 0; j < 4; j++) {
        pos_min = j;
        for (c = (j+1); c < 5; c++) {
            if (numeros[c] < numeros[pos_min]) {
                pos_min = c;
            }  
        }
            if (pos_min != j) {
                cambio = numeros[pos_min];
                numeros[pos_min] = numeros[j];
                numeros[j] = cambio;
            }
    }
    int a;
    printf("Su lista de numeros ordenada de menor a mayor:\n");
    for (a=0; a <= 4; a++) {
        printf("%d\n", numeros[a]);
    }
}


