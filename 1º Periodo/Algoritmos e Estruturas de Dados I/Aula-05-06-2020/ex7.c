#include <stdio.h>
main (){
	int i,fat,num;
	num=1;
	printf("Digite um numero entre 1 e 20 para fatorar\n");
	do{
	scanf("%d",&fat);
	if ((fat<1 || fat>20))
		printf("Valor nao aceito, digite outro numero\n");
	}while (fat<1 || fat>20);
	for (i=fat;i>1;i--){
	num=num*i;
	}
	printf("%d!=%d",fat,num);
}
