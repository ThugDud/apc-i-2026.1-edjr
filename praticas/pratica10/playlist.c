#include <stdio.h>
#include <string.h>

int main() {

    const char *nomes_genero[] = {
        "Rock",
        "Pop",
        "MPB"
    };

    enum genero_musical_e {
        POP,
        ROCK,
        MPB
    };

    struct musica_t {
        char titulo[100];
        float duracao;
        enum genero_musical_e genero;
    };

    struct musica_t musicas[5];
    
    for(int i = 0; i < 5; i++){
        printf("\n\nMusica %d\n", i+1);
        printf("Titulo: ");
        scanf("%[^\n]s", musicas[i].titulo);
        while(getchar() != '\n');
        printf("Duracao (minutos e fracao de minutos): ");
        scanf("%f", &musicas[i].duracao);
        while(getchar() != '\n');
        printf("Genero musical\n1 - POP\n2 - ROCK\n3 - MPB\n: ");
        int genero;
        scanf("%d", &genero);
        while(getchar() != '\n');
        musicas[i].genero = genero - 1;
    }

    printf("\nplaylist:\n====================\n");
    for(int i = 0; i<5; i++){
        printf("%s | %.0fm:%.0fs | %s\n", musicas[i].titulo, musicas[i].duracao, (musicas[i].duracao - (int)musicas[i].duracao) * 60, nomes_genero[musicas[i].genero]);
    }

    return 0;
}