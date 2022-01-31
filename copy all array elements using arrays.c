#include<stdio.h>
int main()
{
	int a1[100],a2[100],n,i,f;
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a1[i]);
		}
		
		for(i=0;i<n;i++)
		{
			
			printf("\n%d",a1[i]);
		}
		for(i=0;i<n;i++)
		{
			
			a1[i]=a2[i];
		}
			printf("\n%d",a2[i]);	
		
	
}
