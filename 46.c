#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++,a=a+3)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
}
