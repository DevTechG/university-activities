#include <stdio.h>
main(){
	int a,b,c,d;
	printf("Digite valor A: ");
	scanf("%d",&a);
	printf("Digite valor B: ");
	scanf("%d",&b);
	printf("Digite valor C: ");
	scanf("%d",&c);
	printf("Digite valor D: ");
	scanf("%d",&d);
	if ((b>c) && (d>a) && ((c+d)>(a+b)) && (c>-1) && (d>=0) && (a%2==0))
		printf("Valores aceitos");
		else
		printf("Valores não aceitos");
}
