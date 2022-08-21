#include <stdio.h>

void preencher_array (int *vet, int valor) {
	int i;
	for (i=0;i<5;i++) {
		   *(vet++)=valor;	
	}
}

int main (){
	int vetor[5],n,j;
	int *vet=vetor;
	printf("Digite o numero que ira preencher o vetor: \n");
	scanf("%d",&n);
	preencher_array(vet,n);
		for (j=0;j<5;j++) {
		   printf(" %d |",vetor[j]);	
	}
	return 0;
}