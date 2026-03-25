#include <stdio.h>
#include <string.h>

int main() {

	float passagem;
	int idade;
	char nome[255];

	printf("\ndiz seu nome: ");
	scanf("%254[^\n]", &nome);
	while(getchar() != '\n'); //limpa o buffer
	
	printf("\n\"%s\", que coisa feia",nome);

	printf("\n\n qual sua idade: ");
	scanf("%d", &idade);
	while(getchar() != '\n');

	printf("\n sua idade é: %d",idade);

	printf("\n\ninforme o preço da passagem: ");
	scanf("%f", &passagem);
	printf("\na passagem custa: %.2f", passagem);

	return 0;
	
}
