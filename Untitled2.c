#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,j,a[3][3],choice,transp[3][3],flag=0,large,small,sumofdigit=0;
	printf("enter array elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter choice: \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		goto trans;
	}
	else if(choice==2)
	{
		goto symm;
	}
	else if(choice==3)
	{
		goto larsml;
	}
	else if(choice==4)
	{
		goto sum;
	}
	else
	{
		goto dft;
	}
	trans:
		
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					transp[i][j]=a[j][i];
				}
			}
			printf("the transpose is\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					printf("%d ",transp[i][j]);
				}
				printf("\n");
			}
			return;
		
	symm:
	
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					transp[i][j]=a[j][i];
				}
			}
				for(i=0;i<3;i++)
			    {
				for(j=0;j<3;j++)
				{
				if(a[i][j]==transp[i][j])
				{
					flag++;
				}
				}
			}
				if(flag==9)
				{
					printf("yes it is symmetric\n");
				}
				else
				{
					printf("not symmetric \n");
				}
			return;
		
		larsml:
			{
				large=a[0][0];
				for(i=0;i<3;i++)
			    {
				for(j=0;j<3;j++)
				{
					if(a[i][j]<small)
					{
						small=a[i][j];
					}
					if(a[i][j]>large)
					{
						large=a[i][j];
					}
				}
			    }
			    return;
			}
			sum:
				
				for(i=0;i<3;i++)
			    {
				for(j=0;j<3;j++)
				{
					sumofdigit=sumofdigit+a[i][j];
				}
			}
			printf("%d",sumofdigit);
			return;
		dft:
			
				printf("sorry try again");
			
		
	}
