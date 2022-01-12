#include<stdio.h>
void avg(float n)
{
	float i,r,s=0;
	for (i=1;i<=n;i++)
	{
		scanf("%f",&r);
		s=s+r;
	}
	printf("%f",s/n);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	avg(n);
	return 0;
}
