#include <stdio.h>

int main() {
    
    enum diasemana_e {
        domingo = 1,
        segunda,
        terca,
        quarta,
        quinta,
        sexta,
        sabado
    };
    
    int escolha;
    printf("Digite um numero representando um dia da semana (dom - sab): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case domingo:
            printf("\nDomingo!");
            break;
        case segunda:
            printf("\nSegunda!");
            break;
        case terca:
            printf("\nTerca!");
            break;
        case quarta:
            printf("\nQuarta!");
            break;
        case quinta:
            printf("\nQuinta!");
            break;
        case sexta:
            printf("\nSexta!");
            break;
        case sabado:
            printf("\nSabado!");
            break;
        default:
            printf("\nEntrada invalida");
            break;
    }
    return 0;
}