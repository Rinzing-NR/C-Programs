#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l,m,n,a,space1=3,space2=0;
	for(l=1,a=65;l<=7;l++,a++)
	{
		printf("%c",(char)a);
	}
	printf("\n");
	for(i=1;i<=3;i++)
	{
		a=65;
		for(j=1;j<=space1;j++,a++)
		{
			printf("%c",(char)a);
		}
		for(k=1;k<=i;k++,a++)
		{
			printf(" ");
		}
		for(m=1;m<=space2;m++,a++)
		{
			printf(" ");
		}
		for(n=3;n>=i;n--,a++)
		{
			printf("%c",(char)a);
		}
		printf("\n");
		space1--;
		space2++;
	}
}
