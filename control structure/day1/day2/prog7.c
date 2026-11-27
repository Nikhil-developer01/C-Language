#include<stdio.h>

void main(){
	// wap to check number is even or odd using if else without using %. - ss
	int num;
	
	printf("Enter A Number:");
	scanf("%d",&num);
	
	if(num/2*2==num)//num/2 divides the number by 2.
					//num/2*2 multiplies the result by 2.
					//If the result is equal to the original number, it is Even.
					//Otherwise, it is Odd.
	{
		printf("Number Is Even");
	}
	else
	{
		printf("Number is Odd");
	}
}
