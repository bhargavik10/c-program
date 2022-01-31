#include<stdio.h>
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
		    if(i%2==0&&i!=0)
		    printf("\n%d",a[i]+1);
		    else
		    printf("\n%d",a[i]);
		}
}
