#include <stdio.h>
int main(){
	int a;
	int i;
	int mult;
	printf("donner un nombre: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++){
		mult=a*i;
		printf("%d * %d = %d \n",a,i,mult);	
	}
}
