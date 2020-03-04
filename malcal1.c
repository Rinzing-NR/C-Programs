#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i;
	int *arr;
	printf("Enter size\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d ",arr[i]);
		}
	}
}
