#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a=0,b=1,sum=0,n;
	printf("enter limit\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",sum);
		sum=a+b;
		b=a;
		a=sum;
	}
}
