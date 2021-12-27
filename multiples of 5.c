#include<stdio.h>
 int main()
 {
	int a,b,sum=0;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%5==0)
		{
			sum=sum+a;
		}
		a=a+1;
	}
	printf("%d",sum);
 }
