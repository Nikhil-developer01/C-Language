#include<stdio.h>
#include<conio.h>

void main(){
	//swaping of two variables without using third variable
	int a=10;
	int b=20;
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("a = %d\n",a);
	printf("b = %d",b);
	
}
