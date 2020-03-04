#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,sum=0;
	int arrA[3][3];
	int arrB[3][3];
	int arrC[3][3];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arrA[i][j]);
		}
	}
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arrB[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arrC[i][j]=arrA[i][j]+arrB[i][j];
		}
	}
	printf("Sum of matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arrC[i][j]);
		}
		printf("\n");
	}
}
