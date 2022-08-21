#include <stdio.h>
#include <stdlib.h>

int main() {
    char enter[40], exit[40], name[20];
    FILE *fe;
    FILE *fs;
    printf("Arquivo de entrada com extensao: ");
    scanf("%s",enter);
    printf("Arquivo de saida com extensao: ");
    scanf("%s",exit);
    fe = fopen(enter,"r");
    fs = fopen(exit,"w");
    if (fe==NULL || fs==NULL)
        printf("Erro na abertura do arquivo.\n");
    else {
        while(!feof(fe)){
            fscanf(fe,"%s ",name);
            fprintf(fs,"%s\n",name);
        }
    }
	fclose(fe);
	fclose(fs);
}
