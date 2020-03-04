#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,space=4;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",i);
		}
		printf("\n");
		space--;
	}
}
