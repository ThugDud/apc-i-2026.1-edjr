#include <stdio.h>

int main() {
		
	int num;

	printf("escreva um numero inteiro: "); scanf("%d", &num);

	printf("\nincremento pre-fixado: %d", ++num);
	--num;
	printf("\nincremento pos-fixado: %d", num++);
	--num;
	printf("\ndecremento pre-fixado: %d", --num);
	++num;
	printf("\ndecremento pos-fixado: %d", num--);

	return 0;

}
