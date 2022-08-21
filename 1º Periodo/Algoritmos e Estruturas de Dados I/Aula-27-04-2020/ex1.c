#include <stdio.h>
main(){
	float n1,n2,n3,n4,media;
	printf("Digite as quatro notas do aluno: ");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	media=(n1+n2+n3+n4)/4;
	if (media>=7)
		printf("Aluno Aprovado \n");
		else
			printf("Aluno Reprovado \n");
	printf("Com media %0.2f",media);
}
