#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,sum;
	int arrA[2][2];
	int arrB[2][2];
	int arrC[2][2];
	printf("Enter matrix elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arrA[i][j]);
		}
	}
	printf("Enter matrix elements\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arrB[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			{
				sum=sum+arrA[i][k]*arrB[k][j];
			}
			arrC[i][j]=sum;
		}
	}
	printf("Product of matrices\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",arrC[i][j]);
		}
		printf("\n");
	}
}
