#include<stdio.h>
void prime(int n)
{
	int i,f,j;
	for(i=2;i<=n;i++)
	{
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				f=1;break;
			}
		}
		if(f==0)
		printf("%d\n",i);
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	prime(n);
	return 0;
}
