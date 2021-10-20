#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(){
setlocale(LC_ALL, "portuguese");
int golteam1, golteam2;
char team1[20],team2[20];
printf("\a\tCONTAGEM DE GOLS\n");
printf("Qual o nome do primeiro time? \n");
fgets(team1, 20, stdin);
printf("Qual o nome do segundo time? \n");
fgets(team2, 20, stdin);
printf("Quantos Gols %s fez: ", team1);
scanf("%d", &golteam1);
printf("Quantos Gols %s fez: ", team2);
scanf("%d", &golteam2);
if(golteam1 > golteam2){
printf("Vitória do %s \n",team1);
}else if(golteam1 < golteam2){
printf("Vitória do %s \n",team2);
}else
printf("Empate \n");
system("pause");
}
