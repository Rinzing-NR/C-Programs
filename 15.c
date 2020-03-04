#include<stdio.h>
#include<conio.h>

void main()
{
	int inc;
	float tax;
	printf("enter annual income\n");
	scanf("%d",&inc);
	if(inc<=50000)
	{
		tax=0.0;
	}
	else if(inc>50000&&inc<=60000)
	{
		tax=0.1*(inc-50000);
	}
	else if(inc>60000&&inc<=150000)
	{
		tax=1000.0+(0.2*(inc-60000));
	}
	else
	{
		tax=19000.0+(0.3*(inc-150000));
	}
	printf("income\ttax\n");
	printf("%d\t%f",inc,tax);
}
