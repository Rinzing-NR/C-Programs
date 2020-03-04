#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,sum=0;
	int arr[3][3];
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
			sum=sum+arr[i][j];
		}
	}
	printf("Sum=%d",sum);
}
