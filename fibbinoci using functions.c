#include<stdio.h>
void fibbinoci(int n)
{
	int sum=0,a=0,b=1;
	
	while(sum<=n)
	{
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fibbinoci(n);
	return 0;
}
