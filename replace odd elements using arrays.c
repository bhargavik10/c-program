
#include<stdio.h>
int sum(int);
void main()
{
    int n;
    scanf("%d",&n);
	printf("%d",sum(n));
	
}
int sum(int x)
{
	if(x==1)
	return 1;
	else
	return x+sum(x-1);
}
