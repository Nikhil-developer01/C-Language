#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Find area of circle.
    float r;
	float area;

    printf("Enter radius of circle: ");
    scanf("%f",&r);

    area = 3.14 * r * r;

    printf("Area of circle = %.2f",area);
}

