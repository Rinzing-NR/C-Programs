#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,x,j,u,l,mid,flag=0;
	int *arr;
	printf("Enter size\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search\n");
	scanf("%d",&x);
	u=n,l=0;
	while(u>l)
	{
		mid=(u+l)/2;
		if(arr[mid]>x)
		{
			u=mid-1;
		}
		else if(arr[mid]<x)
		{
			l=mid+1;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("search found in %d position",mid);
	}
	else
	{
		printf("search not found");
	}
}
