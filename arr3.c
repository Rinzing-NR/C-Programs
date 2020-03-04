#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,s,flag=0;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter search\n");
	scanf("%d",&s);
	for(i=0;i<10;i++)
	{
		if(arr[i]==s)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Search found in %d position",i);
	}
	else
	{
		printf("Search not found");
	}
}
