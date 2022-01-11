#include<stdio.h>
void factorial(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
		
	}
	printf("%d",f);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	factorial(n);
	return 0;
}
