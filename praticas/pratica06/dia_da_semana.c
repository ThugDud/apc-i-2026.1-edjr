#include <stdio.h>

int main(){

    int dia;

    printf("diz um dia, de 1 - 7, da semana: ");
    scanf("%i", &dia);

    if(dia >= 1 && dia <= 5){
        printf("\ndia util");
    } else {
        printf("\nfim de semana");
    }

    return 0;
}