#include <stdio.h>

int main() {

	float passagem;
	int idade;
	char caractere;

	printf("\nescreve um caractere: ");
	scanf("%c", &caractere);
	while(getchar() != '\n'); //limpa o buffer
	
	printf("\n\"%c\", que caractere feio",caractere);

	printf("\n\n qual sua idade: ");
	scanf("%d", &idade);
	while(getchar() != '\n');

	printf("\n sua idade é: %d",idade);

	printf("\n\ninforme o preço da passagem: ");
	scanf("%f", &passagem);
	while(getchar() != '\n');
	printf("\na passagem custa: %.2f", passagem);

	return 0;
	
}
