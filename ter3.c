#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	printf("enter number\n");
	scanf("%d",&x);
	x%7==0&&x%10==7?printf("buzz"):printf("not buzz");
}
