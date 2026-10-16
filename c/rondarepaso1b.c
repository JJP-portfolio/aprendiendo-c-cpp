#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, suma = 0;   
    printf("Ingrese su primer numero:\n");
    scanf("%d", &num1);
    printf("Ingrese su segundo numero:\n");
    scanf("%d", &num2);
    suma = num1 + num2;
    printf("El resultado de la suma de los 2 numeros es: %d", suma);
}
