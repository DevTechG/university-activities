#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
		int top,tam;
		int *val;
	 }	Pilha;

Pilha* criarPilha (int t) {
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->top=-1;
	//(*p).top=-1;
	p->val=(int*)malloc(t*sizeof(int));
	p->tam=t;

	return p;
}

/*
int isFull (Pilha *p) {
	return (p->top>=(p->tam-1));
	}
*/
bool isFull (Pilha *p) {
	return (p->top>=(p->tam-1));
	}

int isEmpty (Pilha *p) {
	return p->top==-1;
	}
void empilhar(Pilha *p, int v) {
	if (isFull(p)) {
		printf("Pilha está cheia\n");
		return;
	}
	p->top++;
	p->val[p->top]=v;
}

int desempilhar(Pilha *p) {
	int valor=NULL;
	if (isEmpty(p)) {
		printf("Pilha está vazia\n");
	} else {
	valor=p->val[p->top];
	--p->top;
	printf("Valor da pilha %d\n", valor);
	}
	return valor;
}


int main () {
	setlocale(LC_ALL, "Portuguese");
	Pilha *pil = criarPilha(5);
	empilhar(pil,10);
	empilhar(pil,5);
	empilhar(pil,4);
	empilhar(pil,2);
	empilhar(pil,1);
	do desempilhar(pil);
	while(!isEmpty(pil));
	return 0;
}
