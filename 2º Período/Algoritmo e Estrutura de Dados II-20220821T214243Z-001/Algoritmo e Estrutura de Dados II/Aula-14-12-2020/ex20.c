#include <stdio.h>

int negativos(float *vet, int N) {
	int j,n=0;
	for (j=0;j<N;j++) {
			if (*(vet++)<0)
 		  n++;	
	}
	return n;
}

int main (){
	int n,i,neg;
	float *vet;
	printf("Informe o tamanho do vetor : \n");
	scanf("%d",&n);
	float v[n];
	for (i=0;i<n;i++) {
	printf("Informe o valor da %d do vetor : \n",(i+1));
	scanf("%f",&v[i]);
	}
	vet=v;
	neg=negativos(vet,n);
	printf("Existem %d numero(s) negativo(s) no vetor",neg);
	return 0;
}