#include <stdio.h>
main (){
	float alt[15],mas[15],fem[15],med_f,res,alt_maior,aux;
	int f,m,i,j,gen_maior, sex[15];
	alt_maior=0;
	med_f=0;
	f=0;
	m=0;
	for (i=0;i<=14;i++) {
			printf("Digite altura do estudante: \n");
			scanf("%f",&alt[i]);
			printf("Digite o genero do estudante: \n");
			scanf("%d",&sex[i]);
			if (alt[i]>alt_maior) {
				alt_maior=alt[i]; // verificação e armazanamento maior aluno da sala
				gen_maior=sex[i];
			}
			if (sex[i]==0) { //verificação sexo
				mas[m]=alt[i];	//armazenamento vetor sexo masculino
				m++; //quantidade alunos masculino
				} else {
				med_f+=alt[i]; 	//soma altura sexo feminino
				fem[f]=alt[i]; //armazenamento vetor sexo feminino
				f++; //quantidade estudante feminino
			}
		}
	for (i=1;i<m; i++) {
        printf("\n[%d]",i);
        for (j=0;j<m-i;j++) {
            printf("%d,",j);
            if (mas[j]>mas[j+1]) {
                aux=mas[j];
                mas[j]=mas[j+1];
                mas[j+1]=aux;
				}
			}
		}
	for (i=1;i<f;i++) {
    for (j=0;j<i;j++) {
        if (fem[i]>fem[j]) {
            aux=fem[i];
            fem[i]=fem[j];
            fem[j]=aux;
			}
		}
	}
	printf("O maior aluno da sala possui: %0.2f \nA media dos estudantes do sexo feminino e: %0.2f \nExiste %d alunos homens \n",alt_maior,(med_f/f),m);
	if (gen_maior==0)
	printf("O genero da pessoa mais alta e masculino \n");
	else
	printf("O genero da pessoa mais alta e feminino \n");
	printf("Altura dos estudantes do genero masculino em ordem crescente: \n");
	for (i=0;i<m;i++) 
		printf("%0.2f \n",mas[i]);
	printf("\n Altura dos estudantes do genero feminino em ordem decrescente: \n");
	for (i=0;i<f;i++)
		printf("%0.2f\n",fem[i]);	
}
