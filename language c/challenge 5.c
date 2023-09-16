#include <stdio.h>
#include <math.h>
int main(){
	//les variables
	float x1,x2,y1,y2;
	float destance;
	//inputs
	printf("valeur de x1 (M): ");
	scanf("%f",&x1);
	printf("valeur de y1 (M): ");
	scanf("%f",&y1);
	printf("valeur de x2 (N): ");
	scanf("%f",&x2);
	printf("valeur de y2 (N): ");
	scanf("%f",&y2);
	//la formule
	destance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	//le resultat:
	printf("%f la destance entr M et N",destance);
	
	
	
	
}
