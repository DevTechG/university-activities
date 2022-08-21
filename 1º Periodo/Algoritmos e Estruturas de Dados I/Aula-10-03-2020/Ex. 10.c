#include <stdio.h>
main(){
	float t,prova,tp,provap,media;
	printf("Digite a nota que o aluno tirou na prova: ");
	scanf("%f",&prova);
	printf("\n Digite o peso da prova: ");
	scanf("%f",&provap);
	printf("\n Digite a nota que o aluno tirou no trabalho: ");
	scanf("%f",&t);
	printf("\n Digite o peso do trabalho: ");
	scanf("%f",&tp);
	media=(t*tp+prova*provap)/(provap+tp);
	printf("A media pondera que esse aluno tirou e: %8.1f",media);
}
