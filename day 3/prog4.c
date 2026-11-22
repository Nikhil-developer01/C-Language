#include<stdio.h>
#include<conio.h>

void main(){
	//wap to second to hh:mm:ss
	int seconds;
	int hh;
	int mm;
	int ss;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hh = seconds / 3600;
    mm = (seconds % 3600) / 60;
    ss = seconds % 60;

    printf("Time = %02d:%02d:%02d", hh, mm, ss);

}
