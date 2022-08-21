#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct fila {
		int front,rear,tam;
		float *val;
	 }	Fila;

Fila* criarFila(int t) {
	Fila *fi=(Fila*)malloc(sizeof(Fila));
	fi->val=(float*)malloc(t*sizeof(float));
	fi->front=0;
	fi->rear=0;
	fi->tam=t;
	return fi;
}

int estaCheia(Fila *fi) {
	return (fi->rear>=fi->tam);
}

int estaVazia(Fila *fi) {
	return (fi->front==fi->rear);
}
void inserir(Fila *fi,float v) {
	if(estaCheia(fi)) {
		printf("A fila está cheia.\n");
		return;
	}
	fi->val[fi->rear++]=v;
}

float remover(Fila *fi) {
   float valor=0;
   if (estaVazia(fi)) {
	   printf("A fila está vazia.\n");
   }
   valor=fi->val[fi->front++];
   return valor;
}

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
	p->top++;;
	p->val[p->top]=v;
}

float desempilhar(Pilha *p) {
	float valor=0;
	if (isEmpty(p)) {
		printf("Pilha está vazia\n");
	} else {
	valor=p->val[p->top];
	--p->top;
	}
	return valor;
}
void inverte(Fila *fi) {
	Pilha *aux = criarPilha(fi->tam);
	while(!estaVazia(fi)) {
		   empilhar(aux,remover(fi));
	}
    fi->front=0;
	fi->rear=0;
	while(!isEmpty(aux)) {
		   inserir(fi,desempilhar(aux));
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	Fila *fil = criarFila(5);
	inserir(fil,1.1);
	inserir(fil,2.2);
	inserir(fil,3.3);
    inserir(fil,4.4);
	inserir(fil,5.5);
	inverte(fil);
	while (!estaVazia(fil)){
	printf("Valor da pilha %.2f\n", remover(fil));
	}
	return 0;
}
