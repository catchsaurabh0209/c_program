//program to perform call by reference(by address means use of pointer)
#include<stdio.h>
void callByRef(int *a,int *b);
int main()
{
	int a=5,b=9;
	printf("value of a and b before calling the call by value function is %d %d \n",a,b);
	callByRef(&a,&b);
	printf("value of a and b after calling the call by value function is %d %d \n",a,b);
}
// learn to accept pointer as formal(in doubt) parameter
void callByRef(int *a,int *b)
{
	(*a)++;
	(*b)++;
	printf("value of a and b inside the call by value function is %d %d %p \n",*a,*b,a);
}
