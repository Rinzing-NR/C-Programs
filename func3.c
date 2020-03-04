#include<stdio.h>
#include<conio.h>

int x,y,sum;
void input();
void add();
void display();
void main()
{
	input();
	add();
	display();
}
void input()
{
	printf("Enter x\n");
	scanf("%d",&x);
	printf("Enter y\n");
	scanf("%d",&y);
}
void add()
{
	sum=x+y;
}
void display()
{
	printf("Sum=%d",sum);
}
