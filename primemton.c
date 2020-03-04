#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,i,j,count;
	printf("Enter start point\n");
	scanf("%d",&m);
	printf("Enter end point\n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==1)
		{
			printf("%d ",i);
		}
	}
}
