#include<stdio.h>
#include<conio.h>
#include<number.h>

void main()
{
	int a,b,c,d;
	a=sumofdigit(1234);
	printf("sum=%d\n",a);
	b=palin(121);
	if(b==1)
	{
		printf("\nno is palindrome");
	}
	else
	{
		printf("\n no is not palindrome");
	}
	c=armstrong(153);
	if(c==1)
	{
		printf("\n no is armstrong");
	}
	else
	{
		printf("\n no is not armstrong");
	}
	d=convert(13);
	printf("\n the binary number=%d",d);
}
