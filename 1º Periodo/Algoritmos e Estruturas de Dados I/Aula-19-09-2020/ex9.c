#include <stdio.h>

int main(){
	int cont;
	float n,res,aux;
	printf("Informe um valor para n: \n");
	scanf("%f", &n);
	for (cont=1;cont<=n;cont++) {
			aux=(cont*2)-1;
		if (cont%2!=0)
			res+=(1/aux);
		else 
			res-=(1/aux);	 
	}
	res=res*4;
	printf("o valor de pi e: %f \n",res);
}
