#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
		int top,tam;
		float *val;
	 }	Pilha;

Pilha* criarPilha (int t) {
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->top=-1;
	//(*p).top=-1;
	p->val=(float*)malloc(t*sizeof(float));
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
void empilhar(Pilha *p, float v) {
	if (isFull(p)) {
		printf("Pilha está cheia\n");
		return;
	}
	p->top++;
	p->val[p->top]=v;
}

float desempilhar(Pilha *p) {
	float valor;
	if (isEmpty(p)) {
		printf("Pilha está vazia\n");
	} else {
	valor=p->val[p->top];
	--p->top;
	}
	return valor;
}

void transferir(Pilha *p1,Pilha *p2) {
	Pilha *aux = criarPilha(p1->tam);
	while(!isEmpty(p1)) {
		   empilhar(aux,desempilhar(p1));
	}
	while(!isEmpty(aux)) {
		   empilhar(p2,desempilhar(aux));
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	Pilha *pil = criarPilha(3),*p = criarPilha(3);
	empilhar(pil,10.3);
	empilhar(pil,5.1);
	empilhar(pil,4);
	transferir(pil,p);
	while(!isEmpty(p)) {
	   printf("Valor: %.1f\n",desempilhar(p));
	}
	return 0;
}
