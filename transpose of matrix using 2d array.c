#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j;
	
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			scanf("%d",&a[i][j]);
		}
		
		}
		printf("matrix is \n");
		
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
			printf("%d",a[j][i]);
		}
		printf("\n");
		
		}
		
	return 0;	
	
}
