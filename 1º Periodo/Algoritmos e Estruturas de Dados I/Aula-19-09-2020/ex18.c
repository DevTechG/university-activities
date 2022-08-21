#include <stdio.h>
#include<stdbool.h>
main (){
	int a[3][3],b[3][3],k,j,i,x;
	bool igual;
	printf("Informe um numero que sera acrescentando aos velores de uma das linhas: \n");
	scanf("%d",&x);
	system("cls");
	printf("Informe o indice da linha que sera alterada : \n");
	scanf("%d",&i);
	system("cls");
	for(k=0;k<=2;k++){
		for(j=0;j<=2;j++){
			printf("Digite o elemento da matriz que esta na posicao (%d,%d): ",(k+1),(j+1));
			scanf("%d",&a[k][j]);
			if (k==i-1) b[k][j]=a[k][j]+x;
			else b[k][j]=a[k][j]; 
		}
	}
	system("cls");
	for(k=0;k<=2;k++){
		for(j=0;j<=2;j++)
			printf("| %d ",b[k][j]);
		printf("\n");
	}
}
