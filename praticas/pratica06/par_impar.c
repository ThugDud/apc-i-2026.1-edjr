#include <stdio.h>

int main(){

    int numero;

    printf("escreva um numero: ");
    scanf("%i", &numero);

    int numero_eh_par = numero % 2 == 0;

    if (numero_eh_par) {

        printf("\npabens teu numero eh par");

    } else {

        printf("\npabens teu numero eh impar");

    }
    

    return 0;
}