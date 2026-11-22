#include<stdio.h>
#include<conio.h>

void main()
{
	//WAP to Perimeter of circle.
    float radius;
	float perimeter;

    printf("Enter radius of circle: ");
    scanf("%f",&radius);

    perimeter = 2 * 3.14 * radius;

    printf("Perimeter of circle = %.2f",perimeter);
}

