#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct pilha {
		int top,tam;
		char *val;
	 }	Pilha;

Pilha* criarPilha (int t) {
	Pilha *p = (Pilha*)malloc(sizeof(Pilha));
	p->top=-1;
	//(*p).top=-1;
	p->val=(char*)malloc(t*sizeof(char));
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
void empilhar(Pilha *p, char v) {
	if (isFull(p)) {
		printf("Pilha está cheia\n");
		return;
	}
	p->top++;
	p->val[p->top]=v;
}

char desempilhar(Pilha *p) {
	char valor=NULL;
	if (isEmpty(p)) {
		printf("Pilha está vazia\n");
	} else {
	valor=p->val[p->top];
	--p->top;
	}
	return valor;
}
void compPilhas(Pilha *p1, Pilha *p2) {
	bool i = true;

	while(!isEmpty(p1) && !isEmpty(p2)) {
		if (desempilhar(p1) != desempilhar(p2)) {
			i = false;
			break;
		 }
	}
	if (!isEmpty(p1) || !isEmpty(p2))
        i = false;

	if (i)
		printf("As pilhas sao iguais\n ");
	else
		printf("As pilhas sao diferentes\n");
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	Pilha *pil = criarPilha(3),*p = criarPilha(3);
	empilhar(pil,'a');
	empilhar(pil,'b');
	empilhar(pil,'c');
	empilhar(p,'a');
	empilhar(p,'b');
	empilhar(p,'c');
	compPilhas(pil,p);
	return 0;
}
