#include<stdio.h>

void main(){
	int num1,num2;
	
	printf("Enter A Number1:");
	scanf("%d",&num1);
	printf("Enter A Number2:");
	scanf("%d",&num2);
	
	if(num1<num2){
		printf("Number is minimum no ");
	}
	else{
		printf("Number is maximum no ");
	}
}
