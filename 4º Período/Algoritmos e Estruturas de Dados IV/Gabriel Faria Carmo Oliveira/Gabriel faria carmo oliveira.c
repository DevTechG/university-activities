#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void trocaShellS(int *vet,int i, int h) {
	int aux;
    aux = vet[i];
    vet[i] = vet[i-h];
    vet[i-h] = aux;
}

void shellSort(int *vet, int qtd){
    int h;
    for(h = 1; h < qtd; h = 3*h+1);
    h = h/3;

    for(; h >=1; h/=3){
        for(int i = h; i < qtd; ++i){
            int j = i;
            for (; vet[j] < vet[j-h] && j >= h; j-=h){
                trocaShellS(vet,j,h);
            }
        }
    }
}

void preencher(int *vet, int qtd){
    for(int i = 0; i < qtd; ++i){
        vet[i] = rand()%50;
    }
}

void mostrar(int *vet, int tam){
    for(int i = 0; i < tam; ++i){
        printf(" %d |", vet[i]);
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tam = 15, vetBS[tam], vetSS[tam],vetIS[tam],vetShellS[tam];
	srand(time(NULL));

	preencher(vetShellS,tam);

    printf("\nVetor Original Shell Sort: \n");
	mostrar(vetShellS,tam);
    printf("Vetor Ordenado Shell Sort: \n");
    shellSort(vetShellS,tam);
    mostrar(vetShellS,tam);
}
