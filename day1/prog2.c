#include<stdio.h>

void main(){
	int age;
	
	printf("Enter a age:");
	scanf("%d",&age);
	
	if(age>100){
		printf("Enter a Valid age");
	}
	else if(age>18){
		printf("You are Eligible for vote!");
	}
	else if(age<0){
		printf("Enter A positive age");
	}
	else if(age<18){
		printf("You Are not Eligible for vote!");
	}
	
}
