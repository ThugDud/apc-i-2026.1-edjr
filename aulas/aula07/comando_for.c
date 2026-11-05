#include <stdio.h>

int main() {

    int numero;
    printf("Entre com um numero de 1 a 10: ");
    scanf("%i", &numero);

    printf("\nTabuada de %i: \n");
    for(int i = 1; i <= 100000; i++){
        printf("%i * %i = %i\n", numero, i, numero * i);
    }

    return 0;
}