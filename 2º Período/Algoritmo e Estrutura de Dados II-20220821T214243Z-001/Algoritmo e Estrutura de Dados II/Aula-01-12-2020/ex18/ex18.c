#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int main() {
    char entrada[40];
    printf("Arquivo de entrada com extensao: ");
    scanf("%s",entrada);
    valor_compra(entrada);
}
