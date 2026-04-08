#include <stdio.h>

int main() {
	
	float num1, num2;
	
	printf("\ndigite o x: "); scanf("%f", &num1);
	printf("\ndigite o y: "); scanf("%f", &num2);

	printf("x + y = %.2f\nx - y = %.2f\nx * y = %.2f\nx / y = %.2f", num1 + num2, num1 - num2, num1 * num2, num1 / num2);

	return 0;
}
