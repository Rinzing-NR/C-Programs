#include<stdio.h>
#include<conio.h>

void main()
{
	int x,a,b,res;
	float result;
	printf("enter 1 for addition 2 for subtraction 3 for multiplication 4 for division\n");
	scanf("%d",&x);
	printf("enter 1st number\n");
	scanf("%d",&a);
	printf("enter 2nd number\n");
	scanf("%d",&b);
	switch(x)
	{
		case 1:
		res=a+b;
		printf("result=%d",res);
		break;
		case 2:
		res=a-b;
		printf("result=%d",res);
		break;
		case 3:
		res=a*b;
		printf("result=%d",res);
		break;
		case 4:
		result=(float)a/b;
		printf("result=%f",result);
		break;
		default:
		printf("invalid input");
	}
}
