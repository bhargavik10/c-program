#include<stdio.h>
void swap(int a,int b)
{
	int x;
	x=a;
	a=b;
	b=x;
	printf("%d",a);
	printf("\n%d",b);
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
