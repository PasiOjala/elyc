////t5.c
//
//#include <stdio.h>
//#include <string.h>
//int sanat(FILE *pSource){
//		//check for empty file
//	int count=0;
//	int input;
//	input=getc(pSource);
//	if (input == EOF){}
//	else{
//		count=1;
//		for (input=getc(pSource);input!=EOF;input=getc(pSource)){
//			if (input==' ' || input=='\n'){
//				count++;
//			}
//			//count++;
//		}
//	}
//	return count;
//}
//
//int rivit(FILE *pSource){
//		//check for empty file
//	int count=0;
//	int input;
//	input=getc(pSource);
//	if (input == EOF){}
//	else{
//		count=1;
//		for (input=getc(pSource);input!=EOF;input=getc(pSource)){
//			if (input=='\n'){
//				count++;
//			}
//			//count++;
//		}
//	}
//	return count;
//}
//
//int merkit(FILE *pSource){
//	int input;	
//	int count=0;
//	//check for empty file
//
//
//		for (input=getc(pSource);input!=EOF;input=getc(pSource),count++){
//			}
//		return count;
//	}
//
//int main (int argc, char* argv[]){
//	int i=argc;
//	FILE *pDest;
//	FILE *pSource;
//	int input;
//	int count=0;
//
//	if (argc<3){
//		printf("Anna tiedostonimi ja -sanat tai -merkit\n");
//		return -1;
//	}
//	
//	pSource=fopen(argv[1],"rb");
//	if (!pSource){
//		printf("Lähdettä ei löydy");
//		return -2;
//	}
//	
//	//if (argv[2]=="-sanat")
//	if (strcmp(argv[2], "-sanat") == 0)
//	{
//		count=sanat(pSource);
//	printf("Sanoja %d", count);
//	}
//	else if (strcmp(argv[2], "-rivit") == 0)
//	{
//		count=rivit(pSource);
//	printf("Riveja %d", count);
//	}
//
//	else printf("vaara argumentti, koita -sanat tai -rivit");
//
//
//
//	fclose (pSource);
//
//
//
//}