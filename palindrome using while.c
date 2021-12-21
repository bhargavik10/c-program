#include<stdio.h>
main()
{
	int n,x,a,sum=0;
	scanf("%d",&n);
a=n;
	while(n>0)
	{
		x=n%10;
		sum=sum*10+x;
		n=n/10;

	}
	if(a==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}


	

}
