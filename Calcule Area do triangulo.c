#include <stdio.h>
#include <math.h>
//Programa que calcula a área de um triângulo utilizando três pontos.

typedef struct Ponto {
	double x;
	double y;
}Ponto;

double dist(Ponto p1, Ponto p2) {
	double a = p1.x - p2.x;
	double b = p1.y - p2.y;
	
	return sqrt((a*a) + (b * b));
}

int main(void) {
	int n;
	Ponto pontos[3];
	printf("Digite os pontos do triangulo:\n");

for(n=0; n < 3; n++){
	printf("Digite o ponto %d:\n", n);
	printf("x:");
	scanf("%lf", &pontos[n].x);
	printf("y:");
	scanf("%lf", &pontos[n].y);
  }
	
for(n=0; n<3; n++){
    printf("Ponto %d (%lf,%lf) \n",n , pontos[n].x, pontos[n].y);
  }

	double l1 = dist(pontos[0],pontos[1]);
	double l2 = dist(pontos[1],pontos[2]);
	double l3 = dist(pontos[0],pontos[2]);
	
	//double sp = (l1 + l2 + l3) / 2.0;
	//double area = sqrt(sp*(sp-l1)*(sp-l2)*(sp-l3));
	double area = (l1 * l2)/ 2.0;
	//printf("area do triangulo : %lf \n", area);
	printf("area do triangulo : %lf \n", area);	
	
	return 0;
}
