////t6.c
////Kirjoita ohjelma, jossa m‰‰rittelet: 
////-char tyyppisen muuttujan nimelt‰ merkki 
////-merkkitaulukon jono, joka sis‰lt‰‰ sanan "taateli" 
////-osoittimen p johon voi tallentaa merkkimuuttujan osoitteen 
////Merkki kysyt‰‰n k‰ytt‰j‰lt‰ ja p saa arvokseen strchr-funktion palauttaman arvon. 
////Tulosta lopuksi p:n arvo. Kokeile mit‰ ohjelmaa tulostaa, kun annat eri merkkej‰. 
//
//#include <stdio.h>
//#include <string.h>
//
//int main(){
//
//	char merkki;
//	char* jono="taateli";
//	char* p;
//
//	printf("Anna merkki ");
//	scanf("%c",&merkki);
//
//	p=strchr(jono,merkki);
//	printf("osoite %p", p);
//
//}