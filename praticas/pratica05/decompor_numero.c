#include <stdio.h>

int main() {
	
	int num1;

	printf("escreva um numero de quatro digitos: "); scanf("%d", &num1);
	
	int unidade, dezena, centena, milhar;
	milhar = num1 / 1000;
	centena = (num1 % 1000) / 100; 	
	dezena = (num1 % 100) / 10;
	unidade = (num1 % 10);

		printf("\nmilhar: %d, centena: %d, dezena: %d, unidade: %d", milhar*1000, centena*100, dezena*10, unidade);	

	return 0;

}
