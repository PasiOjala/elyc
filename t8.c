//t8.c

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define LEN 80
int main(){

	char merkki;
	char jono[LEN];
	char* p;

	printf("Anna merkkijono ");
	gets_s(jono,LEN-1);
	
	printf("Anna merkki ");
	scanf_s("%c", &merkki,1);

	p = strchr(jono, merkki);
	if (p == 0){
		printf("merkkia %c ei loydy sanasta %s\n", merkki, jono);
	}
	else {
		printf("merkki %c loytyy sanasta %s\n", merkki, jono);
	}

}