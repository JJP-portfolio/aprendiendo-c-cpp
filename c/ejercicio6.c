#include <stdio.h>

int main() { 
    int num;
    int suma = 0;
    printf("Escriba un numero perteneciente a los Naturales:\n");
    while (scanf("%d", &num) == 1 && num != 0) {
    suma = num + suma;
    }
     printf("la suma total es: %d\n", suma);
    return 0;
}
