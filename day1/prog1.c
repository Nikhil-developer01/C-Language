#include<stdio.h>

void main(){
	int num;
	
	printf("Enter a num:");
	scanf("%d",&num);
	
	if(num>0){
		printf("Number is positive");
	}
	else if(num<0){
		printf("Number is Negative");
	}
	else if(num==0){
		printf("Number is nutral");
	}
}
