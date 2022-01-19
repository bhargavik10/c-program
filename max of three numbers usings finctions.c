#include<stdio.h>
void max(int a,int b,int c)
{
	if(a>b&&a>c)
	{
		printf("max is %d",a);
	}
	else if(b>c&&b>a)
	{
		printf("max is %d",b);
	}
	else
	{
	   	printf("max is %d",c); 
	}
}
int main(void)
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d%d%d",&x,&y,&z);
	max(x,y,z);
	return 0;
}
