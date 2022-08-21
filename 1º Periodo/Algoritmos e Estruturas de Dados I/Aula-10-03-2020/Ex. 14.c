#include <stdio.h>
main(){
	float antigo,novo;
	printf("Digite o salario do funcionario: ");
	scanf("%f",&antigo);
	novo=antigo*1.25;
	printf("\n O novo salario do funcionario é: %8.2f",novo);
}
