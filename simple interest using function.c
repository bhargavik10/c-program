#include<stdio.h>
void si(float p,float r,float t)
{
	float si=(p*t*r)/100;
	printf("%f",si);
}
float main(void)
{
	float p,r,t;
	printf("enter three numbers");
	scanf("%f%f%f",&p,&r,&t);
	si(p,t,r);
	return 0;
	}
