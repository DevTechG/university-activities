#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct fila {
		int front,rear,tam,qtde_e;
		char *val;
	 }	Fila;

Fila* criarFila(int t) {
	Fila *fi=(Fila*)malloc(sizeof(Fila));
	fi->val=(char*)malloc(t*sizeof(char));
	fi->front=0;
	fi->rear=0;
	fi->qtde_e=0;
	fi->tam=t;
	return fi;
}

int estaCheia(Fila *fi) {
	return (fi->qtde_e>=fi->tam);
}

int estaVazia(Fila *fi) {
	return (fi->qtde_e==0);
}
void inserir(Fila *fi,char v) {
	if((fi->rear>=fi->tam))
	    fi->rear=0;
	if (estaCheia(fi)) {
        printf("A fila está cheia.\n");
		return;
	}
	fi->val[fi->rear++]=v;
	fi->qtde_e++;
}

char remover(Fila *fi) {
   char valor=0;
   if (estaVazia(fi)) {
	   printf("A fila está vazia.\n");
   }
   if((fi->front>=fi->tam))
	    fi->front=0;
   valor=fi->val[fi->front++];
   --fi->qtde_e;
   return valor;
}

int clean(Fila *fi){
	fi->front=0;
	fi->rear=0;
	fi->qtde_e=0;
    return 0;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	Fila *fil = criarFila(5);
	inserir(fil,'a');
	inserir(fil,'b');
	clean(fil);
	inserir(fil,'c');
    inserir(fil,'d');
	inserir(fil,'e');
	printf("Valor da pilha %c\n", remover(fil));
	inserir(fil,'f');
    inserir(fil,'g');
	inserir(fil,'h');
	inserir(fil,'i');
	inserir(fil,'j');
	while (!estaVazia(fil)){
	printf("Valor da pilha %c\n", remover(fil));
	}
	return 0;
}
