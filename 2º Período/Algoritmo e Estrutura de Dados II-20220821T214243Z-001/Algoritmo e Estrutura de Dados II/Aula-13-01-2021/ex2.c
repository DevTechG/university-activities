#include <stdio.h>
#include <stdlib.h>

int main () {
	int *p,i,num;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &num);
	p=(int *) malloc(num* sizeof(int));
	for (i=0;i<num;i++) {
		printf("Digite o numero presente na %d posicao: ",i+1);
		scanf("%d",&p[i]);
	}
	for (i=0;i<num;i++) {
		printf("%d | ",p[i]);
	}
	return 0;
}