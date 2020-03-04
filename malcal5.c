#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int n,i,j,l,s,lp,sp;
	int *arr;
	printf("Enter size\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	l=arr[0],s=arr[0],lp=0,sp=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];
			lp=i;
		}
		if(arr[i]<s)
		{
			s=arr[i];
     		sp=i;
		}		
	}
	printf("Largest is %d in %d position \n",l,lp);
	printf("Smallest is %d in %d position",s,sp);
}
