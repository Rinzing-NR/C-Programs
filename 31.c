#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fact=1;
	printf("enter number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
