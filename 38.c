#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,x;
	float sum=0.0;
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter x\n");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum=(float)x/i+sum;
	}
	printf("sum=%f",sum);
}
