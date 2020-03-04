#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int m,n,i,j,sum,r,copy;
	printf("Enter start point\n");
	scanf("%d",&m);
	printf("Enter end point\n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		sum=0,copy=i;
		while(copy>0)
		{
			r=copy%10;
			sum=sum+(int)pow(r,3);
			copy=copy/10;
		}
		if(sum==i)
		{
			printf("%d ",i);
		}
	}
}
