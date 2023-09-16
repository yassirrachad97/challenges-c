#include <stdio.h>
int main(){
	int nombre1;
	int nombre2;
	int lasomme;
	int letriple;
	printf("donner le nombre1: ");
	scanf("%d",&nombre1);
	printf("donner le nombre2: ");
	scanf("%d",&nombre2);
	lasomme=nombre1+nombre2;
	if(nombre1==nombre2){
	letriple=lasomme*3;
	printf("le resultat final: %d",letriple);
}
	else {
		printf("le resultat final: %d",lasomme);
	}
}
