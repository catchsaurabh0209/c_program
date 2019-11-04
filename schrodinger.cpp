//program to perform schrodinger equation
#include<stdio.h>
int main()
{
	int l,m,n;
	long int h,e;
	printf("Enter the plank constant \n");
	scanf("%ld",&h);
	printf("Enter the mass \n");
	scanf("%d",&m);
	printf("Enter the value of l \n");
	scanf("%d",&l);
	printf("Enter the value of n \n");
	scanf("%d",&n);
	e=((n*n)*(h*h))/(8*m*(l*l));
	printf("Value of E is %ld \n",e);
	
}
