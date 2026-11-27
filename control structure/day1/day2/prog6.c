#include<stdio.h>

void main(){
	// wap to check number is even or odd using if else.
	int num;
	
	printf("Enter A Number:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("Number is Even");
	}
	else{
		printf("Number is Odd");
	}
}
