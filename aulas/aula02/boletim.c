#include <stdio.h>

	/*
	
	 ===============================
	        boletim de notas
	 ===============================

	 Disciplina | A1 | A2 | A3 | MF
	
	 APC 1       5.2  2.3  6.0  5.6
	 MATEMATICA  6.0  5.0   -   5.5
	 CALCULO     4.0  4.0  4.0  4.0

	*/

int main() {

	float apc_1[4] = {5.2,2.3,6.0,5.6};
	float matematica_disc[4] = {6.0,5.0,-1,5.5};
	float calculo[4] = {4.0,4.0,4.0};

	printf("\n\n===============================\n      boletim de notas\n===============================\n");
	
	printf("\nAPC = ");
	for (size_t i = 0; i <= 3; i++) {
		if (apc_1[i] == -1) {
			printf("- | ");
			continue;
		}
		printf("%.1f | ", apc_1[i]);
	}

	printf("\nmatematica = ");
	for (size_t i = 0; i <= 3; i++) {
		if (matematica_disc[i] == -1) {
			printf("- | ");
			continue;
		}
		printf("%.1f | ", matematica_disc[i]);
	}

	printf("\ncalculo = ");
	for (size_t i = 0; i <= 3; i++) {
		if (calculo[i] == -1) {
			printf("- | ");
			continue;
		}
		printf("%.1f | ", calculo[i]);
	}
	
	return 0;	
		
}
