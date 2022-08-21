#include <stdio.h>
main(){
	float antigo,novo,aumento;
	printf("Digite o salario do funcionario: ");
	scanf("%f",&antigo);
	printf("Digite a porcentagem do aumento do salario: ");
	scanf("%f",&aumento);	
	novo=antigo+(antigo*(aumento/100));
	printf("\n O novo salario do funcionario e: %8.2f",novo);
}
