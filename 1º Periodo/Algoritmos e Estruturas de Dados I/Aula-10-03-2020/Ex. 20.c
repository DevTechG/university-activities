#include <stdio.h>
main(){
	float t,desc,pago;
	printf("Digite o valor final da compra: ");
	scanf("%f",&t);
	desc=t*0.2;
	pago=t-desc;
	printf("\n O valor do desconto e: %8.2f",desc);
	printf("\n O valor a ser pago pela compra com desconto e: %8.2f",pago);
}
