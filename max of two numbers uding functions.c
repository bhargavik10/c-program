#include<stdio.h>
void max(int a,int b)
{
	if(a>b)
	{
		printf("max is %d",a);
	}
	else
	{
		printf("max is %d",b);
	}
}
int main(void)
{
	int x,y;
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	max(x,y);
	return 0;
}
