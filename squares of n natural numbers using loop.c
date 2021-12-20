#include<stdio.h>
main()
{
	int i,a,n,sum;
	scanf("%d",&n);
	a=1;
	sum=0;
	while(a<=n)
	{
	 i=a*a;
	 sum=sum+i;
	 a=a+1;
	}
	printf("%d",sum);

}
