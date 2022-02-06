#include<stdio.h>
#include<math.h>
main()
{
	int a,n,s,i;
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
	  i=i*a;
   	  a=a+1;
	}
	printf("%d",i);
}