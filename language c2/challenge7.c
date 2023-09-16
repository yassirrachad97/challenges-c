#include <stdio.h>

int main(){
char caracter;
int ascii;	
printf(" le caracter donnee: ");
scanf("%c",&caracter);
ascii = (int)caracter;
if (ascii>=65&&ascii<=90){
	printf("caracter majuscule");
}else{printf("caracter miniscule");
}
}
