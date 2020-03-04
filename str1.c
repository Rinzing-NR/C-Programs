#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	int len;
	printf("enter string\n");
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	printf("Length=%d",len);
}
