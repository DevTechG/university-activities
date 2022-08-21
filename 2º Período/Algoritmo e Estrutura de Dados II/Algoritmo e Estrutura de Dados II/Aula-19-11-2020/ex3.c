#include <stdio.h>
#include <stdlib.h>

main (){
	char crc,vogais[]="aeiouAEIOU";
	int qtde=0,i;
	FILE *fop;
	fop=fopen("ex3.txt","r");
	if (fop==NULL)
		printf("Erro na abertura do arquivo.\n");
	else {
		printf("Sucesso na abertura do arquivo. \n");
		system("pause");
		system("cls");
		while (1) {
			crc=fgetc(fop);
			if (feof(fop))
				break;
			else {
				for(i=0;i<10;i++) {
					if (crc==vogais[i])
					qtde++;
			} 
		}
}
	printf("A quantidade de vogais existente no arquivo e %d",qtde);
	fclose(fop);
	return 0;
}
}
