#include <stdio.h>
#include <stdlib.h>
int main(){
	//les variables:
	int a;
	int b;
	int c;
	int d;
	int s;
	float m;
	//input:
	printf("valeur a: ");
	scanf("%d",&a);
		printf("valeur b: ");
	scanf("%d",&b);
		printf("valeur c: ");
	scanf("%d",&c);
		printf("valeur d: ");
	scanf("%d",&d);
	//les operations:
	s=a+b+c+d;	
	m=s/4;
	//la résultat:
	printf("%f moyenne",m);
	return 0;
}
