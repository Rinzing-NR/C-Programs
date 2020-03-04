#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,space=0,a;
	for(i=1;i<=5;i++)
	{
		a=0;
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--,a=a+3)
		{
			printf("%d",a);
		}
		printf("\n");
		space++;
	}
}
