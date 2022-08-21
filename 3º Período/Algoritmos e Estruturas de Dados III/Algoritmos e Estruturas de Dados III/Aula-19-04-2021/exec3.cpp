#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int orderMenor(int *x, int *y,int *z) {
	int temp;
	if (*x==*y && *x==*z) {
		return 1;
	} else {
		if (*x>*y) {
		temp=*x;
		*x=*y;
		*y=temp;
	  }	
		if (*x>*z) {
		temp=*x;
		*x=*z;
		*z=temp;
		}
		if (*y>*z) {
		temp=*y;
		*y=*z;
		*z=temp;
		}
	return 0;
	}
}
int main () {
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,igual;
	printf("Informe um valor inteiro: ");
    scanf("%d",&a);
    printf("valor digitado é: %d\n",a);
 	printf("Informe outro valor inteiro: ");
    scanf("%d",&b);
    printf("valor digitado é: %d\n",b);
 	printf("Informe outro valor inteiro: ");
    scanf("%d",&c);
    printf("valor digitado é: %d\n",c);
	system ("pause");
    system("cls");
    igual=orderMenor(&a,&b,&c);
    printf("Os valores em ordem crescente sao: %d %d %d\n",a,b,c);
	if (igual==1) {
		printf("O valores sao iguais");
	} else {
		printf("O valores sao diferentes");
	}
	return 0;
}
