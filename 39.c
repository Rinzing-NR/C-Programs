#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	int i,n,x;
	float sum=0.0;
	printf("enter limit\n");
	scanf("%d",&n);
	printf("enter x\n");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum=(float)pow(x,i)/i+sum;
	}
	printf("sum=%f",sum);
}
