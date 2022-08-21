#include <stdio.h>
main (){
	int x;
	printf("Digite um numero ou 0 para encerrar \n");
	scanf("%d",&x);
	while (x !=0){
	if (x%2==0) 
		printf("O numero %d e par\n",x);
	else 
		printf("O numero %d e impar\n",x);
	scanf("%d",&x);
	}
}
