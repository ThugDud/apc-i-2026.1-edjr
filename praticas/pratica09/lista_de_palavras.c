#include <stdio.h>
#include <string.h>

int main() {
    
    int qtd_de_palavras;
    printf("quantas palavras vc vai escrever: ");
    scanf("%d", &qtd_de_palavras);

    char vetor_de_palavras[qtd_de_palavras][50];

    for (int i = 0; i < qtd_de_palavras; i++){
        printf("\n Escreve a palavra %d: ", i+1);
        scanf("%49s", vetor_de_palavras[i]);
    }

    printf("\nLista de nomes:\n");
    for (int i = 0; i<qtd_de_palavras; i++){
        printf("\n%s", vetor_de_palavras[i]);
    }

    return 0;
}