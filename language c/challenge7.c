#include <stdio.h>
int main(){
	//les variables:
	int nombre;
	//les inputs:
	printf("nombre: ");
	scanf("%d",&nombre);
	//opérations:
	int chiff1= (int)nombre/100;
	int chiff2= (int)(nombre%100)/10;
	int chiff3=(int)nombre%10;
	printf("le nombre inverse du %d: %d%d%d",nombre,chiff3,chiff2,chiff1);
	
}
