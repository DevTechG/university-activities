#include <stdio.h>
#include <stdlib.h>


int main() {
    struct Endereco {
        char rua[50];
        char bairro[50];
        int numero;
        char cidade[50];
        char estado[2];
    };
    struct Pessoa {
        char nome[50];
        int idade;
        struct Endereco end;
    };
	struct Pessoa p;
	printf("Informe o nome da pessoa: \n");
	gets(p.nome);
	printf("Informe a idade dessa pessoa: \n");
	scanf("%d",&p.idade);
	getchar();
	printf("Rua: \n");
	gets(p.end.rua);
	printf("Bairro: \n");
	gets(p.end.bairro);
	printf("Numero: \n");
	scanf("%d",&p.end.numero);
	getchar();
	printf("Cidade: \n");
	gets(p.end.cidade);
	printf("Estado: \n");
	gets(p.end.estado);
	system("cls");
	printf("Nome: %s \nIdade: %d \nRua: %s \nBairro: %s \nNumero: %d \nCidade: %s \nEstado: %s \n",p.nome,p.idade,p.end.rua,p.end.bairro,p.end.numero,p.end.cidade,p.end.estado);
	return 0;
	
}
