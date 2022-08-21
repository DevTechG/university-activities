#include <stdio.h>
#include <stdlib.h>

int main() {
    char enter[40] name[20];
    FILE *fe;
    FILE *fs;
    printf("Arquivo de entrada com extensao: ");
    scanf("%s",enter);
    fe = fopen(enter,"r");
    if (fe==NULL)
        printf("Erro na abertura do arquivo.\n");
    else {
        while(!feof(fe)){
            fscanf(fe,"%s ",name);
            printf("%s\n",name);
        }
    }
	fclose(fe);
}

