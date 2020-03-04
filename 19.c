#include<stdio.h>
#include<conio.h>

void main()
{
	int days;
	float fine;
	printf("enter number of days\n");
	scanf("%d",&days);
	if(days<=7)
	{
		fine=0.2*days;
	}
	else if(days>7&&days<=14)
	{
		fine=0.2*7+(days-7)*0.3;
    }
	else if(days>14&&days<=21)
	{
		fine=0.2*7+7*0.3+(days-14)*0.4;
    }
	else
	{
		fine=0.2*7+7*0.3+7*0.4+(days-21)*0.5;
	}
    printf("fine=%f",fine);
}
