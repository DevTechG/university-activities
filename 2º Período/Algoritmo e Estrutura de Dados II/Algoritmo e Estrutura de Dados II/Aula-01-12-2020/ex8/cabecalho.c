#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int min_maus(char enter[], char exit[]) {
	char crc;
	FILE *fe;
	FILE *fs;
	fe = fopen(enter,"r");
	fs = fopen(exit,"w");
	if (fe==NULL || fs==NULL)
		printf("Erro na abertura do arquivo.\n");
	else {
        while(1) {
        crc=fgetc(fe);
        if (feof(fe))
				break;
			else
				fputc(toupper(crc),fs);
	}
}
	fclose(fe);
	fclose(fs);
}
