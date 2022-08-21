#include <stdio.h>
#include<stdbool.h>
bool search(int a, int i, int j, int x) {
	int vet[a],cont;
	bool v_f=false;
	for (cont=0;cont<a;cont++){
		printf("Digite um numero que esta no vetor: \n");
		scanf("%d",&vet[cont]);		
	}
	for (cont=i;cont<=j;cont++){
		if (vet[cont]==x) {
			v_f=true;
			break;
		}
	}	
	return v_f;
}
 main () {
 	int tamanho,lim_i,lim_s,valor;
 	bool teste;
	printf("Digite o tamanho do vetor:");
	scanf("%d",&tamanho);
	printf("Digite o indice do limite inferior: ");
	scanf("%d",&lim_i);
	printf("Digite o indice do limite superior: ");
	scanf("%d",&lim_s);
	printf("Digite um valor aleatorio: ");
	scanf("%d",&valor);
	teste=search(tamanho,lim_i,lim_s,valor);
	if (teste==true) printf("O valor %d existe dentro do intervalo %d ate %d",valor,lim_i,lim_s);
	else printf("O valor %d nao existe dentro do intervalo %d ate %d",valor,lim_i,lim_s);
			
 }
