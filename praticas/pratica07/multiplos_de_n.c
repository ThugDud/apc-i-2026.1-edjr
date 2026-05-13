#include <stdio.h>

int main() {

    unsigned long long int elemento;
    printf("Escreva o elemento a ver seus multiplos: ");
    scanf("%lu", &elemento);

    for (int i = 1; i <= 100; i++) {
        printf("\n%lu * %i = %lu", elemento, i, elemento * i);
    }

    return 0;
}