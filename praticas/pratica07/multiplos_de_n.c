#include <stdio.h>

int main() {

    unsigned long long int elemento;
    printf("Escreva o elemento a ver seus multiplos (1 a 100): ");
    scanf("%lu", &elemento);

    for (int i = 1; i <= elemento; i++) {
        if (elemento % i == 0){
            printf("\n%i",i);
        }
    }

    return 0;
}