#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
	
	srand(time(NULL));
	int jour=(rand()%7)+1;
	switch(jour){
		case 1:
		printf("lundi.");
		break;
		case 2:
		printf("mardi.");
		break;
		case 3:
		printf("mercredi.");
		break;
		case 4:
		printf("jeudi.");
		break;
		case 5:
		printf("vendredi.");
		break;
		case 6:
		printf("samedi.");
		break;
		case 7:
		printf("dimenche.");
	}
}
	
