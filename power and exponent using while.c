#include<stdio.h>
main()
{
    int e,b,r=1;
    scanf("%d",&b);
    scanf("%d",&e);
    while(e!=0)
    {
        r=r*b;
        --e;
    }
    printf("%d",r);
}