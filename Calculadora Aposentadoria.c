#include	<stdio.h> 
#include	<stdlib.h> 
#include	<locale.h>

//Variavel
int op;
int sexo; 
int idade;
int tempoContribuicao;	
//Variavel

//Prototipos 
void cabecalho();
void aposentadoriaIdade();
void aposentadoriaTempoContribuicao();
//Fim Prototipos

//Funcao Principal 
int main(){
	setlocale(LC_ALL,"portuguese");
	cabecalho();
	
	printf("Digite 1 Para Homem e 2 Para Mulher: ");
	scanf("%d", &sexo);
	printf("Informe sua Idade: ");
	scanf("%d", &idade);
	printf("Informe seu tempo de contribuicao: ");
	scanf("%d", &tempoContribuicao);
	
	printf("Escolha uma opcao entre aposentadoria por idade ou por tempo de contribuição:\n "); 
	printf("\nMenu:\n");
	
	printf("\n 1 - Aposentadoria por idade"); 
	printf("\n 2 - Aposentadoria por tempo de contribuição");  
	printf("\n\nOpcao.: "); 
	scanf("%d", &op); 
  
	switch(op){ 
	 	case 1: 
		 	aposentadoriaIdade(sexo, idade, tempoContribuicao);
		 	break; 
	 	case 2: 
		 	aposentadoriaTempoContribuicao(sexo, idade, tempoContribuicao);
		 	break; 
	 	default: 
		 	printf("\nErro! Opção inexistente.\n");
		 	break; 
	} 
	system("pause");
} 

//Final da Funcao Principal 
//funcao cabecalho
void cabecalho(){
  printf("================================================================================================\n");
  printf("===============================CALCULADORA DE APOSENTADORIA 2021!===============================\n");
  printf("================================================================================================\n\n\n");
  return;
}
//fim da f

void aposentadoriaIdade(sexo, idade, tempoContribuicao){
	printf ("\n\n\n");
	if(sexo == 1){
		if(idade >= 65 || tempoContribuicao >= 20){
			printf ("\n\nVoce Ja pode abrir a sua Aposentadoria");	
		}else{
			int idadefalta =65 - idade;
			int contrifalta = 20 - tempoContribuicao;
			printf("Voce ainda nao pode dar entrada na sua aposentadoria: \n");
			if(idadefalta > 0 || tempoContribuicao > 0){
				printf ("Falta %d anos e %d de tempo de Contribuicao\n" ,idadefalta , contrifalta);	
			}else if(idadefalta <= 0 || tempoContribuicao >= 0){
				printf ("Falta %d de tempo de Contribuicao\n" , contrifalta);
				
			}else if(idadefalta >= 0 || tempoContribuicao <= 0){
				printf ("Falta %d anos\n",idadefalta );	
			}
		}
	}else{
		if(idade >= 62 || tempoContribuicao >= 15){
			printf ("\n\nVoce Ja pode abrir a sua Aposentadoria");	
		}else{
			int idadefalta = 62 - idade;
			int contrifalta = 15 - tempoContribuicao;
			printf("Voce ainda nao pode dar entrada na sua aposentadoria: \n");
			if(idadefalta > 0 || tempoContribuicao > 0){
				printf ("Falta %d anos e %d de tempo de Contribuicao\n" ,idadefalta , contrifalta);	
			}else if(idadefalta <= 0 || tempoContribuicao >= 0){
				printf ("Falta %d de tempo de Contribuicao\n" , contrifalta);
				
			}else if(idadefalta >= 0 || tempoContribuicao <= 0){
				printf ("Falta %d anos\n",idadefalta );	
			}
		}	
	}
}

void aposentadoriaTempoContribuicao(sexo, idade, tempoContribuicao){
	printf ("\n\n\n");
	int pontoPrevidenciario = idade + tempoContribuicao;
	if(sexo == 1){
		if(tempoContribuicao >= 35 || pontoPrevidenciario >= 97){
			printf ("\n\nVoce Ja pode abrir a sua Aposentadoria");	
		}else{
			int idadefalta = 62 - idade;
			int contrifalta = 35 - tempoContribuicao;
			printf("Voce ainda nao pode dar entrada na sua aposentadoria: \n");
			if(pontoPrevidenciario > 0 || tempoContribuicao > 0){
				printf ("Falta %d anos e %d de tempo de Contribuicao\n" ,idadefalta , contrifalta);	
			}else if(idadefalta <= 0 || tempoContribuicao >= 0){
				printf ("Falta %d de tempo de Contribuicao\n" , contrifalta);
				
			}else if(idadefalta >= 0 || tempoContribuicao <= 0){
				printf ("Falta %d anos\n",idadefalta );	
			}
		}
	}else{
		if(pontoPrevidenciario >= 87 || tempoContribuicao >= 15){
			printf ("\n\nVoce Ja pode abrir a sua Aposentadoria");	
		}else{
			int idadefalta = 57 - idade;
			int contrifalta = 30 - tempoContribuicao;
			printf("Voce ainda nao pode dar entrada na sua aposentadoria: \n");
			if(idadefalta > 0 || tempoContribuicao > 0){
				printf ("Falta %d anos e %d de tempo de Contribuicao\n" ,idadefalta , contrifalta);	
			}else if(idadefalta <= 0 || tempoContribuicao >= 0){
				printf ("Falta %d de tempo de Contribuicao\n" , contrifalta);
				
			}else if(idadefalta >= 0 || tempoContribuicao <= 0){
				printf ("Falta %d anos\n",idadefalta);	
			}
		}	
	}
}









