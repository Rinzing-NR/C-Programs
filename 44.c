#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,space=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
		space++;
	}
}
