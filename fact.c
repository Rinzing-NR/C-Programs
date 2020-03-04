#include<stdio.h>
#include<conio.h>

void main()
{
	int x,n,i,j,pro;
	float sum;
	printf("Enter Limit\n");
	scanf("%d",&n);
	printf("Enter x\n");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		pro=1;
		for(j=1;j<=i+1;j++)
		{
			pro=pro*j;
		}
		sum=sum+(float)x/pro;
	}
	printf("%f",sum);
}
