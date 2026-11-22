#include<stdio.h>
#include<conio.h>

void main(){
	//swaping of two variables without using third variable and without using + and -.
	int a=10;
	int b=20;
	
	a = a * b; // 10*20=200
    b = a / b; // 200/20=10
    a = a / b; // 200/10=20

	printf("a = %d\n",a);
	printf("b = %d",b);
	
}
