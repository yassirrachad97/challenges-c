#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nom[30],prenom[30],sexe[10],numtelephone[20];
	printf("ajoute nom: ");
	scanf("%s",nom);
	printf("\n ajouter le prenom: ");
	scanf("%s",prenom);
	int age;
	printf("\n ajouter l'age: ");
	scanf("%d",&age);
	printf("\n ajouter le sex: ");
	scanf("%s",sexe);
	printf("\n ajouter le numero de telephone: ");
	scanf("%s",numtelephone);
	
	printf("informations personnelles:");
	printf("`\n votre nom: %s", nom);
	printf("\n votre prenom: %s", prenom);
	printf("\n votre sexe: %s", sexe);
	printf("\n votre age: %d", age);
	printf("\n votre numero de telephone: %s", numtelephone);
	
	return 0;
}
