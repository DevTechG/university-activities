#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef struct pilha {
		int top,tam;
		char *val;
	 }	Pilha;

Pilha* criarPilha (int t) {
	Pilha *p=(Pilha*)malloc(sizeof(Pilha));
	p->top=-1;
	p->val=(char*)malloc(t*sizeof(char));
	p->tam=t;
	return p;
}

int isFull (Pilha *p) {
	return (p->top>=(p->tam-1));
}

int isEmpty (Pilha *p) {
	return p->top==-1;
	}

void empilhar(Pilha *p,char v) {
	if (isFull(p)) {
		printf("Pilha está cheia\n");
		return;
	}
	p->top++;;
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

typedef struct lista {
	int rear,qtd,tam;
	char *val;
} Lista;

Lista* criarLista(int t){
	Lista *li=(Lista*)malloc(sizeof(Lista));
	li->val=(char*)malloc(t*sizeof(char));
	li->rear=-1;
	li->qtd=0;
	li->tam=t;
}

int estaCheia(Lista *li) {
	return (li->qtd>=li->tam);
}

int estaVazia(Lista *li) {
	return (li->rear==-1);
}

void inserir(Lista *li,char v) {
	if (estaCheia(li)) {
        printf("A lista está cheia.\n");
		return;
	}
	li->rear++;
	li->val[li->rear]=v;
	li->qtd++;
}

void inserirPosicao(Lista *li,char v,int p){
	if (estaCheia(li)) {
        printf("A lista está cheia.\n");
		return;
	}
	for(int i=li->rear;i>=p;i--){
		li->val[i+1]=li->val[i];
	}
	li->val[p]=v;
	li->rear++;
	li->qtd++;
}

char remover(Lista *li,int p) {
	char valor=NULL;
	if (estaVazia(li)) {
		printf("A lista está vazia.\n");
	} else if (p<0 && p>li->rear)
		printf("Posicao informada inválida.\n");
	else{
        valor=li->val[p];
		for(int i=p;i<=li->rear;i++){
			li->val[i]=li->val[i+1];
		}
		li->rear--;
		li->qtd--;
	}
	return valor;
}

char consultar(Lista *li,int p) {
	if (estaVazia(li)) {
		printf("A lista está vazia.\n");
		return NULL;
	} else if (p<0 && p>li->rear) {
		printf("Posicao informada inválida.\n");
		return NULL;
	}
	return li->val[p];
}

int size(Lista *li){
    return li->qtd;
}

void clear(Lista *li){
    li->rear = -1;
    li->qtd = 0;

}

int mostrar(Lista *li){
    int i;
    for (i=0;i<=li->rear;i++)
        printf(" %c |",li->val[i]);
    return i==li->qtd;
}

void ordenar(Lista *li){
    char valor=NULL;
    int i,j;
    for(i=0; i<li->rear; i++){
        for(j=0;j<li->rear-i;j++){
            if(li->val[j]>li->val[j+1]){
                valor=li->val[j];
                li->val[j]=li->val[j+1];
                li->val[j+1]=valor;
            }
        }
    }
}

void ordenarD(Lista *li){
    Pilha *aux=criarPilha(li->qtd);
    ordenar(li);
	while(!estaVazia(li)) {
		empilhar(aux,remover(li,0));
	}
	while(!isEmpty(aux)){
        inserir(li,desempilhar(aux));
    }
}

void inverte(Lista *li){
    Pilha *aux=criarPilha(li->qtd);
    while(!estaVazia(li)){
        empilhar(aux,remover(li,0));
    }

    while(!isEmpty(aux)){
        printf(" %c |",desempilhar(aux));
    }
}

int insPalavra(Lista *li) {
	int i=0;
	char word[50];
	printf("Digite a palavra que deseja adicionar na lista: \n");
	scanf("%s",word);
	do {
		inserir(li,word[i]);
		i++;
	} while (word[i]!='\0');
    if (i>0)
		return 1;
	return 0;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	int t,pos=0,op=0;
	char val;
    printf("Digite o tamanho da lista: ");
    scanf("%d",&t);
    Lista *list=criarLista(t);
    system("cls");
	do {
		printf("Menu de interaçao com lista estática de carácteres\n\n-------------------------------------------------------------------------\n| 1- Inserir novo caractere na lista.                                   |\n| 2- Mostrar um valor e removê-lo da lista.                             |\n| 3- Verificar a quantidade de elementos na lista.                      |\n| 4- Limpar a lista.                                                    |\n| 5- Listar todos os elementos da lista.                                |\n| 6- Mostrar a quantidade de elementos totais e removê-los.             |\n| 7- Apresentar os elementos em ordem inversa e limpar a lista.         |\n| 8- Inserir um conjunto de caracteres na lista.                        |\n| 9- Ordenar a lista em ordem alfabética crescente.                     |\n| 10- Ordenar os elementos da lista em ordem alfabética decrescente     |\n| 11 - Finalizar programa.                                              |\n-------------------------------------------------------------------------\n");
		scanf("%d",&op);
		switch(op) {
		case 1:
            system("cls");
            printf("1ª opçao seleciona!\nPor gentileza, informe o carácter que deseja adicionar na lista:\n");
            scanf(" %c",&val);
            printf("Digite a posiçao em que esse caractere será adicionado: \n");
            scanf("%d",&pos);
            if(estaCheia(list)){
                printf("A fila está cheia.\n");
            } else if (pos>=0 && pos<t && pos<=list->qtd){
                inserirPosicao(list,val,pos);
                printf("O valor '%c' foi adicionado com sucessso na lista!\n",list->val[pos]);
            }else
                printf("Nao foi possível inserir o carácter. Por gentiliza informe uma posicao válida!\n");
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
            printf("2ª opçao selecionada!\nPor gentileza, informe a localizaçao do caráctere que deseja remover da lista:\n");
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
				printf("3ª opçao selecionada!\nContagem de elementos presentes na lista realizada com sucesso...\nA contagem computou %d elemento(s) na lista.\n",size(list));
			else
				printf("Ocorreu um erro durante a contagem dos elementos, por favor tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 4:
			system("cls");
			printf("4ª opçao selecionada!\nRealmente deseja apagar todos os elementos da lista? Digite y para afirmativo.\n");
			if (getch()=='y'){
				clear(list);
				if (size(list)==0)
					printf("Todos os elementos da lista foram removidos com sucesso!\n A lista possui atualmente 0 elementos.\n",size(list));
				else
					printf("Ocorreu um erro durante a realizaçao da exclusao dos elementos da lista.\n Por gentileza, execute a operaçao novamente.");
			} else
				printf("Operacao foi cancelada pelo usuário.\nLista nao foi apagada!\n");
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			printf("5ª opçao selecionada!\nExibindo todos os elementos da lista.\n");
			if (mostrar(list))
				printf("\nTodos os elementos estao sendo exibidos com sucesso.\n");
			else
				printf("Erro durante a exibiçao da lista! Tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			printf("6ª opçao selecionada!\nRealizando a contagem dos elementos presentes na lista antes de removê-los.\n");
			if (size(list)>=0)
				printf("A lista tinha %d elementos e ",size(list));
			else
				printf("Nao foi possível contar a quantidade de elementos presentes na fila e ");
			clear(list);
			if (size(list)==0)
				printf("teve os valores apagado com sucesso.\n");
			else
				printf("nao foi possível apagar a lista, tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			printf("7ª opçao selecionada!\nExibiçao dos elementos em ordem inversa e removendo-os em sequência...\n");
			inverte(list);
			mostrar(list);
			clear(list);
			if (size(list)==0)
				printf("\nA lista foi apagado com sucesso!\n");
			else
				printf("Ocorreu um erro durante a eliminaçao dos elementos da lista, tente novamente.\n");
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			printf("8ª opçao selecionada!\n");
			if (insPalavra(list))
				printf("A palavra foi adicionado com sucesso.\n");
			else
				printf("Ocorreu um erro durante a adiçao da palavra na lista.\n");
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			printf("9ª opçao selecionada!\nOrdenando os valores em ordem alfabética.\n");
			ordenar(list);
			mostrar(list);
			system("pause");
			system("cls");
			break;
		case 10:
			system("cls");
			printf("10ª opçao selecionada!\nOrdenando os valores em ordem alfabética decrescente.\n");
			ordenarD(list);
			mostrar(list);
			system("pause");
			system("cls");
			break;
		case 11:
			system("cls");
			printf("11ª opçao selecionada!\nObrigado pela paciência e desculpe os transtornos.\nEncerrando o programa...\n");
			system("pause");
			system("cls");
			exit(0);
			break;
		default:
			system("cls");
			printf("Número inválido\nUsuário solicitou opçao inválida, por gentileza escolha uma das opçoes entre 1 à 11.\n");
			system("pause");
			system("cls");
			break;
		}
	} while(op!=11);
	return 0;
}
