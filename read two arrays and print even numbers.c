
#include <stdio.h>
int main()
{
    int a1[20],a2[20],a3[50],n,i,x,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
        a3[i]=a1[i];
    }
    k=i;
    scanf("%d",&x);
      for(i=0;i<x;i++)
    {
        scanf("%d",&a2[i]);
        a3[k]=a2[i];
        k++;
    }
    
        
        for(i=0;i<k;i++)
        {
            if(a3[i]%2==0)
            printf("%d",a3[i]);
            
        }
        
        
    }
