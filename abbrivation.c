#include<stdio.h>
#include<conio.h>

void main()
{
	char name[20];
	char str[20];
	char ch;
	int len=0,i,x=0,j;
	printf("Enter name\n");
	gets(name);
	for(len=0;name[len]!='\0';len++);
	for(i=0;i<len;i++)
	{
		ch=name[i];
		str[x]=name[i];
		x++;
		str[x]='.';
		x++;
		for(;i<len && name[i]!=' ';i++);
	}
	x=x-2;
	for(j=(len-1);name[j]!=' ';j--);
	j++;
	for(;j<len;j++,x++)
	{
		str[x]=name[j];
	}
	str[x]='\0';
	printf("%s",str);
}
