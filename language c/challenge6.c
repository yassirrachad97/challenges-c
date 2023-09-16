#include <stdio.h>
#include <stdlib.h>
int main(){
	//les variables
	float r,c;
	//constants
	const float pi=3.1415;
	//input
	printf("donner moi la valeur de r: "),
	scanf("%f",&r);
	//la relation
	c=2*pi*r;
	//la resultat
	printf("la circonference du cercle: %f",c);
	return 0;
	
}
