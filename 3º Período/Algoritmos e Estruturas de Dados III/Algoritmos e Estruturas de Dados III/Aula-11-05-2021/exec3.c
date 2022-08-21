#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct no No;

struct no {
	float valor;
	No *prox;
};

typedef struct pilha{
	No *topo;
} Pilha;

Pilha* criarPilha() {
	Pilha *p=(Pilha*)malloc(sizeof(Pilha));
	p->topo=NULL;
	return p;

}

float isEmpty(Pilha *p) {
	   return p->topo==NULL;
}

void push(Pilha *p, float valor) {
	No *novoNo=	(No*)malloc(sizeof(No));
	novoNo->valor=valor;
	novoNo->prox=p->topo;
	p->topo=novoNo;
}

float pop (Pilha *p) {
	if (isEmpty(p)){
		printf("Pilha Vazia\n");
		return NULL;
	}
	float valor=p->topo->valor;
	No *noAux=p->topo;
	p->topo=p->topo->prox;
	free(noAux);
	return valor;
}

float calcularPosfixa(Pilha *p,char exp[100]){
    float num, nop1, nop2;
    int i=0,idx_atual,idx_decimal,cont;
    do {
        if ((exp[i] == '+')||(exp[i] == '-')||(exp[i] == '*')||(exp[i] == '/')){
            switch (exp[i]){
                case '+' :
                    nop1=pop(p);
                    nop2=pop(p);
                    push(p,nop2+nop1);
                break;
                case '-' :
                    nop1=pop(p);
                    nop2=pop(p);
                    push(p,nop2-nop1);
                break;
                case '*' :
                    nop1=pop(p);
                    nop2=pop(p);
                    push(p,nop2*nop1);
                break;
                case '/' :
                    nop1=pop(p);
                    nop2=pop(p);
                    push(p,nop2/nop1);
                break;
            }
            printf("\n%.2f %c %.2f = %.2f",nop2,exp[i],nop1,p->topo->valor);
        }else{
            idx_atual = i;
            num=0;
            if (exp[i] != ' '){
                cont=0;
                while((isdigit(exp[idx_atual])) && (exp[idx_atual] != ' ')){
                    cont++;
                    idx_atual++;
                }
                for (int k = i; k < (i+cont); k++)
                    num += pow(10,cont-1-(k-i))*((float)exp[k]-'0');

                if (((idx_atual+1) < strlen(exp)) && ((exp[idx_atual]=='.')||(exp[idx_atual]==','))){
                    cont=0;
                    idx_decimal=idx_atual+1;
                        while((isdigit(exp[idx_decimal])) && (exp[idx_decimal] != ' ')){
                            cont++;
                            idx_decimal++;
                        }

                    for (int k = (idx_atual+1); k < (idx_atual+1+cont); k++)
                        num += pow(10,(-1)*(k-idx_atual))*((float)exp[k]-'0');
                    idx_atual=idx_decimal;
                }
                i = idx_atual-1;
                push(p,num);
            }
        }
            i++;
        }while((exp[i] != '\0')&&(exp[i] != '\n')&&(i<strlen(exp)));
    return true;
}

int main(){
    char exp[100];
    Pilha *p=criarPilha();
	printf("Insira a expressão em posfixa a ser executada: ");
	fgets(exp,100,stdin);
	calcularPosfixa(p,exp);
	printf("\nResultado da Expressao: %.2f", pop(p));
	return 0;
}
