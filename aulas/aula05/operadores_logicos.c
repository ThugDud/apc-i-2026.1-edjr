#include <stdio.h>

int main() {
	
	int idade;

	printf("Entre com sua idade: ");
	scanf("%i", &idade);
	while(getchar() != '\n');
	
	printf("\nVocê eh um pivete? %i", idade >= 0 && idade <= 12);
	printf("\nVocê eh endaude agrmmit? %i", idade > 12 && idade < 16);
	printf("\nVocê eh aerofolio para meu palio? %i", idade >= 16 && idade <= 20);
	printf("\nVocê tem crise de meia idade? %i", idade > 20);	

	printf("\n\n==================================\n");
	printf("\nVocê tem prioridade pra tomar vacininha pra virar jacare? %i", idade <= 6 || idade >= 60);

	printf("\n Você não pode votar? %i", !(idade >= 16));

	return 0;

}
