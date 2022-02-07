
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k,sum=0;
	scanf("%d%d",&m,&n);
	scanf("%d%d",&p,&q);
	printf("enter elements in a\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix is \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
		printf("enter elements in b\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("matrix is \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	if(m=q)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(k=0;k<p;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
					c[i][j]=sum;
					sum=0;
			}
		}
	}
printf("Product of entered matrices:-\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d",c[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
