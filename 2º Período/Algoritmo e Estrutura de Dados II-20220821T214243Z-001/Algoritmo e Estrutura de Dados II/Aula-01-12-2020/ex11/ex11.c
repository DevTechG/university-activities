#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main() {
    char entrada[40];
    char palavra[40];
    printf("Arquivo de entrada com extensao: ");
    scanf("%s",entrada);
    printf("Palavra a ser pesquisada no arquivo: ");
    scanf("%s",palavra);
    contar(entrada,palavra);
}
