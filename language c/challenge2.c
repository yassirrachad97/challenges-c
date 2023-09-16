#include <stdio.h>
#include <stdlib.h>

int main(){
float c,f;
printf("la temperature en Fahrenheit: ");
scanf("%f", &f);
c = (f-32)/1.8;
printf("la temperature en celsuis: %f\n", c);	
if(c<=10){
	printf("tres friod");
}else if (c<=22){
	printf("froid");
	
}else if(c<=33){
	printf("chaud");
	
}else {
	printf("tres chaud");
	
}
	return 0;	
	
}
