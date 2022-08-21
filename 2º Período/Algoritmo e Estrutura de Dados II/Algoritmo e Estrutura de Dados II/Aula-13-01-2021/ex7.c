#include <stdio.h>
#include <stdlib.h>

int main () {
	int *loteria,*sorteados,*escolhido,i,certos=0,j,k=0;;
	loteria=(int *) malloc(6* sizeof(int));
	escolhido=(int *) malloc(6* sizeof(int));
	for (i=0;i<6;i++) {
		printf("\nDigite o %d vencedor da loteria: ",i+1);
		scanf("%d",&loteria[i]);
		printf("Digite o %d escolhido no bilhete: ",i+1);
		scanf("%d",&escolhido[i]);
	}
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {
		if (loteria[i]==escolhido[j]) {
			certos++;
			break;
		}
		}
	}
	sorteados=(int *) malloc(certos* sizeof(int));
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {
		if (loteria[i]==escolhido[j]) {
			sorteados[k]=loteria[i];
			k++;
			break;
		}
		}
	}
	printf("Numeros vencedores: \n");
	for (i=0;i<6;i++) {
		printf("%d | ",loteria[i]);
	}
	printf("\nAcertos: \n");
	for (i=0;i<certos;i++) {
		printf("%d | ",sorteados[i]);
	}
	return 0;
}