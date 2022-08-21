#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no No; 

struct no {
	int val;
	No *right,*left;
};
    
int estaVazia(No *root) {
	return root==NULL;
}

No* inserir(No *root,int valor) {
    if(estaVazia(root)) {
        No *novoNo = (No*)malloc(sizeof(No));
        novoNo->val = valor;
        novoNo->left = NULL;
        novoNo->right = NULL;
        return novoNo;
    } else {
        if(valor<root->val)
            root->left = inserir(root->left,valor);
        if(valor>root->val)
            root->right = inserir(root->right,valor);
	return root;
    }
}

No* remover(No *root,int valor) {
    if(estaVazia(root)) {
        printf(" Arvore vazia!\n");
        return NULL;
    } else {
        if(root->val==valor) {
            if(root->left==NULL && root->right == NULL) {
                free(root);
                return NULL;
            }
            else{
                if(root->left == NULL || root->right == NULL){
                    No *aux;
                    if(root->left != NULL)
                        aux = root->left;
                    else
                        aux = root->right;
                    free(root);
                    return aux;
                }
                else{
                    No *aux = root->left;
                    while(aux->right != NULL)
                        aux = aux->right;
                    root->val = aux->val;
                    aux->val = valor;
                    root->left = remover(root->left, valor);
                    return root;
                }
            }
        } else {
            if(valor < root->val)
                root->left = remover(root->left, valor);
            else
                root->right = remover(root->right, valor);
            return root;
        }
    }
}

void preordem(No *root) {
    if(root != NULL) {
    	printf(" %d |", root->val);
        preordem(root->left);
        preordem(root->right);
    }
}

void emordem(No *root) {
    if(root != NULL) {
        emordem(root->left);
        printf(" %d |", root->val);
        emordem(root->right);
    }
}

void posordem(No *root) {
    if(root != NULL) {
        posordem(root->left);
        posordem(root->right);
        printf(" %d |", root->val);        
    }
}

int menu() {
	printf("Menu de intera�ao com �rvore bin�ria de n�meros inteiros\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("| 1- Inserir um n�mero na �rvore bin�ria.                                |\n");
	printf("| 2- Remover um n�mero da �rvore bin�ria.                                |\n");
	printf("| 3- Listar todos os elementos da �rvore bin�ria em-ordem                |\n");
	printf("| 4- Listar todos os elementos da �rove bin�ria p�s-ordem                |\n");
	printf("| 5- Listar todos os elementos da �rove bin�ria pr�-ordem                |\n");
	printf("| 6- Finalizar programa.                                                 |\n");
	printf("-------------------------------------------------------------------------\n");	
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int op, val;
    No *root = NULL;
    
    root=inserir(root,10);
	root=inserir(root,5);
    root=inserir(root,4);
    root=inserir(root,9);
    root=inserir(root,15);
    root=inserir(root,14);
	root=inserir(root,20);
/*	printf("P�s-ordem: \n");
    posordem(root);
	printf("\n\n------------------------\nPr�-ordem: \n");
    preordem(root);
    printf("\n\n------------------------\nEm-ordem: \n");
    emordem(root);
	system("pause");
	system("cls");*/
	do {
		menu();
		scanf("%d",&op);
		switch(op) {
			case 1:
            system("cls");
            printf("1� op�ao seleciona!\nPor gentileza, informe o n�mero que deseja adicionar na �rvore:\n");
            scanf(" %d",&val);
			root=inserir(root,val);
 			system("pause");
			system("cls");
            break;
        case 2:
			system("cls");
            printf("3� op�ao selecionada!\nInforme o n�mero que deseja remover da �rvore:\n");
			scanf(" %d",&val);
			root = remover(root, val);
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			printf("3� op�ao selecionada!\nExibindo os elementos presentes na �rvore em-ordem:\n");
			emordem(root);
			printf("\n -Sub�rvore a esquerda\n -Raiz\n -Sub�rvore a direita\n");
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			printf("4� op�ao selecionada!\nExibindo os elementos presentes na �rvore p�s-ordem:\n");
			posordem(root);
			printf("\n-Sub�rvore a esquerda\n -Sub�rvore a direita\n -Raiz\n");
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			printf("5� op�ao selecionada!\nExibindo os elementos presentes na �rvore pr�-ordem:\n");
			preordem(root);
			printf("\n -Raiz\n -Sub�rvore a esquerda\n -Sub�rvore a direita:\n");
			system("pause");
			system("cls");
			break;
        case 6:
			system("cls");
			printf("6� op�ao selecionada!\nSaindo do programa...\n");
			system("pause");
			system("cls");
			exit(0);
			break;
		default:
            printf("Usu�rio solicitou op�ao inv�lida, por gentileza escolha uma das op�oes entre 1 � 11.\n");
			system("pause");
			system("cls");
			break;
        }
    } while(op != 6);
}