#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int maior_cidade(char enter[], char exit[]) {
char cidade[40],cidade_m[40];
int hab=0,hab_m=0;
FILE *fe;
FILE *fs;
fe = fopen(enter,"r");
fs = fopen(exit,"w");
if (fe==NULL || fs==NULL)
	printf("Erro na abertura do arquivo.\n");
else {
    while(!feof(fe)){
        fscanf(fe,"%s %d ",&cidade,&hab);
    if (hab>hab_m) {
        hab_m=hab;
        strcpy(cidade_m,cidade);
}
}
    fprintf(fs,"Cidade maior numero de habitantes: %s numero total de habitantes: %d ",cidade_m,hab_m);
	fclose(fe);
	fclose(fs);
}
}
