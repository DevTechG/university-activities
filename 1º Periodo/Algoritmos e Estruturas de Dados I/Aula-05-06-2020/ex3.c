#include <stdio.h>
main (){
	int x,i;
	printf("Digite um numero entre 1 e 10 para visualizar a tabuada\n");
	do{
	scanf("%d",&x);
	if ((x<1 || x>10))
		printf("Valor nao aceito, digite outro numero\n");
	}while (x<1 || x>10);
	for (i=1;i<=10;i=i+1){
	printf("%d \n",x*i);
	}
}
