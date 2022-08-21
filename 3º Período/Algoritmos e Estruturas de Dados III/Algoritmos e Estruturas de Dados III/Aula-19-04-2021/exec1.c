#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
	
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a=9,*pint;
	float b=3.14, *pfloat;
	double c=3.1415, *pdouble;
	printf("Número inteiro: %d\nNúmero float: %.2f\nNúmero double: %.4f\n",a,b,c);
	system("pause");
	system("cls"); 
	pint=&a;
	pfloat=&b;
	pdouble=&c;
	*pint=10;
	*pfloat=3.141592;
	*pdouble=3.141592653589793;
	printf("Número inteiro: %d\nNúmero float: %.6lf\nNúmero double: %.15lf",a,b,c);  
	return 0;
}