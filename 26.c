#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
}
