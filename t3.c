//t3.c

#include <stdio.h>

int main (int argc, char* argv[]){
	int i=argc;
	FILE *pDest;
	FILE *pSource;
	int input;
	int count=0;

	if (argc<2){
		printf("Anna tiedostonimi\n");
		return -1;
	}
	
	pSource=fopen(argv[1],"rb");
	if (!pSource){
		printf("Lähdettä ei löydy");
		return -2;
	}

	
	for (input=getc(pSource);input!=EOF;input=getc(pSource),count++){
		;
	}
	fclose (pSource);
	printf("Merkkejä %d", count);


}