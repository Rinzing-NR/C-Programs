#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char names[10][20],sc[20];
	int i,flag=0;
	printf("Enter names\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",&names[i][0]);
	}
	printf("Enter search name\n");
	scanf("%s",&sc);
	for(i=0;i<10;i++)
	{
		if(strcmp(&names[i][0],sc)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Search found in %d position",i);
	}
	else
	{
		printf("Search not found");
	}
}
