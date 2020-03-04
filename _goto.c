#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,j,count=0,l,s,sum=0;
	int arr[3][3];
	printf("Enter matrix elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter 1 for transpose 2 for symmetricity 3 for largest smallest and 4 for sum of elements\n");
	scanf("%d",&n);
	if(n==1)
	{
		goto transpose;
	}
	else if(n==2)
	{
		goto symmetry;
	}
	else if(n==3)
	{
		goto larsma;
	}
	else if(n==4)
	{
		goto sumele;
	}
	else
	{
		goto _default;
	}
	transpose:
	{
		for(i=0;i<3;i++)
    	{
	    	for(j=0;j<3;j++)
	    	{
	    		printf("%d",arr[i][j]);
	    	}
	    	printf("\n");
	    }
	    return;
	}
	symmetry:
	{
    	for(i=0;i<3;i++)
	    {
    		for(j=0;j<3;j++)
	    	{
		    	if(arr[i][j]!=arr[j][i])
		    	{
		    		count=1;
				}
		    }
	    }
	    if(count==0)
	    {
	    	printf("Symmetric");
		}
		else
		{
			printf("Not Symmetric");
		}
		return;
	}
	larsma:
	{
		l=arr[0][0],s=arr[0][0];
		for(i=0;i<3;i++)
	    {
    		for(j=0;j<3;j++)
	    	{
		    	if(arr[i][j]>l)
		    	{
		    		l=arr[i][j];
				}
				if(arr[i][j]<s)
		    	{
		    		s=arr[i][j];
				}
		    }
	    }
	    printf("Largest=%d\n",l);
	    printf("Smallest=%d",s);
	    return;
	}
	sumele:
	{
		for(i=0;i<3;i++)
	    {
    		for(j=0;j<3;j++)
	    	{
		    	sum=sum+arr[i][j];
		    }
	    }
	    printf("Sum=%d",sum);
	    return;
	}
	_default:
	{
		printf("Invalid input");
	}
}
