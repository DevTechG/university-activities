#include <stdio.h>
#include <math.h>

#define pi 3.1415

void calc_esfera(float R, float *area, float *volume) {
	*area=4*pi*pow(R,2);
	*volume=(4/3)*pi*pow(R,3);
}
int main (){
	float r,a=0.0,v=0.0,*area,*volume;
	printf("Informe o raio da esfera: \n");
	scanf("%f",&r);
	area=&a;
	volume=&v;
	calc_esfera(r,area,volume);
	printf("Area = %.3f \nVolume = %.3f",*area,*volume);
	return 0;
}