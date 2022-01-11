#include<stdio.h>
void even(int a)

{
	if(a%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
}
int main(void)
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	even(a);
	return 0;
}
