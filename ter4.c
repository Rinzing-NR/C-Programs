#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("enter side 1\n");
	scanf("%d",&x);
	printf("enter side 2\n");
	scanf("%d",&y);
	printf("enter side 3\n");
	scanf("%d",&z);
	x==y&&y==z?printf("equilateral"):printf("not equilatreral");
}
