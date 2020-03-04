#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,j,temp;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
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
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
