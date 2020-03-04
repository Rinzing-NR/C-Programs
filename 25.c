#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count=0;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==1)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
