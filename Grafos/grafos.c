#include <stdio.h>



typedef struct Lista{
  int val;
  struct Lista * prox;
} Lista;


Lista*lista(int val, Lista*prox){
  Lista*l = malloc (sizeof(struct Lista));

  l->val = val;
  l->prox = prox;
  return l;

}


void print_l(Lista*l){
  Lista * lista = l;
  printf("[ ");
  while(lista != NULL){
  printf("%d, ",lista -> val);
  lista=lista->prox;

  }
  printf("]");
}

int main(void) {
  //TESTE.. AGORA CRIAR UM GRAFO
  //Lista*minha_lista=lista(0,lista//(22,lista(4,NULL)));
  //print_l(minha_lista);


  Lista* grafo[]={
    lista(1,NULL),
    lista(2,lista(3,lista(4,NULL))),
    lista(4,NULL),
    lista(0,lista(4,NULL)),
    lista(2,lista(3,NULL))
  };

  for(int i=0; i <= 4; i++){
    printf("Vertice%d: \n",i);
    printf("Arestas:");
    print_l(grafo[i]);
    printf("\n\n");
  }


  return 0;
}