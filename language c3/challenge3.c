#include<stdio.h>
int main(){
int num;
int i;
int a=0;
printf("donner un nombre: ");
scanf("%d",&num);
for(i=2;i<num;i++){

 if(num%i==0){
			a++;
		}
	}		 if(a==0){
				printf("le nombre est premier\n");
				
			}
			
			else{
				printf("le nombre est ne pas premier\n");
				
			}
			
		}
		
 



