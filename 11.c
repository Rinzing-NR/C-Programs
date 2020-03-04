#include<stdio.h>
#include<conio.h>

void main()
{
	int eng,mat,phy,che,com,tot;
	float per;
	printf("english\n");
	scanf("%d",&eng);
	printf("physics\n");
	scanf("%d",&phy);
	printf("chemistry\n");
	scanf("%d",&che);
	printf("maths\n");
	scanf("%d",&mat);
	printf("computer\n");
	scanf("%d",&com);
	tot=eng+phy+che+mat+com;
	per=(float)tot/5;
	if(per>=75)
	{
		printf("Passed with star");
	}
	else if(per>=60&&per<75)
	{
		printf("1st division");
	}
	else if(per>=40&&per<60)
	{
		printf("2nd division");
	}
	else
	{
		printf("Fail");
	}
}
