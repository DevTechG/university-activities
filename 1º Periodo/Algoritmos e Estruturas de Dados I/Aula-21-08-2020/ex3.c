#include <stdio.h>
main (){
	int num,exp,res,i,e;
	printf("Digite um valor inteiro: \n");
	scanf("%d",&num);
	printf("Digite o expoente: \n");
	scanf("%d",&exp);
		while (i<=num) {
		if (i%2==0)	{
			res=i;
		for (e=1;e<exp;e++)
			res*=i;
			printf("%d^%d= %d \n",i,exp,res);
		}
	i++;
	}	
}

