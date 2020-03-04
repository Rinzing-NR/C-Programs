#include<stdio.h>
#include<conio.h>

void main()
{
	int sale;
	float com;
	printf("enter sale\n");
	scanf("%d",&sale);
	if(sale>=100000)
	{
		com=0.25*sale;
	}
	else if(sale>=80000&&sale<100000)
	{
		com=0.225*sale;
	}
	else if(sale>=60000&&sale<80000)
	{
		com=0.2*sale;
	}
	else if(sale>=40000&&sale<60000)
	{
		com=0.15*sale;
	}
	else
	{
		com=0.125*sale;
	}
	printf("commission=%f",com);
}
