#include <stdio.h>
#include <stdlib.h>

struct Carro {
        char marca[15];
        int ano;
        float preco;
};

int main() {
	struct Carro carro[5];
	int i;
	float p;
	for (i=0;i<5;i++) {
	printf("Informe a marca do carro: \n");
	gets(carro[i].marca);
	printf("Informe o ano do carro: \n");
	scanf("%d",&carro[i].ano);
	printf("Informe o valor do carro: \n");
	scanf("%f",&carro[i].preco);
	getchar();
	printf("Marca: %s \nAno: %d \nPreco: R$ %.2f",carro[i].marca,carro[i].ano,carro[i].preco);
	getchar();
	system("cls");	
	}
	printf("Informe o valor do carro a ser procurado: \n");
	scanf("%f",&p);
	while (p!=0) {
		for (i=0;i<5;i++) {
			if (carro[i].preco<p) 
				printf("Marca: %s \nAno: %d \nPreco: R$ %.2f\n\n",carro[i].marca,carro[i].ano,carro[i].preco);	
		}
		printf("Informe outro valor do carro a ser procurado (ou 0 para sair): \n");
		scanf("%f",&p);	
	}
	return 0;
	
}
