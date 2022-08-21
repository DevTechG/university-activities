#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <string.h>

    struct Endereco {
        char rua[50];
        char bairro[50];
        char cep[10];
        char cidade[50];
        char estado[2];
    };
    struct Cadastro {
        char nome[50];
        int idade;
        char identidade[30];
        char cpf[15];
        char sexo[2];
        char estado_civil[15];
        char fone[15];
        float salario; 
        struct Endereco end;
    };
    
int main() {
	int i,m_velho,id_m;
	char id_search[30];
	struct Cadastro p[5];
	bool encontrou=false;
	for (i=0;i<3;i++) {
	printf("Informe o nome da pessoa: \n");
	gets(p[i].nome);
	printf("Informe a idade dessa pessoa: \n");
	scanf("%d",&p[i].idade);
	getchar();
	printf("Informe a identidade da pessoa: \n");
	gets(p[i].identidade);
	printf("Informe o CPF do funcionario: \n");
	gets(p[i].cpf);
	printf("Informe o sexo do funcionario (M/F): \n");
	gets(p[i].sexo);
	printf("Informe o estado civil da pessoa: \n");
	gets(p[i].estado_civil);
	printf("Informe o telefone da pessoa: \n");
	gets(p[i].fone);
	printf("Informe o salario da pessoa: \n");
	scanf("%f",&p[i].salario);
	getchar();
	printf("Rua: \n");
	gets(p[i].end.rua);
	printf("Bairro: \n");
	gets(p[i].end.bairro);
	printf("CEP: \n");
	gets(p[i].end.cep);
	printf("Cidade: \n");
	gets(p[i].end.cidade);
	printf("Estado: \n");
	gets(p[i].end.estado);
	system("cls");
	}
	m_velho=p[0].idade;
	id_m=0;
	for (i=1;i<3;i++) {
		if (p[i].idade>m_velho) {
			m_velho=p[i].idade;
			id_m=i;
		}
	}
	printf("Pessoa com maior idade cadastrada:\n");
	printf("Nome: %s \nIdade: %d \nIdentidade: %s\nCPF: %s\nSexo: %s \nEstado civil: %s \nTelefone: %s \nSalario: %.2f \nRua: %s \nBairro: %s \nCEP: \%s\nCidade: %s\nEstado: %s \n",p[id_m].nome,p[id_m].idade,p[id_m].identidade,p[id_m].cpf,p[id_m].sexo,p[id_m].estado_civil,p[id_m].fone,p[id_m].salario,p[id_m].end.rua,p[id_m].end.bairro,p[id_m].end.cep,p[id_m].end.cidade,p[id_m].end.estado);
	system("pause");
	system("cls");
	printf("Pessoas cadastradas do sexo masculino: \n");
	for (i=0;i<3;i++) {
		if ( strcmp(p[i].sexo,"M")==0) 
			printf("Nome: %s \nIdade: %d\nIdentidade: %s\nCPF: %s\nSexo: %s \nEstado civil: %s \nTelefone: %s \nSalario: %.2f \nRua: %s \nBairro: %s \nCEP: \%s\nCidade: %s\nEstado: %s \n\n",p[i].nome,p[i].idade,p[i].identidade,p[i].cpf,p[i].sexo,p[i].estado_civil,p[i].fone,p[i].salario,p[i].end.rua,p[i].end.bairro,p[i].end.cep,p[i].end.cidade,p[i].end.estado);
	}
	system("pause");
	system("cls");
	printf("Pessoas cadastradas com salario maior que 1000.00: \n");
	for (i=0;i<3;i++) {
		if (p[i].salario>1000) 
			printf("Nome: %s \nIdade: %d \nIdentidade: %s\nCPF: %s\nSexo: %s \nEstado civil: %s \nTelefone: %s \nSalario: %.2f \nRua: %s \nBairro: %s \nCEP: \%s\nCidade: %s\nEstado: %s \n\n",p[i].nome,p[i].idade,p[i].identidade,p[i].cpf,p[i].sexo,p[i].estado_civil,p[i].fone,p[i].salario,p[i].end.rua,p[i].end.bairro,p[i].end.cep,p[i].end.cidade,p[i].end.estado);
	}
	system("pause");
	system("cls");
	printf("Informar identidade da pessoa a ser pesquisada: \n");
	scanf("%s",id_search);
	for (i=0;i<3;i++) {
		if (strcmp(p[i].identidade,id_search)==0) { 
			printf("Nome: %s \nIdade: %d \nIdentidade: %s\nCPF: %s\nSexo: %s \nEstado civil: %s \nTelefone: %s \nSalario: %.2f \nRua: %s \nBairro: %s \nCEP: \%s\nCidade: %s\nEstado: %s \n",p[i].nome,p[i].idade,p[i].identidade,p[i].cpf,p[i].sexo,p[i].estado_civil,p[i].fone,p[i].salario,p[i].end.rua,p[i].end.bairro,p[i].end.cep,p[i].end.cidade,p[i].end.estado);
			encontrou=true; 		   
		   	break;
		}
	}
	if (encontrou==false) {
		printf("Nao existe cadastro correspondente a identidade informada!");	
	}
	return 0;
	
}
