#include <stdio.h>

int main() {
    int num1, num2, resultado;
    printf("escriba el primer numero:\n");
    scanf("%d", &num1);
    printf("escriba el segundo numero:\n");
    scanf("%d", &num2);
    resultado = num1 + num2; 
    printf("La suma es: %d\n", resultado);
    return 0;
}

