#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p,i,n,x,m=0;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	p=(int *) malloc(n* sizeof(int));
	for (i=0;i<n;i++) {
		printf("Digite o numero presente na %d posicao: ",i+1);
		scanf("%d",&p[i]);
	}
	printf("Informe um numero de teste: ");
	scanf("%d", &x);
	for (i=0;i<n;i++) {
		if (p[i]%x==0) {
			m++;
			printf("%d | ",p[i]);
		}
	}
	printf("\nExiste %d multiplos de %d no vetor",m,x);
	return 0;
}