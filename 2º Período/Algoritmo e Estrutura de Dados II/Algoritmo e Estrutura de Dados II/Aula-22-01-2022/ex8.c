#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    struct Funcionario {
        char nome[50];
        int idade;
        char sexo[2];
        char cpf[15];
		char data[11];
		int codigo;
		char cargo[30];
		float salario; 
    };
	struct Funcionario f;
	printf("Informe o nome do funcionario : \n");
	gets(f.nome);
	printf("Informe a idade do funcionario: \n");
	scanf("%d",&f.idade);
	getchar();
	printf("Informe o sexo do funcionario (M/F): \n");
	gets(f.sexo);
	printf("Informe o CPF do funcionario: \n");
	gets(f.cpf);
	printf("Informe a data de Nascimento do funcionario: \n");
	gets(f.data);
	printf("Informe o codigo do setor onde trabalha o funcionario(0-99): \n");
	scanf("%d",&f.codigo);
	getchar();
	printf("Informe o cargo que ocupa do funcionario: \n");
	gets(f.cargo);
	printf("Informe o salario do funcionario: \n");
	scanf("%f",&f.salario);
	system("cls");
	printf("Nome: %s \nIdade: %d \nSexo: %s \nCPF: %s \nData de Nascimento: %s \nCodigo do Setor onde trabalha: %d \nCargo que ocupa: %s \nSalario: %6.2f \n"
	,f.nome,f.idade,f.sexo,f.cpf,f.data,f.codigo,f.cargo,f.salario);
	return 0;

}
