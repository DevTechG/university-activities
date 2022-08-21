#include <stdio.h>
main (){
	float alt,maior,menor,media,cont;
	media=0;
	cont=0;
	printf("Digite a altura dos alunos em metros ou -1 para encerrar\n");
	scanf("%f",&alt);
	maior=alt;
	menor=alt;
	if (alt==-1) {
		printf("Nao foi informado nenhum aluno nessa sala");
	} else {
		do{
			if (alt<menor)
				menor=alt;
			if (alt>maior)
				maior=alt;
			media=media+alt;
			cont=cont+1;
			scanf("%f",&alt);
		} while (alt!=-1);
		printf(" O maior aluno da sala possui: %.2f m\n O menor aluno da sala possui: %.2f m\n A altura media dos alunos dessa sala e: %.2f m ",maior,menor,(media/cont));
	}
}
