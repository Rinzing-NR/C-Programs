#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[20];
	printf("Enter string\n");
	gets(str);
	strupr(str);
	puts(str);
}
