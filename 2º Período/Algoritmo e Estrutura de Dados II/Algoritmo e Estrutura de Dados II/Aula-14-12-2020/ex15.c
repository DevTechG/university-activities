#include <stdio.h>

void imprimir_array (int *vp, int t) {
	int i;
	for (i=0;i<t;i++) {
		   printf(" %d | ",*(vp++));	
	}
}

int main (){
	int vet[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int *vp=vet;
	int t;
	t=sizeof(vet)/sizeof(vet[0]);
	imprimir_array(vp,t);
	return 0;
}