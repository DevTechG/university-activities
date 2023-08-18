#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;

struct no {
	int chave;
    char *nome;
	No *esq,*dir,*pai;
};

typedef struct ab {
  No *raiz;
  int qtd;
} AB;

int estaVazia(No *raiz) {
	return raiz==NULL;
}

No* inserir(No *raiz,int key, char *val) {
    if(estaVazia(raiz)) {
        No *novoNo = (No*)malloc(sizeof(No));
        novoNo->chave = key;
        novoNo->nome = val;
        novoNo->esq = NULL;
        novoNo->dir = NULL;
        return novoNo;
    } else {
        if(key<raiz->chave)
            raiz->esq = inserir(raiz->esq,key,val);
        if(key>raiz->chave)
            raiz->dir = inserir(raiz->dir,key,val);
	return raiz;
    }
}

char *buscar(No *raiz, int key) {
    if(raiz == NULL) {
        return NULL;
    } else {
        if(raiz->chave == key)
            return raiz->nome;
        else {
            if(key < raiz->chave)
                return buscar(raiz->esq, key);
            else
                return buscar(raiz->dir, key);
        }
    }
}

/*void imprimirPreOrdem(No *raiz){
    if(raiz != NULL){
        printf("Chave: %d\n |Nome: %s\n", raiz->chave,(char*)raiz->nome);
        imprimirPreOrdem(raiz->esq);
        imprimirPreOrdem(raiz->dir);
    }
}*/

int maiorChave(No *raiz){
  if(raiz->dir == NULL)
    return raiz->chave;
  else if(raiz != NULL)
    return maiorChave(raiz->dir);
}

int menorChave(No *raiz){
  if(raiz->esq == NULL)
    return raiz->chave;
  else if(raiz != NULL)
    return menorChave(raiz->esq);
}

int main() {
  No *raiz = NULL;

  raiz=inserir(raiz,10,"Ana");
  raiz=inserir(raiz,85,"Maria");
  raiz=inserir(raiz,4,"Joao");
  raiz=inserir(raiz,9,"Paulo");
  raiz=inserir(raiz,150,"Jose");
  raiz=inserir(raiz,14,"Joaquim");
  raiz=inserir(raiz,20,"Pedro");
  
  printf("Buscando... %s \n",buscar(raiz,10));
  printf("Maior raiz... %d\n", maiorChave(raiz));
  printf("Menor raiz... %d\n", menorChave(raiz));
  return 0;
}
