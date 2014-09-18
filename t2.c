//t2.c
#include <stdio.h>

int main (int argc, char* argv[]){
	int i=argc;
	FILE *pDest;
	FILE *pSource;
	int input;


	if (argc<3){
		printf("Anna kopiotavan tiedoston nimi ja uusi tiedostonimi\n");
		return -1;
	}
	
	pSource=fopen(argv[1],"rb");
	if (!pSource){
		printf("Lähdettä ei löydy");
		return -2;
	}

	pDest=	fopen(argv[2],"wb");
	if (!pDest){
		printf("Kohdetta ei voi luoda");
		return -3;
	}

	for (input=getc(pSource);input!=EOF;input=getc(pSource)){
		putc(input,pDest);
	}
	fclose (pSource);
	fclose(pDest);


}