#include <stdio.h>

int num;

int tablademultiplicar() {
    for (int i = 1; i <= 10; i++) {
    int resultado;
    resultado = num * i;
    printf("%d\n", resultado);
    }
    return 0;
}

int main() {

    printf("Ingrese un numero para conocer su tabla de multiplicacion:\n");
    scanf("%d", &num);
    return tablademultiplicar(); 
}
