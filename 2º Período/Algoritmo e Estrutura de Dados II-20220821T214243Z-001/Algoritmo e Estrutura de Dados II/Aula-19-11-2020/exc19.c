#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char nome[50],nome_m[50];
float nota=0.0,maior=1.0;
	FILE *fop;
	fop=fopen("ex19.txt","r");
	if (fop==NULL) {
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	while(!feof (fop)){
	fscanf(fop,"NOME: %s NOTA: %f ",&nome,&nota );
	if (nota>maior) {
	maior=nota;
	strcpy (nome_m,nome);
}	
}
	printf("Nome: %s Maior nota: %.1f \n",nome_m, maior);
	fclose(fop);
	system ("pause");
	return 0;
}
