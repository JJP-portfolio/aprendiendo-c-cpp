#include <stdio.h>

int sumar(int a, int b){
   return a + b;
}

int main(){
    int resultado = sumar(3,5);
    printf("El resultado es: %d\n", resultado);
    return 0;
}
