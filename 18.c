#include<stdio.h>
#include<conio.h>

void main()
{
	int calls;
	float charge,tot;
	printf("enter number of calls\n");
	scanf("%d",&calls);
	if(calls<=50)
	{
		charge=0.0;
	}
	else if(calls>50&&calls<=150)
	{
		charge=0.0*50+(calls-50)*1.0;
    }
	else if(calls>150&&calls<=350)
	{
		charge=0.0*50+100*1.0+(0.9*(calls-150));
	}
	else
	{
		charge=0.0*50+100*1.0+0.9*200+(0.8*(calls-350));
	}
	tot=(float)calls+charge+180;
	printf("calls\tcharge\trental charge\n");
	printf("%d\t%f\t180",calls,charge);
}
