#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no No;

struct no {
	int chave;
    void *dado;
	No *esq, *dir, *pai;
};

typedef struct ab {
  No *raiz;
  int qtd;
} AB;

typedef struct pessoa{
    int chave;
    int idade;
    char nome[20];
    char endereco[50];
    char telefone[10];
}Pessoa;

int estaVazia(No *raiz) {
	return raiz == NULL;
}

No* inserir(No *raiz, int key, void *val) {
    if(estaVazia(raiz)) {
        No *novoNo = (No*)malloc(sizeof(No));
        novoNo->chave = key;
        novoNo->dado = val;
        novoNo->esq = NULL;
        novoNo->dir = NULL;
        novoNo->pai = raiz;
        return novoNo;
    } else {
        if(key < raiz->chave){
            raiz->esq = inserir(raiz->esq, key, val);
        }
        if(key > raiz->chave){
            raiz->dir = inserir(raiz->dir, key, val);
        }
        return raiz;
    }
}

No* remover(No *raiz, int key) {

    if(raiz == NULL) {
        //printf("Valor nao presenta na arvore!\n");
        return NULL;
	} else{
        if(raiz->chave == key) {
            if(raiz->esq == NULL && raiz->dir == NULL) {
                free(raiz);
                printf("Valor removido!\n");
                return NULL;
            }
            else{
              if(raiz->esq == NULL || raiz->dir == NULL){
               No *aux;
               if(raiz->esq != NULL){
      			    aux = raiz->esq;
                    printf("Valor removido!\n");
                    }
                   else{
                   	   aux = raiz->dir;
                       printf("Valor removido!\n");
                    }
                    free(raiz);
                    return aux;
                }
                else{
                    No *aux = raiz->esq;
                    while(aux->dir != NULL){
                        aux = aux->dir;
                    }
                    raiz->chave = aux->chave;
                    aux->chave = key;
                    raiz->esq = remover(raiz->esq, key);
                    printf("Valor removido!\n");
                    return raiz;
                }
            }
        } else {
            if(key < raiz->chave){
                raiz->esq = remover(raiz->esq, key);
            }
            else{
                raiz->dir = remover(raiz->dir, key);
            }
            return raiz;
        }
    }
}

Pessoa *buscar(No *raiz, int key) {
	Pessoa *p;
    if(raiz == NULL) {
        return NULL;
    } else {
        if(raiz->chave == key)
            return raiz->dado;
        else {
            if(key < raiz->chave)
                return buscar(raiz->esq, key);
            else
                return buscar(raiz->dir, key);
        }
    }
}


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

int menu() {
  printf("Menu de interaçao com arvore binaria\n\n");
  printf("------------------------------------------------\n");
  printf("| 1- Inserir novos dados arvore.                |\n");
  printf("| 2- Procurar determinado no na arvore.         |\n");
  printf("| 3- Mostrar a menor chave.                     |\n");
  printf("| 4- Mostrar maior chave.                       |\n");
  printf("| 5- Remover dados da arvore.                   |\n");
  printf("| 6- Finalizar programa.                        |\n");
  printf("------------------------------------------------\n");
}

void imprimirPreOrdem(No *raiz){
    if(raiz != NULL){
        printf("Valor da chave: %d\n", raiz->chave);
        imprimirPreOrdem(raiz->esq);
        imprimirPreOrdem(raiz->dir);
    }
}    
    
/*
int main() {
  No *raiz = NULL;
    
  raiz=inserir(raiz,10);
	raiz=inserir(raiz,-85);
  raiz=inserir(raiz,4);
  raiz=inserir(raiz,9);
  raiz=inserir(raiz,150);
  raiz=inserir(raiz,14);
	raiz=inserir(raiz,20);
  raiz=remover(raiz,14);
  imprimirPreOrdem(raiz);
  printf("Buscando... %d \n",buscar(raiz,100));
  printf("Maior raiz... %d\n", maiorChave(raiz));
  printf("Menor raiz... %d\n", menorChave(raiz));
  return 0;
}*/

int main () {
	int op=0,key,id;
	char nome[20],end[50],fone[10];
	No *raiz = NULL;
	Pessoa *p;
	system("cls");
	do {
		menu();
		scanf("%d",&op);
		switch(op) {
		case 1:
            system("cls");
            printf("1 opcao selecionada!\nPor gentileza, informe os dados que a serem adicinados na arvore.\n");
            printf("Informe a chave pertencente aos dados:");
            scanf("%d",&key);
            printf("Informe o nome:");
            scanf("%s",&nome);
            printf("Informe a idade:");
            scanf("%d",&id);
            printf("Informe o endereco:");
            scanf("%s",&end);
            printf("Informe o telefone:");
            scanf("%s",&fone);
            Pessoa *nova=(Pessoa*)malloc(sizeof(Pessoa));
			nova->chave=key;
   	   	    strcpy(nova->nome,nome);
			nova->idade=id;
			strcpy(nova->endereco, end);
			strcpy(nova->telefone, fone);
            inserir(raiz,key,nova);
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
            printf("2 opçao selecionada!\nPor gentileza, informe a chave dos dados para a pessoa que deseja buscar:\n");
			scanf("%d",&key);
			p=buscar(raiz, key);
                if(p == NULL){
                    printf("Valor da chave não existe no sistema\n");
                }
                else{
                    printf("Chave: %d\n", p->chave);
                    printf("Nome: %s\n", p->nome);
                    printf("Idade: %d\n", p->idade);
                    printf("Endereco: %s\n", p->endereco);
                    printf("Telefone: %s\n", p->telefone);
                }

                printf("\n");

                system("pause");
                system("cls");
			break;
		case 3:
			system("cls");
			printf("3 opçao selecionada!\nMostrando a menor chave: %d\n",menorChave(raiz));
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			printf("4 opçao selecionada!\nMostrando a maior chave: %d\n",maiorChave(raiz));
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			printf("5 opçao selecionada!\nRemovendo dados da arvore.\nInforme a chave que deseja remover:");
      scanf("%d",&key);
			if (remover(raiz,key)!=NULL)
				printf("\nChave removida com sucesso.\n");
			else
				printf("Erro durante remocao da chave! verifique a chave e tenten novamente.\n");
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			printf("6 opçao selecionada!\nEncerrando o programa...\n");
			system("pause");
			system("cls");
			exit(0);
			break;
		default:
			system("cls");
			printf("Número inválido\nOpçao invalida, por gentileza escolha uma das opçoes entre 1 e 6.\n");
			system("pause");
			system("cls");
			break;
		}
	} while(op!=6);
	return 0;
}