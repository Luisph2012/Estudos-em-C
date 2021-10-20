#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, tamanho;
    float valor[n];
    float media, soma;

    printf("Escreva a quantidade de valores: ");
    scanf("%d", &tamanho);


  for(n=0;n<tamanho;n++){
    int inc = n + 1;
    printf("Escreva o valor número %d: ",inc);
    scanf("%f", &valor[n]);
    soma = soma + valor[n];
  }

  media = soma/tamanho;
  printf("A media é: %.2f", media);
  return 0;
}