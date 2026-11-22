#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Find area of sqare.
    float side;
	float area;

    printf("Enter side of square: ");
    scanf("%f",&side);

    area = side * side;

    printf("Area of square = %.2f",area);
}

