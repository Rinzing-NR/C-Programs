#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,count,j;
	int *arr;
	printf("Enter size\n");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=2;j<=arr[i];j++)
		{
		    if(arr[i]%j==0)
		    {
			    count++;
		    }
		}
		if(count==1)
		{
			printf("%d ",arr[i]);
		}
	}
}
