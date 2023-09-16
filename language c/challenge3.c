#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	printf("entrer la valeur a: ");
	scanf("%d",&a);
	printf("entrer la valeur b: ");
	scanf("%d",&b);
	int somme = a+b;
	int soustraction= a-b;
	int multiplication= a*b;
	int division= (int)a/b;
	int reste= a%b;
	printf("a+b=%d\n",somme);
	printf("a-b=%d\n",soustraction);
	printf("a*b%d\n",multiplication);
	printf("a/b=%d\n",division);
	printf("a%%b=%d\n",reste);
	return 0;
}
