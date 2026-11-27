#include<stdio.h>

void main()
{
	// wap to find minimum from 3 numbers using nested if else.
	int a,b,c;
	
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);

	if(a<b)
	{
		printf("A Is Minimum");
	}
	else
	{
		if(b<c){
			printf("B Is Minimum");
		}
		else{
			printf("C Is Minimum");
		}
	}
}
	

