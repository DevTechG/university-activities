#include <stdio.h>
main(){
	float bruto,liq;
	printf("Digite o valor do salario: ");
	scanf("%f",&bruto);
	liq=bruto+(bruto*0.05)-(bruto*0.07);
	printf("\n O salario liquido e: %8.2f",liq);
}
