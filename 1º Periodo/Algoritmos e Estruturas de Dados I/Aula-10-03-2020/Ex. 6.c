#include <stdio.h>
main(){
	float n1,n2,n3,n4,res;
	printf("Digite os quatro numeros que deseja saber a media: ");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	res=(n1+n2+n3+n4)/4;
	printf("\n A media aritmetica dos numeros digitados e: %8.1f",res);
}
