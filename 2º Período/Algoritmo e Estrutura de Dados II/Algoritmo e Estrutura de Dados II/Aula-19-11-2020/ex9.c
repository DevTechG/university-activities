#include <stdio.h>
#include <stdlib.h>

main (){
	char crc;
	FILE *part1;
	FILE *part2;
	FILE *novo;
	part1=fopen("ex9a.txt","r");
	part2=fopen("ex9b.txt","r");
	novo=fopen("ex9c.txt","w");
	if (part1==NULL || part2==NULL)
		printf("Erro na abertura do arquivo.\n");
	else {
		while (1) {
			crc=fgetc(part1);
			if (feof(part1))
				break;
			else {
				fputc(crc,novo);
			} 
		}
	while (1) {
			crc=fgetc(part2);
			if (feof(part2))
				break;
			else {
				fputc(crc,novo);
			} 
	}
}
	fclose(part1);
	fclose(part2);
	fclose(novo);
	return 0;
}
