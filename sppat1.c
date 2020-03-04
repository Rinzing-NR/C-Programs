#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l,a,b,space=4;
	for(i=1;i<=5;i++)
	{
		a=1;
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++,a++)
		{
			printf("%d",a);
		}
		for(l=1,b=i-1;i>1&&l<i;l++,b--)
		{
			printf("%d",b);
		}
		printf("\n");
		space--;
	}
}
