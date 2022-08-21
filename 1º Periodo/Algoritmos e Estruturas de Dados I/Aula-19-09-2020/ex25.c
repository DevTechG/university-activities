#include <stdio.h>
#define PI 3.14159265359
void circulo(float *r,float *a,float *b,float *c) {
	*c=PI*(*r)*(*r);
	*b=2*PI*(*r);
	*a=2*(*r);
}
main() {
	float raio,diametro=0,circunferencia=0,area=0;
	printf("Informe o raio do circulo: ");
	scanf("%f",&raio);
	circulo(&raio,&diametro,&circunferencia,&area);
	printf("O diametro desse circulo e: %0.2f\nA circunferencia desse circulo e: %0.2f\nA area desse circulo e: %0.2f",diametro,circunferencia,area);	
}
