//returning more than one value from a function.
#include<stdio.h>
void returner(int a ,int b,int *sum,int *dif ,int *mul);
int main()
{
	int a=4,b=5,sum,mul,diff;
	returner(a,b,&sum,&diff,&mul);
	printf("a=%d b=%d sum=%d ,diff=%d ,Multiplication=%d",a,b,sum,diff,mul);
	returner(a,b,&sum,&diff,&mul);
}
void returner(int a ,int b,int *sum,int *diff ,int *mul)
{
	*(sum)=a+b;
	*diff=a-b;
	*mul=a*b;
}
