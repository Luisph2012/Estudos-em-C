#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
float n1, n2;
char operator;

printf("Digite 2 N�meros: ");
scanf("%f %f",&n1,&n2);

printf("+ para Adi��o\n- Para Subtra��o\n/ para divis�o\n* para Multiplica��o\n");
scanf("%s", &operator);
if(operator=='+'){
  printf("\nAdi��o:%.2f + %.2f = %.2f",n1,n2, n1+n2);
}else if(operator=='-'){
  printf("\nSubtra��o:%.2f - %.2f = %.2f",n1,n2, n1-n2);
}else if(operator=='*'){
  printf("\nMultiplica��o:%.2f * %.2f = %.2f",n1,n2, n1*n2);
}else if(operator=='/'){
  printf("\nAdi��o:%.2f / %.2f = %.2f",n1,n2, n1/n2);
}else{
	printf("Digite uma informa��o VALIDA");
}return (0);
}

