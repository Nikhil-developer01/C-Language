#include<stdio.h>

void main(){
	int baseSalary,hra,da,ta,totalsalary;
	
	printf("Enter a Base Salary:");
	scanf("%d",&baseSalary);//100
	
	printf("Enter A HRA:");
	scanf("%d",&hra);//10
	
	printf("Enter a DA:");
	scanf("%d",&da);//5
	
	printf("Enter a TA:");
	scanf("%d",&ta);//8
	
	totalsalary= (baseSalary)+ (baseSalary*hra/100)+(baseSalary*da/100)+(baseSalary*ta/100);
	//totalsalary = (100)+(100*10/100)+(100*5/100)+(100*8/100)
					//100+10+5+8
					//123
	printf("Total Salary:%d",totalsalary);// 123
}
