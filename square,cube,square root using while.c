#include<stdio.h>
#include<math.h>
main()
{
    int n,i=1,a,b;
    float c;
    scanf("%d",&n);
    while(i<=n)
    {
        a=i*i;
        b=i*i*i;
        c=sqrt(i);
        printf("%d,%d,%f\n",a,b,c);
        i++;
    }
        
    }