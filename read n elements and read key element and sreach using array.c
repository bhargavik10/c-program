#include<stdio.h>
int main()
{
	int a[100],key,n,i;
	scanf("%d",&n);
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==key)
			{
			printf("found");break;
		}
			else
		{
				printf(" not found");break;
			}
		}
}
