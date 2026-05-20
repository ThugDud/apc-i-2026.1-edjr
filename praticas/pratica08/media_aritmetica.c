#include <stdio.h>

int main() {

    int n;
    printf("Quantos numeros você pretende escrever: ");
    scanf("%d",&n);
    
    int numeros[n];

    for (int i = 0; i < n; i++){
        
        float b;
        printf("Escreva um numero: ");
        scanf("%f", &b);
        numeros[i] = b;
        
    }

    float soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + numeros[i];
    }

    printf("a somatoria é %.2f e a media aritmetica disso tudo é: %.2f", soma ,soma / n);

    return 0;
}