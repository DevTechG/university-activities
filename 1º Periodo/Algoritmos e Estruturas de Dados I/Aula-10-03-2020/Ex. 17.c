#include <stdio.h>
main(){
	float sal,consw,valw,pago,desc;
	printf("Valor salario minimo: ");
	scanf("%f",&sal);
	printf("\n Digite a quantidade de quilowatts consumida pela residencia: ");
	scanf("%f",&consw);
	valw=sal/5;
	pago=consw*valw;
	desc=pago*0.85;
	printf("\n O valor pago por quilowatt em reais e: %8.2f",valw);
	printf("\n A residencia ira pagar em reais pela energia consumida e: %8.2f",pago);
	printf("\n O valor a ser pago com desconto e: %8.2f",desc);
}
