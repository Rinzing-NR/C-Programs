#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	char rev[20];
	int i,len,x=0;
	printf("enter string\n");
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	for(i=len-1;i>=0;x++,i--)
	{
		rev[x]=str[i];
	}
	rev[x]='\0';
	printf("Reverse=%s",rev);
}
