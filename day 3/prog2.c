#include<stdio.h>
#include<conio.h>

void main(){
	//wap to convert meter into km
	
	float meter;
	float km;
	
	printf("Enter distance in meters:");
	scanf("%f", &meter);
	
	km = meter / 1000;
	
	printf("distance in %.2f km",km);
}
