#include <stdio.h>

int main() {

	float decimal, decimal2;

	printf("\ndigite um numero com parte decimal: ");
	scanf("%f", &decimal);

	printf("\ndigite outro numero com parte decimal: ");
	scanf("%f", &decimal2);
	
	printf("\nvocê digitou: \"%f\" e \"%f\"",decimal,decimal2);
	
	return 0;
}
