#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a,b,hcf=0,lcm;
	float sum=0.0;
	printf("enter 1st number\n");
	scanf("%d",&a);
	printf("enter 2nd number\n");
	scanf("%d",&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			hcf=i;
		}
	}
	lcm=a*b/hcf;
	printf("hcf=%d lcm=%d",hcf,lcm);
}
