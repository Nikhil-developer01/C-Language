#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Find area of rectangle.
    float length;
	float breadth;
	float area;

    printf("Enter length of rectangle: ");
    scanf("%f",&length);

    printf("Enter breadth of rectangle: ");
    scanf("%f",&breadth);

    area = length * breadth;

    printf("Area of rectangle = %.2f",area);
}

