#include <stdio.h>

/*
	==============================
	      N O T A    L E G A L
	==============================
	Produto         Qtd Valor Unit
	Camiseta        002      39.99
	Calca           001      89.90
	Meia Social     003      19.99
	==============================
	Total                   229.85
 */



int main() {

	int camiseta_qtd = 2;
	float camiseta_valor = 39.99F;

	int calca_qtd = 1;
	float calca_valor = 89.9F;

	int meia_soc_qtd = 3;
	float meia_soc_valor = 19.99F;

	printf("==============================\n      N O T A    L E G A L\n==============================");
	printf("\nProduto         Qtd Valor Unit");
	printf("\nCamiseta        %03d      %.2f", camiseta_qtd, camiseta_valor);
	printf("\nCalca           %03d      %.2f", calca_qtd, calca_valor);
	printf("\nMeia social     %03d      %.2f", meia_soc_qtd, meia_soc_valor);
	printf("\n==============================");
	printf("\nTotal                   %.2f", camiseta_valor * camiseta_qtd + calca_valor * calca_qtd + meia_soc_valor * meia_soc_qtd);

	return 0;
}
