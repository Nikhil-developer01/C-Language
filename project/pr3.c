#include<stdio.h>

void main(){
	int first,second,third;
	
	printf("Enter A First Angle:");
	scanf("%d",&first);// first = 65
	
	printf("Enter A Second Angle:");
	scanf("%d",&second); // second == 45
	
	third = 180 - (first + second); //180 - (65+45)= 70
	
	printf("Third Angle:%d",third);// 70
}
