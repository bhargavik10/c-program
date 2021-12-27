#include<stdio.h>
main()
{
  int i,n,s=1;
 scanf("%d",&n);
	while(i<=n)
	{
	    i=n%10;
	    s=s*i;
	    n=n/10;
	}
	printf("%d",s);

	  

}
