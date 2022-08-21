#include <stdio.h>
main (){
	int a[10],b[10],i;
		printf("Digite dez numeros aleatorios: \n");
	for (i=0;i<=9;i++)
		scanf("%d",&a[i]);
	for (i=9;i>=0;i--)
		b[i]=a[9-i];
	for (i=0;i<=9;i++) 	
		printf("%d investido de %d \n",b[i],a[i]);
}


