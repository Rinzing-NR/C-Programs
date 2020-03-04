#include<stdio.h>
#include<conio.h>

void main()
{
	int inc;
	float tax;
	printf("income\n");
	scanf("%d",&inc);
	tax=inc>=350000?0.1*inc:0.0;
	printf("%f",tax);
}
