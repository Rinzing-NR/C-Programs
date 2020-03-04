#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,j,temp;
	int *arr;
	printf("Enter size\n");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
