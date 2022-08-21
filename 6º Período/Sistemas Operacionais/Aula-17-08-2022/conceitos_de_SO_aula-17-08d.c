#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[3][20];
    for (int i = 0; i < 3; i++) {
        printf("Informe %d%c nome: ",i+1,167);
        gets(name[i]);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d%c nome informado: %s\n",i+1,167,name[i]);
    }
}

