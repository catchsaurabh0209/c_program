//Array of pointer
#include<stdio.h>
int main()
{
	int *pa[2],a=5,b=9;
	pa[0]=&a;
	pa[1]=&b;
	printf("Value of a and b is %d %d ",*pa[0],*pa[1]);
	printf("Address of a and b is %p %p",pa[0],pa[1]);
}
