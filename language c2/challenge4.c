#include <stdio.h>
#include <math.h>
int main(){
	float a;
	float b;
	float c;
	float delta;
	float x1;
	float x2;
	printf("la valeur de a: ");
	scanf("%f",&a);
	
	printf("la valeur de b: ");
	scanf("%f",&b);
	
	printf("la valeur de c: ");
	scanf("%f",&c);
	
	delta=pow(b,2)-4*a*c;
	if(delta>0){
		x1 = (-b-sqrt(delta))/(2*a);
		x2 = (-b+sqrt(delta))/(2*a);
		printf("(x1,x2)=( %f\t,%f)",x1,x2);
	}
	else if(delta==0){
		x1=(-b)/(2*a);
		printf("x1: %f",x1);
	}else {
		printf("pas du solution.");
	}

}


