#include <stdio.h>
main(){
	float n1,n2,n3,res;
	printf("Digite as tres notas que deseja saber a media: ");
	scanf("%f%f%f",&n1,&n2,&n3);
	res=(n1+n2+n3)/3;
	printf("\n A media aritmetica das notas digitadas e: %8.1f",res);
}
