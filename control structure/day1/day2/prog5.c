#include<stdio.h>

void main()
{
	 // wap to calculate grade based on percentage of 5 subjects of 100 marks.
	 float gujrati,english,maths,science,hindi,percentage;
	 
	 printf("----------Enter A Marks----------\n\n");
	 
	 printf("Enter Marks Of Gujrati:");
	 scanf("%f",&gujrati);
	 printf("Enter Marks Of English:");
	 scanf("%f",&english);
	 printf("Enter Marks Of Maths:");
	 scanf("%f",&maths);
	 printf("Enter Marks Of Science:");
	 scanf("%f",&science);
	 printf("Enter Marks Of Hindi:");
	 scanf("%f",&hindi);
	 
	 percentage = (gujrati+english+maths+science+hindi)/5;
	 
	 printf("Your Percentage is %.2f\n\n",percentage);

	if(percentage>=91 && percentage<=100){
		printf("A Grade");
	}
	else{
		if(percentage>=81 && percentage<=90){
			printf("B+ Grade");
		}
		else if(percentage>=71 && percentage<=80){
			printf("B Grade");
		}
		else if(percentage>=61 && percentage<=70){
			printf("C+ Grade");
		}
		else if(percentage>=51 && percentage<=60){
			printf("C Grade");
		}
		else if(percentage>=41 && percentage<=50){
			printf("D Grade");
		}
		else{
			printf("You Are Failed In Exam");
		}
	}
}
