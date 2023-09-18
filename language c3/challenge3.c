#include<stdio.h>
int main(){
int num;
int i;
int a=0;
printf("donner un nombre: ");
scanf("%d",&num);
   if (num<=1)
    {
        printf("Le nombre n'est premier");


    }
    else{
	
    
for(i=2;i<num/2;i++){

 if(num%i==0){
			a++;
		}
	}		 if(a==0){
				printf("le nombre est premier");
				
			}
			
			else{
				printf("le nombre est ne pas premier");
				
			}
			
		}
	}
		
 



