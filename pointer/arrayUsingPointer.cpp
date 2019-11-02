//program to apply pointer on array
#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5},i;
	printf("Elements of arrays are \n");
	for(i=0;i<5;i++)
	{
		printf("value of position %d element is %d and its address is %p \n",i,(*arr+i),arr+i);
	}
	return 0;
	//we can use arr+i or &arr[0] to fetch the address of elements.
}
