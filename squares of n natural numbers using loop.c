#include<stdio.h>
main()
{
	int i,a,n,sum;
	scanf("%d",&n);
	a=1;
	sum=0;
	while(a<=n)
	{
	 i=a*n;
	 sum=sum+a;
	 a=a+1;
	}
	printf("%d",i);

}
