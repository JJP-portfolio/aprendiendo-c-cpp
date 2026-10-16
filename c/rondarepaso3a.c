#include <stdio.h>

int main() {
    int array[4];
    printf("Ingrese 4 numeros:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &array[i]); 
    }
    for (int j = 0; j < 4; j++) {
        printf("%d\n", array[j]);
    }
    for (int j = 3; j >= 0; j--) {
        printf("%d\n", array[j]);
    }
    int max = array[0], pos=0;
    for (int i = 1; i < 4; i++) {
        if (array[i] > max) {
            max = array[i];
            pos = i;
        }
    }
    printf("Su numero mas grande es %d y esta en la posicion: %d\n", max, pos);
}

