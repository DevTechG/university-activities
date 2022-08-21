#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura geral da árvore

typedef struct no No; //Criamos uma estrutura do tipo nó e a nomeamos de No

/* Definimos o formato do struct chamado No, com um valor do tipo int
e dois outros nós, que será usado para ser a folha do lado esquerdo, a left
e a folhas do lado direito a right
*/
struct no {
	int val;
	No *right,*left;
};
    
/* Função estaVazia verifica se a árvore está vazia ou não, ou seja, se a root
é igual a NULL. Retornando 1 se a árvore estiver vazia e 0 caso contrário
*/
int estaVazia(No *root) {
	return root==NULL;
}

/* Função do tipo recursiva chamada inserir, irá verificar se o Nó atual está 
vazio ou não, se estiver significa que é raiz, irá adicionar o valor a nela e 
encerrar função, caso contrário, irá seguir para o else que irá verificar se o
valor a ser adicionado é maior que o valor no Nó atual ou se é menor. 
Dependendo do resultado irá chamar recursivamente a função inserir para o Nó 
apontado como o esquerdo do No atual ou o nó a direita do atual, ao final dessa 
chamada recursiva, terá encontrado a folha que irá armazenar o valor
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

/* Função recursiva remover, irá realizar a remoção de um determinado valor da 
árvore binária. Primeiro é verificado se árvore está vazia ou não, se estiver 
irá informar que a árvore está vazia e irá encerrar a função, caso contrário irá
seguir a procura do valor informado para a remoção, que terá um if para verificar
se o valor é igual ou se é menor ou maior. No caso de ser igual, existirá três if
principais, um para verificar se o valor armazenado no nó atual é o valor que se
deseja remover e dois outros para verificar se o número que se deseja remover é
maior ou menor que o armazenado no Nó atual. Caso o primeiro if seja verdadeiro,
ou seja, o Nó atual tem o valor que se deseja remover é feito verificações para 
saber se ele o ponteiro left e right do Nó armazena nulo, se verdadeiro significa
que é um nó folha é não tem nenhum valor ligado a baixo dele e basta dar free no
Nó, se não for nulo é seguido para o próximo if, que irá verificar se o left ou o
right é nulo, caso um deles seja nulo irá armazenar o valor do Nó não nulo num 
ponteiro auxiliar e dar free no root, se não ou seja, ambos as folhas ligado a aquele
No tiver valor é realizado um laço de repetição para recuperar todos os Nós 
apontado pelo atual para não perder a árvore daquele ponto para baixo. Se não for
igual irá percorrer comparar se é menor ou se é igual e dependendo do resultado, 
chamar a função remover recursivamente apontando para o nó com valor armazenado
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
	printf("Menu de interaçao com árvore binária de números inteiros\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("| 1- Inserir um número na árvore binária.                               |\n");
	printf("| 2- Remover um número da árvore binária.                               |\n");
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
            printf("1ª opçao seleciona!\nPor gentileza, informe o carácter que deseja adicionar na árvore:\n");
            scanf(" %d",&val);
			root=inserir(root,val);
 			system("pause");
			system("cls");
            break;
        case 2:
			system("cls");
            printf("3ª opçao selecionada!\nInforme o número que deseja remover da árvore:\n");
			scanf(" %d",&val);
			root = remover(root, val);
			imprimir(root);
			system("pause");
			system("cls");
			break;
        case 3:
			system("cls");
			printf("3ª opçao selecionada!\nSaindo do programa...\n");
			system("pause");
			system("cls");
			exit(0);
			break;
		default:
            printf("Usuário solicitou opçao inválida, por gentileza escolha uma das opçoes entre 1 à 11.\n");
			system("pause");
			system("cls");
			break;
        }
    } while(op != 3);
}