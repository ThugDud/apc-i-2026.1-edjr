#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digita o valor do numero: ");
        scanf("%d",&numero);
        while(getchar() != '\n');
    } while(numero < 1 || numero > 10);

    return 0;
}