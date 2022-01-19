#include<stdio.h>
#include<math.h>
main()
{
	int a,n,sum=0,i;
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
	    i=1;
	  i=a*a*i;
	  sum=sum+i;
	   
	  a=a+1;
	}
        printf("%d",sum);
}
