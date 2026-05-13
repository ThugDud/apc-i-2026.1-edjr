#include <stdio.h>

int main() {

    int numero;
    printf("Diz um valor de 1 a 10: ");
    scanf("%d", &numero);

    while(numero < 1 || numero > 10){
        printf("Printf numero errad, diz oto: ");
        scanf("%d", &numero);
    }



    return 0;
}