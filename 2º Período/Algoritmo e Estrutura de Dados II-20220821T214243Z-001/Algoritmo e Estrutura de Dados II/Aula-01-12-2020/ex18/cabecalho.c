#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>

int valor_compra(char enter[]){
float valor_total=0,valor=0;
char item[40];
FILE *fe;
fe=fopen(enter,"r");
if (fe==NULL)
	printf("Erro na abertura do arquivo.\n");
else {
    while(1){
        if (feof(fe))
        break;
        fscanf(fe,"%s %f\n",&item,&valor);
        valor_total+=valor;
}
    printf("Valor total da compra: %0.2f reais",valor_total);
	fclose(fe);
}
}
