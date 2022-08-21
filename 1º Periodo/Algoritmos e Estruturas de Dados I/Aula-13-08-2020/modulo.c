#include <stdio.h>
#include <string.h>

char pol[10][10]; //matriz responsável pelas poltronas do teatro

int menu () {  //função que criará o menu de opções
	int op; //opção selecionada menu
	printf("Digite uma das opcoes a seguir:\n\n1-Ocupacao do teatro\n2-Reserva\n3-Cancelamento da Reserva\n4-Confirmacao\n5-Relatorio\n6-Sair\n");	
	scanf("%d",&op);
	system("cls");
	return op;
}
void sala(){ //funão que inicializará a matriz das poltronas, sendo todas disponíveis de início
	int i, j;
	for(i=0; i<=9; i++){
		for(j=0; j<=9;j++)
			pol[i][j]='D';
	}	
}
int poltronas() { //função que mostrará ao usuário as poltronas na sala e quais estão ocupadas
	int i,j;
	for(i=0;i<=9; i++){
		for(j=0;j<=9;j++)
			printf("%c",pol[i][j]);
		printf("\n");
		}
		system("pause");
		system("cls");
}

int fileira() {
	int f;
	printf("Para efetuar reserva, siga os passos:\nInforme a fileira desejada: \n");
	scanf("%d", &f);
	while (f<0 && f>10) {
		printf("Fileira invalida\n");
		system("pause");							
		system("cls");
		printf("Informe a fileira desejada: \n");
		scanf("%d", &f);
		system("pause");
		system("cls");							
	}
		return f;
}
int coluna(){
	int c;
	printf("Informe a coluna desejada: \n");
	scanf("%d", &c);
	while (c<0 && c>10){
		printf("Coluna invalida\n");
		system("pause");							
		system("cls");
		printf("Informe a coluna desejada: \n");
		scanf("%d", &c);
		system("pause");
		system("cls");
		} 
		return c;
}
int disponibilidade (int f, int c) {
	int tf;
	if(pol[f-1][c-1]=='D') {
		pol[f-1][c-1]='R';
		tf=1;
		return tf;
	} else {
		printf("Cadeira indisponivel para reserva, selecione outra.\n");
		system("pause");
		system("cls");
		tf=0;
		return tf;
	}
}
int tipo_ingresso() {
	int typ;
	printf("Tipo ingresso da reserva: \n1=Normal\n2=Estudante\n3=Menor de idade\n");
		scanf("%d",&typ);
		system("cls");
		while(typ<1&&typ>3){
			printf("Tipo de ingresso invalido \nSelecione o tipo do ingresso corretamente: \n1=Normal\n2=Estudante\n3=Menor de idade\n");
			scanf("%d",&typ);
			system("cls");
		}
}
int pagamento (float in, float est, float menor, int t) {
	float v;
			if(t==1)
				v=in;
			else if(t==2)
				v=est;
			else
				v=menor;
		return v;
}
void cancelar(int codigo, int f, int c) {
	if (codigo<0) {
		printf("Não existe reserva que possa ser cancelada\n");	
	} else {
	if(pol[f-1][c-1]=='R'){
		pol[f-1][c-1]='D';
		printf("Reserva cancelada com sucesso.\n");
		system("pause");
		system("cls");
	}
	}
}
void confirmar(int f, int c) {
	int id;
	printf("Confirmar de Reserva\n \nInforme o codigo da reserva:\n");
	scanf("%d",&id);
		if(pol[f-1][c-1]=='R'){
			pol[f-1][c-1]='C';
			printf("Reserva confirmada com sucesso.\n");
			system("pause");
			system("cls");
		} else {
			printf("Codigo de reserva incorreto.\n");
			system("pause");
			system("cls");
		}
}
void relatorio(int q_r, int q_c, float renda) {
	printf("Relatorio:\nLugares reservados: %d \nLugares confirmados: %d \nLugares Disponiveis: %d \nValor total em reais das reservas ja confirmadas: %0.2f\n",q_r,q_c,(100-(q_r+q_c)),renda);
	system("pause");
	system("cls");
	}
main () {
	int op_m,ing,fil=-1,col=-1,cod=-1,id,qtd_r=0,qtd_c=0,boolean=0,type; 
	float pag=0,val_i,val_e,val_12,lucro=0; 
	char nome[20];
	printf("Digite o valor normal do ingresso: \n");
	scanf("%f", &val_i);
	system("cls");
	printf("Digite o valor do ingresso para estudante: \n");
	scanf("%f", &val_e);
	system("cls");
	printf("Digite o valor do ingresso para menores de 12 anos: \n");
	scanf("%f", &val_12);
	system("cls");
	sala();
	do {
	op_m=menu();
		switch (op_m) {
		case 1:
			poltronas();
			break;
		case 2:
			boolean=0;
			while (boolean==0){
			fil=fileira();
			col=coluna();
			boolean=disponibilidade(fil,col);
			}
			type=tipo_ingresso();
			pag=pagamento(val_i,val_e,val_12,type);
			lucro+=pag;
			printf("\nNome:\n");
			scanf("%s",nome);
			system("cls");
			cod++;
			id=cod;
			qtd_r++;
			printf("Reserva Efetuada com Sucesso\n\nNome: %s\nTipo de Ingresso Solicitado: %d \nValor: %.2f \nPoltrona: \n  Fileira %d \n  Numero da cadeira: %d \nCodigo da compra: %d\n",
	nome,type,pag,fil,col,id);
			system("pause");
			system("cls");
			break;
		case 3:
			printf("Cancelamento de Reserva\n\nInforme o codigo da reserva:\n");
			scanf("%d",&id); 
			cancelar(id,fil,col);
			qtd_r--;
			system("cls");
			break;
		case 4:
			confirmar(fil,col);
			qtd_r--;
			qtd_c++;
			break;
		case 5:
			relatorio(qtd_r,qtd_c,lucro);
			break;
		case 6:
			system("cls");
			system("exit");
			break;
	}
	} while (op_m!=6);
}

