#include<stdio.h>
main()
{
	int n,s=0,f=1,i,r,m;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		f=1;
		for(i=1;i<=r;i++)
		{
			f=f*i;
		}
		s=s+f;
		n=n/10;
	}

	if(s==m)
	{
		printf("strong");
	}
	else
	{
		printf("not strong");
	}





	}

