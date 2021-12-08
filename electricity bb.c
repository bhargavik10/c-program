#include<stdio.h>
main()
{
	int c,w=50,x=75,y=120,z=150,E,e;
	scanf("%d",&c);
	 if(c<=50)
	 {
	 	E=c*w;
	 	printf("%d",E);
	 }
	 else if(c<=150)
	 {
	 	E=c*x;
	 	printf("%d",E);
	 }
	 else if(c<=250)
	 {
	 	E=c*y;
	 	printf("%d",E);
	 }
	 else {
	 	E=(c*z);
	 	e=E+(20*E)/100;
	 	printf("%d",e);
	 }
}
