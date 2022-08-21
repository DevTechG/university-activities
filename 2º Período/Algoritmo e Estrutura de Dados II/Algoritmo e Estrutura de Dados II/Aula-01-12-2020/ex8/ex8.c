#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main() {
    char entrada[40];
    char saida[40];
    printf("Arquivo de entrada com extensao: ");
    scanf("%s",entrada);
    printf("Arquivo de saida com extensao: ");
    scanf("%s",saida);
    min_maus(entrada,saida);
}
