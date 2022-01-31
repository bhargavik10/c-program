#include<stdio.h>
int main()
{
	int a[100],n,i,f;
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=n-1;i>-1;i--)
		{
			
			printf("\n%d",a[i]);	
		}
	
}
