#include <stdio.h>

int main(){

    int idade;

    printf("diz tua idade: ");
    scanf("%i", &idade);

    int menor_que_12 = idade <= 12;
    int menor_que_17 = idade <= 17;
    int menor_que_64 = idade <= 64;
    int idoso = idade > 64;

    if(menor_que_12){
        printf("\neh crianca");
    } else if (menor_que_17 && !(menor_que_12)){
        printf("\neh adolescente");
    } else if (menor_que_64 && !(menor_que_17)){
        printf("\neh adulto");
    } else if(idoso){
        printf("\neh idoso");
    }

    return 0;
}