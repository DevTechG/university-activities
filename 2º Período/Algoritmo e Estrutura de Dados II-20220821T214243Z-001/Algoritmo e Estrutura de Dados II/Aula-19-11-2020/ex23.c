#include <stdio.h>

int main() {
 	typedef struct {
	char prf[40];
	int ano;
	}funcionario;
	int i=0;
	funcionario dados[5]; 
 	FILE *fop=fopen("emp.txt", "w");
  while(i<5){
    printf("Escreva a profissao e os anos de servico: \n");
    scanf("%s %d",&dados[i].prf,&dados[i].ano);
	fprintf(fop,"Profissao: %s %d anos servico\n",dados[i].prf,dados[i].ano);
	i++;
}
	fclose(fop);	
	FILE *fp;
	fp=fopen("emp.txt","r");
	i=0;
while(i<5){
	fscanf(fp,"Profissao: %s anos %d",dados[i].prf,dados[i].ano);
	printf("%s %d \n",dados[i].prf,dados[i].ano);   
	i++;
}
fclose(fp);
system("pause");
 return 0;
}
