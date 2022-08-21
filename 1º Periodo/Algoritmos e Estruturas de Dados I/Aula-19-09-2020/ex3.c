#include <stdio.h>

int main() {
	int num,anos,semanas,dias;
	printf("Informe uma quantidade de dias qualquer: \n");
	scanf("%d", &num);
	anos=num/365; //variável inteira só recebe parte inteira, então trunca o resto da divisão por 365
	semanas=(num%365)/7; // devolvera o resto da divisão por 365 e dividirá pela quantidade de dias na semana, ex: resto 379/365=14>14/7=2
	dias=(num%365)%7;
	//printf("Ano %d, semanas %d, dias %d",anos,semanas,dias);
	printf("Conversor de Dias\n============================== \n%d dias equivale a %d anos, %d semanas e %d dias",num,anos,semanas,dias);
}
