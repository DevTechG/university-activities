#include <stdio.h>
main (){
	int num,i,qdiv;
	qdiv=0;
	printf("Digite um numero qualquer: \n");
	scanf("%d",&num);
	for (i=1;i<=num;i=i+1){
		if (num%i==0)
			qdiv++;
		}
		if(qdiv==2)
			printf ("O numero %d e primo!",num);
		else 
			printf("O numero %d nao e primo!",num);
}
