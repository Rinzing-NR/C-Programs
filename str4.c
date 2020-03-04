#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	char txt[20];
	char ch;
	int len,i,d;
	printf("enter string\n");
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if(ch=='Y'||ch=='y'||ch=='Z'||ch=='z')
		{
			d=(int)ch-24;
		}
		else
		{
			d=(int)ch+2;
		}
		txt[i]=(char)d;
	}
	txt[i]='\0';
	printf("%s",txt);
}
