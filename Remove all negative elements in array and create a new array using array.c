#include<stdio.h>
int main()
{
	int a1[100],a2[100],n,i;
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a1[i]);
			a2[i]=a1[i];
		}
		for(i=0;i<n;i++)
		{
		    if(a2[i]>0)
		    printf("\n%d",a2[i]);
		    
		}
}
