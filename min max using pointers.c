#include <stdio.h>
void maxmin(int*,int*,int*,int*);
int main(void)
{
	int x,y,max,min;
	scanf("%d%d",&max,&min);
	printf("the max is %d and min is %d",max,min);
	return 0;
}
void maxmin(int *a,int *b,int *max, int *min)
{
	if(*a<*b)
	{
		*max=*a;
		*min=*b;
	}
	else
	{
		*max=*b;
		*min=*a;
	}
}
