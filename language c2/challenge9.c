#include <stdio.h>
int main(){
	char chart;
	int ascii;
	printf("donner une caracter:");
	scanf("%c",&chart);
	ascii=(int)chart;
	if(ascii>=65 && ascii<=90){
		printf("le caracter est alphabet majescule.");
		
	}
	else if (ascii>=97 && ascii<=122){
		printf("le caracter est alphabet miniscule:");
	}
	else{
		printf("le caracter est pas un alphabet.");
	}
}
