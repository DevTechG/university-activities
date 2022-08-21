#include <stdio.h>
#include <stdlib.h>


int main() {
    struct Aluno {
        char nome[30],matricula[30];
        float n1,n2,media;
        int cod_disciplina;
    };
	struct Aluno a[10];
	int i;
	for (i=0;i<10;i++) {
	printf("Informe o nome do aluno: \n");
	gets(a[i].nome);
	printf("Informe a matricula do aluno: \n");
	gets(a[i].matricula);
	printf("Informe o codigo da disciplina: \n");
	scanf("%d",&a[i].cod_disciplina);
	printf("Informe a primeira nota do aluno: \n");
	scanf("%f",&a[i].n1);
	printf("Informe a segunda nota do aluno: \n");
	scanf("%f",&a[i].n2);
	getchar();
	a[i].media=((a[i].n1*1)+(a[i].n2*2))/3;
	system("cls");
	}
	for (i=0;i<10;i++) {
	printf("Nome: %s \nMatricula: %s \nCodigo disciplina: %d\nNota 1: %.2f\nNota 2: %.2f \nMedia final: %.2f \n\n\n",a[i].nome,a[i].matricula,a[i].cod_disciplina,a[i].n1,a[i].n2,a[i].media);	
	}
	return 0;
	
}
