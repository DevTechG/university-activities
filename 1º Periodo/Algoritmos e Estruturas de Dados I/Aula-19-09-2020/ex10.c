#include <stdio.h>

int main(){
	int anos,cont,anos_1=0,anos_2=0;
	float pop_i,proj_1,proj_2;
	printf("Informe o tamanho inicial da populacao: \n");
	scanf("%f", &pop_i);
	printf("Para quantos anos devera ser realizado as projecoes: \n");
	scanf("%d", &anos);
	system("cls");
	proj_1=pop_i;
	proj_2=pop_i;
	for (cont=1;cont<=anos;cont++) {
		proj_1*=1.1;
		proj_2+=50000;
	}
	printf("De acordo com a primeira projecao, em %d anos a populucao sera de %0.0f \nBaseado na segunda projecao, ao fim desse mesmo periodo de tempo a populacao sera de %0.0f\n",anos,proj_1,proj_2);
	cont=0;
	proj_1=pop_i;
	proj_2=pop_i;	
	do {
		if (proj_1<=2*pop_i) {
		proj_1*=1.1;
		anos_1++;
	}
		if (proj_2<=2*pop_i) {
		proj_2+=50000;
		anos_2+=1;
	}
		if ((proj_2>=2*pop_i) && (proj_1>=2*pop_i)) cont=1;
	} while (cont!=1);
	printf("Sera necessario %d anos para que a populacao dobre de acordo com a primeira projecao\nSera necessario %d anos para que a populacao dobre de acordo com a segunda projecao",anos_1,anos_2);
}
