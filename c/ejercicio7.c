#include <stdio.h>

int main(){
    
    printf("Ingrese un numero Natural:\n");
    int num;
    scanf("%d", &num);
    int suma = num;
    int mayor = num;
    int menor = num;
       while (scanf("%d", &num) == 1 && num != 0) {
    suma = num + suma;
       if (num > mayor) {
            mayor = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("El menor numero que ingreso es: %d\n", menor);
    printf("El mayor numero que ingreso es: %d\n", mayor);
    printf("El one piece tiene un tamanio de: %d\n", suma);

}
