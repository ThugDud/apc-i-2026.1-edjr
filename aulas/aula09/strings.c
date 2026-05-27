#include <stdio.h>
#include <string.h>

int main() {
    char texto[10];

    texto[0] = 'O';
    texto[1] = 'l';
    texto[2] = 'a';
    texto[3] = ' ';
    texto[4] = 'M';
    texto[5] = 'u';
    texto[6] = 'n';
    texto[7] = 'd';
    texto[8] = 'o';
    texto[9] = '\0';

    printf("%s",texto);
    
    texto[3] = '\0';
    
    printf("%s",texto);

    for(int i = 0; i < 11; i++){
        printf("%c", texto[i]);
    }

    printf("\n");

    strcpy(texto, "Bom");
    printf("%s\n",texto);

    strcat(texto, "dia");
    printf("%s\n",texto);

    int tamanho = strlen(texto);
    printf("o tamanho do texto é %d\n",tamanho);
    int capacidade = sizeof(texto);
    printf("capacidade maxima do array da string é: %d\n",capacidade);

    //preencher com um caractere
    memset(texto, 'a', 8);
    printf("%s\n",texto);

    //limpar tudo
    memset(texto, '\0', capacidade);

    //comparar strings
    int compara = strcmp("banana", "laranja");
    printf("banana == laranja? %i\n", compara);
    // -1 banana e antes de laranja na ordem alfabetica
    int compara2 = strcmp("laranja", "banana");
    printf("laranja == banana? %i\n", compara2);
    // 1 laranja e depois de banana na ordem alfabetica
    int compara3 = strcmp("banana", "banana");
    printf("banana == banana? %i\n", compara3);
    // 0 sao iguais
    int compara4 = strcmp("banana", "BANANA");
    printf("banana == BANANA? %i\n", compara4);
    // 1 na tabela ascii, os maiusculos vem antes dos minusculos

    //verifica se tem uma letra na string
    char *tem_letra_a = strchr("sergipe", 'a');
    printf("A palavra sergipe tem letra a? %s\n", tem_letra_a);
    // imprime (null)
    char *tem_letra_a2 = strchr("roraima", 'a');
    printf("A palavra acre tem letra a? %s\n", tem_letra_a2);
    //ele corta até achar a letra (roraima -> aima)

    //verifica por texto no texto
    char *tem_silva = strstr("joao da silva", "silva");
    printf("o nome joao da silva tem silva? %s\n",tem_silva);
    // imprime "silva"

    char *tem_silva2 = strstr("joao da silva", "SILVA");
    printf("o nome joao da silva tem SILVA? %s\n",tem_silva2);
    //imprime (null)
}