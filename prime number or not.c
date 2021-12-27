#include<stdio.h>
main()
{
  int n,r=0,c=0,d=2;
  scanf("%d",&n);
  while(d<=(n/2))
{
	r=n%d;
	if(r==0)

		c++;
		d++;
}
	if(c==0)
	printf("it is a prime number");
	else
	printf("it is not a prime number ");
	
 }



