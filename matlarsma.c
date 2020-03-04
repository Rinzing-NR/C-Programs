#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,lar,sma,larr=0,larc=0,smar=0,smac=0;
	int arr[3][3];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	lar=arr[0][0],sma=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]>lar)
			{
				lar=arr[i][j];
				larr=i,larc=j;
			}
			if(arr[i][j]<sma)
			{
				sma=arr[i][j];
				smar=i,smac=j;
			}
		}
	}
	printf("Largest=%d in %d row %d column\n",lar,larr,larc);
	printf("Smallest=%d in %d row %d column\n",sma,smar,smac);
}
