#include<stdio.h>
#include<conio.h>

void main()
{
	int i,rev,copy,r,count=0;
	for(i=11;count<=10;i++)
	{
		rev=0,copy=i;
		while(copy>0)
		{
			r=copy%10;
			rev=rev*10+r;
			copy=copy/10;
		}
		if(rev==i)
		{
			printf("%d ",i);
			count++;
		}
	}
}
