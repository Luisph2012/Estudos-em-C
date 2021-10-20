#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
float n1, n2;
char operator;

printf("Digite 2 Números: ");
scanf("%f %f",&n1,&n2);

printf("+ para Adição\n- Para Subtração\n/ para divisão\n* para Multiplicação\n");
scanf("%s", &operator);
if(operator=='+'){
  printf("\nAdição:%.2f + %.2f = %.2f",n1,n2, n1+n2);
}else if(operator=='-'){
  printf("\nSubtração:%.2f - %.2f = %.2f",n1,n2, n1-n2);
}else if(operator=='*'){
  printf("\nMultiplicação:%.2f * %.2f = %.2f",n1,n2, n1*n2);
}else if(operator=='/'){
  printf("\nAdição:%.2f / %.2f = %.2f",n1,n2, n1/n2);
}else{
	printf("Digite uma informação VALIDA");
}return (0);
}

