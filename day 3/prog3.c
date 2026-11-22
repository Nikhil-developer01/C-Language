#include<stdio.h>
#include<conio.h>

void main(){
	//wap to inches into feet.
	
	float inches;
	float feet;
	
	printf("Enter length in inches:");
	scanf("%f", &inches);
	
	feet = inches/12;
	
	printf("length in %.2f feet",feet);
}
