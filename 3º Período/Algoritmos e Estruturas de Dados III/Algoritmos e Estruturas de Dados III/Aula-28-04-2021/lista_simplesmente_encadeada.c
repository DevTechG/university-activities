#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct nop Nop;

struct nop {
	int valor;
	Nop *prox;
};

typedef struct pilha{
	Nop *topo;
} Pilha;

Pilha* criarPilha() {
	Pilha *p=(Pilha*)malloc(sizeof(Pilha));
	p->topo=NULL;
	return p;

}

int isEmpty(Pilha *p) {
	   return p->topo==NULL;
}

void push(Pilha *p, int valor) {
	Nop *novoNo=	(Nop*)malloc(sizeof(Nop));
	novoNo->valor=valor;
	novoNo->prox=p->topo;
	p->topo=novoNo;
}

int pop (Pilha *p) {
	if (isEmpty(p)){
		printf("Pilha Vazia\n");
		return NULL;
	}
	int valor=p->topo->valor;
	Nop *noAux=p->topo;
	p->topo=p->topo->prox;
	free(noAux);
	return valor;
}

typedef struct no No;

struct no {
	char val;
	No *prox;
};

typedef struct lista {
	No *front;
} Lista;

Lista* criarLista (){
    Lista* li = (Lista*) malloc(sizeof(Lista));
    li->front=NULL;
    return li;
}

int estaVazia(Lista *li) {
	return li->front==NULL;
}

int size(Lista *li) {
	int qtd=0;
	No *aux=li->front;
	while(aux!=NULL) {
		qtd++;
		aux=aux->prox;
	}
	return qtd;
}

void inserir(Lista *li, char v) {
	No *novoNo=	(No*)malloc(sizeof(No));
	novoNo->val=v;
	novoNo->prox=NULL;
	if (estaVazia(li)) {
		li->front=novoNo;
	} else  {
		No *aux = li->front;
		int i;
		for (i=0;i<size(li)-1;i++)
			aux=aux->prox;
		novoNo->prox=aux->prox;
		aux->prox=novoNo;
	}
	return li->front!=novoNo;
}

int inserirPosicao(Lista *li, char v, int p) {
	No *novoNo=	(No*)malloc(sizeof(No));
	novoNo->val=v;
	novoNo->prox=NULL;
	if (estaVazia(li) && p==0) {
		li->front=novoNo;
	} else if (p==0) {
		novoNo->prox=li->front;
		li->front=novoNo;
	}else if (p<=size(li)) {
		No *aux = li->front;
		int i;
		for (i=0;i<p-1;i++)
			aux=aux->prox;
		novoNo->prox=aux->prox;
		aux->prox=novoNo;
	} 
	return 1;
}

char remover(Lista *li, int p) {
	char v=NULL;
	if (estaVazia(li))
		printf("A lista est� vazia");
	else {
		No *noAux=li->front,*ant=NULL;
	int i;
	for (i=0;i<p;i++) {
 		ant=noAux;
		noAux=noAux->prox;
	}
	if (ant!=NULL)
		ant->prox=noAux->prox;
	if (noAux==li->front)
	   	li->front=noAux->prox;
	v=noAux->val;
	free(noAux);
	}
	return v;
}

char consultar(Lista *li,int p) {
	if(p<size(li)) {
		No *noAux=li->front;
		int i;
		for (i=0;i<p;i++) 
			noAux=noAux->prox;
	return noAux->val;
	} else 
		return NULL;
}

void clear(Lista *li) {
	No *noAux=li->front, *apagar;
	while(noAux!=NULL) {
		apagar=noAux;
		noAux=noAux->prox;
		free(apagar);
	}
	li->front=NULL;
}

int mostrar(Lista *li){
	No *noAux=li->front;
	if (estaVazia(li))
		printf("A lista est� vazia");
	else {
		printf("Elementos presentes na fila encadeada: \n");
		int i;
		for (i=0;noAux!=NULL;i++,noAux=noAux->prox)
		   	printf("| %c ",noAux->val);
		printf("\n");      
		return 1;   
	}
	return 0;
}

int insPalavra(Lista *li) {
	int i=0;
	char word[50];
	printf("Digite a palavra que deseja adicionar na fila: \n");
	scanf("%s",word);
	do {
		inserir(li,word[i]);
		i++;
	} while (word[i]!='\0');
	if (i>0)
		return 1;
	return 0;		
}

void ordenar(Lista *li){
    No *noAux=li->front, *aux1, *aux2;
	char valor=NULL;
	while(noAux!=NULL) {
		aux1=noAux;
		aux2=aux1->prox;
		while (aux2!=NULL) {
			if(aux1->val>aux2->val){
				valor = aux1->val;
                aux1->val = aux2->val;
				aux2->val = valor;
            }
            aux2=aux2->prox;
		}
		noAux=noAux->prox;
	}
}

void inverte(Lista *li){
	Pilha *aux=criarPilha();
	while(!estaVazia(li)) {
		push(aux,remover(li,0));
	}
	while(!isEmpty(aux))
		printf("| %c ",pop(aux));
	printf("\n");
}

void ordenarD(Lista *li){
    Pilha *aux=criarPilha();
    ordenar(li);
	while(!estaVazia(li)) {
		push(aux,remover(li,0));
	}
	while(!isEmpty(aux)){
        inserir(li,pop(aux));
    }
}
 
