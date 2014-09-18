//t4.c

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

	//check for empty file
	input=getc(pSource);
	if (input == EOF){}
	else{
		count=1;
		for (input=getc(pSource);input!=EOF;input=getc(pSource)){
			if (input==' ' || input=='\n'){
				count++;
			}
		}
	}

	fclose (pSource);
	printf("Sanoja %d", count);


}