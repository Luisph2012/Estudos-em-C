#include <stdio.h>
#include <stdlib.h>

float calcMedia(float vetor[], int tamanho){
  int n;
  float media, soma;

  for(n=0;n<tamanho;n++){
    soma = soma + vetor[n];
  }
  media = soma/tamanho;
  return media;
}


int main(){
    float valor[6] = {5.2, 6.1, 7.2, 9.12, 8.4, 2.12};
    float result;
   
  result = calcMedia(valor , 6);
  printf("A media é: %.2f", result);
}
