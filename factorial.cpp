// program to perform factorial
#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
	int n,fact;
	printf("enter the no. \n");
	scanf("%d",&n);
	fact=factorial(n);
	printf("Factorial %d",fact);
	
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return(n*factorial(n-1));
	}
}
