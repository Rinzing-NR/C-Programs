#include<stdio.h>
#include<conio.h>

void main()
{
	int sale;
	float com;
	printf("enter sale\n");
	scanf("%d",&sale);
	if(sale<=5000)
	{
		com=0.05*sale;
	}
	else if(sale>5000&&sale<=10000)
	{
		com=0.1*sale;
	}
	else if(sale>10000&&sale<20000)
	{
		com=0.2*sale;
	}
	else
	{
		com=0.3*sale;
	}
	printf("SALE\tcommission\n");
	printf("%d\t%f",sale,com);
}
