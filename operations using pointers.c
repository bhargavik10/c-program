#include<stdio.h>
void operations(int *,int *,int *,int *,int *);
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	operations(&a,&b,&c,&d,&e);
	printf("sum is %d",c);
	printf("diff is %d",d);
	printf("prod ic %d",e);
	return 0;
	
	
}
void operations(int *p,int *q,int *r,int *s,int *t)
{
	printf("%d%d",*p,*q);
	*r=*p+*q;
	*s=*p-*q;
	*t=*p**q;
}

