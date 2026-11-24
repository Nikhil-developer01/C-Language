#include<stdio.h>

void main(){
	
	float celcius,fahrenheit;
	
	printf("The Temparature in Celcius:");
	scanf("%f",&celcius);// celcius = 38;
	
	fahrenheit = (celcius * 9/5)+32;
	// fahrenheit = (38* 9/5)+32;
	// fahrenheit = (68.4)+32;
	// fahrenheit = 100.4
	
	printf("The Temprature in fahrenheit:%.1f",fahrenheit);//100.4
}
