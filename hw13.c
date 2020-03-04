#include<stdio.h>
#include<conio.h>

void main()
{
            int mat[3][3];
            int i,j,x=0;
            int a=3+3+(3-2)+(3-2);
            int arr[3*3];
			printf("Enter elements in matrix\n");
			for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    scanf("%d",&mat[i][j]);
                }
            }
            for(i=0;i<3;i++)
            {
                arr[x]=mat[0][i];
                x++;
            }
            for(i=1;i<3;i++)
            {
                arr[x]=mat[i][3-1];
                x++;
            }
            for(i=3-2;i>=0;i--)
            {
                arr[x]=mat[3-1][i];
                x++;
            }
            for(i=3-2;i>=1;i--)
            {
                arr[x]=mat[i][0];
                x++;
            }
            for(i=0;i<a;i++)
            {
                printf("%d ",arr[i]);
            }
}
