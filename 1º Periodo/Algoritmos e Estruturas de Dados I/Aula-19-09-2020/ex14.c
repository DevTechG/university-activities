#include <stdio.h>
#include<stdbool.h>
main (){
	int vet_1[10],vet_2[10],i,j,v_1[10],v_2[10];
	bool rptd;
	for (i=0;i<10;i++) {
		printf("Digite o numero que esta na posicao %d do vetor: \n",(i+1));
		scanf("%d",&vet_1[i]);
	}
	system("cls");
	for (i=0;i<10;i++) {
		printf("Digite o numero que esta na posicao %d do vetor: \n",(i+1));
		scanf("%d",&vet_2[i]);
	}
	system("cls");
    for (i=0;i<10;i++) {
        rptd=false;
        for (j=0;j<i;j++) {
            if (vet_1[i]==vet_1[j]) {
                rptd=true;
                break;
            }
        }
        if (!rptd)
            v_1[i]=vet_1[i];
    }
    for (i=0; i<10; i++) {
        rptd=false;
        for (j=0;j<i;j++) {
            if (vet_2[i]==vet_2[j]) {
                rptd=true; //indica que o numero esta repetido
                break;
            }
        }
        if (!rptd) 
			v_2[i]=vet_2[i];
    }
	printf("Elementos em comum entre os dois vetores\n");
	for (i=0;i<10;i++) {
		for (j=0;j<10;j++) {
			if (v_1[i]==v_2[j] && v_1[i]!=0 && v_2[i]!=0) 
				printf("| %d ",v_1[i]);
			}
		}
	}
