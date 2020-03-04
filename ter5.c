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
	per>=40?printf("Pass"):printf("Fail");
}
