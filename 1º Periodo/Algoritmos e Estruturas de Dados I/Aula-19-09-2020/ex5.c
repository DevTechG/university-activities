#include <stdio.h>

int main() {
	int a,b,c;
	printf("Entre com as medidas dos lados do triangulo: \n");
	scanf("%d%d%d", &a,&b,&c);
	if ((a+b>c) && (a+c>b) && (c+b>a)) {
		if ((a==b) &&(a==c)) 
			printf("O triangulo formado por esses lados e equilatero");
		else if ((a==b) || (a==c) || (b==c))
			printf("O triangulo formado por esses lados e isosceles");
		else 
			printf("O triangulo formado por esses lados e escaleno");
	} else 
		printf("Error\nOs valores informados nao formam um triangulo!");
}
