#include <stdio.h>  ///libraries 
#include <locale.h>


int main(){   
	setlocale(LC_ALL, "Portuguese");
	int n = 1;  //variaveis
	int years;
	
	printf ("Digite o número de anos para quitar a casa: "); //escreva com captura de dados
	scanf ("%d", &years);
	
	
	while (n <= (years*12)){ //while para repetir 
		
		printf ("\nA prestação nº %d foi paga com sucesso.\n", n); //print com %d para chamar a variavel
		n++;
	}
	system("pause"); //pausar a operacao sem fechar
	
}
