#include<stdio.h>
void add(float a,float b)
{
	float c=a+b;
	printf("\n%f",c);
}
void sub(float a,float b)
{
	float c=a-b;
	printf("\n%f",c);
}
void mul(float a,float b)
{
	float c=a*b;
	printf("\n%f",c);
}
void div(float a,float b)
{
	float c=a/b;
	printf("\n%f",c);
}
float main(void)
{
	float a,b;
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
	
}


