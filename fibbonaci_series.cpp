//program to print the fibbonacci series.
#include<stdio.h>
#include<conio.h>
int fibbo(int n);
int main()
{
	int n,i;
	printf("enter the range");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d",fibbo(i));
	}
}
int fibbo(int n)
{
	if (n==0)
	{
		return 0;
    }
    else if (n==1)
    {
    	return 1;
	}
    else
    {
    	return (fibbo(n-1)+fibbo(n-2));
	}
}