int main () {
	setlocale(LC_ALL, "Portuguese");
	int pos=0,op=0;
	char val;
	Lista *list=criarLista();
    system("cls");
	do {
		printf("Menu de intera�ao com lista est�tica de car�cteres\n\n-------------------------------------------------------------------------\n| 1- Inserir novo caractere na lista.                                   |\n| 2- Mostrar um valor e remov�-lo da lista.                             |\n| 3- Verificar a quantidade de elementos na lista.                      |\n| 4- Limpar a lista.                                                    |\n| 5- Listar todos os elementos da lista.                                |\n| 6- Mostrar a quantidade de elementos totais e remov�-los.             |\n| 7- Apresentar os elementos em ordem inversa e limpar a lista.         |\n| 8- Inserir um conjunto de caracteres na lista.                        |\n| 9- Ordenar a lista em ordem alfab�tica crescente.                     |\n| 10- Ordenar os elementos da lista em ordem alfab�tica decrescente     |\n| 11 - Finalizar programa.                                              |\n-------------------------------------------------------------------------\n");
		scanf("%d",&op);
		switch(op) {
		case 1:
            system("cls");
            printf("1� op�ao seleciona!\nPor gentileza, informe o car�cter que deseja adicionar na lista:\n");
            scanf(" %c",&val);
            printf("Digite a posi�ao em que esse caractere ser� adicionado: \n");
            scanf("%d",&pos);
			if (pos>=0 && pos<=size(list)){
                inserirPosicao(list,val,pos);
                printf("O valor '%c' foi adicionado com sucessso na lista!\n",consultar(list,pos));
            }else
                printf("Nao foi poss�vel inserir o car�cter. Por gentiliza informe uma posicao v�lida!\n");
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
            printf("2� op�ao selecionada!\nPor gentileza, informe a localiza�ao do car�ctere que deseja remover da lista:\n");
			scanf("%d",&pos);
			val=remover(list,pos);
			if(val!=NULL)
			   	printf("O valor '%c' foi removido com sucessso na fila!\n",val);
			else
				printf("Valor nao foi pode ser removido da lista, tente novamente com outro valor.\n");
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			if (size(list)>=0)
				printf("3� op�ao selecionada!\nContagem de elementos presentes na lista realizada com sucesso...\nA contagem computou %d elemento(s) na lista.\n",size(list));
			else
				printf("Ocorreu um erro durante a contagem dos elementos, por favor tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			printf("4� op�ao selecionada!\nRealmente deseja apagar todos os elementos da lista? Digite y para afirmativo.\n");
			if (getch()=='y'){
				clear(list);
				if (size(list)==0)
					printf("Todos os elementos da lista foram removidos com sucesso!\n A lista possui atualmente 0 elementos.\n",size(list));
				else
					printf("Ocorreu um erro durante a realiza�ao da exclusao dos elementos da lista.\n Por gentileza, execute a opera�ao novamente.");
			} else
				printf("Operacao foi cancelada pelo usu�rio.\nLista nao foi apagada!\n");
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			printf("5� op�ao selecionada!\nExibindo todos os elementos da lista.\n");
			if (mostrar(list))
				printf("\nTodos os elementos estao sendo exibidos com sucesso.\n");
			else
				printf("Erro durante a exibi�ao da lista! Tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			printf("6� op�ao selecionada!\nRealizando a contagem dos elementos presentes na lista antes de remov�-los.\n");
			if (size(list)>=0)
				printf("A lista tinha %d elementos e ",size(list));
			else
				printf("Nao foi poss�vel contar a quantidade de elementos presentes na fila e ");
			clear(list);
			if (size(list)==0)
				printf("teve os valores apagado com sucesso.\n");
			else
				printf("nao foi poss�vel apagar a lista, tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			printf("7� op�ao selecionada!\nExibi�ao dos elementos em ordem inversa e removendo-os em sequ�ncia...\n");
			inverte(list);
			mostrar(list);
			clear(list);
			if (size(list)==0)
				printf("\nA lista foi apagado com sucesso!\n");
			else
				printf("Ocorreu um erro durante a elimina�ao dos elementos da lista, tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			printf("8� op�ao selecionada!\n");
			if (insPalavra(list))
				printf("A palavra foi adicionado com sucesso.\n");
			else
				printf("Ocorreu um erro durante a adi�ao da palavra na lista.\n");
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			printf("9� op�ao selecionada!\nOrdenando os valores em ordem alfab�tica.\n");
			ordenar(list);
			mostrar(list);
			system("pause");
			system("cls");
			break;
		case 10:
			system("cls");
			printf("10� op�ao selecionada!\nOrdenando os valores em ordem alfab�tica decrescente.\n");
			ordenarD(list);
			mostrar(list);
			system("pause");
			system("cls");
			break;
		case 11:
			system("cls");
			printf("11� op�ao selecionada!\nObrigado pela paci�ncia e desculpe os transtornos.\nEncerrando o programa...\n");
			system("pause");
			system("cls");
			exit(0);
			break;
		default:
			system("cls");
			printf("N�mero inv�lido\nUsu�rio solicitou op�ao inv�lida, por gentileza escolha uma das op�oes entre 1 � 11.\n");
			system("pause");
			system("cls");
			break;
		}
	} while(op!=11);
	return 0;
}
