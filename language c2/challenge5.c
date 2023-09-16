#include <stdio.h>

int main(){
	int annee;
	int mois;
	int jour;
	int heur;
	int minute;
	int second;
	printf("donner une annee: ");
	scanf("%d",&annee);
	mois=annee*12;
	jour=mois*30;
	heur=jour*24;
	minute=heur*60;
	second=minute*60;
	printf("les annees par mois: %d\n",mois);
		printf("les annees par jour: %d\n",jour);
			printf("les annees par heur: %d\n",heur);
				printf("les annees par minute: %d\n",minute);
					printf("les annees par second: %d\n",second);
					
}
