#include <stdio.h>
main(){
	float n1,n2;
	printf("Digite dois numeros reais em que as operacoes sera efetuado: ");
	scanf("%f%f",&n1,&n2);
	printf("\n O resultado da soma e %8.1f",n1+n2);
	printf("\n O resultado da subtracao do primeiro pelo segundo e %8.1f",n1-n2);
	printf("\n O resultado da subtracao do segundo pelo primeiro e %8.1f",n2-n1);
	printf("\n O resultado da subtracao e %8.1f",n1*n2);
}
