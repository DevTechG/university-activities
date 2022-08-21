#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void mM(int *x, int *y) {
	int temp;
	if (*x<*y) {
	temp=*x;
	*x=*y;
	*y=temp;	
	}	
}
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a,b;
	printf("Informe um valor inteiro: ");
    scanf("%d",&a);
    printf("valor digitado é: %d\n",a);
 	printf("Informe outro valor inteiro: ");
    scanf("%d",&b);
    printf("valor digitado é: %d\n",b);
	system ("pause");
    system("cls");
    mM(&a,&b);
    printf("O maior é: %d\nA menor é: %d",a,b);
	return 0;
}
