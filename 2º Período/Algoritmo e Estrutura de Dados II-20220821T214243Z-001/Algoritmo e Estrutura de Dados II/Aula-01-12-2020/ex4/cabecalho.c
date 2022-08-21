#include <stdio.h>
#include <stdlib.h>
#include "cabecalho.h"

int vogal () {
char crc,vogais[]="aeiouAEIOU";
int qtde=0,i;
FILE *fop;
fop=fopen("ex4.txt","r");
if (fop==NULL)
	printf("Erro na abertura do arquivo.\n");
else {
	while (1) {
		crc=fgetc(fop);
		if (feof(fop))
			break;
		else {
			for(i=0;vogais[i]!='\0';i++) {
				if (crc==vogais[i])
				qtde++;
		}
	}
}
   return qtde;
}}

int consoante(){
char crc,consoantes[]="qwrtypsdfghjklzxcvbnmQWRTYPSDFGHJKLZXCVBNM";
int qtde=0,i;
FILE *fop;
fop=fopen("ex4.txt","r");
if (fop==NULL)
	printf("Erro na abertura do arquivo.\n");
else {
	while (1) {
		crc=fgetc(fop);
		if (feof(fop))
			break;
		else {
			for(i=0;consoantes[i]!='\0';i++) {
				if (crc==consoantes[i])
				qtde++;
		}
	}
}
   return qtde;
}}
