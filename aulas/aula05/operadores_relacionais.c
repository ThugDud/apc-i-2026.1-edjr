#include <stdio.h>

int main() {
	
	int idade;

	printf("Digite sua idade: ");
	scanf("%i", &idade);
	while (getchar() != '\n');

	printf("\nVocê é uma criança? %i", idade <= 12);
	printf("\nVocê é menor de idade? %i", idade < 18);
	printf("\nVocê tem 15 anos?: %i", idade == 15);
	printf("\nVocê é um idoso? %i", idade >= 60);
	printf("\nVocê é bizarro? %i", idade > 150);
	printf("\nAcredito em você? %i", idade != 100);

	return 0;
}
