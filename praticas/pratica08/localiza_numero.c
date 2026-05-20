#include <stdio.h>

int main(){

    int numeros[10];

    for (int i = 0; i < 10; i++){
        
        float b;
        printf("Escreva um numero para o indice %i: ", i);
        scanf("%f", &b);
        numeros[i] = b;
        
    }

    int procurar;
    while(procurar != -1){
        printf("\nProcurar numero: ");
        scanf("%d", &procurar);

        int achou = 0;
        for (int i = 0; i < 10; i++){
            if(procurar == numeros[i]){
                printf("\nAchou no índice %d", i);
                achou = 1;
                break;
            }
        }

        if (achou == 0){
            printf("\nNão achei");
        }
    }    

    return 0;
}