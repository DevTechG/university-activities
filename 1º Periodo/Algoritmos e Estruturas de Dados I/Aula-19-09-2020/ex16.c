#include <stdio.h>
#include<stdbool.h>
main (){
	int a[3][3],b[3][3],x,y,aux[3][3];
	bool igual;
	for(x=0;x<=2;x++){
		for(y=0;y<=2;y++){
			printf("\nDigite o elemento da matriz que esta na posicao (%d,%d): ",(x+1),(y+1));
			scanf("%d",&a[x][y]);
		}
	}
	system("cls");
	for(x=0;x<=2;x++){
		for(y=0;y<=2;y++){
			printf("\nDigite o elemento da matriz que esta na posicao (%d,%d): ",(x+1),(y+1));
			scanf("%d",&b[x][y]);
		}
	}
	for(x=0;x<=2;x++){
		for(y=0;y<=2;y++){
			if (a[x][y]==b[x][y])
				aux[x][y]=1;
		}
	}
	for(x=0;x<=2;x++){
		for(y=0;y<=2;y++){
			if (aux[x][y]==1)
				igual=true;
			else {
				igual=false;
				break;
			}
		if (igual==false)
			break;	
		}
	}
	if (igual==true)
		printf("As matrizes sao iguais");
	else
		printf("As matrizes sao diferentes");
}
