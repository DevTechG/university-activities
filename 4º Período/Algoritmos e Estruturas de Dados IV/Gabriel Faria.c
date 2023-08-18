#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void trocaIS(int *vet,int i) {
	int aux;
	aux=vet[i];
	vet[i]=vet[i+1];
    vet[i+1]=aux;
}

void insertionSort(int *vet,int tam){
    int t=1,i,j;
    for(i=1;i<tam;i++){
        t=0;
        for(j=i-1;j>=0;j--){
            if(vet[j]>vet[j+1]){
                trocaIS(vet,j);
                t=1;
            }
            if(!t)
            	break;
            t=0;
        }
    }
}

void trocaSS(int *vet,int i, int j) {
	int aux=vet[i];
	vet[i]=vet[j];
    vet[j]=aux;
}

void selectionSort(int *vet,int tam){
	int i,j,aux,pos;
	for(i=0;i<tam;i++){
		aux=vet[i];
		pos=i;
	   	for(j=i;j<tam;j++){
            if(aux<vet[j]){
                aux=vet[j];
                pos=j;
            }
        }
        trocaSS(vet,i,pos);
	}  		
}

void trocaBS(int *vet,int i) {
	int aux;
	aux=vet[i];
	vet[i]=vet[i+1];
    vet[i+1]=aux;
}

void bubbleSort(int *vet,int tam){
    int t=1,i,j;
    for(i=0;i<tam;i++){
        t = 0;
        for(j=0;j<tam-1;j++){
            if(vet[j]>vet[j+1]){
                trocaBS(vet,j);
                t=1;
            }
        }
  	     if(!t){
            break;
        }
    }
}

void mostrar(int *vet,int qtd){
	int i;
    for(i=0;i<qtd; i++){
        printf("%d ",vet[i]);
    }
    printf("\n");
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	int vetBS[10],vetSS[10],vetIS[10];
	int i;
	srand(time(NULL));
    for(i=0;i<10;i++) {
    	vetBS[i]=rand()%100;
    	vetSS[i]=rand()%100;
    	vetIS[i]=rand()%100;
	}	
	printf("Vetor Original Bubble Sort: \n");
	mostrar(vetBS,10);
    printf("Vetor Ordenado Bubble Sort: \n");
    bubbleSort(vetBS,10);
    mostrar(vetBS,10);
    
    printf("\nVetor Original Selection Sort: \n");
	mostrar(vetSS,10);
    printf("Vetor Ordenado Selection Sort: \n");
    selectionSort(vetSS,10);
    mostrar(vetSS,10);
    
    printf("\nVetor Original Insertion Sort: \n");
	mostrar(vetIS,10);
    printf("Vetor Ordenado Insertion Sort: \n");
    insertionSort(vetIS,10);
    mostrar(vetIS,10);
}