#include<stdio.h>
#include<conio.h>

void main()
{
	int units;
	float rate;
	printf("enter \n");
	scanf("%d",&units);
	if(units<=100)
	{
		rate=0.8*units;
	}
	else if(units>100&&units<=200)
	{
		rate=0.8*100+(units-100)*1.0;
	}
	else
	{
		rate=0.8*100+100*1.0+((units-200)*1.2);
	}
	rate=rate+50;
	printf("units\tcharge\n");
	printf("%d\t%f",units,rate);
}
