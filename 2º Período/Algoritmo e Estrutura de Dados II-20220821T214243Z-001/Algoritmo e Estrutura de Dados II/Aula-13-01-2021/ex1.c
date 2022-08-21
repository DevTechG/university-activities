#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p,i;
	p=(int *) malloc(5* sizeof(int));
	for (i=0;i<=4;i++) {
		printf("Digite o numero presente na %d posicao: ",i+1);
		scanf("%d",&p[i]);
	}
	for (i=0;i<=4;i++) {
		printf("%d | ",p[i]);
	}
	free(p);
	return 0;
}