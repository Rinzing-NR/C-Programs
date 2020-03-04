#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	char ch;
	int len,i,vow=0,cons,alp=0,dig=0;
	printf("enter string\n");
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vow++;
		}
		if(((int)ch>=65&&(int)ch<=90)||((int)ch>=97&&(int)ch<=122))
		{
			alp++;
		}
		if(ch>='0'&&ch<='9')
		{
			dig++;
		}
		cons=alp-vow;
	}
	printf(" number of vowels=%d\n number of consonantss=%d\n number of digits=%d\n number of alphabets=%d",vow,cons,dig,alp);
}
