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
	
	int codigo_apc = 118;
	float nota_a1 = 5.2f;
	float nota_a2 = 2.3f;
	float nota_a3 = 6.0f;
	float media_final = 5.6f;
	
	int codigo_mat = 257;
	float nota_m1 = 6.0f;
	float nota_m2 = 5.0f;
	float nota_m3 = 0.0;
	float media_final2 = 5.5f;

	int codigo_cal = 91;
	float nota_c1 = 4.0f;
	float nota_c2 = 4.0f;
	float nota_c3 = 4.0f;
	float media_final3 = 4.0f;

	printf("\nDisciplina           | COD | A1 | A2 | A3 | MF");
	printf("\nAPC 1                 %i %.1f  %.1f  %.1f  %.1f", codigo_apc, nota_a1, nota_a2, nota_a3, media_final);
	printf("\nMATEMATICA DISCRETA   %i %.1f  %.1f  %.1f  %.1f", codigo_mat, nota_m1, nota_m2, nota_m3, media_final2);
	printf("\nCALCULO               %03i %.1f  %.1f  %.1f  %.1f", codigo_cal, nota_c1, nota_c2, nota_c3, media_final3);
	
	return 0;	
		
}
