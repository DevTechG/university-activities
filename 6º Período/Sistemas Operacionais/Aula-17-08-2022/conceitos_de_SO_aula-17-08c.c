#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    char exit[40], name[20];
    FILE *fs;
    printf("Arquivo de saida com extensao: ");
    scanf("%s",exit);
    fs = fopen(exit,"w");
    if (fs == NULL)
        printf("Erro na abertura do arquivo.\n");
    else {
        printf("Informe 3 nomes para salvar no arquivo: ");
        for (int i = 1; i < 3; i++) {
            scanf("%s ",name);
            fprintf(fs,"%s\n",name);
        }
        fclose(fs);
    }
}

