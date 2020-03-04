#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,x;
	float sum=0.0;
	printf("enter limit\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=(float)(i+1)/i+sum;
	}
	printf("sum=%f",sum);
}
