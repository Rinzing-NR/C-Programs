#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,flag,x=0;
	int mat[4][4];
	int arr[16];
	printf("Enter matrix elements\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i==j)
			{
				break;
			}
			else
			{
				arr[x]=mat[i][j];
				x++;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	flag=0;
	for(i=0;i<x;i++)
	{
		if(arr[i]!=0)
		{
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("upper triangle");
	}
	else
	{
		printf("not upper triangle");
	}
}
