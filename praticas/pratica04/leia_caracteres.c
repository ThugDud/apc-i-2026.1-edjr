#include <stdio.h>

int main() {
	
	char caractere;

	printf("\nescreva um caractere: ");
	scanf("%c", &caractere);

	printf("\n\nvocê digitou: \"%c\", que corresponde ao codigo %d da tabela ASCII\n", caractere,caractere);

	return 0;
}
