#include <stdio.h>
int main(){
	int nombredeligne;
	int espace;
	int etoiles;
	int i;
	printf("le nombre de ligne: ");
	scanf("%d",&nombredeligne);
	printf("<<<<<<<<<<<<pyramide des stares>>>>>>>>>>>>\n");
	for(i=1;i<=nombredeligne;i++){
		for(espace=1;espace<=(nombredeligne-i);espace++){
			printf("  ");
		}
		for(etoiles=0;etoiles<(2*i)-1;etoiles++){
			printf("* ");
		}
		printf("\n");
			

	}
}
		
	
