#include<stdio.h>
#include<conio.h>

void main()
{
	int r,n,sum=0,copy;
	printf("enter number\n");
	scanf("%d",&n);
	copy=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("reverse=%d",sum);
}
