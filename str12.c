#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch,str[20];
	int len,i,u=0,l=0;
	printf("Enter string\n");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if((int)ch>=65&&(int)ch<=90)
		{
			u++;
		}
		else if((int)ch>=97&&(int)ch<=122)
		{
			l++;
		}
		else
		{
		}
	}
	printf("Uppercases=%d\nLowercases=%d",u,l);
}
