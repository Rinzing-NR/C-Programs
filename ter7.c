#include<stdio.h>
#include<CONio.h>

void main()
{
	int x,y,z;
	printf("x");
	scanf("%d",&x);
	printf("y");
	scanf("%d",&y);
	printf("z");
	scanf("%d",&z);
	x>y&&y>z?printf("%d",x):y>z?printf("%d",y):printf("%d",z);
}
