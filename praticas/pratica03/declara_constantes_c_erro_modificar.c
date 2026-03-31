#include <stdio.h>
#define PI 3.14159265 

/*
	thug at melchior in ~/programação/acpi/apc-i-2026.1-edjr/praticas/pratica03 on feature/pratica03!
	± gcc declara_constantes_c_erro_modificar.c declara_constantes_c_erro_modificar.out
	
	declara_constantes_c_erro_modificar.c: In function ‘main’:
	
	declara_constantes_c_erro_modificar.c:10:15: error: assignment of read-only variable ‘euler’
	   10 |         euler = euler + 1;
	      |               ^
*/

int main() {
	
	const double euler = 2.71828182;

	printf("numero de PI armazenado com #define = \"%.8lf\", numero de Euler armazenado com const = \"%.8lf\".",PI,euler);

	euler = euler + 1;

	printf("\n\n euler modificado = \"%.8lf\".",euler);
	return 0;
}
