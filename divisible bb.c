#include <stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0&&a%11==0)
	{
		printf("divisible");
	}
	else
	{
		printf(" not divisible");
	}
}

