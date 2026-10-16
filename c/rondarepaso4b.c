#include <stdio.h>

int es_par(int num) {
    if (num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int num=0;
    //Pedimos que el usuario ingrese un numero para evaluar.
    printf("Escriba un numero para evaluar si es par o impar: \n");
    scanf("%d", &num);
   //Llamamos a la funcion. 
    int resultado = es_par(num);
   //Segun el resultado, el mensaje que recibe el usuario.
    if (resultado == 1) {
        printf("Es par");
    } else { 
        printf("Es impar");
    }
    return 0;
}
