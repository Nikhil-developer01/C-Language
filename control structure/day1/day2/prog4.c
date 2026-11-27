#include<stdio.h>

void main()
{
	 // wap to find maximum from 5 numbers using nested if else.
	int a,b,c,d,e;
	
	 printf("Enter A:");
	 scanf("%d",&a);
	 printf("Enter B:");
	 scanf("%d",&b);
	 printf("Enter C:");
	 scanf("%d",&c);
	 printf("Enter D:");
	 scanf("%d",&d);
	 printf("Enter E:");
	 scanf("%d",&e);
	
	if(a>b){
		printf("A is Maximum");
	}
	else{
		if(b>c)
		{
			printf("B Is Maximum");		
		}
		else if(c>d)
		{
			printf("C is Maximum");
		}
		else if(d>e)
		{
			printf("D Is Maximum");
		}
		else{
			printf("E is Maximum");
		}
	}
	
}
