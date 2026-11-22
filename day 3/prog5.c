#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to calculate age based on birthdate.(date,month,year)
    int date,month,year;
    int currentdate,currentmonth,currentyear;
    int ageYear,ageMonth,ageDate;

    printf("Enter birth date: ");
    scanf("%d %d %d",&date,&month,&year);

    printf("Enter current date: ");
    scanf("%d %d %d",&currentdate,&currentmonth,&currentyear);

    ageYear = currentyear - year;
    ageMonth = currentmonth - month;
    ageDate = currentdate - date;

    printf("Your age is: %dyear %dmonth %ddate",ageYear,ageMonth,ageDate);
}

