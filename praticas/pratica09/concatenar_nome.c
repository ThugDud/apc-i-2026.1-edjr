#include <stdio.h>
#include <string.h>

int main() {

    char nome[50];
    char sobrenome[50];

    printf("Escreve seu primeiro nome: ");
    scanf("%s",nome);

    printf("Escreva seu segundo nome: ");
    scanf("%s",sobrenome);

    char nome_completo[100];
    strcat(nome_completo, nome);
    strcat(nome_completo, " ");
    strcat(nome_completo, sobrenome);
    printf("\nSeu nome completo eh: %s", nome_completo);

    return 0;
}