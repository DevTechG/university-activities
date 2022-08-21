#include <stdio.h>
main(){
	float gas,res;
	printf("Digite o valor pago pelo litro de gasolina: ");
	scanf("%f",&gas);
	res=gas*0.7;
	printf("\n Caso o valor do etanol seja menor que %8.2f, compensara abastecer com o mesmo",res);
}
