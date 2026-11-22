#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Simple interest.
    float principal;
	float rate;
	float time;
	float simpleintrest;

    printf("Enter principal amount: ");
    scanf("%f",&principal);

    printf("Enter rate of interest: ");
    scanf("%f",&rate);

    printf("Enter time in years: ");
    scanf("%f",&time);

    simpleintrest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f",simpleintrest);
}

