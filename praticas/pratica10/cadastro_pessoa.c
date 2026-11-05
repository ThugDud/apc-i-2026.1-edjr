#include <stdio.h>
#include <string.h>

int main() {

    struct cadastro_t {
        char nome[50];
        int idade;
        float altura;
        char sexo;
    };

    struct cadastro_t usuario;

    printf("Preencha com seus dados de cadastro - ");
    printf("\nNome: ");
    scanf("%[^\n]s", usuario.nome);
    while(getchar() != '\n');
    printf("\nidade: ");
    scanf("%d", &usuario.idade);
    while(getchar() != '\n');
    printf("\naltura: ");
    scanf("%f", &usuario.altura);
    while(getchar() != '\n');
    printf("\nSexo (m, f, n[nao binario]): ");
    scanf("%c", &usuario.sexo);
    while(getchar() != '\n');

    printf("Aqui estao seus dados de login: %s - %d anos - %.2fm - %c", usuario.nome, usuario.idade, usuario.altura, usuario.sexo);

    return 0;
}