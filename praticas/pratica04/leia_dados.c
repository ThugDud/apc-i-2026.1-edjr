#include <stdio.h>

/*
 * =================
 *  ficha cadastral
 * =================
 * sexo: %c
 * idade: %d
 * altura: %f
 * peso: %f                     
 *
 */

int main(){
	
	char sexo;
	int idade;
	float altura, peso;
	
	printf("insira seu sexo (M ou F): "); scanf("%c",&sexo);
	printf("insira sua idade: "); scanf("%d",&idade);
	printf("insira sua altura: "); scanf("%f",&altura);
	printf("insira seu peso: "); scanf("%f",&peso);

	printf("\n\n=================\n ficha cadastral\n=================");
	printf("\nsexo: %c,\nidade: %d anos,\naltura: %.2fm,\npeso: %.3fkg",sexo,idade,altura,peso);

	return 0;
}
