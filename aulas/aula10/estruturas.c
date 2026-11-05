#include <stdio.h>
#include <string.h>

int main() {

    struct contato_t {
        char nome[61];
        long int telefone;
    };

    struct ponto_t {
        int x;
        int y;
    };

    struct aluno_t {
        int matricula;
        char nome[60];
        char email[60];
        long int telefone;
    };

    struct contato_t duduzitos;
    printf("preencha os dados do contato: ");
    printf("\nNome: ");
    scanf("%[^\n]s", duduzitos.nome);
    while(getchar() != '\n');
    printf("Telefone: ");
    scanf("%li", &duduzitos.telefone);
    
    printf("\nSeu contato: %s - %li\n", duduzitos.nome, duduzitos.telefone);

    struct contato_t contatos[10];

    for (int i=0; i<10; i++){
        printf("Contato %i: ",i+1);
        printf("Nome: ");
        scanf("%s", contatos[i].nome);
        while(getchar() != '\n');
        printf("Telefone: ");
        scanf("%li", &contatos[i].telefone);
        while(getchar() != '\n');
    }

    printf("\nLista telefonica: \n");

    for (int i = 0; i<10; i++){
        printf("\n%s - %li", contatos[i].nome, contatos[i].telefone);
    }

    //buscar contato
    int procurado = 0;
    int achei = -1;

    printf("\nEntre com o numero do contato: ");
    scanf("%i", &procurado);
    for (int i = 0; i<10; i++){
        if (procurado == i){
            achei = i;
            break;
        }
    }

    if (achei < 0) {
        printf("O contato %i nao foi encontrado\n", procurado);
    } else {
        printf("Achei o contato %s - %li\n", contatos[achei].nome, contatos[achei].telefone);
    }

    return 0;
}