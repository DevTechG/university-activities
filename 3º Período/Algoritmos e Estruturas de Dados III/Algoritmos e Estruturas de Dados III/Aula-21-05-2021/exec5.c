#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura geral da �rvore

typedef struct no No; //Criamos uma estrutura do tipo n� e a nomeamos de No

/* Definimos o formato do struct chamado No, com um valor do tipo int
e dois outros n�s, que ser� usado para ser a folha do lado esquerdo, a left
e a folhas do lado direito a right
*/
struct no {
	int val;
	No *right,*left;
};
    
/* Fun��o estaVazia verifica se a �rvore est� vazia ou n�o, ou seja, se a root
� igual a NULL. Retornando 1 se a �rvore estiver vazia e 0 caso contr�rio
*/
int estaVazia(No *root) {
	return root==NULL;
}

/* Fun��o do tipo recursiva chamada inserir, ir� verificar se o N� atual est� 
vazio ou n�o, se estiver significa que � raiz, ir� adicionar o valor a nela e 
encerrar fun��o, caso contr�rio, ir� seguir para o else que ir� verificar se o
valor a ser adicionado � maior que o valor no N� atual ou se � menor. 
Dependendo do resultado ir� chamar recursivamente a fun��o inserir para o N� 
apontado como o esquerdo do No atual ou o n� a direita do atual, ao final dessa 
chamada recursiva, ter� encontrado a folha que ir� armazenar o valor
*/
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

/* Fun��o recursiva remover, ir� realizar a remo��o de um determinado valor da 
�rvore bin�ria. Primeiro � verificado se �rvore est� vazia ou n�o, se estiver 
ir� informar que a �rvore est� vazia e ir� encerrar a fun��o, caso contr�rio ir�
seguir a procura do valor informado para a remo��o, que ter� um if para verificar
se o valor � igual ou se � menor ou maior. No caso de ser igual, existir� tr�s if
principais, um para verificar se o valor armazenado no n� atual � o valor que se
deseja remover e dois outros para verificar se o n�mero que se deseja remover �
maior ou menor que o armazenado no N� atual. Caso o primeiro if seja verdadeiro,
ou seja, o N� atual tem o valor que se deseja remover � feito verifica��es para 
saber se ele o ponteiro left e right do N� armazena nulo, se verdadeiro significa
que � um n� folha � n�o tem nenhum valor ligado a baixo dele e basta dar free no
N�, se n�o for nulo � seguido para o pr�ximo if, que ir� verificar se o left ou o
right � nulo, caso um deles seja nulo ir� armazenar o valor do N� n�o nulo num 
ponteiro auxiliar e dar free no root, se n�o ou seja, ambos as folhas ligado a aquele
No tiver valor � realizado um la�o de repeti��o para recuperar todos os N�s 
apontado pelo atual para n�o perder a �rvore daquele ponto para baixo. Se n�o for
igual ir� percorrer comparar se � menor ou se � igual e dependendo do resultado, 
chamar a fun��o remover recursivamente apontando para o n� com valor armazenado
no left ou no right
*/
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

int menu() {
	printf("Menu de intera�ao com �rvore bin�ria de n�meros inteiros\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("| 1- Inserir um n�mero na �rvore bin�ria.                               |\n");
	printf("| 2- Remover um n�mero da �rvore bin�ria.                               |\n");
	printf("| 3 - Finalizar programa.                                               |\n");
	printf("-------------------------------------------------------------------------\n");	
}



void imprimir(No *root) {
    if(root != NULL) {
        imprimir(root->left);
        printf("%d ", root->val);
        imprimir(root->right);
    }
}


int main() {
	setlocale(LC_ALL, "Portuguese");
    int op, val;
    No *root = NULL;
    root=remover(root,10);
    root=inserir(root,10);
	root=inserir(root,8);
    root=inserir(root,12);
    root=inserir(root,7);
    root=inserir(root,11);
    root=inserir(root,5);
    imprimir(root);
    system("pause");
	system("cls");
	do {
		menu();
		scanf("%d",&op);
		switch(op) {
			case 1:
            system("cls");
            printf("1� op�ao seleciona!\nPor gentileza, informe o car�cter que deseja adicionar na �rvore:\n");
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
			imprimir(root);
			system("pause");
			system("cls");
			break;
        case 3:
			system("cls");
			printf("3� op�ao selecionada!\nSaindo do programa...\n");
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
    } while(op != 3);
}