#include <stdio.h>
main (){
	float vet[10],media,maior,menor;
	int cont,i_maior=0,i_menor=0;
	printf("Digite o numero que esta na posicao 1 do vetor: \n");
	scanf("%f", &vet[0]);
	maior=vet[0];
	menor=vet[0];
	media=vet[0];
	for (cont=1;cont<10;cont++) {
	printf("Digite o numero que esta na posicao %d do vetor: \n",(cont+1));
	scanf("%f", &vet[cont]);
	media+=vet[cont];
		if (vet[cont]>maior) {
			i_maior=cont;
			maior=vet[cont];
		}			
		if (vet[cont]<menor){
			i_menor=cont;
			menor=vet[cont];	
		}
	}
	system("cls");
	printf("O maior numero e %0.0f com indice %d\nO menor numero é %0.0f com indice %d\nA media dos numeros digitados e %0.1f",maior,i_maior,menor,i_menor,(media/10));
}
