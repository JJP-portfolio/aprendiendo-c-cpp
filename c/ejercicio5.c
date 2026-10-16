#include <stdio.h>

int num;

int evaluadorserial(){
    for (int i = 1; i <= num; i++) {
        if (i % 2 ==0){
        printf("%d, es par\n", i);
        } else
        printf("%d, es impar\n", i);
    }
}

int main() {

    printf("Ingrese un numero para descomponer:\n");
    scanf("%d", &num);
    return evaluadorserial();
}
