#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	printf("enter x\n");
	scanf("%d",&x);
	x%4==0?printf("leap"):printf("not leap");
}
