#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,lar,sma;
	int arr[3][3];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		lar=arr[i][0],sma=arr[i][0];
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>lar)
			{
				lar=arr[i][j];
			}
			if(arr[i][j]<sma)
			{
				sma=arr[i][j];
			}
		}
		printf("Largest=%d in %d row\n",lar,i);
		printf("Smallest=%d in %d row\n",sma,j);
	}
}
