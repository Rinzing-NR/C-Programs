#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	int arr[3][3];
	int trans[3][3];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[i][j]=arr[j][i];
		}
	}
	printf("transpose:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}
