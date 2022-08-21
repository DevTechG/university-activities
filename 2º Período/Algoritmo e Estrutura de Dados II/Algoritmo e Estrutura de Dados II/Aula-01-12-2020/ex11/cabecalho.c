#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int contar(char enter[], char word[]) {
int cont=0;
FILE *fe;
fe = fopen(enter,"r");
if (fe==NULL)
	printf("Erro na abertura do arquivo.\n");
else {
    while(!feof(fe)){
//while ( (fgets (enter, sizeof enter,fe))!=NULL){
        fscanf(fe,"%s",enter);
        if (strcmp(word,enter) == 0)
          cont++;
}
    printf("A palavra %s aparece %d vezes no arquivo",word,cont);
	fclose(fe);
}
}
