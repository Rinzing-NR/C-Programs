#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	float a,b;
	printf("enter 1 for KB to bytes 2 for meter to inches 3 for gallon to litre\n");
	scanf("%d",&x);
	printf("enter number\n");
	scanf("%f",&a);
	switch(x)
	{
		case 1:
		b=a*1024;
		printf("in bytes=%f",b);
		break;
		case 2:
		b=a*39.34;
		printf("in inch=%f",b);
		break;
		case 3:
		b=a*20/9;
		printf("in liters=%f",b);
		break;
		default:
		printf("invalid input");
	}
}
