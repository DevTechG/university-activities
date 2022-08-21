#include <stdio.h>
main (){
	int a[8],b[8],i;
		printf("Digite oito numeros aleatorios/: \n");
	for (i=0;i<=7;i++) {
		scanf("%d",&a[i]);
	}
	for (i=0;i<=7;i++) {
		b[i]=a[i]*2;
		printf("O dobro de %d consiste em %d\n",a[i],b[i]);
	}
}


