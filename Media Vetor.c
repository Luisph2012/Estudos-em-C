#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

char vetor [4][5][20]; //matriz

int main(void){
	
	float nota1, nota2, nota3, nota4, media; //variaveis
	int i,j;
	
	char nome[20];
	
	for (i=0; i<1; i++){ //repetidor
		printf ("\n Nome do Aluno: ");
		
		fflush(stdin);       //validar a matriz
		gets(vetor[i][0]);
		for (j=1; j<5; j++){
			printf ("\n Nota do %d Bimestre: ",j);
			fflush(stdin);
			
			gets(vetor[i][j]); 
			
		}
	}
	
	for (i=0; i<1; i++){
		nota1 = atof (vetor[i][1]); nota2 = atof(vetor [i][2]);nota3 = atof (vetor[i][3]); nota4 = atof(vetor [i][4]);
		
		media = (nota1 + nota2 + nota3 + nota4)/4;
		printf("\n Media Anual= %.2f", media);
		
		if (media >= 6.0){ // um if para saber se ta aprovado e reprovado
			printf(" (Aluno %s esta APROVADO!!!).",vetor[1][0]);
		}else if((media >= 4.0) && (media < 6.0)){
			printf(" (Aluno %s esta em recuperacao).", vetor[i][0]); 
		}else{
			printf(" (Aluno %s esta reprovado).",vetor[i][0]);
		}
	}
	getch();
}

