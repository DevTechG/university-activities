#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct no No;

struct no {
	int valor;
	No *prox;
};

typedef struct pilha{
	No *topo;
} Pilha;

Pilha* criarPilha() {
	Pilha *p=(Pilha*)malloc(sizeof(Pilha));
	p->topo=NULL;
	return p;

}

int isEmpty(Pilha *p) {
	   return p->topo==NULL;
}

void push(Pilha *p, int valor) {
	No *novoNo=	(No*)malloc(sizeof(No));
	novoNo->valor=valor;
	novoNo->prox=p->topo;
	p->topo=novoNo;
}

int pop (Pilha *p) {
	if (isEmpty(p)){
		printf("Pilha Vazia\n");
		return NULL;
	}
	int valor=p->topo->valor;
	No *noAux=p->topo;
	p->topo=p->topo->prox;
	free(noAux);
	return valor;
}

int main () {
	Pilha *p=criarPilha();
	push(p,22);
	push(p,18);
	push(p,15);
	push(p,12);
	push(p,7);
	//pop(p);
	while(!isEmpty(p)) {
		   printf("Valor: %d\n",pop(p));
	}
	return 0;
}
