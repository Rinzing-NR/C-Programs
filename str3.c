#include<stdio.h>
#include<conio.h>

void main()
{
	char str[20];
	char ch;
	int len,i,count=0;
	printf("enter string\n");
	scanf("%s",&str);
	for(len=0;str[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		ch=str[i];
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			count++;
		}
	}
	printf("number of vowels=%d",count);
}
