#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,s,flag=0,mid,u=9,l=0;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search\n");
	scanf("%d",&s);
	while(u>l)
	{
		mid=(u+l)/2;
		if(arr[mid]>s)
		{
			u=mid-1;
		}
		else if(arr[mid]<s)
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
		printf("Search found in %d position",mid);
	}
	else
	{
		printf("Search not found");
	}
}
