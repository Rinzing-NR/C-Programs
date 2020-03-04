#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str1[20],str2[20];
	int l1,l2;
	printf("Enter string\n");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if(strcmp(str1,str2)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
}
