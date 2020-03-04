#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];
	int l1,l2;
	printf("Enter string 1\n");
	gets(str1);
	printf("Enter string 2\n");
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1>l2)
	{
		printf("String 1 is longer");
	}
	else if(l2>l1)
	{
		printf("String 2 is longer");
	}
	else
	{
		printf("Equal");
	}
}
