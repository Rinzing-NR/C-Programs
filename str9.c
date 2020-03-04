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
	if(strcmp(str1,str2)==0)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
}
