#include <stdio.h>

int main() {
    int numeros[5];
    for (int i = 0; i <= 4; i++) {
        printf("agregue un numero:\n");
        scanf("%d", &numeros[i]);
       }
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
       }
}
