#include <stdio.h>

struct Pessoa {
	
	int idade;
	float peso;
	char sexo;
	
};

int main(void){
		struct Pessoa p;
		
		p.idade=38;
		p.peso=95.5;
		p.sexo='m';
		
		printf("Pessoa Peso:%.2f, idade: %d, sexo: %c \n", p.peso , p.idade, p.sexo);
		
		
		return 0;
	}
