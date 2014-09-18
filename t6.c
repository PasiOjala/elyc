//t6.c


#include <stdio.h>
#include <string.h>

int main(){

	char merkki;
	char* jono="taateli";
	char* p;

	printf("Anna merkki ");
	scanf("%c",&merkki);

	p=strchr(jono,merkki);
	printf("osoite %p", p);

}