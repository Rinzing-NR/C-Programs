#include<stdio.h>
#include<conio.h>

void main()
{
	char names[5][20],ch;
	int i;
	printf("Enter names\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",&names[i][0]);
	}
	for(i=0;i<5;i++)
	{
		ch=names[i][0];
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("%s\n",&names[i][0]);
		}
	}
}
