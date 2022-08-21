#include <stdio.h>
#include <stdlib.h>

main (){
	char crc=1;
	FILE *fop;
	fop=fopen("arq.txt","w");
	if (fop==NULL)
		printf("Erro na abertura do arquivo.\n");
	else {
		while (crc!='0') {
			scanf("%s",&crc);
			if (crc=='0')
				break;
				fprintf(fop,"%c", crc);
		}
	fclose(fop);	
}
	FILE *fp;
	crc=1;
	fp=fopen("arq.txt","r");
	if (fp==NULL){
		printf("Erro na abertura do arquivo.\n");
		system("pause");
		exit(1);
	}
	crc=fgetc(fp);
	while (crc!=EOF) {
			printf("%c",crc);
			crc=fgetc(fp);
}	
	fclose(fp);
	return 0;
}
