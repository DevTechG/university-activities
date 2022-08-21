#include <stdio.h>
main () {
	int num1=0,num2=0;
	if(&num1>&num2)
	printf("Maior endereco de memoria %x ou %d\n ",&num1,&num1);
    else 
    printf("Maior endereco de memoria %x ou %d\n",&num2,&num2); 
}
