#include <stdio.h>

int main() {
    
    int escolha;

    do {
    
    printf("\nmenoo:\n");
    printf("1- ve se temdinherio");
    printf("\n2- mete dinheiro");
    printf("\n3- ve se alguem ligo proce");
    printf("\n4- ve quem tu liga");
    printf("\n5- saia");
    printf("\nescolhe pai: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("\n[!] tem denhero sim eu vi auqi ");
            break;
        case 2:
            float essetanto;
            printf("canto: ");
            scanf("%f", &essetanto);
            printf("\n[!] pabens agora vose tem esse tantao: %f", essetanto);
            break;
        case 3:
            printf("\nninguem liga proce");
            break;
        case 4:
            printf("\ntu la tem amigos pra liga");
            break;
    }
    } while(escolha != 5);
    
    return 0;
}