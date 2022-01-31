#include<stdio.h>
int gcd(int,int);
main()
{
	printf("%d",gcd(45,6));
}
int gcd(int x,int y)
{
if (x%y==0)	
return y;
else
return gcd(y,x%y);
}
