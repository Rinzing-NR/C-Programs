#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a=0,b=1,sum=0,n;
	printf("enter limit\n");
	scanf("%d",&n);
	while(sum<=n)
	{
		if(sum%2==0)
		{
			printf("%d ",sum);
		}
		sum=a+b;
		b=a;
		a=sum;
	}
}
