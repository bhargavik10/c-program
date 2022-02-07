#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
    }
    	printf("the matrix a is \n");
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
			printf("%d",a[i][j]);
		}
		printf("\n");
		}
    int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i==j)
     	{
		sum=sum+a[i][j];
	    
		}
		}
	}
		printf("%d",sum);
}
