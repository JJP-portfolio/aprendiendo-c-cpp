#include <stdio.h>

float resultado;
    double num1, num2, num3;

void capturardatos(){
        printf("Ingrese el primer numero:\n");
        scanf("%lf", &num1);
        printf("Ingrese el segundo numero:\n");
        scanf("%lf", &num2);
        printf("Ingrese el tercer numero:\n");
        scanf("%lf", &num3);
}


int promediarycontestar(){
        //aca iria la formula del promedio con los 3 num.
        resultado =  (num1 + num2 + num3) / 3;
        printf("El promedio es: %f\n", resultado);
        return 0;
}


int main() {
    capturardatos();
    return promediarycontestar();
    }




