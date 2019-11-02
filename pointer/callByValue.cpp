//program to perform call by value .
#include<stdio.h>
void callByValue(int a, int b);
int main()
{
	int a=5,b=9;
	printf("value of a and b before calling the call by value function is %d %d \n",a,b);
	callByValue(5,9);
	printf("value of a and b after calling the call by value function is %d %d \n",a,b);

}
void callByValue(int a,int b)
{
	a++;
	b++;
	printf("value of a and b inside the call by value function is %d %d \n",a,b);
}
