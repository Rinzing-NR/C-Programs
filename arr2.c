#include<stdio.h>
#include<conio.h>

void main()
{
	int arr[10],i,l,s;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	l=arr[0],s=arr[0];
	for(i=0;i<10;i++)
	{
		if(arr[i]>l)
		{
			l=arr[i];
		}
		if(arr[i]<s)
		{
			s=arr[i];
		}
	}
	printf("Largest=%d\nSmallest=%d",l,s);
}
