#include <stdio.h>
int main(){
	float num;
	printf("ajouter un nombre: ");
		scanf("%f",&num);
		if(num>0){
		printf("nombre positif.");
		}else if(num<0){
		printf("nombre negatif.");
		}else 
			printf("nombre null.");
		
	}
