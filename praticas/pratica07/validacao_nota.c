#include <stdio.h>

int main() {

    int fim = 0;
    int resposta;
    while(!(fim)){
        printf("escreva uma nota numerica inteira: ");
        scanf("%i", &resposta);

        for(int i = 1; i<= 10; i++){
            if(resposta == i){
                fim = 1;
                break;
            }
        }
    }

    printf("\n %i é valido!");

    return 0;
}