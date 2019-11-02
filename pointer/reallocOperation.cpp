// Performing realloc operation
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*ptr,n;
	printf("Enter the range  of the array");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	//Watch Out(it changes the size of the memory block).
	ptr=(int *)realloc(ptr,4);
	printf("Enter the integer");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",*(ptr+i));
	}
}
