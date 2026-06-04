#include <stdio.h>
#include <string.h>

int main() {
    
    struct aluno_t {
        char nome[50];
        unsigned long int matricula;
    };

    struct aluno_t alunos[5];

    for(int i = 0; i<5; i++){
        printf("\n\nAluno %d", i+1);
        printf("\nNome: ");
        scanf("%[^\n]s", alunos[i].nome);
        while(getchar() != '\n');
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        while(getchar() != '\n');
    }

    printf("\n\nLista de alunos:\n");
    for(int i = 0; i<5; i++){
        printf("%s - %d\n", alunos[i].nome, alunos[i].matricula);

    }

    return 0;
}