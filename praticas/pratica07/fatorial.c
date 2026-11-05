#include <stdio.h>

int main() {

    int fator;
    printf("Escreva o numero que sera fatoriado: ");
    scanf("%i", &fator);

    unsigned long long int resultado = fator;
    for(int i = fator - 1; i > 0; i--){
        printf("\n%lu * %i = ", resultado, i);
        resultado = resultado * i;
        printf("%lu", resultado);
    }

    printf("\n\n(%i)! = %lu", fator, resultado);

    return 0;
}