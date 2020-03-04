#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char ch,str1[20],str2[20];
	int len,i,d;
	printf("Enter string\n");
	gets(str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		ch=str1[i];
		if((int)ch>=65&&(int)ch<=90)
		{
			d=(int)ch+32;
		}
		else if((int)ch>=97&&(int)ch<=122)
		{
			d=(int)ch-32;
		}
		else
		{
			d=(int)ch;
		}
		str2[i]=(int)d;
	}
	str2[i]='\0';
	puts(str2);
}
