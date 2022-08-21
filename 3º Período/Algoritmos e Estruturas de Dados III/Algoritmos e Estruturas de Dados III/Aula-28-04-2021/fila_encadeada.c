#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

typedef struct no No;

struct no {
	char val;
	No *prox;
};

typedef struct fila{
	No *front,*rear;
} Fila;


Fila* criarFila (){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    fi->front=NULL;
    fi->rear=NULL;
    return fi;
}

int estaVazia(Fila *fi) {
	return fi->front==NULL;
}

int inserir(Fila *fi,char valor) {
    No *novoNo=(No*)malloc(sizeof(No));
    novoNo->val=valor;
    novoNo->prox=NULL;
    if (fi->rear!=NULL)
        fi->rear->prox=novoNo;
	fi->rear=novoNo;
    if (fi->front==NULL)
		fi->front=fi->rear;
	return; 
}

char remover (Fila *fi){
	if (estaVazia(fi)){
		printf("Fila vazia.\n");
		return NULL;
	}
	
	char valor=fi->front->val;
	No *noAux=fi->front;
	fi->front=fi->front->prox;
	free(noAux);
	return valor;
}

int size(Fila *fi){
	No *noAux=fi->front;
	int cont=0;
	while(noAux!=NULL) {
		noAux=noAux->prox;
		cont++;
	}
	return cont;
}

void clear(Fila *fi){
	No *noAux=fi->front, *apagar;
	while(noAux!=NULL) {	
		apagar=noAux;
		noAux=noAux->prox;
		free(apagar);
	}
	fi->front=NULL;
}

void mostrar(Fila *fi){
	No *noAux=fi->front;
	printf("Elementos presentes na fila encadeada: \n");
	while(noAux!=NULL) {
		printf("%c\n",noAux->val);
		noAux=noAux->prox;
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	Fila *fil = criarFila();
	
	int op=0;
	do {
		printf("\nMenu de interacao com fila encadeada de car�cteres\n\n-------------------------------------------------------------------------\n| 1- Inserir novo caractere na fila.                                    |\n| 2- Remover um determinado elemento da fila.                           |\n| 3- Verificar a quantidade de elementos na fila.                       |\n| 4- Limpar a fila.                                                     |\n| 5- Listar todos os elementos da fila.                                 |\n| 6- Mostrar a quantidade de elementos totais e remov�-los.             |\n| 7- Apresentar os elementos em ordem inversa e limpar a fila.          |\n| 8- Inverter os elementos da fila.                                     |\n| 9- Inserir conjunto de caracteres na fila.                            |\n| 10- Finalizar programa.                                               |\n-------------------------------------------------------------------------\n");
		scanf("%d",&op);
		switch(op)
		{
		case 1:
			system("cls");
			printf("Selecionou a 1� opcao!\nPor gentileza, informe o car�ctere que deseja adicionar na fila:\n");
			if (inserir(fil,getch()))
				printf("O valor '%c' foi adicionado com sucessso na fila!\n",fil->rear->val);
			else 
				printf("Valor n�o pode ser adicionado, tente novamente com outro valor");
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 3:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 4:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 5:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 6:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 7:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 8:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 9:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		case 10:
			system("cls");
			printf("Selecionou a � opcao!\nPor gentileza, informe o car�ctere que ser� adicionado na fila:\n");
			break;
		default:
			system("cls");
			printf("a");
			break;
		}
	} while(op!=10);
	inserir(fil,'a');
	inserir(fil,'b');
	inserir(fil,'c');
    inserir(fil,'d');
	inserir(fil,'e');
	printf("Quantidade de elementos na fila %d\n",size(fil));
	mostrar(fil);
	clear(fil);
	while (!estaVazia(fil)){
	printf("Valor da fila %c\n", remover(fil));
	}
	return 0;
}
