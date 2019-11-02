//Passing 1D array to Function
#include<stdio.h>
void arrayFunction(int arr[]);
int main()
{
	int arr[5]={1,2,3,4,5},i;
	for(i=0;i<5;i++)
	{
		printf("%d \n ",arr[i]);
	}
	arrayFunction(arr);
	for(i=0;i<5;i++)
	{
		printf("%d \n ",arr[i]);
	}
	
}
void arrayFunction(int arr[])
{
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[i]+3;
	}
}

