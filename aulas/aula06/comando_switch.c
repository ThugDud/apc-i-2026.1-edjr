#include <stdio.h>

int main() {

    int nota;
    
    printf("entre com uma nota de 1 a 5: ");
    scanf("%i", &nota);

    // if (nota == 1){
    //     printf("\nganhou 1 estrela *\n");
    // } else if(nota == 2){
    //     printf("\nganhou 2 estrela **\n");
    // } else if(nota == 3){
    //     printf("\nganhou 3 estrela ***\n");
    // } else if(nota == 4){
    //     printf("\nganhou 4 estrela ****\n");
    // } else if(nota == 5){
    //     printf("\nganhou 5 estrela *****\n");
    // } else {
    //     printf("\nnao tem esse tanto de estrela\n");
    // }

    switch(nota){
        case 1:
            printf("\nganhou 1 estrela *\n");
            break;
        case 2:
            printf("\nganhou 2 estrela **\n");
            break;
        case 3:
            printf("\nganhou 3 estrela ***\n");
            break;
        case 4:
            printf("\nganhou 4 estrela ****\n");
            break;
        case 5:
            printf("\nganhou 5 estrela *****\n");
            break;
        default:
            printf("\nnao tem esse tanto de estrela\n");
            break;
    }
}