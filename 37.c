#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	float sum=0.0;
	printf("enter limit\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=(float)1/i+sum;
	}
	printf("sum=%f",sum);
}
