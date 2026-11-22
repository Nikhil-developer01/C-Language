#include<stdio.h>
#include<conio.h>

void main(){
	//wap to convert temrature celcius into farhenhight
	
	float celcius;
	float farhenhight;
	
	printf("Enter Temprature in Celcius:");
	scanf("%f",&celcius);
	
	farhenhight = (celcius * 9/5)+32;
	
	printf("%.2f",farhenhight);
}
