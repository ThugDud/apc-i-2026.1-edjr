#include <stdio.h>

int main() {
	
	const float icms = 0.17, iss = 0.05, pis = 0.0165;
	float valor;

	printf("Escreva o valor do produto: "); scanf("%f", &valor);

	printf("\nvalor + ICMS: %.2f", valor*(1 + icms));
	printf("\nvalor + ISS: %.2f", valor * (1 + iss));
	printf("\nvalor + PIS: %.2f", valor * (1 + pis));
	printf("\nvalor final: %.2f",valor * (1 + icms + iss + pis));

	return 0;

}
