#include <stdio.h>
#define PI 3.14
main(){
	float r,area;
	printf("Digite o raio do circulo: ");
	scanf("%f",&r);
	area=PI*r*r;
	printf("\n A area do circulo e: %8.2f",area);
}
