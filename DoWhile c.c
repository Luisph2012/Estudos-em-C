#include <stdio.h>
#include <locale.h>
int main(){
int menu;
setlocale(LC_ALL, "ALL");
do{
printf("Digite 1 para Portugues\n");
printf("Digite 2 para Alemão\n");
printf("Digite 3 para Suécia\n");
printf("Digite 4 para Inglês\n");
printf("Digite 0 para Sair\n\n");
scanf("%d", &menu);
switch(menu) {
case 1:
printf("Seja bem vindo ao Brasil\n\n\n");
break;
case 2:
printf("willkommen in Deutschland\n");
break;
case 3:
printf("Välkommen till sverige\n");
break;
case 4:
printf("Welcome to Canadá\n");
break;
case 0:
printf("Volte sempre!\n");
break;
default:
printf("Escolha uma opcao entre 0 e 4\n");
}
}while(menu);
system("pause");
}
