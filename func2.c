#include<stdio.h>
#include<conio.h>

void transpose(int [][3]);
void main()
{
	int arr[3][3],i,j;
	printf("Enter elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	transpose(arr);
}
void transpose(int x[][3])
{
	int i,j,trans[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			trans[i][j]=x[j][i];
		}
	}
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}
}
