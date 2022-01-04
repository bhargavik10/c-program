#include<stdio.h>
main()
{
	
int i,s=1,n,v;
scanf("%d",&n);
for(i=0;n>0;)
{
	i=n%10;
	if(i%2!=0)
	{
		v++;
		
	}
	
	n=n/10;
	
}
printf("%d",v);
}

