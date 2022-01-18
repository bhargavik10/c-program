#include<stdio.h>
void calculate(int *,int *,int *);
int main()
{
	int n,s=0,b=0;
	scanf("%d",&n);
	calculate(&n,&s,&b);
	printf("the sum is %d",s);
	printf("the avg is %d",b);
	return 0;
}
void calculate(int *n,int *sum,int *avg)
{
	int i,u;
	for(i=1;i<=*n;i++)
	{
		scanf("%d",&u);
		*sum=*sum+u;
		
	}
	*avg=*sum/(*n);
}

