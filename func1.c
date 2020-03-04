#include<stdio.h>
#include<conio.h>

void sort(int[]);
void main()
{
	int arr[5],i;
	printf("Enter elements\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr);
}
void sort(int x[])
{
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",x[i]);
	}
}
