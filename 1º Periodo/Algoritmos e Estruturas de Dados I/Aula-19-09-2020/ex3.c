#include <stdio.h>

int main() {
	int num,anos,semanas,dias;
	printf("Informe uma quantidade de dias qualquer: \n");
	scanf("%d", &num);
	anos=num/365; //vari�vel inteira s� recebe parte inteira, ent�o trunca o resto da divis�o por 365
	semanas=(num%365)/7; // devolvera o resto da divis�o por 365 e dividir� pela quantidade de dias na semana, ex: resto 379/365=14>14/7=2
	dias=(num%365)%7;
	//printf("Ano %d, semanas %d, dias %d",anos,semanas,dias);
	printf("Conversor de Dias\n============================== \n%d dias equivale a %d anos, %d semanas e %d dias",num,anos,semanas,dias);
}
