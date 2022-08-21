#include <stdio.h>

int main () {
	int a=15,b=20,*p1,*p2;
	p1=&a;
	p2=&b;
	if (p1>p2)
	printf("Ponteiro p1 e maior: %p \n",p1);
	else 
	printf("Ponteiro p2 e maior : %p \n",p2);
	return 0;
}