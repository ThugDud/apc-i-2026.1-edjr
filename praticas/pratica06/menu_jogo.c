#include <stdio.h>

int main() {

    int escolha;

    printf("======= bem vindo ao world of warcraft =======\n");
    printf("\n[1] Novo jogo");
    printf("\n[2] Continuar jogo");
    printf("\n[3] Ver pontuacao");
    printf("\n[4] Sair");
    printf("\n\n==============================================");
    printf("\n\nEscolha sua opcao: ");
    scanf("%i", &escolha);

    // if(escolha == 1){
    //     printf("\n\nNovo jogo começou, bem vindo ao tutorial");
    // } else if (escolha == 2){
    //     printf("\n\nContinuando save, bem vindo a daggerfall");
    // } else if (escolha == 3){
    //     printf("\n\nVoce pontuou 12312321 pontos parabens, ta em 12313º posicao no ranking");
    // } else if (escolha == 4){
    //     printf("\n\nSaindo do jogo");
    // } else {
    //     printf("\n\nOpcao invalida");
    // }

    switch(escolha){
        case 1:
            printf("\n\nNovo jogo começou, bem vindo ao tutorial");
            break;
        case 2:
            printf("\n\nContinuando save, bem vindo");
            break;
        case 3:
            printf("\n\nVoce pontuou 12312321 pontos parabens, ta em 12313º posicao no ranking");
            break;
        case 4:
            printf("\n\nSaindo do jogo");
            break;
        default:
            printf("\n\nOpcao invalida");
    }
    
    return 0;
}