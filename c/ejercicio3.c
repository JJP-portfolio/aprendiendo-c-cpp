#include <stdio.h>

int num;

int main() {
    //Aca pide el numero
    printf("Ingrese un numero para saber si es par o impar:\n");
    scanf("%d", &num);
    //Hace la evaluacion y devuelve el resultado.
    if (num % 2 == 0) {
        printf("Es par\n");
    } else {
        printf("Es impar\n");
    }
}

