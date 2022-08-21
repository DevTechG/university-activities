#include <stdio.h>
void inverter_num1_num2(int *a,int *b) {
	int aux;
	aux=*a;
  	*a=*b;
  	*b=aux;
}

main(){
	int num1,num2;
   	scanf("%d%d", &num1,&num2);
	inverter_num1_num2(&num1,&num2);
	printf("\n%d\n%d",num1,num2);
}
