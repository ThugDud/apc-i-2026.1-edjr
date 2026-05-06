#include <stdio.h>

int main() {
	
	int idade;

	printf("omaigode, entre comsua idade: ");
	scanf("%i", &idade);

	int eh_maior_que_16_anos = idade >= 16;
	int eh_menor_que_16_anus = !(eh_maior_que_16_anos);
	int eh_mentira = idade <= 0 || idade > 140;
	
	if(eh_mentira){
		
		// printf("o cara eh alienigena slk %i", idade);
		return 0;

	}

	if(eh_maior_que_16_anos) {
		
		// printf("\npabens pode vota XD");

	} else {
		
		// printf("\ntomoules na rabeta nao pode vota");
	
	}

	int eh_maior_que_18_anus = idade >= 18;
	int eh_menor_que_70_anus = idade < 70;

	if(eh_maior_que_18_anus && eh_menor_que_70_anus){
		
		// printf("\ne se não votar vai levar xibatada");

	}

	if(eh_menor_que_16_anus){
		printf("nao pode vota meno de 16");
	} else if(eh_maior_que_16_anos && idade < 18){
		printf("se quiser sim mano");
	} else if(eh_maior_que_18_anus && eh_menor_que_70_anus){
		printf("se nao vota leva xibatada");
	} else {
		printf("se quiser sim");
	}


	return 0;

}
