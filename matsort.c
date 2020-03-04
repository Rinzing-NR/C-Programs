#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,x,temp;
	int matA[3][3];
    int matB[3][3];
    int arr[9];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matA[i][j]);
		}
	}
	for(i=0,x=0;i<3;i++)
	{
		for(j=0;j<3;j++,x++)
		{
			arr[x]=matA[i][j];
		}
	}
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0,x=0;i<3;i++)
	{
		for(j=0;j<3;j++,x++)
		{
			matB[i][j]=arr[x];
		}
	}
	for(i=0,x=0;i<3;i++)
	{
		for(j=0;j<3;j++,x++)
		{
			printf("%d ",matB[i][j]);
		}
		printf("\n");
	}
}
