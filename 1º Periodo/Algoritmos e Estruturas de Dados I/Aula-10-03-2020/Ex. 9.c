#include <stdio.h>
main(){
	float t,prova,media;
	printf("Digite a nota que o aluno tirou na prova: ");
	scanf("%f",&prova);
	printf("\n Digite a nota que o aluno tirou no trabalho: ");
	scanf("%f",&t);
	media=(t*4+prova*6)/(4+6);
	printf("A media pondera que esse aluno tirou e: %8.1f",media);
}
