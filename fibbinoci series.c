#include<stdio.h>
int main()
{
	int sum=0,m,a=0,b=1;
	scanf("%d",&m);
	while(sum<=m)
	{
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		
	}
}
