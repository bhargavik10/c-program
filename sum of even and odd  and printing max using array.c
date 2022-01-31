
#include<stdio.h>
int main()
{
	int a[100],n,i,f,even,odd;
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
			
			even=even+a[i];
		}
				
		}
		printf("\n%d",even);
		for(i=0;i<n;i++)
			{
			if(a[i]%2!=0)
			{
			
			odd=odd+a[i];
		}
		
		}
		printf("\n%d",odd);	
		if(even>odd)
		printf("\neven is max");
		else
		printf("\nodd is max");
	
	
}
