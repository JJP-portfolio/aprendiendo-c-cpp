#include <stdio.h>

int main() {
    int num = 0;
    printf("Ingrese un numero:\n");
    scanf("%d", &num);
    if (num > 0) {
        printf("Es positivo.\n");
        } else if (num < 0) {
        printf("Es negativo\n");
            } else {
            printf("Es cero.\n");
        }
    }
