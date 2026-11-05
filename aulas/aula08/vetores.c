#include <stdio.h>

int main() {

    int numeros[10];
    char nome[100];
    float notas[3];

    numeros[0] = 10;
    numeros[1] = 6;
    numeros[2] = 7;
    numeros[3] = 5;
    numeros[4] = 3;
    numeros[5] = 2;
    numeros[6] = 1;
    numeros[7] = 8;
    numeros[8] = 9;
    numeros[9] = 7;

    for (int i = 0; i < 10; i++){
        printf("|%i| ", numeros[i]);
    }

    printf("\nEntre com seu nome: ");
    scanf("%[^\n]s", &nome);
    printf("\n pabens teu nome eh: %s", nome);

    printf("\n\nEntre com suas notas do boletim: ");
    for(int i = 0; i < 3; i++){
        printf("\nA%i = ", i+1);
        scanf("%f", &notas[i]);
    }

    printf("\nsuas notas foram: ");
    for(int i = 0; i < 3; i++){
        printf("\nA%i = %.1f", i+1, notas[i]);
    }

    return 0;
}